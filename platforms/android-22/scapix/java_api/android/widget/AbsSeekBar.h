// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/widget/ProgressBar.h>

#ifndef SCAPIX_JAVA_API_ANDROID_WIDGET_ABSSEEKBAR_FWD
#define SCAPIX_JAVA_API_ANDROID_WIDGET_ABSSEEKBAR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::widget { class AbsSeekBar; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::widget::AbsSeekBar>
{
	static constexpr fixed_string class_name = "android/widget/AbsSeekBar";
	using base_classes = std::tuple<scapix::java_api::android::widget::ProgressBar>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WIDGET_ABSSEEKBAR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_WIDGET_ABSSEEKBAR)
#define SCAPIX_JAVA_API_ANDROID_WIDGET_ABSSEEKBAR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/content/res/ColorStateList.h>
#include <scapix/java_api/android/graphics/PorterDuff_Mode.h>
#include <scapix/java_api/android/graphics/drawable/Drawable.h>
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/android/util/AttributeSet.h>
#include <scapix/java_api/android/view/KeyEvent.h>
#include <scapix/java_api/android/view/MotionEvent.h>
#include <scapix/java_api/android/view/accessibility/AccessibilityEvent.h>
#include <scapix/java_api/android/view/accessibility/AccessibilityNodeInfo.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::widget::AbsSeekBar : public jni::object_base<"android/widget/AbsSeekBar",
	android::widget::ProgressBar>
{
public:

	static jni::ref<android::widget::AbsSeekBar> new_object(jni::ref<android::content::Context> context) { return base_::new_object(context); }
	static jni::ref<android::widget::AbsSeekBar> new_object(jni::ref<android::content::Context> context, jni::ref<android::util::AttributeSet> attrs) { return base_::new_object(context, attrs); }
	static jni::ref<android::widget::AbsSeekBar> new_object(jni::ref<android::content::Context> context, jni::ref<android::util::AttributeSet> attrs, jint defStyleAttr) { return base_::new_object(context, attrs, defStyleAttr); }
	static jni::ref<android::widget::AbsSeekBar> new_object(jni::ref<android::content::Context> context, jni::ref<android::util::AttributeSet> attrs, jint defStyleAttr, jint defStyleRes) { return base_::new_object(context, attrs, defStyleAttr, defStyleRes); }
	void setThumb(jni::ref<android::graphics::drawable::Drawable> thumb) { return call_method<"setThumb", void>(thumb); }
	jni::ref<android::graphics::drawable::Drawable> getThumb() { return call_method<"getThumb", jni::ref<android::graphics::drawable::Drawable>>(); }
	void setThumbTintList(jni::ref<android::content::res::ColorStateList> tint) { return call_method<"setThumbTintList", void>(tint); }
	jni::ref<android::content::res::ColorStateList> getThumbTintList() { return call_method<"getThumbTintList", jni::ref<android::content::res::ColorStateList>>(); }
	void setThumbTintMode(jni::ref<android::graphics::PorterDuff_Mode> tintMode) { return call_method<"setThumbTintMode", void>(tintMode); }
	jni::ref<android::graphics::PorterDuff_Mode> getThumbTintMode() { return call_method<"getThumbTintMode", jni::ref<android::graphics::PorterDuff_Mode>>(); }
	jint getThumbOffset() { return call_method<"getThumbOffset", jint>(); }
	void setThumbOffset(jint thumbOffset) { return call_method<"setThumbOffset", void>(thumbOffset); }
	void setSplitTrack(jboolean splitTrack) { return call_method<"setSplitTrack", void>(splitTrack); }
	jboolean getSplitTrack() { return call_method<"getSplitTrack", jboolean>(); }
	void setKeyProgressIncrement(jint increment) { return call_method<"setKeyProgressIncrement", void>(increment); }
	jint getKeyProgressIncrement() { return call_method<"getKeyProgressIncrement", jint>(); }
	void setMax(jint max) { return call_method<"setMax", void>(max); }
	void jumpDrawablesToCurrentState() { return call_method<"jumpDrawablesToCurrentState", void>(); }
	void drawableHotspotChanged(jfloat x, jfloat y) { return call_method<"drawableHotspotChanged", void>(x, y); }
	jboolean onTouchEvent(jni::ref<android::view::MotionEvent> event) { return call_method<"onTouchEvent", jboolean>(event); }
	jboolean onKeyDown(jint keyCode, jni::ref<android::view::KeyEvent> event) { return call_method<"onKeyDown", jboolean>(keyCode, event); }
	void onInitializeAccessibilityEvent(jni::ref<android::view::accessibility::AccessibilityEvent> event) { return call_method<"onInitializeAccessibilityEvent", void>(event); }
	void onInitializeAccessibilityNodeInfo(jni::ref<android::view::accessibility::AccessibilityNodeInfo> info) { return call_method<"onInitializeAccessibilityNodeInfo", void>(info); }
	jboolean performAccessibilityAction(jint action, jni::ref<android::os::Bundle> arguments) { return call_method<"performAccessibilityAction", jboolean>(action, arguments); }
	void onRtlPropertiesChanged(jint layoutDirection) { return call_method<"onRtlPropertiesChanged", void>(layoutDirection); }

protected:

	AbsSeekBar(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WIDGET_ABSSEEKBAR
