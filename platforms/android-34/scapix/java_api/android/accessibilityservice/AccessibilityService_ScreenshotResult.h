// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_ACCESSIBILITYSERVICE_ACCESSIBILITYSERVICE_SCREENSHOTRESULT_FWD
#define SCAPIX_JAVA_API_ANDROID_ACCESSIBILITYSERVICE_ACCESSIBILITYSERVICE_SCREENSHOTRESULT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::accessibilityservice { class AccessibilityService_ScreenshotResult; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::accessibilityservice::AccessibilityService_ScreenshotResult>
{
	static constexpr fixed_string class_name = "android/accessibilityservice/AccessibilityService$ScreenshotResult";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ACCESSIBILITYSERVICE_ACCESSIBILITYSERVICE_SCREENSHOTRESULT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_ACCESSIBILITYSERVICE_ACCESSIBILITYSERVICE_SCREENSHOTRESULT)
#define SCAPIX_JAVA_API_ANDROID_ACCESSIBILITYSERVICE_ACCESSIBILITYSERVICE_SCREENSHOTRESULT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/graphics/ColorSpace.h>
#include <scapix/java_api/android/hardware/HardwareBuffer.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::accessibilityservice::AccessibilityService_ScreenshotResult : public jni::object_base<"android/accessibilityservice/AccessibilityService$ScreenshotResult",
	java::lang::Object>
{
public:

	jni::ref<android::graphics::ColorSpace> getColorSpace() { return call_method<"getColorSpace", jni::ref<android::graphics::ColorSpace>>(); }
	jni::ref<android::hardware::HardwareBuffer> getHardwareBuffer() { return call_method<"getHardwareBuffer", jni::ref<android::hardware::HardwareBuffer>>(); }
	jlong getTimestamp() { return call_method<"getTimestamp", jlong>(); }

protected:

	AccessibilityService_ScreenshotResult(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ACCESSIBILITYSERVICE_ACCESSIBILITYSERVICE_SCREENSHOTRESULT
