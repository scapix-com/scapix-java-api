// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_PROJECTION_MEDIAPROJECTION_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_PROJECTION_MEDIAPROJECTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media::projection { class MediaProjection; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::projection::MediaProjection>
{
	static constexpr fixed_string class_name = "android/media/projection/MediaProjection";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_PROJECTION_MEDIAPROJECTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_PROJECTION_MEDIAPROJECTION)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_PROJECTION_MEDIAPROJECTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/hardware/display/VirtualDisplay.h>
#include <scapix/java_api/android/hardware/display/VirtualDisplay_Callback.h>
#include <scapix/java_api/android/media/projection/MediaProjection_Callback.h>
#include <scapix/java_api/android/os/Handler.h>
#include <scapix/java_api/android/view/Surface.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::projection::MediaProjection : public jni::object_base<"android/media/projection/MediaProjection",
	java::lang::Object>
{
public:

	using Callback = MediaProjection_Callback;

	void registerCallback(jni::ref<android::media::projection::MediaProjection_Callback> callback, jni::ref<android::os::Handler> handler) { return call_method<"registerCallback", void>(callback, handler); }
	void unregisterCallback(jni::ref<android::media::projection::MediaProjection_Callback> callback) { return call_method<"unregisterCallback", void>(callback); }
	jni::ref<android::hardware::display::VirtualDisplay> createVirtualDisplay(jni::ref<java::lang::String> name, jint width, jint height, jint dpi, jint flags, jni::ref<android::view::Surface> surface, jni::ref<android::hardware::display::VirtualDisplay_Callback> callback, jni::ref<android::os::Handler> handler) { return call_method<"createVirtualDisplay", jni::ref<android::hardware::display::VirtualDisplay>>(name, width, height, dpi, flags, surface, callback, handler); }
	void stop() { return call_method<"stop", void>(); }

protected:

	MediaProjection(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_PROJECTION_MEDIAPROJECTION
