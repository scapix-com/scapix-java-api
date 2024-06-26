// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/view/ViewGroup.h>

#ifndef SCAPIX_JAVA_API_ANDROID_WIDGET_LINEARLAYOUT_FWD
#define SCAPIX_JAVA_API_ANDROID_WIDGET_LINEARLAYOUT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::widget { class LinearLayout; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::widget::LinearLayout>
{
	static constexpr fixed_string class_name = "android/widget/LinearLayout";
	using base_classes = std::tuple<scapix::java_api::android::view::ViewGroup>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WIDGET_LINEARLAYOUT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_WIDGET_LINEARLAYOUT)
#define SCAPIX_JAVA_API_ANDROID_WIDGET_LINEARLAYOUT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/graphics/drawable/Drawable.h>
#include <scapix/java_api/android/util/AttributeSet.h>
#include <scapix/java_api/android/widget/LinearLayout_LayoutParams.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::widget::LinearLayout : public jni::object_base<"android/widget/LinearLayout",
	android::view::ViewGroup>
{
public:

	using LayoutParams = LinearLayout_LayoutParams;

	static jint HORIZONTAL() { return get_static_field<"HORIZONTAL", jint>(); }
	static jint SHOW_DIVIDER_BEGINNING() { return get_static_field<"SHOW_DIVIDER_BEGINNING", jint>(); }
	static jint SHOW_DIVIDER_END() { return get_static_field<"SHOW_DIVIDER_END", jint>(); }
	static jint SHOW_DIVIDER_MIDDLE() { return get_static_field<"SHOW_DIVIDER_MIDDLE", jint>(); }
	static jint SHOW_DIVIDER_NONE() { return get_static_field<"SHOW_DIVIDER_NONE", jint>(); }
	static jint VERTICAL() { return get_static_field<"VERTICAL", jint>(); }

	static jni::ref<android::widget::LinearLayout> new_object(jni::ref<android::content::Context> context) { return base_::new_object(context); }
	static jni::ref<android::widget::LinearLayout> new_object(jni::ref<android::content::Context> context, jni::ref<android::util::AttributeSet> attrs) { return base_::new_object(context, attrs); }
	static jni::ref<android::widget::LinearLayout> new_object(jni::ref<android::content::Context> context, jni::ref<android::util::AttributeSet> attrs, jint defStyleAttr) { return base_::new_object(context, attrs, defStyleAttr); }
	static jni::ref<android::widget::LinearLayout> new_object(jni::ref<android::content::Context> context, jni::ref<android::util::AttributeSet> attrs, jint defStyleAttr, jint defStyleRes) { return base_::new_object(context, attrs, defStyleAttr, defStyleRes); }
	void setShowDividers(jint showDividers) { return call_method<"setShowDividers", void>(showDividers); }
	jboolean shouldDelayChildPressedState() { return call_method<"shouldDelayChildPressedState", jboolean>(); }
	jint getShowDividers() { return call_method<"getShowDividers", jint>(); }
	jni::ref<android::graphics::drawable::Drawable> getDividerDrawable() { return call_method<"getDividerDrawable", jni::ref<android::graphics::drawable::Drawable>>(); }
	void setDividerDrawable(jni::ref<android::graphics::drawable::Drawable> divider) { return call_method<"setDividerDrawable", void>(divider); }
	void setDividerPadding(jint padding) { return call_method<"setDividerPadding", void>(padding); }
	jint getDividerPadding() { return call_method<"getDividerPadding", jint>(); }
	jboolean isBaselineAligned() { return call_method<"isBaselineAligned", jboolean>(); }
	void setBaselineAligned(jboolean baselineAligned) { return call_method<"setBaselineAligned", void>(baselineAligned); }
	jboolean isMeasureWithLargestChildEnabled() { return call_method<"isMeasureWithLargestChildEnabled", jboolean>(); }
	void setMeasureWithLargestChildEnabled(jboolean enabled) { return call_method<"setMeasureWithLargestChildEnabled", void>(enabled); }
	jint getBaseline() { return call_method<"getBaseline", jint>(); }
	jint getBaselineAlignedChildIndex() { return call_method<"getBaselineAlignedChildIndex", jint>(); }
	void setBaselineAlignedChildIndex(jint i) { return call_method<"setBaselineAlignedChildIndex", void>(i); }
	jfloat getWeightSum() { return call_method<"getWeightSum", jfloat>(); }
	void setWeightSum(jfloat weightSum) { return call_method<"setWeightSum", void>(weightSum); }
	void onRtlPropertiesChanged(jint layoutDirection) { return call_method<"onRtlPropertiesChanged", void>(layoutDirection); }
	void setOrientation(jint orientation) { return call_method<"setOrientation", void>(orientation); }
	jint getOrientation() { return call_method<"getOrientation", jint>(); }
	void setGravity(jint gravity) { return call_method<"setGravity", void>(gravity); }
	jint getGravity() { return call_method<"getGravity", jint>(); }
	void setHorizontalGravity(jint horizontalGravity) { return call_method<"setHorizontalGravity", void>(horizontalGravity); }
	void setVerticalGravity(jint verticalGravity) { return call_method<"setVerticalGravity", void>(verticalGravity); }
	jni::ref<android::widget::LinearLayout_LayoutParams> generateLayoutParams(jni::ref<android::util::AttributeSet> attrs) { return call_method<"generateLayoutParams", jni::ref<android::widget::LinearLayout_LayoutParams>>(attrs); }
	jni::ref<java::lang::CharSequence> getAccessibilityClassName() { return call_method<"getAccessibilityClassName", jni::ref<java::lang::CharSequence>>(); }

protected:

	LinearLayout(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WIDGET_LINEARLAYOUT
