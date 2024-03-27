// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVA_AWT_FONTMETRICS_FWD
#define SCAPIX_JAVA_API_JAVA_AWT_FONTMETRICS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::awt { class FontMetrics; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::awt::FontMetrics>
{
	static constexpr fixed_string class_name = "java/awt/FontMetrics";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_FONTMETRICS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_AWT_FONTMETRICS)
#define SCAPIX_JAVA_API_JAVA_AWT_FONTMETRICS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Font.h>
#include <scapix/java_api/java/awt/Graphics.h>
#include <scapix/java_api/java/awt/font/FontRenderContext.h>
#include <scapix/java_api/java/awt/font/LineMetrics.h>
#include <scapix/java_api/java/awt/geom/Rectangle2D.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/text/CharacterIterator.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::awt::FontMetrics : public jni::object_base<"java/awt/FontMetrics",
	java::lang::Object,
	java::io::Serializable>
{
public:

	jni::ref<java::awt::Font> getFont() { return call_method<"getFont", jni::ref<java::awt::Font>>(); }
	jni::ref<java::awt::font::FontRenderContext> getFontRenderContext() { return call_method<"getFontRenderContext", jni::ref<java::awt::font::FontRenderContext>>(); }
	jint getLeading() { return call_method<"getLeading", jint>(); }
	jint getAscent() { return call_method<"getAscent", jint>(); }
	jint getDescent() { return call_method<"getDescent", jint>(); }
	jint getHeight() { return call_method<"getHeight", jint>(); }
	jint getMaxAscent() { return call_method<"getMaxAscent", jint>(); }
	jint getMaxDescent() { return call_method<"getMaxDescent", jint>(); }
	jint getMaxDecent() { return call_method<"getMaxDecent", jint>(); }
	jint getMaxAdvance() { return call_method<"getMaxAdvance", jint>(); }
	jint charWidth(jint p1) { return call_method<"charWidth", jint>(p1); }
	jint charWidth(jchar p1) { return call_method<"charWidth", jint>(p1); }
	jint stringWidth(jni::ref<java::lang::String> p1) { return call_method<"stringWidth", jint>(p1); }
	jint charsWidth(jni::ref<jni::array<jchar>> p1, jint p2, jint p3) { return call_method<"charsWidth", jint>(p1, p2, p3); }
	jint bytesWidth(jni::ref<jni::array<jbyte>> p1, jint p2, jint p3) { return call_method<"bytesWidth", jint>(p1, p2, p3); }
	jni::ref<jni::array<jint>> getWidths() { return call_method<"getWidths", jni::ref<jni::array<jint>>>(); }
	jboolean hasUniformLineMetrics() { return call_method<"hasUniformLineMetrics", jboolean>(); }
	jni::ref<java::awt::font::LineMetrics> getLineMetrics(jni::ref<java::lang::String> p1, jni::ref<java::awt::Graphics> p2) { return call_method<"getLineMetrics", jni::ref<java::awt::font::LineMetrics>>(p1, p2); }
	jni::ref<java::awt::font::LineMetrics> getLineMetrics(jni::ref<java::lang::String> p1, jint p2, jint p3, jni::ref<java::awt::Graphics> p4) { return call_method<"getLineMetrics", jni::ref<java::awt::font::LineMetrics>>(p1, p2, p3, p4); }
	jni::ref<java::awt::font::LineMetrics> getLineMetrics(jni::ref<jni::array<jchar>> p1, jint p2, jint p3, jni::ref<java::awt::Graphics> p4) { return call_method<"getLineMetrics", jni::ref<java::awt::font::LineMetrics>>(p1, p2, p3, p4); }
	jni::ref<java::awt::font::LineMetrics> getLineMetrics(jni::ref<java::text::CharacterIterator> p1, jint p2, jint p3, jni::ref<java::awt::Graphics> p4) { return call_method<"getLineMetrics", jni::ref<java::awt::font::LineMetrics>>(p1, p2, p3, p4); }
	jni::ref<java::awt::geom::Rectangle2D> getStringBounds(jni::ref<java::lang::String> p1, jni::ref<java::awt::Graphics> p2) { return call_method<"getStringBounds", jni::ref<java::awt::geom::Rectangle2D>>(p1, p2); }
	jni::ref<java::awt::geom::Rectangle2D> getStringBounds(jni::ref<java::lang::String> p1, jint p2, jint p3, jni::ref<java::awt::Graphics> p4) { return call_method<"getStringBounds", jni::ref<java::awt::geom::Rectangle2D>>(p1, p2, p3, p4); }
	jni::ref<java::awt::geom::Rectangle2D> getStringBounds(jni::ref<jni::array<jchar>> p1, jint p2, jint p3, jni::ref<java::awt::Graphics> p4) { return call_method<"getStringBounds", jni::ref<java::awt::geom::Rectangle2D>>(p1, p2, p3, p4); }
	jni::ref<java::awt::geom::Rectangle2D> getStringBounds(jni::ref<java::text::CharacterIterator> p1, jint p2, jint p3, jni::ref<java::awt::Graphics> p4) { return call_method<"getStringBounds", jni::ref<java::awt::geom::Rectangle2D>>(p1, p2, p3, p4); }
	jni::ref<java::awt::geom::Rectangle2D> getMaxCharBounds(jni::ref<java::awt::Graphics> p1) { return call_method<"getMaxCharBounds", jni::ref<java::awt::geom::Rectangle2D>>(p1); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	FontMetrics(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_FONTMETRICS