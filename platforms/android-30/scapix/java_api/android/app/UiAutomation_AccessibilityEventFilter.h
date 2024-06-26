// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_APP_UIAUTOMATION_ACCESSIBILITYEVENTFILTER_FWD
#define SCAPIX_JAVA_API_ANDROID_APP_UIAUTOMATION_ACCESSIBILITYEVENTFILTER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::app { class UiAutomation_AccessibilityEventFilter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::app::UiAutomation_AccessibilityEventFilter>
{
	static constexpr fixed_string class_name = "android/app/UiAutomation$AccessibilityEventFilter";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_UIAUTOMATION_ACCESSIBILITYEVENTFILTER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_APP_UIAUTOMATION_ACCESSIBILITYEVENTFILTER)
#define SCAPIX_JAVA_API_ANDROID_APP_UIAUTOMATION_ACCESSIBILITYEVENTFILTER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/view/accessibility/AccessibilityEvent.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::app::UiAutomation_AccessibilityEventFilter : public jni::object_base<"android/app/UiAutomation$AccessibilityEventFilter",
	java::lang::Object>
{
public:

	jboolean accept(jni::ref<android::view::accessibility::AccessibilityEvent> p1) { return call_method<"accept", jboolean>(p1); }

protected:

	UiAutomation_AccessibilityEventFilter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_UIAUTOMATION_ACCESSIBILITYEVENTFILTER
