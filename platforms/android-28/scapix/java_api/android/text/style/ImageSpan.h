// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/text/style/DynamicDrawableSpan.h>

#ifndef SCAPIX_JAVA_API_ANDROID_TEXT_STYLE_IMAGESPAN_FWD
#define SCAPIX_JAVA_API_ANDROID_TEXT_STYLE_IMAGESPAN_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::text::style { class ImageSpan; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::text::style::ImageSpan>
{
	static constexpr fixed_string class_name = "android/text/style/ImageSpan";
	using base_classes = std::tuple<scapix::java_api::android::text::style::DynamicDrawableSpan>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TEXT_STYLE_IMAGESPAN_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_TEXT_STYLE_IMAGESPAN)
#define SCAPIX_JAVA_API_ANDROID_TEXT_STYLE_IMAGESPAN

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/graphics/Bitmap.h>
#include <scapix/java_api/android/graphics/drawable/Drawable.h>
#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::text::style::ImageSpan : public jni::object_base<"android/text/style/ImageSpan",
	android::text::style::DynamicDrawableSpan>
{
public:

	static jni::ref<android::text::style::ImageSpan> new_object(jni::ref<android::graphics::Bitmap> b) { return base_::new_object(b); }
	static jni::ref<android::text::style::ImageSpan> new_object(jni::ref<android::graphics::Bitmap> b, jint verticalAlignment) { return base_::new_object(b, verticalAlignment); }
	static jni::ref<android::text::style::ImageSpan> new_object(jni::ref<android::content::Context> context, jni::ref<android::graphics::Bitmap> bitmap) { return base_::new_object(context, bitmap); }
	static jni::ref<android::text::style::ImageSpan> new_object(jni::ref<android::content::Context> context, jni::ref<android::graphics::Bitmap> bitmap, jint verticalAlignment) { return base_::new_object(context, bitmap, verticalAlignment); }
	static jni::ref<android::text::style::ImageSpan> new_object(jni::ref<android::graphics::drawable::Drawable> drawable) { return base_::new_object(drawable); }
	static jni::ref<android::text::style::ImageSpan> new_object(jni::ref<android::graphics::drawable::Drawable> drawable, jint verticalAlignment) { return base_::new_object(drawable, verticalAlignment); }
	static jni::ref<android::text::style::ImageSpan> new_object(jni::ref<android::graphics::drawable::Drawable> drawable, jni::ref<java::lang::String> source) { return base_::new_object(drawable, source); }
	static jni::ref<android::text::style::ImageSpan> new_object(jni::ref<android::graphics::drawable::Drawable> drawable, jni::ref<java::lang::String> source, jint verticalAlignment) { return base_::new_object(drawable, source, verticalAlignment); }
	static jni::ref<android::text::style::ImageSpan> new_object(jni::ref<android::content::Context> context, jni::ref<android::net::Uri> uri) { return base_::new_object(context, uri); }
	static jni::ref<android::text::style::ImageSpan> new_object(jni::ref<android::content::Context> context, jni::ref<android::net::Uri> uri, jint verticalAlignment) { return base_::new_object(context, uri, verticalAlignment); }
	static jni::ref<android::text::style::ImageSpan> new_object(jni::ref<android::content::Context> context, jint resourceId) { return base_::new_object(context, resourceId); }
	static jni::ref<android::text::style::ImageSpan> new_object(jni::ref<android::content::Context> context, jint resourceId, jint verticalAlignment) { return base_::new_object(context, resourceId, verticalAlignment); }
	jni::ref<android::graphics::drawable::Drawable> getDrawable() { return call_method<"getDrawable", jni::ref<android::graphics::drawable::Drawable>>(); }
	jni::ref<java::lang::String> getSource() { return call_method<"getSource", jni::ref<java::lang::String>>(); }

protected:

	ImageSpan(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TEXT_STYLE_IMAGESPAN
