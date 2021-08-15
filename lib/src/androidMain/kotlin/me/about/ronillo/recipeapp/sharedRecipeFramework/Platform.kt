package me.about.ronillo.recipeapp.sharedRecipeFramework

// import kotlinx.coroutines.*

// internal actual val ApplicationDispatcher: CoroutineDispatcher = Dispatchers.Main
actual typealias Parcelable = java.io.Serializable

actual class Platform actual constructor() {
    actual val platform: String = "Android ${android.os.Build.VERSION.SDK_INT}"
}
