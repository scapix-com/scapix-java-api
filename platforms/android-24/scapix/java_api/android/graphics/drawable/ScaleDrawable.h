// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/graphics/drawable/DrawableWrapper.h>

#ifndef SCAPIX_JAVA_API_ANDROID_GRAPHICS_DRAWABLE_SCALEDRAWABLE_FWD
#define SCAPIX_JAVA_API_ANDROID_GRAPHICS_DRAWABLE_SCALEDRAWABLE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::graphics::drawable { class ScaleDrawable; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::graphics::drawable::ScaleDrawable>
{
	static constexpr fixed_string class_name = "android/graphics/drawable/ScaleDrawable";
	using base_classes = std::tuple<scapix::java_api::android::graphics::drawable::DrawableWrapper>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_GRAPHICS_DRAWABLE_SCALEDRAWABLE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_GRAPHICS_DRAWABLE_SCALEDRAWABLE)
#define SCAPIX_JAVA_API_ANDROID_GRAPHICS_DRAWABLE_SCALEDRAWABLE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/res/Resources.h>
#include <scapix/java_api/android/content/res/Resources_Theme.h>
#include <scapix/java_api/android/graphics/Canvas.h>
#include <scapix/java_api/android/graphics/drawable/Drawable.h>
#include <scapix/java_api/android/util/AttributeSet.h>
#include <scapix/java_api/org/xmlpull/v1/XmlPullParser.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::graphics::drawable::ScaleDrawable : public jni::object_base<"android/graphics/drawable/ScaleDrawable",
	android::graphics::drawable::DrawableWrapper>
{
public:

	static jni::ref<android::graphics::drawable::ScaleDrawable> new_object(jni::ref<android::graphics::drawable::Drawable> drawable, jint gravity, jfloat scaleWidth, jfloat scaleHeight) { return base_::new_object(drawable, gravity, scaleWidth, scaleHeight); }
	void inflate(jni::ref<android::content::res::Resources> r, jni::ref<org::xmlpull::v1::XmlPullParser> parser, jni::ref<android::util::AttributeSet> attrs, jni::ref<android::content::res::Resources_Theme> theme) { return call_method<"inflate", void>(r, parser, attrs, theme); }
	void applyTheme(jni::ref<android::content::res::Resources_Theme> t) { return call_method<"applyTheme", void>(t); }
	void draw(jni::ref<android::graphics::Canvas> canvas) { return call_method<"draw", void>(canvas); }
	jint getOpacity() { return call_method<"getOpacity", jint>(); }

protected:

	ScaleDrawable(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_GRAPHICS_DRAWABLE_SCALEDRAWABLE
