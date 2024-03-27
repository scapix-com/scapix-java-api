// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_ACCESSIBILITYSERVICE_ACCESSIBILITYSERVICE_SOFTKEYBOARDCONTROLLER_FWD
#define SCAPIX_JAVA_API_ANDROID_ACCESSIBILITYSERVICE_ACCESSIBILITYSERVICE_SOFTKEYBOARDCONTROLLER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::accessibilityservice { class AccessibilityService_SoftKeyboardController; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::accessibilityservice::AccessibilityService_SoftKeyboardController>
{
	static constexpr fixed_string class_name = "android/accessibilityservice/AccessibilityService$SoftKeyboardController";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ACCESSIBILITYSERVICE_ACCESSIBILITYSERVICE_SOFTKEYBOARDCONTROLLER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_ACCESSIBILITYSERVICE_ACCESSIBILITYSERVICE_SOFTKEYBOARDCONTROLLER)
#define SCAPIX_JAVA_API_ANDROID_ACCESSIBILITYSERVICE_ACCESSIBILITYSERVICE_SOFTKEYBOARDCONTROLLER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/accessibilityservice/AccessibilityService_SoftKeyboardController_OnShowModeChangedListener.h>
#include <scapix/java_api/android/os/Handler.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::accessibilityservice::AccessibilityService_SoftKeyboardController : public jni::object_base<"android/accessibilityservice/AccessibilityService$SoftKeyboardController",
	java::lang::Object>
{
public:

	using OnShowModeChangedListener = AccessibilityService_SoftKeyboardController_OnShowModeChangedListener;

	static jint ENABLE_IME_FAIL_BY_ADMIN() { return get_static_field<"ENABLE_IME_FAIL_BY_ADMIN", jint>(); }
	static jint ENABLE_IME_FAIL_UNKNOWN() { return get_static_field<"ENABLE_IME_FAIL_UNKNOWN", jint>(); }
	static jint ENABLE_IME_SUCCESS() { return get_static_field<"ENABLE_IME_SUCCESS", jint>(); }

	void addOnShowModeChangedListener(jni::ref<android::accessibilityservice::AccessibilityService_SoftKeyboardController_OnShowModeChangedListener> listener) { return call_method<"addOnShowModeChangedListener", void>(listener); }
	void addOnShowModeChangedListener(jni::ref<android::accessibilityservice::AccessibilityService_SoftKeyboardController_OnShowModeChangedListener> listener, jni::ref<android::os::Handler> handler) { return call_method<"addOnShowModeChangedListener", void>(listener, handler); }
	jboolean removeOnShowModeChangedListener(jni::ref<android::accessibilityservice::AccessibilityService_SoftKeyboardController_OnShowModeChangedListener> listener) { return call_method<"removeOnShowModeChangedListener", jboolean>(listener); }
	jint getShowMode() { return call_method<"getShowMode", jint>(); }
	jboolean setShowMode(jint showMode) { return call_method<"setShowMode", jboolean>(showMode); }
	jboolean switchToInputMethod(jni::ref<java::lang::String> imeId) { return call_method<"switchToInputMethod", jboolean>(imeId); }
	jint setInputMethodEnabled(jni::ref<java::lang::String> imeId, jboolean enabled) { return call_method<"setInputMethodEnabled", jint>(imeId, enabled); }

protected:

	AccessibilityService_SoftKeyboardController(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ACCESSIBILITYSERVICE_ACCESSIBILITYSERVICE_SOFTKEYBOARDCONTROLLER
