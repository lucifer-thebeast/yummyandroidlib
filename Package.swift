// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "YummySwiftPackage",
    platforms: [
        .iOS(.v13)
    ],
    products: [
        .library(
            name: "YummySwiftPackage",
            targets: ["YummySwiftPackage"]
        ),
    ],
    targets: [
        .binaryTarget(
            name: "YummySwiftPackage",
            path: "./YummySwiftPackage.xcframework"
        ),
    ]
)
