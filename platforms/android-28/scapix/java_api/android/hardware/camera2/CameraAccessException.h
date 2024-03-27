// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/util/AndroidException.h>

#ifndef SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA2_CAMERAACCESSEXCEPTION_FWD
#define SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA2_CAMERAACCESSEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::hardware::camera2 { class CameraAccessException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::hardware::camera2::CameraAccessException>
{
	static constexpr fixed_string class_name = "android/hardware/camera2/CameraAccessException";
	using base_classes = std::tuple<scapix::java_api::android::util::AndroidException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA2_CAMERAACCESSEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA2_CAMERAACCESSEXCEPTION)
#define SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA2_CAMERAACCESSEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Throwable.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::hardware::camera2::CameraAccessException : public jni::object_base<"android/hardware/camera2/CameraAccessException",
	android::util::AndroidException>
{
public:

	static jint CAMERA_DISABLED() { return get_static_field<"CAMERA_DISABLED", jint>(); }
	static jint CAMERA_DISCONNECTED() { return get_static_field<"CAMERA_DISCONNECTED", jint>(); }
	static jint CAMERA_ERROR() { return get_static_field<"CAMERA_ERROR", jint>(); }
	static jint CAMERA_IN_USE() { return get_static_field<"CAMERA_IN_USE", jint>(); }
	static jint MAX_CAMERAS_IN_USE() { return get_static_field<"MAX_CAMERAS_IN_USE", jint>(); }

	static jni::ref<android::hardware::camera2::CameraAccessException> new_object(jint problem) { return base_::new_object(problem); }
	static jni::ref<android::hardware::camera2::CameraAccessException> new_object(jint problem, jni::ref<java::lang::String> message) { return base_::new_object(problem, message); }
	static jni::ref<android::hardware::camera2::CameraAccessException> new_object(jint problem, jni::ref<java::lang::String> message, jni::ref<java::lang::Throwable> cause) { return base_::new_object(problem, message, cause); }
	static jni::ref<android::hardware::camera2::CameraAccessException> new_object(jint problem, jni::ref<java::lang::Throwable> cause) { return base_::new_object(problem, cause); }
	jint getReason() { return call_method<"getReason", jint>(); }

protected:

	CameraAccessException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA2_CAMERAACCESSEXCEPTION
