// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/awt/FontMetrics.h>

#ifndef SCAPIX_JAVA_API_SUN_FONT_FONTDESIGNMETRICS_FWD
#define SCAPIX_JAVA_API_SUN_FONT_FONTDESIGNMETRICS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::font { class FontDesignMetrics; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::font::FontDesignMetrics>
{
	static constexpr fixed_string class_name = "sun/font/FontDesignMetrics";
	using base_classes = std::tuple<scapix::java_api::java::awt::FontMetrics>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_FONT_FONTDESIGNMETRICS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_FONT_FONTDESIGNMETRICS)
#define SCAPIX_JAVA_API_SUN_FONT_FONTDESIGNMETRICS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Font.h>
#include <scapix/java_api/java/awt/font/FontRenderContext.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::font::FontDesignMetrics : public jni::object_base<"sun/font/FontDesignMetrics",
	java::awt::FontMetrics>
{
public:

	static jni::ref<sun::font::FontDesignMetrics> getMetrics(jni::ref<java::awt::Font> p1) { return call_static_method<"getMetrics", jni::ref<sun::font::FontDesignMetrics>>(p1); }
	static jni::ref<sun::font::FontDesignMetrics> getMetrics(jni::ref<java::awt::Font> p1, jni::ref<java::awt::font::FontRenderContext> p2) { return call_static_method<"getMetrics", jni::ref<sun::font::FontDesignMetrics>>(p1, p2); }
	jni::ref<java::awt::font::FontRenderContext> getFontRenderContext() { return call_method<"getFontRenderContext", jni::ref<java::awt::font::FontRenderContext>>(); }
	jint charWidth(jchar p1) { return call_method<"charWidth", jint>(p1); }
	jint charWidth(jint p1) { return call_method<"charWidth", jint>(p1); }
	jint stringWidth(jni::ref<java::lang::String> p1) { return call_method<"stringWidth", jint>(p1); }
	jint charsWidth(jni::ref<jni::array<jchar>> p1, jint p2, jint p3) { return call_method<"charsWidth", jint>(p1, p2, p3); }
	jni::ref<jni::array<jint>> getWidths() { return call_method<"getWidths", jni::ref<jni::array<jint>>>(); }
	jint getMaxAdvance() { return call_method<"getMaxAdvance", jint>(); }
	jint getAscent() { return call_method<"getAscent", jint>(); }
	jint getDescent() { return call_method<"getDescent", jint>(); }
	jint getLeading() { return call_method<"getLeading", jint>(); }
	jint getHeight() { return call_method<"getHeight", jint>(); }

protected:

	FontDesignMetrics(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_FONT_FONTDESIGNMETRICS