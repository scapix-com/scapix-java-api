// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/awt/font/LineMetrics.h>
#include <scapix/java_api/java/lang/Cloneable.h>

#ifndef SCAPIX_JAVA_API_SUN_FONT_FONTLINEMETRICS_FWD
#define SCAPIX_JAVA_API_SUN_FONT_FONTLINEMETRICS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::font { class FontLineMetrics; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::font::FontLineMetrics>
{
	static constexpr fixed_string class_name = "sun/font/FontLineMetrics";
	using base_classes = std::tuple<scapix::java_api::java::awt::font::LineMetrics, scapix::java_api::java::lang::Cloneable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_FONT_FONTLINEMETRICS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_FONT_FONTLINEMETRICS)
#define SCAPIX_JAVA_API_SUN_FONT_FONTLINEMETRICS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/font/FontRenderContext.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/sun/font/CoreMetrics.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::font::FontLineMetrics : public jni::object_base<"sun/font/FontLineMetrics",
	java::awt::font::LineMetrics,
	java::lang::Cloneable>
{
public:

	jint numchars() { return get_field<"numchars", jint>(); }
	void numchars(jint v) { set_field<"numchars", jint>(v); }
	jni::ref<sun::font::CoreMetrics> cm() { return get_field<"cm", jni::ref<sun::font::CoreMetrics>>(); }
	jni::ref<java::awt::font::FontRenderContext> frc() { return get_field<"frc", jni::ref<java::awt::font::FontRenderContext>>(); }

	static jni::ref<sun::font::FontLineMetrics> new_object(jint p1, jni::ref<sun::font::CoreMetrics> p2, jni::ref<java::awt::font::FontRenderContext> p3) { return base_::new_object(p1, p2, p3); }
	jint getNumChars() { return call_method<"getNumChars", jint>(); }
	jfloat getAscent() { return call_method<"getAscent", jfloat>(); }
	jfloat getDescent() { return call_method<"getDescent", jfloat>(); }
	jfloat getLeading() { return call_method<"getLeading", jfloat>(); }
	jfloat getHeight() { return call_method<"getHeight", jfloat>(); }
	jint getBaselineIndex() { return call_method<"getBaselineIndex", jint>(); }
	jni::ref<jni::array<jfloat>> getBaselineOffsets() { return call_method<"getBaselineOffsets", jni::ref<jni::array<jfloat>>>(); }
	jfloat getStrikethroughOffset() { return call_method<"getStrikethroughOffset", jfloat>(); }
	jfloat getStrikethroughThickness() { return call_method<"getStrikethroughThickness", jfloat>(); }
	jfloat getUnderlineOffset() { return call_method<"getUnderlineOffset", jfloat>(); }
	jfloat getUnderlineThickness() { return call_method<"getUnderlineThickness", jfloat>(); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jni::ref<java::lang::Object> clone() { return call_method<"clone", jni::ref<java::lang::Object>>(); }

protected:

	FontLineMetrics(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_FONT_FONTLINEMETRICS
