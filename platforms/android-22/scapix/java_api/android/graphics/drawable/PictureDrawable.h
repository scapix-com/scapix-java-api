// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/graphics/drawable/Drawable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_GRAPHICS_DRAWABLE_PICTUREDRAWABLE_FWD
#define SCAPIX_JAVA_API_ANDROID_GRAPHICS_DRAWABLE_PICTUREDRAWABLE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::graphics::drawable { class PictureDrawable; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::graphics::drawable::PictureDrawable>
{
	static constexpr fixed_string class_name = "android/graphics/drawable/PictureDrawable";
	using base_classes = std::tuple<scapix::java_api::android::graphics::drawable::Drawable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_GRAPHICS_DRAWABLE_PICTUREDRAWABLE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_GRAPHICS_DRAWABLE_PICTUREDRAWABLE)
#define SCAPIX_JAVA_API_ANDROID_GRAPHICS_DRAWABLE_PICTUREDRAWABLE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/graphics/Canvas.h>
#include <scapix/java_api/android/graphics/ColorFilter.h>
#include <scapix/java_api/android/graphics/Picture.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::graphics::drawable::PictureDrawable : public jni::object_base<"android/graphics/drawable/PictureDrawable",
	android::graphics::drawable::Drawable>
{
public:

	static jni::ref<android::graphics::drawable::PictureDrawable> new_object(jni::ref<android::graphics::Picture> picture) { return base_::new_object(picture); }
	jni::ref<android::graphics::Picture> getPicture() { return call_method<"getPicture", jni::ref<android::graphics::Picture>>(); }
	void setPicture(jni::ref<android::graphics::Picture> picture) { return call_method<"setPicture", void>(picture); }
	void draw(jni::ref<android::graphics::Canvas> canvas) { return call_method<"draw", void>(canvas); }
	jint getIntrinsicWidth() { return call_method<"getIntrinsicWidth", jint>(); }
	jint getIntrinsicHeight() { return call_method<"getIntrinsicHeight", jint>(); }
	jint getOpacity() { return call_method<"getOpacity", jint>(); }
	void setFilterBitmap(jboolean filter) { return call_method<"setFilterBitmap", void>(filter); }
	void setDither(jboolean dither) { return call_method<"setDither", void>(dither); }
	void setColorFilter(jni::ref<android::graphics::ColorFilter> colorFilter) { return call_method<"setColorFilter", void>(colorFilter); }
	void setAlpha(jint alpha) { return call_method<"setAlpha", void>(alpha); }

protected:

	PictureDrawable(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_GRAPHICS_DRAWABLE_PICTUREDRAWABLE