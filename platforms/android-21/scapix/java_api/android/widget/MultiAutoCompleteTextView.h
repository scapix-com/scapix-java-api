// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/widget/AutoCompleteTextView.h>

#ifndef SCAPIX_JAVA_API_ANDROID_WIDGET_MULTIAUTOCOMPLETETEXTVIEW_FWD
#define SCAPIX_JAVA_API_ANDROID_WIDGET_MULTIAUTOCOMPLETETEXTVIEW_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::widget { class MultiAutoCompleteTextView; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::widget::MultiAutoCompleteTextView>
{
	static constexpr fixed_string class_name = "android/widget/MultiAutoCompleteTextView";
	using base_classes = std::tuple<scapix::java_api::android::widget::AutoCompleteTextView>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WIDGET_MULTIAUTOCOMPLETETEXTVIEW_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_WIDGET_MULTIAUTOCOMPLETETEXTVIEW)
#define SCAPIX_JAVA_API_ANDROID_WIDGET_MULTIAUTOCOMPLETETEXTVIEW

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/util/AttributeSet.h>
#include <scapix/java_api/android/view/accessibility/AccessibilityEvent.h>
#include <scapix/java_api/android/view/accessibility/AccessibilityNodeInfo.h>
#include <scapix/java_api/android/widget/MultiAutoCompleteTextView_Tokenizer.h>
#include <scapix/java_api/android/widget/MultiAutoCompleteTextView_CommaTokenizer.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::widget::MultiAutoCompleteTextView : public jni::object_base<"android/widget/MultiAutoCompleteTextView",
	android::widget::AutoCompleteTextView>
{
public:

	using CommaTokenizer = MultiAutoCompleteTextView_CommaTokenizer;
	using Tokenizer = MultiAutoCompleteTextView_Tokenizer;

	static jni::ref<android::widget::MultiAutoCompleteTextView> new_object(jni::ref<android::content::Context> context) { return base_::new_object(context); }
	static jni::ref<android::widget::MultiAutoCompleteTextView> new_object(jni::ref<android::content::Context> context, jni::ref<android::util::AttributeSet> attrs) { return base_::new_object(context, attrs); }
	static jni::ref<android::widget::MultiAutoCompleteTextView> new_object(jni::ref<android::content::Context> context, jni::ref<android::util::AttributeSet> attrs, jint defStyleAttr) { return base_::new_object(context, attrs, defStyleAttr); }
	static jni::ref<android::widget::MultiAutoCompleteTextView> new_object(jni::ref<android::content::Context> context, jni::ref<android::util::AttributeSet> attrs, jint defStyleAttr, jint defStyleRes) { return base_::new_object(context, attrs, defStyleAttr, defStyleRes); }
	void setTokenizer(jni::ref<android::widget::MultiAutoCompleteTextView_Tokenizer> t) { return call_method<"setTokenizer", void>(t); }
	jboolean enoughToFilter() { return call_method<"enoughToFilter", jboolean>(); }
	void performValidation() { return call_method<"performValidation", void>(); }
	void onInitializeAccessibilityEvent(jni::ref<android::view::accessibility::AccessibilityEvent> event) { return call_method<"onInitializeAccessibilityEvent", void>(event); }
	void onInitializeAccessibilityNodeInfo(jni::ref<android::view::accessibility::AccessibilityNodeInfo> info) { return call_method<"onInitializeAccessibilityNodeInfo", void>(info); }

protected:

	MultiAutoCompleteTextView(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WIDGET_MULTIAUTOCOMPLETETEXTVIEW
