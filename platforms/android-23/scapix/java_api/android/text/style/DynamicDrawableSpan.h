// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/text/style/ReplacementSpan.h>

#ifndef SCAPIX_JAVA_API_ANDROID_TEXT_STYLE_DYNAMICDRAWABLESPAN_FWD
#define SCAPIX_JAVA_API_ANDROID_TEXT_STYLE_DYNAMICDRAWABLESPAN_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::text::style { class DynamicDrawableSpan; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::text::style::DynamicDrawableSpan>
{
	static constexpr fixed_string class_name = "android/text/style/DynamicDrawableSpan";
	using base_classes = std::tuple<scapix::java_api::android::text::style::ReplacementSpan>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TEXT_STYLE_DYNAMICDRAWABLESPAN_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_TEXT_STYLE_DYNAMICDRAWABLESPAN)
#define SCAPIX_JAVA_API_ANDROID_TEXT_STYLE_DYNAMICDRAWABLESPAN

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/graphics/Canvas.h>
#include <scapix/java_api/android/graphics/Paint.h>
#include <scapix/java_api/android/graphics/Paint_FontMetricsInt.h>
#include <scapix/java_api/android/graphics/drawable/Drawable.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::text::style::DynamicDrawableSpan : public jni::object_base<"android/text/style/DynamicDrawableSpan",
	android::text::style::ReplacementSpan>
{
public:

	static jint ALIGN_BASELINE() { return get_static_field<"ALIGN_BASELINE", jint>(); }
	static jint ALIGN_BOTTOM() { return get_static_field<"ALIGN_BOTTOM", jint>(); }

	static jni::ref<android::text::style::DynamicDrawableSpan> new_object() { return base_::new_object(); }
	jint getVerticalAlignment() { return call_method<"getVerticalAlignment", jint>(); }
	jni::ref<android::graphics::drawable::Drawable> getDrawable() { return call_method<"getDrawable", jni::ref<android::graphics::drawable::Drawable>>(); }
	jint getSize(jni::ref<android::graphics::Paint> paint, jni::ref<java::lang::CharSequence> text, jint start, jint end, jni::ref<android::graphics::Paint_FontMetricsInt> fm) { return call_method<"getSize", jint>(paint, text, start, end, fm); }
	void draw(jni::ref<android::graphics::Canvas> canvas, jni::ref<java::lang::CharSequence> text, jint start, jint end, jfloat x, jint top, jint y, jint bottom, jni::ref<android::graphics::Paint> paint) { return call_method<"draw", void>(canvas, text, start, end, x, top, y, bottom, paint); }

protected:

	DynamicDrawableSpan(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TEXT_STYLE_DYNAMICDRAWABLESPAN