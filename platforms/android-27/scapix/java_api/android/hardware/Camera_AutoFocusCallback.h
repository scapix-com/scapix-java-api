// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA_AUTOFOCUSCALLBACK_FWD
#define SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA_AUTOFOCUSCALLBACK_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::hardware { class Camera_AutoFocusCallback; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::hardware::Camera_AutoFocusCallback>
{
	static constexpr fixed_string class_name = "android/hardware/Camera$AutoFocusCallback";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA_AUTOFOCUSCALLBACK_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA_AUTOFOCUSCALLBACK)
#define SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA_AUTOFOCUSCALLBACK

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/hardware/Camera.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::hardware::Camera_AutoFocusCallback : public jni::object_base<"android/hardware/Camera$AutoFocusCallback",
	java::lang::Object>
{
public:

	void onAutoFocus(jboolean p1, jni::ref<android::hardware::Camera> p2) { return call_method<"onAutoFocus", void>(p1, p2); }

protected:

	Camera_AutoFocusCallback(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA_AUTOFOCUSCALLBACK
