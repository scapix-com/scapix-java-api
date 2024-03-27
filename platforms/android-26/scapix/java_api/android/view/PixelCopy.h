// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_VIEW_PIXELCOPY_FWD
#define SCAPIX_JAVA_API_ANDROID_VIEW_PIXELCOPY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::view { class PixelCopy; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::view::PixelCopy>
{
	static constexpr fixed_string class_name = "android/view/PixelCopy";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_PIXELCOPY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_VIEW_PIXELCOPY)
#define SCAPIX_JAVA_API_ANDROID_VIEW_PIXELCOPY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/graphics/Bitmap.h>
#include <scapix/java_api/android/graphics/Rect.h>
#include <scapix/java_api/android/os/Handler.h>
#include <scapix/java_api/android/view/PixelCopy_OnPixelCopyFinishedListener.h>
#include <scapix/java_api/android/view/Surface.h>
#include <scapix/java_api/android/view/SurfaceView.h>
#include <scapix/java_api/android/view/Window.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::view::PixelCopy : public jni::object_base<"android/view/PixelCopy",
	java::lang::Object>
{
public:

	using OnPixelCopyFinishedListener = PixelCopy_OnPixelCopyFinishedListener;

	static jint ERROR_DESTINATION_INVALID() { return get_static_field<"ERROR_DESTINATION_INVALID", jint>(); }
	static jint ERROR_SOURCE_INVALID() { return get_static_field<"ERROR_SOURCE_INVALID", jint>(); }
	static jint ERROR_SOURCE_NO_DATA() { return get_static_field<"ERROR_SOURCE_NO_DATA", jint>(); }
	static jint ERROR_TIMEOUT() { return get_static_field<"ERROR_TIMEOUT", jint>(); }
	static jint ERROR_UNKNOWN() { return get_static_field<"ERROR_UNKNOWN", jint>(); }
	static jint SUCCESS() { return get_static_field<"SUCCESS", jint>(); }

	static void request(jni::ref<android::view::SurfaceView> source, jni::ref<android::graphics::Bitmap> dest, jni::ref<android::view::PixelCopy_OnPixelCopyFinishedListener> listener, jni::ref<android::os::Handler> listenerThread) { return call_static_method<"request", void>(source, dest, listener, listenerThread); }
	static void request(jni::ref<android::view::SurfaceView> source, jni::ref<android::graphics::Rect> srcRect, jni::ref<android::graphics::Bitmap> dest, jni::ref<android::view::PixelCopy_OnPixelCopyFinishedListener> listener, jni::ref<android::os::Handler> listenerThread) { return call_static_method<"request", void>(source, srcRect, dest, listener, listenerThread); }
	static void request(jni::ref<android::view::Surface> source, jni::ref<android::graphics::Bitmap> dest, jni::ref<android::view::PixelCopy_OnPixelCopyFinishedListener> listener, jni::ref<android::os::Handler> listenerThread) { return call_static_method<"request", void>(source, dest, listener, listenerThread); }
	static void request(jni::ref<android::view::Surface> source, jni::ref<android::graphics::Rect> srcRect, jni::ref<android::graphics::Bitmap> dest, jni::ref<android::view::PixelCopy_OnPixelCopyFinishedListener> listener, jni::ref<android::os::Handler> listenerThread) { return call_static_method<"request", void>(source, srcRect, dest, listener, listenerThread); }
	static void request(jni::ref<android::view::Window> source, jni::ref<android::graphics::Bitmap> dest, jni::ref<android::view::PixelCopy_OnPixelCopyFinishedListener> listener, jni::ref<android::os::Handler> listenerThread) { return call_static_method<"request", void>(source, dest, listener, listenerThread); }
	static void request(jni::ref<android::view::Window> source, jni::ref<android::graphics::Rect> srcRect, jni::ref<android::graphics::Bitmap> dest, jni::ref<android::view::PixelCopy_OnPixelCopyFinishedListener> listener, jni::ref<android::os::Handler> listenerThread) { return call_static_method<"request", void>(source, srcRect, dest, listener, listenerThread); }

protected:

	PixelCopy(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_PIXELCOPY