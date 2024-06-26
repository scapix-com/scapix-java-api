// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/graphics/drawable/Drawable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_GRAPHICS_DRAWABLE_VECTORDRAWABLE_FWD
#define SCAPIX_JAVA_API_ANDROID_GRAPHICS_DRAWABLE_VECTORDRAWABLE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::graphics::drawable { class VectorDrawable; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::graphics::drawable::VectorDrawable>
{
	static constexpr fixed_string class_name = "android/graphics/drawable/VectorDrawable";
	using base_classes = std::tuple<scapix::java_api::android::graphics::drawable::Drawable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_GRAPHICS_DRAWABLE_VECTORDRAWABLE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_GRAPHICS_DRAWABLE_VECTORDRAWABLE)
#define SCAPIX_JAVA_API_ANDROID_GRAPHICS_DRAWABLE_VECTORDRAWABLE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/res/ColorStateList.h>
#include <scapix/java_api/android/content/res/Resources.h>
#include <scapix/java_api/android/content/res/Resources_Theme.h>
#include <scapix/java_api/android/graphics/BlendMode.h>
#include <scapix/java_api/android/graphics/Canvas.h>
#include <scapix/java_api/android/graphics/ColorFilter.h>
#include <scapix/java_api/android/graphics/Insets.h>
#include <scapix/java_api/android/graphics/drawable/Drawable_ConstantState.h>
#include <scapix/java_api/android/util/AttributeSet.h>
#include <scapix/java_api/org/xmlpull/v1/XmlPullParser.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::graphics::drawable::VectorDrawable : public jni::object_base<"android/graphics/drawable/VectorDrawable",
	android::graphics::drawable::Drawable>
{
public:

	static jni::ref<android::graphics::drawable::VectorDrawable> new_object() { return base_::new_object(); }
	jni::ref<android::graphics::drawable::Drawable> mutate() { return call_method<"mutate", jni::ref<android::graphics::drawable::Drawable>>(); }
	jni::ref<android::graphics::drawable::Drawable_ConstantState> getConstantState() { return call_method<"getConstantState", jni::ref<android::graphics::drawable::Drawable_ConstantState>>(); }
	void draw(jni::ref<android::graphics::Canvas> canvas) { return call_method<"draw", void>(canvas); }
	jint getAlpha() { return call_method<"getAlpha", jint>(); }
	void setAlpha(jint alpha) { return call_method<"setAlpha", void>(alpha); }
	void setColorFilter(jni::ref<android::graphics::ColorFilter> colorFilter) { return call_method<"setColorFilter", void>(colorFilter); }
	jni::ref<android::graphics::ColorFilter> getColorFilter() { return call_method<"getColorFilter", jni::ref<android::graphics::ColorFilter>>(); }
	void setTintList(jni::ref<android::content::res::ColorStateList> tint) { return call_method<"setTintList", void>(tint); }
	void setTintBlendMode(jni::ref<android::graphics::BlendMode> blendMode) { return call_method<"setTintBlendMode", void>(blendMode); }
	jboolean isStateful() { return call_method<"isStateful", jboolean>(); }
	jint getOpacity() { return call_method<"getOpacity", jint>(); }
	jint getIntrinsicWidth() { return call_method<"getIntrinsicWidth", jint>(); }
	jint getIntrinsicHeight() { return call_method<"getIntrinsicHeight", jint>(); }
	jni::ref<android::graphics::Insets> getOpticalInsets() { return call_method<"getOpticalInsets", jni::ref<android::graphics::Insets>>(); }
	jboolean canApplyTheme() { return call_method<"canApplyTheme", jboolean>(); }
	void applyTheme(jni::ref<android::content::res::Resources_Theme> t) { return call_method<"applyTheme", void>(t); }
	void inflate(jni::ref<android::content::res::Resources> r, jni::ref<org::xmlpull::v1::XmlPullParser> parser, jni::ref<android::util::AttributeSet> attrs, jni::ref<android::content::res::Resources_Theme> theme) { return call_method<"inflate", void>(r, parser, attrs, theme); }
	jint getChangingConfigurations() { return call_method<"getChangingConfigurations", jint>(); }
	void setAutoMirrored(jboolean mirrored) { return call_method<"setAutoMirrored", void>(mirrored); }
	jboolean isAutoMirrored() { return call_method<"isAutoMirrored", jboolean>(); }

protected:

	VectorDrawable(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_GRAPHICS_DRAWABLE_VECTORDRAWABLE
