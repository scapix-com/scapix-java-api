// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/view/ViewGroup.h>

#ifndef SCAPIX_JAVA_API_ANDROID_WIDGET_GRIDLAYOUT_FWD
#define SCAPIX_JAVA_API_ANDROID_WIDGET_GRIDLAYOUT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::widget { class GridLayout; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::widget::GridLayout>
{
	static constexpr fixed_string class_name = "android/widget/GridLayout";
	using base_classes = std::tuple<scapix::java_api::android::view::ViewGroup>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WIDGET_GRIDLAYOUT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_WIDGET_GRIDLAYOUT)
#define SCAPIX_JAVA_API_ANDROID_WIDGET_GRIDLAYOUT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/util/AttributeSet.h>
#include <scapix/java_api/android/view/accessibility/AccessibilityEvent.h>
#include <scapix/java_api/android/view/accessibility/AccessibilityNodeInfo.h>
#include <scapix/java_api/android/widget/GridLayout_Alignment.h>
#include <scapix/java_api/android/widget/GridLayout_LayoutParams.h>
#include <scapix/java_api/android/widget/GridLayout_Spec.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::widget::GridLayout : public jni::object_base<"android/widget/GridLayout",
	android::view::ViewGroup>
{
public:

	using Alignment = GridLayout_Alignment;
	using Spec = GridLayout_Spec;
	using LayoutParams = GridLayout_LayoutParams;

	static jint ALIGN_BOUNDS() { return get_static_field<"ALIGN_BOUNDS", jint>(); }
	static jint ALIGN_MARGINS() { return get_static_field<"ALIGN_MARGINS", jint>(); }
	static jni::ref<android::widget::GridLayout_Alignment> BASELINE() { return get_static_field<"BASELINE", jni::ref<android::widget::GridLayout_Alignment>>(); }
	static jni::ref<android::widget::GridLayout_Alignment> BOTTOM() { return get_static_field<"BOTTOM", jni::ref<android::widget::GridLayout_Alignment>>(); }
	static jni::ref<android::widget::GridLayout_Alignment> CENTER() { return get_static_field<"CENTER", jni::ref<android::widget::GridLayout_Alignment>>(); }
	static jni::ref<android::widget::GridLayout_Alignment> END() { return get_static_field<"END", jni::ref<android::widget::GridLayout_Alignment>>(); }
	static jni::ref<android::widget::GridLayout_Alignment> FILL() { return get_static_field<"FILL", jni::ref<android::widget::GridLayout_Alignment>>(); }
	static jint HORIZONTAL() { return get_static_field<"HORIZONTAL", jint>(); }
	static jni::ref<android::widget::GridLayout_Alignment> LEFT() { return get_static_field<"LEFT", jni::ref<android::widget::GridLayout_Alignment>>(); }
	static jni::ref<android::widget::GridLayout_Alignment> RIGHT() { return get_static_field<"RIGHT", jni::ref<android::widget::GridLayout_Alignment>>(); }
	static jni::ref<android::widget::GridLayout_Alignment> START() { return get_static_field<"START", jni::ref<android::widget::GridLayout_Alignment>>(); }
	static jni::ref<android::widget::GridLayout_Alignment> TOP() { return get_static_field<"TOP", jni::ref<android::widget::GridLayout_Alignment>>(); }
	static jint UNDEFINED() { return get_static_field<"UNDEFINED", jint>(); }
	static jint VERTICAL() { return get_static_field<"VERTICAL", jint>(); }

	static jni::ref<android::widget::GridLayout> new_object(jni::ref<android::content::Context> context) { return base_::new_object(context); }
	static jni::ref<android::widget::GridLayout> new_object(jni::ref<android::content::Context> context, jni::ref<android::util::AttributeSet> attrs) { return base_::new_object(context, attrs); }
	static jni::ref<android::widget::GridLayout> new_object(jni::ref<android::content::Context> context, jni::ref<android::util::AttributeSet> attrs, jint defStyleAttr) { return base_::new_object(context, attrs, defStyleAttr); }
	static jni::ref<android::widget::GridLayout> new_object(jni::ref<android::content::Context> context, jni::ref<android::util::AttributeSet> attrs, jint defStyleAttr, jint defStyleRes) { return base_::new_object(context, attrs, defStyleAttr, defStyleRes); }
	jint getOrientation() { return call_method<"getOrientation", jint>(); }
	void setOrientation(jint orientation) { return call_method<"setOrientation", void>(orientation); }
	jint getRowCount() { return call_method<"getRowCount", jint>(); }
	void setRowCount(jint rowCount) { return call_method<"setRowCount", void>(rowCount); }
	jint getColumnCount() { return call_method<"getColumnCount", jint>(); }
	void setColumnCount(jint columnCount) { return call_method<"setColumnCount", void>(columnCount); }
	jboolean getUseDefaultMargins() { return call_method<"getUseDefaultMargins", jboolean>(); }
	void setUseDefaultMargins(jboolean useDefaultMargins) { return call_method<"setUseDefaultMargins", void>(useDefaultMargins); }
	jint getAlignmentMode() { return call_method<"getAlignmentMode", jint>(); }
	void setAlignmentMode(jint alignmentMode) { return call_method<"setAlignmentMode", void>(alignmentMode); }
	jboolean isRowOrderPreserved() { return call_method<"isRowOrderPreserved", jboolean>(); }
	void setRowOrderPreserved(jboolean rowOrderPreserved) { return call_method<"setRowOrderPreserved", void>(rowOrderPreserved); }
	jboolean isColumnOrderPreserved() { return call_method<"isColumnOrderPreserved", jboolean>(); }
	void setColumnOrderPreserved(jboolean columnOrderPreserved) { return call_method<"setColumnOrderPreserved", void>(columnOrderPreserved); }
	jni::ref<android::widget::GridLayout_LayoutParams> generateLayoutParams(jni::ref<android::util::AttributeSet> attrs) { return call_method<"generateLayoutParams", jni::ref<android::widget::GridLayout_LayoutParams>>(attrs); }
	void requestLayout() { return call_method<"requestLayout", void>(); }
	void onInitializeAccessibilityEvent(jni::ref<android::view::accessibility::AccessibilityEvent> event) { return call_method<"onInitializeAccessibilityEvent", void>(event); }
	void onInitializeAccessibilityNodeInfo(jni::ref<android::view::accessibility::AccessibilityNodeInfo> info) { return call_method<"onInitializeAccessibilityNodeInfo", void>(info); }
	static jni::ref<android::widget::GridLayout_Spec> spec(jint start, jint size, jni::ref<android::widget::GridLayout_Alignment> alignment, jfloat weight) { return call_static_method<"spec", jni::ref<android::widget::GridLayout_Spec>>(start, size, alignment, weight); }
	static jni::ref<android::widget::GridLayout_Spec> spec(jint start, jni::ref<android::widget::GridLayout_Alignment> alignment, jfloat weight) { return call_static_method<"spec", jni::ref<android::widget::GridLayout_Spec>>(start, alignment, weight); }
	static jni::ref<android::widget::GridLayout_Spec> spec(jint start, jint size, jfloat weight) { return call_static_method<"spec", jni::ref<android::widget::GridLayout_Spec>>(start, size, weight); }
	static jni::ref<android::widget::GridLayout_Spec> spec(jint start, jfloat weight) { return call_static_method<"spec", jni::ref<android::widget::GridLayout_Spec>>(start, weight); }
	static jni::ref<android::widget::GridLayout_Spec> spec(jint start, jint size, jni::ref<android::widget::GridLayout_Alignment> alignment) { return call_static_method<"spec", jni::ref<android::widget::GridLayout_Spec>>(start, size, alignment); }
	static jni::ref<android::widget::GridLayout_Spec> spec(jint start, jni::ref<android::widget::GridLayout_Alignment> alignment) { return call_static_method<"spec", jni::ref<android::widget::GridLayout_Spec>>(start, alignment); }
	static jni::ref<android::widget::GridLayout_Spec> spec(jint start, jint size) { return call_static_method<"spec", jni::ref<android::widget::GridLayout_Spec>>(start, size); }
	static jni::ref<android::widget::GridLayout_Spec> spec(jint start) { return call_static_method<"spec", jni::ref<android::widget::GridLayout_Spec>>(start); }

protected:

	GridLayout(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WIDGET_GRIDLAYOUT
