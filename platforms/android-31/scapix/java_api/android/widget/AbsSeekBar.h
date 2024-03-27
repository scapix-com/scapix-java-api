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
#include <scapix/java_api/android/graphics/BlendMode.h>
#include <scapix/java_api/android/graphics/PorterDuff_Mode.h>
#include <scapix/java_api/android/graphics/drawable/Drawable.h>
#include <scapix/java_api/android/util/AttributeSet.h>
#include <scapix/java_api/android/view/KeyEvent.h>
#include <scapix/java_api/android/view/MotionEvent.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/util/List.h>
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
	void setThumbTintBlendMode(jni::ref<android::graphics::BlendMode> blendMode) { return call_method<"setThumbTintBlendMode", void>(blendMode); }
	jni::ref<android::graphics::PorterDuff_Mode> getThumbTintMode() { return call_method<"getThumbTintMode", jni::ref<android::graphics::PorterDuff_Mode>>(); }
	jni::ref<android::graphics::BlendMode> getThumbTintBlendMode() { return call_method<"getThumbTintBlendMode", jni::ref<android::graphics::BlendMode>>(); }
	jint getThumbOffset() { return call_method<"getThumbOffset", jint>(); }
	void setThumbOffset(jint thumbOffset) { return call_method<"setThumbOffset", void>(thumbOffset); }
	void setSplitTrack(jboolean splitTrack) { return call_method<"setSplitTrack", void>(splitTrack); }
	jboolean getSplitTrack() { return call_method<"getSplitTrack", jboolean>(); }
	void setTickMark(jni::ref<android::graphics::drawable::Drawable> tickMark) { return call_method<"setTickMark", void>(tickMark); }
	jni::ref<android::graphics::drawable::Drawable> getTickMark() { return call_method<"getTickMark", jni::ref<android::graphics::drawable::Drawable>>(); }
	void setTickMarkTintList(jni::ref<android::content::res::ColorStateList> tint) { return call_method<"setTickMarkTintList", void>(tint); }
	jni::ref<android::content::res::ColorStateList> getTickMarkTintList() { return call_method<"getTickMarkTintList", jni::ref<android::content::res::ColorStateList>>(); }
	void setTickMarkTintMode(jni::ref<android::graphics::PorterDuff_Mode> tintMode) { return call_method<"setTickMarkTintMode", void>(tintMode); }
	void setTickMarkTintBlendMode(jni::ref<android::graphics::BlendMode> blendMode) { return call_method<"setTickMarkTintBlendMode", void>(blendMode); }
	jni::ref<android::graphics::PorterDuff_Mode> getTickMarkTintMode() { return call_method<"getTickMarkTintMode", jni::ref<android::graphics::PorterDuff_Mode>>(); }
	jni::ref<android::graphics::BlendMode> getTickMarkTintBlendMode() { return call_method<"getTickMarkTintBlendMode", jni::ref<android::graphics::BlendMode>>(); }
	void setKeyProgressIncrement(jint increment) { return call_method<"setKeyProgressIncrement", void>(increment); }
	jint getKeyProgressIncrement() { return call_method<"getKeyProgressIncrement", jint>(); }
	void setMin(jint min) { return call_method<"setMin", void>(min); }
	void setMax(jint max) { return call_method<"setMax", void>(max); }
	void jumpDrawablesToCurrentState() { return call_method<"jumpDrawablesToCurrentState", void>(); }
	void drawableHotspotChanged(jfloat x, jfloat y) { return call_method<"drawableHotspotChanged", void>(x, y); }
	void setSystemGestureExclusionRects(jni::ref<java::util::List> rects) { return call_method<"setSystemGestureExclusionRects", void>(rects); }
	jboolean onTouchEvent(jni::ref<android::view::MotionEvent> event) { return call_method<"onTouchEvent", jboolean>(event); }
	jboolean onKeyDown(jint keyCode, jni::ref<android::view::KeyEvent> event) { return call_method<"onKeyDown", jboolean>(keyCode, event); }
	jni::ref<java::lang::CharSequence> getAccessibilityClassName() { return call_method<"getAccessibilityClassName", jni::ref<java::lang::CharSequence>>(); }
	void onRtlPropertiesChanged(jint layoutDirection) { return call_method<"onRtlPropertiesChanged", void>(layoutDirection); }

protected:

	AbsSeekBar(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WIDGET_ABSSEEKBAR
