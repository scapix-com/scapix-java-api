// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA2_CAMERAOFFLINESESSION_CAMERAOFFLINESESSIONCALLBACK_FWD
#define SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA2_CAMERAOFFLINESESSION_CAMERAOFFLINESESSIONCALLBACK_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::hardware::camera2 { class CameraOfflineSession_CameraOfflineSessionCallback; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::hardware::camera2::CameraOfflineSession_CameraOfflineSessionCallback>
{
	static constexpr fixed_string class_name = "android/hardware/camera2/CameraOfflineSession$CameraOfflineSessionCallback";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA2_CAMERAOFFLINESESSION_CAMERAOFFLINESESSIONCALLBACK_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA2_CAMERAOFFLINESESSION_CAMERAOFFLINESESSIONCALLBACK)
#define SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA2_CAMERAOFFLINESESSION_CAMERAOFFLINESESSIONCALLBACK

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/hardware/camera2/CameraOfflineSession.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::hardware::camera2::CameraOfflineSession_CameraOfflineSessionCallback : public jni::object_base<"android/hardware/camera2/CameraOfflineSession$CameraOfflineSessionCallback",
	java::lang::Object>
{
public:

	static jint STATUS_INTERNAL_ERROR() { return get_static_field<"STATUS_INTERNAL_ERROR", jint>(); }

	static jni::ref<android::hardware::camera2::CameraOfflineSession_CameraOfflineSessionCallback> new_object() { return base_::new_object(); }
	void onReady(jni::ref<android::hardware::camera2::CameraOfflineSession> p1) { return call_method<"onReady", void>(p1); }
	void onSwitchFailed(jni::ref<android::hardware::camera2::CameraOfflineSession> p1) { return call_method<"onSwitchFailed", void>(p1); }
	void onIdle(jni::ref<android::hardware::camera2::CameraOfflineSession> p1) { return call_method<"onIdle", void>(p1); }
	void onError(jni::ref<android::hardware::camera2::CameraOfflineSession> p1, jint p2) { return call_method<"onError", void>(p1, p2); }
	void onClosed(jni::ref<android::hardware::camera2::CameraOfflineSession> p1) { return call_method<"onClosed", void>(p1); }

protected:

	CameraOfflineSession_CameraOfflineSessionCallback(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA2_CAMERAOFFLINESESSION_CAMERAOFFLINESESSIONCALLBACK
