// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA_SHUTTERCALLBACK_FWD
#define SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA_SHUTTERCALLBACK_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::hardware { class Camera_ShutterCallback; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::hardware::Camera_ShutterCallback>
{
	static constexpr fixed_string class_name = "android/hardware/Camera$ShutterCallback";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA_SHUTTERCALLBACK_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA_SHUTTERCALLBACK)
#define SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA_SHUTTERCALLBACK

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::hardware::Camera_ShutterCallback : public jni::object_base<"android/hardware/Camera$ShutterCallback",
	java::lang::Object>
{
public:

	void onShutter() { return call_method<"onShutter", void>(); }

protected:

	Camera_ShutterCallback(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA_SHUTTERCALLBACK
