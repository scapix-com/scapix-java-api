// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/widget/CompoundButton.h>

#ifndef SCAPIX_JAVA_API_ANDROID_WIDGET_RADIOBUTTON_FWD
#define SCAPIX_JAVA_API_ANDROID_WIDGET_RADIOBUTTON_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::widget { class RadioButton; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::widget::RadioButton>
{
	static constexpr fixed_string class_name = "android/widget/RadioButton";
	using base_classes = std::tuple<scapix::java_api::android::widget::CompoundButton>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WIDGET_RADIOBUTTON_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_WIDGET_RADIOBUTTON)
#define SCAPIX_JAVA_API_ANDROID_WIDGET_RADIOBUTTON

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/util/AttributeSet.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::widget::RadioButton : public jni::object_base<"android/widget/RadioButton",
	android::widget::CompoundButton>
{
public:

	static jni::ref<android::widget::RadioButton> new_object(jni::ref<android::content::Context> context) { return base_::new_object(context); }
	static jni::ref<android::widget::RadioButton> new_object(jni::ref<android::content::Context> context, jni::ref<android::util::AttributeSet> attrs) { return base_::new_object(context, attrs); }
	static jni::ref<android::widget::RadioButton> new_object(jni::ref<android::content::Context> context, jni::ref<android::util::AttributeSet> attrs, jint defStyleAttr) { return base_::new_object(context, attrs, defStyleAttr); }
	static jni::ref<android::widget::RadioButton> new_object(jni::ref<android::content::Context> context, jni::ref<android::util::AttributeSet> attrs, jint defStyleAttr, jint defStyleRes) { return base_::new_object(context, attrs, defStyleAttr, defStyleRes); }
	void toggle() { return call_method<"toggle", void>(); }
	jni::ref<java::lang::CharSequence> getAccessibilityClassName() { return call_method<"getAccessibilityClassName", jni::ref<java::lang::CharSequence>>(); }

protected:

	RadioButton(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WIDGET_RADIOBUTTON
