// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/graphics/drawable/DrawableWrapper.h>

#ifndef SCAPIX_JAVA_API_ANDROID_GRAPHICS_DRAWABLE_INSETDRAWABLE_FWD
#define SCAPIX_JAVA_API_ANDROID_GRAPHICS_DRAWABLE_INSETDRAWABLE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::graphics::drawable { class InsetDrawable; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::graphics::drawable::InsetDrawable>
{
	static constexpr fixed_string class_name = "android/graphics/drawable/InsetDrawable";
	using base_classes = std::tuple<scapix::java_api::android::graphics::drawable::DrawableWrapper>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_GRAPHICS_DRAWABLE_INSETDRAWABLE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_GRAPHICS_DRAWABLE_INSETDRAWABLE)
#define SCAPIX_JAVA_API_ANDROID_GRAPHICS_DRAWABLE_INSETDRAWABLE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/res/Resources.h>
#include <scapix/java_api/android/content/res/Resources_Theme.h>
#include <scapix/java_api/android/graphics/Outline.h>
#include <scapix/java_api/android/graphics/Rect.h>
#include <scapix/java_api/android/graphics/drawable/Drawable.h>
#include <scapix/java_api/android/util/AttributeSet.h>
#include <scapix/java_api/org/xmlpull/v1/XmlPullParser.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::graphics::drawable::InsetDrawable : public jni::object_base<"android/graphics/drawable/InsetDrawable",
	android::graphics::drawable::DrawableWrapper>
{
public:

	static jni::ref<android::graphics::drawable::InsetDrawable> new_object(jni::ref<android::graphics::drawable::Drawable> drawable, jint inset) { return base_::new_object(drawable, inset); }
	static jni::ref<android::graphics::drawable::InsetDrawable> new_object(jni::ref<android::graphics::drawable::Drawable> drawable, jfloat inset) { return base_::new_object(drawable, inset); }
	static jni::ref<android::graphics::drawable::InsetDrawable> new_object(jni::ref<android::graphics::drawable::Drawable> drawable, jint insetLeft, jint insetTop, jint insetRight, jint insetBottom) { return base_::new_object(drawable, insetLeft, insetTop, insetRight, insetBottom); }
	static jni::ref<android::graphics::drawable::InsetDrawable> new_object(jni::ref<android::graphics::drawable::Drawable> drawable, jfloat insetLeftFraction, jfloat insetTopFraction, jfloat insetRightFraction, jfloat insetBottomFraction) { return base_::new_object(drawable, insetLeftFraction, insetTopFraction, insetRightFraction, insetBottomFraction); }
	void inflate(jni::ref<android::content::res::Resources> r, jni::ref<org::xmlpull::v1::XmlPullParser> parser, jni::ref<android::util::AttributeSet> attrs, jni::ref<android::content::res::Resources_Theme> theme) { return call_method<"inflate", void>(r, parser, attrs, theme); }
	void applyTheme(jni::ref<android::content::res::Resources_Theme> t) { return call_method<"applyTheme", void>(t); }
	jboolean getPadding(jni::ref<android::graphics::Rect> padding) { return call_method<"getPadding", jboolean>(padding); }
	jint getOpacity() { return call_method<"getOpacity", jint>(); }
	jint getIntrinsicWidth() { return call_method<"getIntrinsicWidth", jint>(); }
	jint getIntrinsicHeight() { return call_method<"getIntrinsicHeight", jint>(); }
	void getOutline(jni::ref<android::graphics::Outline> outline) { return call_method<"getOutline", void>(outline); }

protected:

	InsetDrawable(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_GRAPHICS_DRAWABLE_INSETDRAWABLE