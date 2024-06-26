// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/graphics/drawable/Drawable.h>
#include <scapix/java_api/android/graphics/drawable/Drawable_Callback.h>

#ifndef SCAPIX_JAVA_API_ANDROID_GRAPHICS_DRAWABLE_COLORSTATELISTDRAWABLE_FWD
#define SCAPIX_JAVA_API_ANDROID_GRAPHICS_DRAWABLE_COLORSTATELISTDRAWABLE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::graphics::drawable { class ColorStateListDrawable; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::graphics::drawable::ColorStateListDrawable>
{
	static constexpr fixed_string class_name = "android/graphics/drawable/ColorStateListDrawable";
	using base_classes = std::tuple<scapix::java_api::android::graphics::drawable::Drawable, scapix::java_api::android::graphics::drawable::Drawable_Callback>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_GRAPHICS_DRAWABLE_COLORSTATELISTDRAWABLE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_GRAPHICS_DRAWABLE_COLORSTATELISTDRAWABLE)
#define SCAPIX_JAVA_API_ANDROID_GRAPHICS_DRAWABLE_COLORSTATELISTDRAWABLE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/res/ColorStateList.h>
#include <scapix/java_api/android/content/res/Resources_Theme.h>
#include <scapix/java_api/android/graphics/BlendMode.h>
#include <scapix/java_api/android/graphics/Canvas.h>
#include <scapix/java_api/android/graphics/ColorFilter.h>
#include <scapix/java_api/android/graphics/drawable/Drawable_ConstantState.h>
#include <scapix/java_api/java/lang/Runnable.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::graphics::drawable::ColorStateListDrawable : public jni::object_base<"android/graphics/drawable/ColorStateListDrawable",
	android::graphics::drawable::Drawable,
	android::graphics::drawable::Drawable_Callback>
{
public:

	static jni::ref<android::graphics::drawable::ColorStateListDrawable> new_object() { return base_::new_object(); }
	static jni::ref<android::graphics::drawable::ColorStateListDrawable> new_object(jni::ref<android::content::res::ColorStateList> colorStateList) { return base_::new_object(colorStateList); }
	void draw(jni::ref<android::graphics::Canvas> canvas) { return call_method<"draw", void>(canvas); }
	jint getAlpha() { return call_method<"getAlpha", jint>(); }
	jboolean isStateful() { return call_method<"isStateful", jboolean>(); }
	jboolean hasFocusStateSpecified() { return call_method<"hasFocusStateSpecified", jboolean>(); }
	jni::ref<android::graphics::drawable::Drawable> getCurrent() { return call_method<"getCurrent", jni::ref<android::graphics::drawable::Drawable>>(); }
	void applyTheme(jni::ref<android::content::res::Resources_Theme> t) { return call_method<"applyTheme", void>(t); }
	jboolean canApplyTheme() { return call_method<"canApplyTheme", jboolean>(); }
	void setAlpha(jint alpha) { return call_method<"setAlpha", void>(alpha); }
	void clearAlpha() { return call_method<"clearAlpha", void>(); }
	void setTintList(jni::ref<android::content::res::ColorStateList> tint) { return call_method<"setTintList", void>(tint); }
	void setTintBlendMode(jni::ref<android::graphics::BlendMode> blendMode) { return call_method<"setTintBlendMode", void>(blendMode); }
	jni::ref<android::graphics::ColorFilter> getColorFilter() { return call_method<"getColorFilter", jni::ref<android::graphics::ColorFilter>>(); }
	void setColorFilter(jni::ref<android::graphics::ColorFilter> colorFilter) { return call_method<"setColorFilter", void>(colorFilter); }
	jint getOpacity() { return call_method<"getOpacity", jint>(); }
	void invalidateDrawable(jni::ref<android::graphics::drawable::Drawable> who) { return call_method<"invalidateDrawable", void>(who); }
	void scheduleDrawable(jni::ref<android::graphics::drawable::Drawable> who, jni::ref<java::lang::Runnable> what, jlong when) { return call_method<"scheduleDrawable", void>(who, what, when); }
	void unscheduleDrawable(jni::ref<android::graphics::drawable::Drawable> who, jni::ref<java::lang::Runnable> what) { return call_method<"unscheduleDrawable", void>(who, what); }
	jni::ref<android::graphics::drawable::Drawable_ConstantState> getConstantState() { return call_method<"getConstantState", jni::ref<android::graphics::drawable::Drawable_ConstantState>>(); }
	jni::ref<android::content::res::ColorStateList> getColorStateList() { return call_method<"getColorStateList", jni::ref<android::content::res::ColorStateList>>(); }
	jint getChangingConfigurations() { return call_method<"getChangingConfigurations", jint>(); }
	jni::ref<android::graphics::drawable::Drawable> mutate() { return call_method<"mutate", jni::ref<android::graphics::drawable::Drawable>>(); }
	void setColorStateList(jni::ref<android::content::res::ColorStateList> colorStateList) { return call_method<"setColorStateList", void>(colorStateList); }

protected:

	ColorStateListDrawable(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_GRAPHICS_DRAWABLE_COLORSTATELISTDRAWABLE
