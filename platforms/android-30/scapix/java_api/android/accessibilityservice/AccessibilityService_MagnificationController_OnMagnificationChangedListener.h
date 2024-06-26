// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_ACCESSIBILITYSERVICE_ACCESSIBILITYSERVICE_MAGNIFICATIONCONTROLLER_ONMAGNIFICATIONCHANGEDLISTENER_FWD
#define SCAPIX_JAVA_API_ANDROID_ACCESSIBILITYSERVICE_ACCESSIBILITYSERVICE_MAGNIFICATIONCONTROLLER_ONMAGNIFICATIONCHANGEDLISTENER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::accessibilityservice { class AccessibilityService_MagnificationController_OnMagnificationChangedListener; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::accessibilityservice::AccessibilityService_MagnificationController_OnMagnificationChangedListener>
{
	static constexpr fixed_string class_name = "android/accessibilityservice/AccessibilityService$MagnificationController$OnMagnificationChangedListener";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ACCESSIBILITYSERVICE_ACCESSIBILITYSERVICE_MAGNIFICATIONCONTROLLER_ONMAGNIFICATIONCHANGEDLISTENER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_ACCESSIBILITYSERVICE_ACCESSIBILITYSERVICE_MAGNIFICATIONCONTROLLER_ONMAGNIFICATIONCHANGEDLISTENER)
#define SCAPIX_JAVA_API_ANDROID_ACCESSIBILITYSERVICE_ACCESSIBILITYSERVICE_MAGNIFICATIONCONTROLLER_ONMAGNIFICATIONCHANGEDLISTENER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/accessibilityservice/AccessibilityService_MagnificationController.h>
#include <scapix/java_api/android/graphics/Region.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::accessibilityservice::AccessibilityService_MagnificationController_OnMagnificationChangedListener : public jni::object_base<"android/accessibilityservice/AccessibilityService$MagnificationController$OnMagnificationChangedListener",
	java::lang::Object>
{
public:

	void onMagnificationChanged(jni::ref<android::accessibilityservice::AccessibilityService_MagnificationController> p1, jni::ref<android::graphics::Region> p2, jfloat p3, jfloat p4, jfloat p5) { return call_method<"onMagnificationChanged", void>(p1, p2, p3, p4, p5); }

protected:

	AccessibilityService_MagnificationController_OnMagnificationChangedListener(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ACCESSIBILITYSERVICE_ACCESSIBILITYSERVICE_MAGNIFICATIONCONTROLLER_ONMAGNIFICATIONCHANGEDLISTENER
