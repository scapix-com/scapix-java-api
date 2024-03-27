// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/AutoCloseable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA2_CAMERADEVICE_FWD
#define SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA2_CAMERADEVICE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::hardware::camera2 { class CameraDevice; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::hardware::camera2::CameraDevice>
{
	static constexpr fixed_string class_name = "android/hardware/camera2/CameraDevice";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::AutoCloseable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA2_CAMERADEVICE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA2_CAMERADEVICE)
#define SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA2_CAMERADEVICE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/hardware/camera2/CameraCaptureSession_StateCallback.h>
#include <scapix/java_api/android/hardware/camera2/CaptureRequest_Builder.h>
#include <scapix/java_api/android/hardware/camera2/TotalCaptureResult.h>
#include <scapix/java_api/android/hardware/camera2/params/ExtensionSessionConfiguration.h>
#include <scapix/java_api/android/hardware/camera2/params/InputConfiguration.h>
#include <scapix/java_api/android/hardware/camera2/params/SessionConfiguration.h>
#include <scapix/java_api/android/os/Handler.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/java/util/Set.h>
#include <scapix/java_api/android/hardware/camera2/CameraDevice_StateCallback.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::hardware::camera2::CameraDevice : public jni::object_base<"android/hardware/camera2/CameraDevice",
	java::lang::Object,
	java::lang::AutoCloseable>
{
public:

	using StateCallback = CameraDevice_StateCallback;

	static jint AUDIO_RESTRICTION_NONE() { return get_static_field<"AUDIO_RESTRICTION_NONE", jint>(); }
	static jint AUDIO_RESTRICTION_VIBRATION() { return get_static_field<"AUDIO_RESTRICTION_VIBRATION", jint>(); }
	static jint AUDIO_RESTRICTION_VIBRATION_SOUND() { return get_static_field<"AUDIO_RESTRICTION_VIBRATION_SOUND", jint>(); }
	static jint TEMPLATE_MANUAL() { return get_static_field<"TEMPLATE_MANUAL", jint>(); }
	static jint TEMPLATE_PREVIEW() { return get_static_field<"TEMPLATE_PREVIEW", jint>(); }
	static jint TEMPLATE_RECORD() { return get_static_field<"TEMPLATE_RECORD", jint>(); }
	static jint TEMPLATE_STILL_CAPTURE() { return get_static_field<"TEMPLATE_STILL_CAPTURE", jint>(); }
	static jint TEMPLATE_VIDEO_SNAPSHOT() { return get_static_field<"TEMPLATE_VIDEO_SNAPSHOT", jint>(); }
	static jint TEMPLATE_ZERO_SHUTTER_LAG() { return get_static_field<"TEMPLATE_ZERO_SHUTTER_LAG", jint>(); }

	jni::ref<java::lang::String> getId() { return call_method<"getId", jni::ref<java::lang::String>>(); }
	void createCaptureSession(jni::ref<java::util::List> p1, jni::ref<android::hardware::camera2::CameraCaptureSession_StateCallback> p2, jni::ref<android::os::Handler> p3) { return call_method<"createCaptureSession", void>(p1, p2, p3); }
	void createCaptureSessionByOutputConfigurations(jni::ref<java::util::List> p1, jni::ref<android::hardware::camera2::CameraCaptureSession_StateCallback> p2, jni::ref<android::os::Handler> p3) { return call_method<"createCaptureSessionByOutputConfigurations", void>(p1, p2, p3); }
	void createReprocessableCaptureSession(jni::ref<android::hardware::camera2::params::InputConfiguration> p1, jni::ref<java::util::List> p2, jni::ref<android::hardware::camera2::CameraCaptureSession_StateCallback> p3, jni::ref<android::os::Handler> p4) { return call_method<"createReprocessableCaptureSession", void>(p1, p2, p3, p4); }
	void createReprocessableCaptureSessionByConfigurations(jni::ref<android::hardware::camera2::params::InputConfiguration> p1, jni::ref<java::util::List> p2, jni::ref<android::hardware::camera2::CameraCaptureSession_StateCallback> p3, jni::ref<android::os::Handler> p4) { return call_method<"createReprocessableCaptureSessionByConfigurations", void>(p1, p2, p3, p4); }
	void createConstrainedHighSpeedCaptureSession(jni::ref<java::util::List> p1, jni::ref<android::hardware::camera2::CameraCaptureSession_StateCallback> p2, jni::ref<android::os::Handler> p3) { return call_method<"createConstrainedHighSpeedCaptureSession", void>(p1, p2, p3); }
	void createExtensionSession(jni::ref<android::hardware::camera2::params::ExtensionSessionConfiguration> extensionConfiguration) { return call_method<"createExtensionSession", void>(extensionConfiguration); }
	void createCaptureSession(jni::ref<android::hardware::camera2::params::SessionConfiguration> config) { return call_method<"createCaptureSession", void>(config); }
	jni::ref<android::hardware::camera2::CaptureRequest_Builder> createCaptureRequest(jint p1) { return call_method<"createCaptureRequest", jni::ref<android::hardware::camera2::CaptureRequest_Builder>>(p1); }
	jni::ref<android::hardware::camera2::CaptureRequest_Builder> createCaptureRequest(jint templateType, jni::ref<java::util::Set> physicalCameraIdSet) { return call_method<"createCaptureRequest", jni::ref<android::hardware::camera2::CaptureRequest_Builder>>(templateType, physicalCameraIdSet); }
	jni::ref<android::hardware::camera2::CaptureRequest_Builder> createReprocessCaptureRequest(jni::ref<android::hardware::camera2::TotalCaptureResult> p1) { return call_method<"createReprocessCaptureRequest", jni::ref<android::hardware::camera2::CaptureRequest_Builder>>(p1); }
	void close() { return call_method<"close", void>(); }
	jboolean isSessionConfigurationSupported(jni::ref<android::hardware::camera2::params::SessionConfiguration> sessionConfig) { return call_method<"isSessionConfigurationSupported", jboolean>(sessionConfig); }
	void setCameraAudioRestriction(jint mode) { return call_method<"setCameraAudioRestriction", void>(mode); }
	jint getCameraAudioRestriction() { return call_method<"getCameraAudioRestriction", jint>(); }

protected:

	CameraDevice(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA2_CAMERADEVICE
