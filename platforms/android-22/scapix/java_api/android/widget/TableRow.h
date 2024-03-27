// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/widget/LinearLayout.h>

#ifndef SCAPIX_JAVA_API_ANDROID_WIDGET_TABLEROW_FWD
#define SCAPIX_JAVA_API_ANDROID_WIDGET_TABLEROW_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::widget { class TableRow; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::widget::TableRow>
{
	static constexpr fixed_string class_name = "android/widget/TableRow";
	using base_classes = std::tuple<scapix::java_api::android::widget::LinearLayout>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WIDGET_TABLEROW_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_WIDGET_TABLEROW)
#define SCAPIX_JAVA_API_ANDROID_WIDGET_TABLEROW

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/util/AttributeSet.h>
#include <scapix/java_api/android/view/View.h>
#include <scapix/java_api/android/view/ViewGroup_OnHierarchyChangeListener.h>
#include <scapix/java_api/android/view/accessibility/AccessibilityEvent.h>
#include <scapix/java_api/android/view/accessibility/AccessibilityNodeInfo.h>
#include <scapix/java_api/android/widget/TableRow_LayoutParams.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::widget::TableRow : public jni::object_base<"android/widget/TableRow",
	android::widget::LinearLayout>
{
public:

	using LayoutParams = TableRow_LayoutParams;

	static jni::ref<android::widget::TableRow> new_object(jni::ref<android::content::Context> context) { return base_::new_object(context); }
	static jni::ref<android::widget::TableRow> new_object(jni::ref<android::content::Context> context, jni::ref<android::util::AttributeSet> attrs) { return base_::new_object(context, attrs); }
	void setOnHierarchyChangeListener(jni::ref<android::view::ViewGroup_OnHierarchyChangeListener> listener) { return call_method<"setOnHierarchyChangeListener", void>(listener); }
	jni::ref<android::view::View> getVirtualChildAt(jint i) { return call_method<"getVirtualChildAt", jni::ref<android::view::View>>(i); }
	jint getVirtualChildCount() { return call_method<"getVirtualChildCount", jint>(); }
	jni::ref<android::widget::TableRow_LayoutParams> generateLayoutParams(jni::ref<android::util::AttributeSet> attrs) { return call_method<"generateLayoutParams", jni::ref<android::widget::TableRow_LayoutParams>>(attrs); }
	void onInitializeAccessibilityEvent(jni::ref<android::view::accessibility::AccessibilityEvent> event) { return call_method<"onInitializeAccessibilityEvent", void>(event); }
	void onInitializeAccessibilityNodeInfo(jni::ref<android::view::accessibility::AccessibilityNodeInfo> info) { return call_method<"onInitializeAccessibilityNodeInfo", void>(info); }

protected:

	TableRow(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WIDGET_TABLEROW