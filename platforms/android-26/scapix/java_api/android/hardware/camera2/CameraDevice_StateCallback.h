// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA2_CAMERADEVICE_STATECALLBACK_FWD
#define SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA2_CAMERADEVICE_STATECALLBACK_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::hardware::camera2 { class CameraDevice_StateCallback; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::hardware::camera2::CameraDevice_StateCallback>
{
	static constexpr fixed_string class_name = "android/hardware/camera2/CameraDevice$StateCallback";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA2_CAMERADEVICE_STATECALLBACK_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA2_CAMERADEVICE_STATECALLBACK)
#define SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA2_CAMERADEVICE_STATECALLBACK

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/hardware/camera2/CameraDevice.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::hardware::camera2::CameraDevice_StateCallback : public jni::object_base<"android/hardware/camera2/CameraDevice$StateCallback",
	java::lang::Object>
{
public:

	static jint ERROR_CAMERA_DEVICE() { return get_static_field<"ERROR_CAMERA_DEVICE", jint>(); }
	static jint ERROR_CAMERA_DISABLED() { return get_static_field<"ERROR_CAMERA_DISABLED", jint>(); }
	static jint ERROR_CAMERA_IN_USE() { return get_static_field<"ERROR_CAMERA_IN_USE", jint>(); }
	static jint ERROR_CAMERA_SERVICE() { return get_static_field<"ERROR_CAMERA_SERVICE", jint>(); }
	static jint ERROR_MAX_CAMERAS_IN_USE() { return get_static_field<"ERROR_MAX_CAMERAS_IN_USE", jint>(); }

	static jni::ref<android::hardware::camera2::CameraDevice_StateCallback> new_object() { return base_::new_object(); }
	void onOpened(jni::ref<android::hardware::camera2::CameraDevice> p1) { return call_method<"onOpened", void>(p1); }
	void onClosed(jni::ref<android::hardware::camera2::CameraDevice> camera) { return call_method<"onClosed", void>(camera); }
	void onDisconnected(jni::ref<android::hardware::camera2::CameraDevice> p1) { return call_method<"onDisconnected", void>(p1); }
	void onError(jni::ref<android::hardware::camera2::CameraDevice> p1, jint p2) { return call_method<"onError", void>(p1, p2); }

protected:

	CameraDevice_StateCallback(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA2_CAMERADEVICE_STATECALLBACK
