// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA2_CAMERAEXTENSIONSESSION_STATECALLBACK_FWD
#define SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA2_CAMERAEXTENSIONSESSION_STATECALLBACK_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::hardware::camera2 { class CameraExtensionSession_StateCallback; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::hardware::camera2::CameraExtensionSession_StateCallback>
{
	static constexpr fixed_string class_name = "android/hardware/camera2/CameraExtensionSession$StateCallback";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA2_CAMERAEXTENSIONSESSION_STATECALLBACK_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA2_CAMERAEXTENSIONSESSION_STATECALLBACK)
#define SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA2_CAMERAEXTENSIONSESSION_STATECALLBACK

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/hardware/camera2/CameraExtensionSession.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::hardware::camera2::CameraExtensionSession_StateCallback : public jni::object_base<"android/hardware/camera2/CameraExtensionSession$StateCallback",
	java::lang::Object>
{
public:

	static jni::ref<android::hardware::camera2::CameraExtensionSession_StateCallback> new_object() { return base_::new_object(); }
	void onConfigured(jni::ref<android::hardware::camera2::CameraExtensionSession> p1) { return call_method<"onConfigured", void>(p1); }
	void onConfigureFailed(jni::ref<android::hardware::camera2::CameraExtensionSession> p1) { return call_method<"onConfigureFailed", void>(p1); }
	void onClosed(jni::ref<android::hardware::camera2::CameraExtensionSession> session) { return call_method<"onClosed", void>(session); }

protected:

	CameraExtensionSession_StateCallback(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA2_CAMERAEXTENSIONSESSION_STATECALLBACK
