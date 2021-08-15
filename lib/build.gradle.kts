import com.codingfeline.buildkonfig.compiler.FieldSpec.Type.STRING
import org.jetbrains.kotlin.gradle.plugin.mpp.KotlinNativeTarget
import java.io.FileInputStream
import java.util.*

plugins {
  kotlin("multiplatform")
  id("com.android.library")
  id("kotlin-android-extensions")
  kotlin("plugin.serialization")
  id("com.codingfeline.buildkonfig")
  id("com.chromaticnoise.multiplatform-swiftpackage") version "2.0.3"
  id("maven")
}

group = "me.about.ronillo.recipeapp"
version = "1.0-SNAPSHOT"

var file = project.parent?.file("rapid_api.properties") ?: throw Exception("rapid_api.properties not found")
val properties = Properties()
properties.load(FileInputStream(file))

buildkonfig {
    packageName = "me.about.ronillo.recipeapp"

    defaultConfigs {
        val apiKey = properties["rapid_api_key"] as String
        buildConfigField(STRING, "rapidApiKey", apiKey)
    }
}

multiplatformSwiftPackage {
    packageName("YummySwiftPackage")
    swiftToolsVersion("5.3")
    targetPlatforms {
        iOS { v("13") }
    }
}

kotlin {

    android()

    val ktorVersion = "1.6.1"
    val serializationVersion = "1.2.1"

    ios {
        binaries {
            framework {
                baseName = "MultiYummyFramework"
            }
        }
    }

    sourceSets {
        val commonMain by getting {
            dependencies {
                implementation("io.ktor:ktor-client-core:$ktorVersion")
                implementation("org.jetbrains.kotlinx:kotlinx-serialization-core:$serializationVersion")
                implementation("io.ktor:ktor-client-serialization:$ktorVersion")
            }
        }
        val androidMain by getting {
            dependencies {
                implementation("io.ktor:ktor-client-android:$ktorVersion")
            }
        }
        val iosMain by getting {
            dependencies {
                implementation("io.ktor:ktor-client-ios:$ktorVersion")
            }
        }
    }
}

android {
    compileSdkVersion(30)
    sourceSets["main"].manifest.srcFile("src/androidMain/AndroidManifest.xml")
    defaultConfig {
        minSdkVersion(26)
        targetSdkVersion(30)
    }
    buildTypes {
        getByName("release") {
            isMinifyEnabled = false
        }
    }
}

val packForXcode by tasks.creating(Sync::class) {
    group = "build"
    val mode = System.getenv("CONFIGURATION") ?: "DEBUG"
    val sdkName = System.getenv("SDK_NAME") ?: "iphonesimulator"
    val targetName = "ios" + if (sdkName.startsWith("iphoneos")) "Arm64" else "X64"
    val framework = kotlin.targets.getByName<KotlinNativeTarget>(targetName).binaries.getFramework(mode)
    inputs.property("mode", mode)
    dependsOn(framework.linkTask)
    val targetDir = File(buildDir, "xcode-frameworks")
    from({ framework.outputDirectory })
    into(targetDir)
}
tasks.getByName("build").dependsOn(packForXcode)
