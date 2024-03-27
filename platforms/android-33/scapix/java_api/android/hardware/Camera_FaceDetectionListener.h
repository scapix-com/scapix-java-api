// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA_FACEDETECTIONLISTENER_FWD
#define SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA_FACEDETECTIONLISTENER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::hardware { class Camera_FaceDetectionListener; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::hardware::Camera_FaceDetectionListener>
{
	static constexpr fixed_string class_name = "android/hardware/Camera$FaceDetectionListener";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA_FACEDETECTIONLISTENER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA_FACEDETECTIONLISTENER)
#define SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA_FACEDETECTIONLISTENER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/hardware/Camera.h>
#include <scapix/java_api/android/hardware/Camera_Face.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::hardware::Camera_FaceDetectionListener : public jni::object_base<"android/hardware/Camera$FaceDetectionListener",
	java::lang::Object>
{
public:

	void onFaceDetection(jni::ref<jni::array<android::hardware::Camera_Face>> p1, jni::ref<android::hardware::Camera> p2) { return call_method<"onFaceDetection", void>(p1, p2); }

protected:

	Camera_FaceDetectionListener(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA_FACEDETECTIONLISTENER
