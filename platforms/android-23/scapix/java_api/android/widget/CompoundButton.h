// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/widget/Button.h>
#include <scapix/java_api/android/widget/Checkable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_WIDGET_COMPOUNDBUTTON_FWD
#define SCAPIX_JAVA_API_ANDROID_WIDGET_COMPOUNDBUTTON_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::widget { class CompoundButton; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::widget::CompoundButton>
{
	static constexpr fixed_string class_name = "android/widget/CompoundButton";
	using base_classes = std::tuple<scapix::java_api::android::widget::Button, scapix::java_api::android::widget::Checkable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WIDGET_COMPOUNDBUTTON_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_WIDGET_COMPOUNDBUTTON)
#define SCAPIX_JAVA_API_ANDROID_WIDGET_COMPOUNDBUTTON

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/content/res/ColorStateList.h>
#include <scapix/java_api/android/graphics/PorterDuff_Mode.h>
#include <scapix/java_api/android/graphics/drawable/Drawable.h>
#include <scapix/java_api/android/os/Parcelable.h>
#include <scapix/java_api/android/util/AttributeSet.h>
#include <scapix/java_api/android/widget/CompoundButton_OnCheckedChangeListener.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::widget::CompoundButton : public jni::object_base<"android/widget/CompoundButton",
	android::widget::Button,
	android::widget::Checkable>
{
public:

	using OnCheckedChangeListener = CompoundButton_OnCheckedChangeListener;

	static jni::ref<android::widget::CompoundButton> new_object(jni::ref<android::content::Context> context) { return base_::new_object(context); }
	static jni::ref<android::widget::CompoundButton> new_object(jni::ref<android::content::Context> context, jni::ref<android::util::AttributeSet> attrs) { return base_::new_object(context, attrs); }
	static jni::ref<android::widget::CompoundButton> new_object(jni::ref<android::content::Context> context, jni::ref<android::util::AttributeSet> attrs, jint defStyleAttr) { return base_::new_object(context, attrs, defStyleAttr); }
	static jni::ref<android::widget::CompoundButton> new_object(jni::ref<android::content::Context> context, jni::ref<android::util::AttributeSet> attrs, jint defStyleAttr, jint defStyleRes) { return base_::new_object(context, attrs, defStyleAttr, defStyleRes); }
	void toggle() { return call_method<"toggle", void>(); }
	jboolean performClick() { return call_method<"performClick", jboolean>(); }
	jboolean isChecked() { return call_method<"isChecked", jboolean>(); }
	void setChecked(jboolean checked) { return call_method<"setChecked", void>(checked); }
	void setOnCheckedChangeListener(jni::ref<android::widget::CompoundButton_OnCheckedChangeListener> listener) { return call_method<"setOnCheckedChangeListener", void>(listener); }
	void setButtonDrawable(jint resId) { return call_method<"setButtonDrawable", void>(resId); }
	void setButtonDrawable(jni::ref<android::graphics::drawable::Drawable> drawable) { return call_method<"setButtonDrawable", void>(drawable); }
	jni::ref<android::graphics::drawable::Drawable> getButtonDrawable() { return call_method<"getButtonDrawable", jni::ref<android::graphics::drawable::Drawable>>(); }
	void setButtonTintList(jni::ref<android::content::res::ColorStateList> tint) { return call_method<"setButtonTintList", void>(tint); }
	jni::ref<android::content::res::ColorStateList> getButtonTintList() { return call_method<"getButtonTintList", jni::ref<android::content::res::ColorStateList>>(); }
	void setButtonTintMode(jni::ref<android::graphics::PorterDuff_Mode> tintMode) { return call_method<"setButtonTintMode", void>(tintMode); }
	jni::ref<android::graphics::PorterDuff_Mode> getButtonTintMode() { return call_method<"getButtonTintMode", jni::ref<android::graphics::PorterDuff_Mode>>(); }
	jni::ref<java::lang::CharSequence> getAccessibilityClassName() { return call_method<"getAccessibilityClassName", jni::ref<java::lang::CharSequence>>(); }
	jint getCompoundPaddingLeft() { return call_method<"getCompoundPaddingLeft", jint>(); }
	jint getCompoundPaddingRight() { return call_method<"getCompoundPaddingRight", jint>(); }
	void drawableHotspotChanged(jfloat x, jfloat y) { return call_method<"drawableHotspotChanged", void>(x, y); }
	void jumpDrawablesToCurrentState() { return call_method<"jumpDrawablesToCurrentState", void>(); }
	jni::ref<android::os::Parcelable> onSaveInstanceState() { return call_method<"onSaveInstanceState", jni::ref<android::os::Parcelable>>(); }
	void onRestoreInstanceState(jni::ref<android::os::Parcelable> state) { return call_method<"onRestoreInstanceState", void>(state); }

protected:

	CompoundButton(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WIDGET_COMPOUNDBUTTON