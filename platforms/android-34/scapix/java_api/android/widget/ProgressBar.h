// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/view/View.h>

#ifndef SCAPIX_JAVA_API_ANDROID_WIDGET_PROGRESSBAR_FWD
#define SCAPIX_JAVA_API_ANDROID_WIDGET_PROGRESSBAR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::widget { class ProgressBar; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::widget::ProgressBar>
{
	static constexpr fixed_string class_name = "android/widget/ProgressBar";
	using base_classes = std::tuple<scapix::java_api::android::view::View>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WIDGET_PROGRESSBAR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_WIDGET_PROGRESSBAR)
#define SCAPIX_JAVA_API_ANDROID_WIDGET_PROGRESSBAR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/content/res/ColorStateList.h>
#include <scapix/java_api/android/graphics/BlendMode.h>
#include <scapix/java_api/android/graphics/PorterDuff_Mode.h>
#include <scapix/java_api/android/graphics/drawable/Drawable.h>
#include <scapix/java_api/android/os/Parcelable.h>
#include <scapix/java_api/android/util/AttributeSet.h>
#include <scapix/java_api/android/view/animation/Interpolator.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::widget::ProgressBar : public jni::object_base<"android/widget/ProgressBar",
	android::view::View>
{
public:

	static jni::ref<android::widget::ProgressBar> new_object(jni::ref<android::content::Context> context) { return base_::new_object(context); }
	static jni::ref<android::widget::ProgressBar> new_object(jni::ref<android::content::Context> context, jni::ref<android::util::AttributeSet> attrs) { return base_::new_object(context, attrs); }
	static jni::ref<android::widget::ProgressBar> new_object(jni::ref<android::content::Context> context, jni::ref<android::util::AttributeSet> attrs, jint defStyleAttr) { return base_::new_object(context, attrs, defStyleAttr); }
	static jni::ref<android::widget::ProgressBar> new_object(jni::ref<android::content::Context> context, jni::ref<android::util::AttributeSet> attrs, jint defStyleAttr, jint defStyleRes) { return base_::new_object(context, attrs, defStyleAttr, defStyleRes); }
	void setMinWidth(jint minWidth) { return call_method<"setMinWidth", void>(minWidth); }
	jint getMinWidth() { return call_method<"getMinWidth", jint>(); }
	void setMaxWidth(jint maxWidth) { return call_method<"setMaxWidth", void>(maxWidth); }
	jint getMaxWidth() { return call_method<"getMaxWidth", jint>(); }
	void setMinHeight(jint minHeight) { return call_method<"setMinHeight", void>(minHeight); }
	jint getMinHeight() { return call_method<"getMinHeight", jint>(); }
	void setMaxHeight(jint maxHeight) { return call_method<"setMaxHeight", void>(maxHeight); }
	jint getMaxHeight() { return call_method<"getMaxHeight", jint>(); }
	jboolean isIndeterminate() { return call_method<"isIndeterminate", jboolean>(); }
	void setIndeterminate(jboolean indeterminate) { return call_method<"setIndeterminate", void>(indeterminate); }
	jni::ref<android::graphics::drawable::Drawable> getIndeterminateDrawable() { return call_method<"getIndeterminateDrawable", jni::ref<android::graphics::drawable::Drawable>>(); }
	void setIndeterminateDrawable(jni::ref<android::graphics::drawable::Drawable> d) { return call_method<"setIndeterminateDrawable", void>(d); }
	void setIndeterminateTintList(jni::ref<android::content::res::ColorStateList> tint) { return call_method<"setIndeterminateTintList", void>(tint); }
	jni::ref<android::content::res::ColorStateList> getIndeterminateTintList() { return call_method<"getIndeterminateTintList", jni::ref<android::content::res::ColorStateList>>(); }
	void setIndeterminateTintMode(jni::ref<android::graphics::PorterDuff_Mode> tintMode) { return call_method<"setIndeterminateTintMode", void>(tintMode); }
	void setIndeterminateTintBlendMode(jni::ref<android::graphics::BlendMode> blendMode) { return call_method<"setIndeterminateTintBlendMode", void>(blendMode); }
	jni::ref<android::graphics::PorterDuff_Mode> getIndeterminateTintMode() { return call_method<"getIndeterminateTintMode", jni::ref<android::graphics::PorterDuff_Mode>>(); }
	jni::ref<android::graphics::BlendMode> getIndeterminateTintBlendMode() { return call_method<"getIndeterminateTintBlendMode", jni::ref<android::graphics::BlendMode>>(); }
	void setIndeterminateDrawableTiled(jni::ref<android::graphics::drawable::Drawable> d) { return call_method<"setIndeterminateDrawableTiled", void>(d); }
	jni::ref<android::graphics::drawable::Drawable> getProgressDrawable() { return call_method<"getProgressDrawable", jni::ref<android::graphics::drawable::Drawable>>(); }
	void setProgressDrawable(jni::ref<android::graphics::drawable::Drawable> d) { return call_method<"setProgressDrawable", void>(d); }
	void setProgressTintList(jni::ref<android::content::res::ColorStateList> tint) { return call_method<"setProgressTintList", void>(tint); }
	jni::ref<android::content::res::ColorStateList> getProgressTintList() { return call_method<"getProgressTintList", jni::ref<android::content::res::ColorStateList>>(); }
	void setProgressTintMode(jni::ref<android::graphics::PorterDuff_Mode> tintMode) { return call_method<"setProgressTintMode", void>(tintMode); }
	void setProgressTintBlendMode(jni::ref<android::graphics::BlendMode> blendMode) { return call_method<"setProgressTintBlendMode", void>(blendMode); }
	jni::ref<android::graphics::PorterDuff_Mode> getProgressTintMode() { return call_method<"getProgressTintMode", jni::ref<android::graphics::PorterDuff_Mode>>(); }
	jni::ref<android::graphics::BlendMode> getProgressTintBlendMode() { return call_method<"getProgressTintBlendMode", jni::ref<android::graphics::BlendMode>>(); }
	void setProgressBackgroundTintList(jni::ref<android::content::res::ColorStateList> tint) { return call_method<"setProgressBackgroundTintList", void>(tint); }
	jni::ref<android::content::res::ColorStateList> getProgressBackgroundTintList() { return call_method<"getProgressBackgroundTintList", jni::ref<android::content::res::ColorStateList>>(); }
	void setProgressBackgroundTintMode(jni::ref<android::graphics::PorterDuff_Mode> tintMode) { return call_method<"setProgressBackgroundTintMode", void>(tintMode); }
	void setProgressBackgroundTintBlendMode(jni::ref<android::graphics::BlendMode> blendMode) { return call_method<"setProgressBackgroundTintBlendMode", void>(blendMode); }
	jni::ref<android::graphics::PorterDuff_Mode> getProgressBackgroundTintMode() { return call_method<"getProgressBackgroundTintMode", jni::ref<android::graphics::PorterDuff_Mode>>(); }
	jni::ref<android::graphics::BlendMode> getProgressBackgroundTintBlendMode() { return call_method<"getProgressBackgroundTintBlendMode", jni::ref<android::graphics::BlendMode>>(); }
	void setSecondaryProgressTintList(jni::ref<android::content::res::ColorStateList> tint) { return call_method<"setSecondaryProgressTintList", void>(tint); }
	jni::ref<android::content::res::ColorStateList> getSecondaryProgressTintList() { return call_method<"getSecondaryProgressTintList", jni::ref<android::content::res::ColorStateList>>(); }
	void setSecondaryProgressTintMode(jni::ref<android::graphics::PorterDuff_Mode> tintMode) { return call_method<"setSecondaryProgressTintMode", void>(tintMode); }
	void setSecondaryProgressTintBlendMode(jni::ref<android::graphics::BlendMode> blendMode) { return call_method<"setSecondaryProgressTintBlendMode", void>(blendMode); }
	jni::ref<android::graphics::PorterDuff_Mode> getSecondaryProgressTintMode() { return call_method<"getSecondaryProgressTintMode", jni::ref<android::graphics::PorterDuff_Mode>>(); }
	jni::ref<android::graphics::BlendMode> getSecondaryProgressTintBlendMode() { return call_method<"getSecondaryProgressTintBlendMode", jni::ref<android::graphics::BlendMode>>(); }
	void setProgressDrawableTiled(jni::ref<android::graphics::drawable::Drawable> d) { return call_method<"setProgressDrawableTiled", void>(d); }
	jni::ref<android::graphics::drawable::Drawable> getCurrentDrawable() { return call_method<"getCurrentDrawable", jni::ref<android::graphics::drawable::Drawable>>(); }
	void jumpDrawablesToCurrentState() { return call_method<"jumpDrawablesToCurrentState", void>(); }
	void postInvalidate() { return call_method<"postInvalidate", void>(); }
	void setStateDescription(jni::ref<java::lang::CharSequence> stateDescription) { return call_method<"setStateDescription", void>(stateDescription); }
	void setProgress(jint progress) { return call_method<"setProgress", void>(progress); }
	void setProgress(jint progress, jboolean animate) { return call_method<"setProgress", void>(progress, animate); }
	void setSecondaryProgress(jint secondaryProgress) { return call_method<"setSecondaryProgress", void>(secondaryProgress); }
	jint getProgress() { return call_method<"getProgress", jint>(); }
	jint getSecondaryProgress() { return call_method<"getSecondaryProgress", jint>(); }
	jint getMin() { return call_method<"getMin", jint>(); }
	jint getMax() { return call_method<"getMax", jint>(); }
	void setMin(jint min) { return call_method<"setMin", void>(min); }
	void setMax(jint max) { return call_method<"setMax", void>(max); }
	void incrementProgressBy(jint diff) { return call_method<"incrementProgressBy", void>(diff); }
	void incrementSecondaryProgressBy(jint diff) { return call_method<"incrementSecondaryProgressBy", void>(diff); }
	void setInterpolator(jni::ref<android::content::Context> context, jint resID) { return call_method<"setInterpolator", void>(context, resID); }
	void setInterpolator(jni::ref<android::view::animation::Interpolator> interpolator) { return call_method<"setInterpolator", void>(interpolator); }
	jni::ref<android::view::animation::Interpolator> getInterpolator() { return call_method<"getInterpolator", jni::ref<android::view::animation::Interpolator>>(); }
	void onVisibilityAggregated(jboolean isVisible) { return call_method<"onVisibilityAggregated", void>(isVisible); }
	void invalidateDrawable(jni::ref<android::graphics::drawable::Drawable> dr) { return call_method<"invalidateDrawable", void>(dr); }
	void drawableHotspotChanged(jfloat x, jfloat y) { return call_method<"drawableHotspotChanged", void>(x, y); }
	jni::ref<android::os::Parcelable> onSaveInstanceState() { return call_method<"onSaveInstanceState", jni::ref<android::os::Parcelable>>(); }
	void onRestoreInstanceState(jni::ref<android::os::Parcelable> state) { return call_method<"onRestoreInstanceState", void>(state); }
	jni::ref<java::lang::CharSequence> getAccessibilityClassName() { return call_method<"getAccessibilityClassName", jni::ref<java::lang::CharSequence>>(); }
	jboolean isAnimating() { return call_method<"isAnimating", jboolean>(); }

protected:

	ProgressBar(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WIDGET_PROGRESSBAR
