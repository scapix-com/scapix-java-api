// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA2_CAMERAMANAGER_TORCHCALLBACK_FWD
#define SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA2_CAMERAMANAGER_TORCHCALLBACK_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::hardware::camera2 { class CameraManager_TorchCallback; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::hardware::camera2::CameraManager_TorchCallback>
{
	static constexpr fixed_string class_name = "android/hardware/camera2/CameraManager$TorchCallback";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA2_CAMERAMANAGER_TORCHCALLBACK_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA2_CAMERAMANAGER_TORCHCALLBACK)
#define SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA2_CAMERAMANAGER_TORCHCALLBACK

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::hardware::camera2::CameraManager_TorchCallback : public jni::object_base<"android/hardware/camera2/CameraManager$TorchCallback",
	java::lang::Object>
{
public:

	static jni::ref<android::hardware::camera2::CameraManager_TorchCallback> new_object() { return base_::new_object(); }
	void onTorchModeUnavailable(jni::ref<java::lang::String> cameraId) { return call_method<"onTorchModeUnavailable", void>(cameraId); }
	void onTorchModeChanged(jni::ref<java::lang::String> cameraId, jboolean enabled) { return call_method<"onTorchModeChanged", void>(cameraId, enabled); }

protected:

	CameraManager_TorchCallback(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA2_CAMERAMANAGER_TORCHCALLBACK
