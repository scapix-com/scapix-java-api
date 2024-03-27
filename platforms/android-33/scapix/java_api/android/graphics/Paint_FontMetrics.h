// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_GRAPHICS_PAINT_FONTMETRICS_FWD
#define SCAPIX_JAVA_API_ANDROID_GRAPHICS_PAINT_FONTMETRICS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::graphics { class Paint_FontMetrics; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::graphics::Paint_FontMetrics>
{
	static constexpr fixed_string class_name = "android/graphics/Paint$FontMetrics";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_GRAPHICS_PAINT_FONTMETRICS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_GRAPHICS_PAINT_FONTMETRICS)
#define SCAPIX_JAVA_API_ANDROID_GRAPHICS_PAINT_FONTMETRICS

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::graphics::Paint_FontMetrics : public jni::object_base<"android/graphics/Paint$FontMetrics",
	java::lang::Object>
{
public:

	jfloat ascent() { return get_field<"ascent", jfloat>(); }
	void ascent(jfloat v) { set_field<"ascent", jfloat>(v); }
	jfloat bottom() { return get_field<"bottom", jfloat>(); }
	void bottom(jfloat v) { set_field<"bottom", jfloat>(v); }
	jfloat descent() { return get_field<"descent", jfloat>(); }
	void descent(jfloat v) { set_field<"descent", jfloat>(v); }
	jfloat leading() { return get_field<"leading", jfloat>(); }
	void leading(jfloat v) { set_field<"leading", jfloat>(v); }
	jfloat top() { return get_field<"top", jfloat>(); }
	void top(jfloat v) { set_field<"top", jfloat>(v); }

	static jni::ref<android::graphics::Paint_FontMetrics> new_object() { return base_::new_object(); }

protected:

	Paint_FontMetrics(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_GRAPHICS_PAINT_FONTMETRICS