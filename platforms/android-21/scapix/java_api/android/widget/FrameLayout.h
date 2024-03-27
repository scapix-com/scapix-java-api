// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/view/ViewGroup.h>

#ifndef SCAPIX_JAVA_API_ANDROID_WIDGET_FRAMELAYOUT_FWD
#define SCAPIX_JAVA_API_ANDROID_WIDGET_FRAMELAYOUT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::widget { class FrameLayout; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::widget::FrameLayout>
{
	static constexpr fixed_string class_name = "android/widget/FrameLayout";
	using base_classes = std::tuple<scapix::java_api::android::view::ViewGroup>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WIDGET_FRAMELAYOUT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_WIDGET_FRAMELAYOUT)
#define SCAPIX_JAVA_API_ANDROID_WIDGET_FRAMELAYOUT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/content/res/ColorStateList.h>
#include <scapix/java_api/android/graphics/Canvas.h>
#include <scapix/java_api/android/graphics/PorterDuff_Mode.h>
#include <scapix/java_api/android/graphics/Region.h>
#include <scapix/java_api/android/graphics/drawable/Drawable.h>
#include <scapix/java_api/android/util/AttributeSet.h>
#include <scapix/java_api/android/view/accessibility/AccessibilityEvent.h>
#include <scapix/java_api/android/view/accessibility/AccessibilityNodeInfo.h>
#include <scapix/java_api/android/widget/FrameLayout_LayoutParams.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::widget::FrameLayout : public jni::object_base<"android/widget/FrameLayout",
	android::view::ViewGroup>
{
public:

	using LayoutParams = FrameLayout_LayoutParams;

	static jni::ref<android::widget::FrameLayout> new_object(jni::ref<android::content::Context> context) { return base_::new_object(context); }
	static jni::ref<android::widget::FrameLayout> new_object(jni::ref<android::content::Context> context, jni::ref<android::util::AttributeSet> attrs) { return base_::new_object(context, attrs); }
	static jni::ref<android::widget::FrameLayout> new_object(jni::ref<android::content::Context> context, jni::ref<android::util::AttributeSet> attrs, jint defStyleAttr) { return base_::new_object(context, attrs, defStyleAttr); }
	static jni::ref<android::widget::FrameLayout> new_object(jni::ref<android::content::Context> context, jni::ref<android::util::AttributeSet> attrs, jint defStyleAttr, jint defStyleRes) { return base_::new_object(context, attrs, defStyleAttr, defStyleRes); }
	jint getForegroundGravity() { return call_method<"getForegroundGravity", jint>(); }
	void setForegroundGravity(jint foregroundGravity) { return call_method<"setForegroundGravity", void>(foregroundGravity); }
	void setVisibility(jint visibility) { return call_method<"setVisibility", void>(visibility); }
	void jumpDrawablesToCurrentState() { return call_method<"jumpDrawablesToCurrentState", void>(); }
	void drawableHotspotChanged(jfloat x, jfloat y) { return call_method<"drawableHotspotChanged", void>(x, y); }
	void setForeground(jni::ref<android::graphics::drawable::Drawable> d) { return call_method<"setForeground", void>(d); }
	jni::ref<android::graphics::drawable::Drawable> getForeground() { return call_method<"getForeground", jni::ref<android::graphics::drawable::Drawable>>(); }
	void setForegroundTintList(jni::ref<android::content::res::ColorStateList> tint) { return call_method<"setForegroundTintList", void>(tint); }
	jni::ref<android::content::res::ColorStateList> getForegroundTintList() { return call_method<"getForegroundTintList", jni::ref<android::content::res::ColorStateList>>(); }
	void setForegroundTintMode(jni::ref<android::graphics::PorterDuff_Mode> tintMode) { return call_method<"setForegroundTintMode", void>(tintMode); }
	jni::ref<android::graphics::PorterDuff_Mode> getForegroundTintMode() { return call_method<"getForegroundTintMode", jni::ref<android::graphics::PorterDuff_Mode>>(); }
	void draw(jni::ref<android::graphics::Canvas> canvas) { return call_method<"draw", void>(canvas); }
	jboolean gatherTransparentRegion(jni::ref<android::graphics::Region> region) { return call_method<"gatherTransparentRegion", jboolean>(region); }
	void setMeasureAllChildren(jboolean measureAll) { return call_method<"setMeasureAllChildren", void>(measureAll); }
	jboolean getConsiderGoneChildrenWhenMeasuring() { return call_method<"getConsiderGoneChildrenWhenMeasuring", jboolean>(); }
	jboolean getMeasureAllChildren() { return call_method<"getMeasureAllChildren", jboolean>(); }
	jni::ref<android::widget::FrameLayout_LayoutParams> generateLayoutParams(jni::ref<android::util::AttributeSet> attrs) { return call_method<"generateLayoutParams", jni::ref<android::widget::FrameLayout_LayoutParams>>(attrs); }
	jboolean shouldDelayChildPressedState() { return call_method<"shouldDelayChildPressedState", jboolean>(); }
	void onInitializeAccessibilityEvent(jni::ref<android::view::accessibility::AccessibilityEvent> event) { return call_method<"onInitializeAccessibilityEvent", void>(event); }
	void onInitializeAccessibilityNodeInfo(jni::ref<android::view::accessibility::AccessibilityNodeInfo> info) { return call_method<"onInitializeAccessibilityNodeInfo", void>(info); }

protected:

	FrameLayout(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WIDGET_FRAMELAYOUT