// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/widget/TextView.h>

#ifndef SCAPIX_JAVA_API_ANDROID_WIDGET_DIGITALCLOCK_FWD
#define SCAPIX_JAVA_API_ANDROID_WIDGET_DIGITALCLOCK_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::widget { class DigitalClock; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::widget::DigitalClock>
{
	static constexpr fixed_string class_name = "android/widget/DigitalClock";
	using base_classes = std::tuple<scapix::java_api::android::widget::TextView>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WIDGET_DIGITALCLOCK_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_WIDGET_DIGITALCLOCK)
#define SCAPIX_JAVA_API_ANDROID_WIDGET_DIGITALCLOCK

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/util/AttributeSet.h>
#include <scapix/java_api/android/view/accessibility/AccessibilityEvent.h>
#include <scapix/java_api/android/view/accessibility/AccessibilityNodeInfo.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::widget::DigitalClock : public jni::object_base<"android/widget/DigitalClock",
	android::widget::TextView>
{
public:

	static jni::ref<android::widget::DigitalClock> new_object(jni::ref<android::content::Context> context) { return base_::new_object(context); }
	static jni::ref<android::widget::DigitalClock> new_object(jni::ref<android::content::Context> context, jni::ref<android::util::AttributeSet> attrs) { return base_::new_object(context, attrs); }
	void onInitializeAccessibilityEvent(jni::ref<android::view::accessibility::AccessibilityEvent> event) { return call_method<"onInitializeAccessibilityEvent", void>(event); }
	void onInitializeAccessibilityNodeInfo(jni::ref<android::view::accessibility::AccessibilityNodeInfo> info) { return call_method<"onInitializeAccessibilityNodeInfo", void>(info); }

protected:

	DigitalClock(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WIDGET_DIGITALCLOCK
