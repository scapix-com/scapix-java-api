// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/graphics/drawable/DrawableWrapper.h>

#ifndef SCAPIX_JAVA_API_ANDROID_GRAPHICS_DRAWABLE_CLIPDRAWABLE_FWD
#define SCAPIX_JAVA_API_ANDROID_GRAPHICS_DRAWABLE_CLIPDRAWABLE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::graphics::drawable { class ClipDrawable; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::graphics::drawable::ClipDrawable>
{
	static constexpr fixed_string class_name = "android/graphics/drawable/ClipDrawable";
	using base_classes = std::tuple<scapix::java_api::android::graphics::drawable::DrawableWrapper>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_GRAPHICS_DRAWABLE_CLIPDRAWABLE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_GRAPHICS_DRAWABLE_CLIPDRAWABLE)
#define SCAPIX_JAVA_API_ANDROID_GRAPHICS_DRAWABLE_CLIPDRAWABLE

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

class android::graphics::drawable::ClipDrawable : public jni::object_base<"android/graphics/drawable/ClipDrawable",
	android::graphics::drawable::DrawableWrapper>
{
public:

	static jint HORIZONTAL() { return get_static_field<"HORIZONTAL", jint>(); }
	static jint VERTICAL() { return get_static_field<"VERTICAL", jint>(); }

	static jni::ref<android::graphics::drawable::ClipDrawable> new_object(jni::ref<android::graphics::drawable::Drawable> drawable, jint gravity, jint orientation) { return base_::new_object(drawable, gravity, orientation); }
	void inflate(jni::ref<android::content::res::Resources> r, jni::ref<org::xmlpull::v1::XmlPullParser> parser, jni::ref<android::util::AttributeSet> attrs, jni::ref<android::content::res::Resources_Theme> theme) { return call_method<"inflate", void>(r, parser, attrs, theme); }
	void applyTheme(jni::ref<android::content::res::Resources_Theme> t) { return call_method<"applyTheme", void>(t); }
	jint getOpacity() { return call_method<"getOpacity", jint>(); }
	void draw(jni::ref<android::graphics::Canvas> canvas) { return call_method<"draw", void>(canvas); }

protected:

	ClipDrawable(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_GRAPHICS_DRAWABLE_CLIPDRAWABLE