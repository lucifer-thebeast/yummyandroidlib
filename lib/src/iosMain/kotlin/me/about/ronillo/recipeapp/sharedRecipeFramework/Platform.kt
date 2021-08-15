package me.about.ronillo.recipeapp.sharedRecipeFramework

// import kotlin.coroutines.*
// import kotlinx.coroutines.*
import platform.UIKit.UIDevice

// internal actual val ApplicationDispatcher: CoroutineDispatcher = NsQueueDispatcher(dispatch_get_main_queue())

// internal class NsQueueDispatcher(
//     private val dispatchQueue: dispatch_queue_t
// ) : CoroutineDispatcher() {
//     override fun dispatch(context: CoroutineContext, block: Runnable) {
//         dispatch_async(dispatchQueue) {
//             block.run()
//         }
//     }
// }

actual interface Parcelable

actual class Platform actual constructor() {
    actual val platform: String =
        UIDevice.currentDevice.systemName() + " " + UIDevice.currentDevice.systemVersion
}
