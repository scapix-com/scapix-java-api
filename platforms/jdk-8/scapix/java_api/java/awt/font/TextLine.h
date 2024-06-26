// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_AWT_FONT_TEXTLINE_FWD
#define SCAPIX_JAVA_API_JAVA_AWT_FONT_TEXTLINE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::awt::font { class TextLine; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::awt::font::TextLine>
{
	static constexpr fixed_string class_name = "java/awt/font/TextLine";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_FONT_TEXTLINE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_AWT_FONT_TEXTLINE)
#define SCAPIX_JAVA_API_JAVA_AWT_FONT_TEXTLINE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Font.h>
#include <scapix/java_api/java/awt/Graphics2D.h>
#include <scapix/java_api/java/awt/Rectangle.h>
#include <scapix/java_api/java/awt/Shape.h>
#include <scapix/java_api/java/awt/font/FontRenderContext.h>
#include <scapix/java_api/java/awt/font/StyledParagraph.h>
#include <scapix/java_api/java/awt/font/TextLine_TextLineMetrics.h>
#include <scapix/java_api/java/awt/geom/AffineTransform.h>
#include <scapix/java_api/java/awt/geom/Rectangle2D.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/text/AttributedCharacterIterator.h>
#include <scapix/java_api/java/util/Map.h>
#include <scapix/java_api/sun/font/CoreMetrics.h>
#include <scapix/java_api/sun/font/Decoration.h>
#include <scapix/java_api/sun/font/TextLabelFactory.h>
#include <scapix/java_api/sun/font/TextLineComponent.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::awt::font::TextLine : public jni::object_base<"java/awt/font/TextLine",
	java::lang::Object>
{
public:

	static jni::ref<java::awt::font::TextLine> new_object(jni::ref<java::awt::font::FontRenderContext> p1, jni::ref<jni::array<sun::font::TextLineComponent>> p2, jni::ref<jni::array<jfloat>> p3, jni::ref<jni::array<jchar>> p4, jint p5, jint p6, jni::ref<jni::array<jint>> p7, jni::ref<jni::array<jbyte>> p8, jboolean p9) { return base_::new_object(p1, p2, p3, p4, p5, p6, p7, p8, p9); }
	jni::ref<java::awt::Rectangle> getPixelBounds(jni::ref<java::awt::font::FontRenderContext> p1, jfloat p2, jfloat p3) { return call_method<"getPixelBounds", jni::ref<java::awt::Rectangle>>(p1, p2, p3); }
	jint characterCount() { return call_method<"characterCount", jint>(); }
	jboolean isDirectionLTR() { return call_method<"isDirectionLTR", jboolean>(); }
	jni::ref<java::awt::font::TextLine_TextLineMetrics> getMetrics() { return call_method<"getMetrics", jni::ref<java::awt::font::TextLine_TextLineMetrics>>(); }
	jint visualToLogical(jint p1) { return call_method<"visualToLogical", jint>(p1); }
	jint logicalToVisual(jint p1) { return call_method<"logicalToVisual", jint>(p1); }
	jbyte getCharLevel(jint p1) { return call_method<"getCharLevel", jbyte>(p1); }
	jboolean isCharLTR(jint p1) { return call_method<"isCharLTR", jboolean>(p1); }
	jint getCharType(jint p1) { return call_method<"getCharType", jint>(p1); }
	jboolean isCharSpace(jint p1) { return call_method<"isCharSpace", jboolean>(p1); }
	jboolean isCharWhitespace(jint p1) { return call_method<"isCharWhitespace", jboolean>(p1); }
	jfloat getCharAngle(jint p1) { return call_method<"getCharAngle", jfloat>(p1); }
	jni::ref<sun::font::CoreMetrics> getCoreMetricsAt(jint p1) { return call_method<"getCoreMetricsAt", jni::ref<sun::font::CoreMetrics>>(p1); }
	jfloat getCharAscent(jint p1) { return call_method<"getCharAscent", jfloat>(p1); }
	jfloat getCharDescent(jint p1) { return call_method<"getCharDescent", jfloat>(p1); }
	jfloat getCharShift(jint p1) { return call_method<"getCharShift", jfloat>(p1); }
	jfloat getCharAdvance(jint p1) { return call_method<"getCharAdvance", jfloat>(p1); }
	jfloat getCharXPosition(jint p1) { return call_method<"getCharXPosition", jfloat>(p1); }
	jfloat getCharYPosition(jint p1) { return call_method<"getCharYPosition", jfloat>(p1); }
	jfloat getCharLinePosition(jint p1) { return call_method<"getCharLinePosition", jfloat>(p1); }
	jfloat getCharLinePosition(jint p1, jboolean p2) { return call_method<"getCharLinePosition", jfloat>(p1, p2); }
	jboolean caretAtOffsetIsValid(jint p1) { return call_method<"caretAtOffsetIsValid", jboolean>(p1); }
	jni::ref<java::awt::geom::Rectangle2D> getCharBounds(jint p1) { return call_method<"getCharBounds", jni::ref<java::awt::geom::Rectangle2D>>(p1); }
	void draw(jni::ref<java::awt::Graphics2D> p1, jfloat p2, jfloat p3) { return call_method<"draw", void>(p1, p2, p3); }
	jni::ref<java::awt::geom::Rectangle2D> getVisualBounds() { return call_method<"getVisualBounds", jni::ref<java::awt::geom::Rectangle2D>>(); }
	jni::ref<java::awt::geom::Rectangle2D> getItalicBounds() { return call_method<"getItalicBounds", jni::ref<java::awt::geom::Rectangle2D>>(); }
	jni::ref<java::awt::Shape> getOutline(jni::ref<java::awt::geom::AffineTransform> p1) { return call_method<"getOutline", jni::ref<java::awt::Shape>>(p1); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	static jni::ref<java::awt::font::TextLine> fastCreateTextLine(jni::ref<java::awt::font::FontRenderContext> p1, jni::ref<jni::array<jchar>> p2, jni::ref<java::awt::Font> p3, jni::ref<sun::font::CoreMetrics> p4, jni::ref<java::util::Map> p5) { return call_static_method<"fastCreateTextLine", jni::ref<java::awt::font::TextLine>>(p1, p2, p3, p4, p5); }
	static jni::ref<jni::array<sun::font::TextLineComponent>> createComponentsOnRun(jint p1, jint p2, jni::ref<jni::array<jchar>> p3, jni::ref<jni::array<jint>> p4, jni::ref<jni::array<jbyte>> p5, jni::ref<sun::font::TextLabelFactory> p6, jni::ref<java::awt::Font> p7, jni::ref<sun::font::CoreMetrics> p8, jni::ref<java::awt::font::FontRenderContext> p9, jni::ref<sun::font::Decoration> p10, jni::ref<jni::array<sun::font::TextLineComponent>> p11, jint p12) { return call_static_method<"createComponentsOnRun", jni::ref<jni::array<sun::font::TextLineComponent>>>(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); }
	static jni::ref<jni::array<sun::font::TextLineComponent>> getComponents(jni::ref<java::awt::font::StyledParagraph> p1, jni::ref<jni::array<jchar>> p2, jint p3, jint p4, jni::ref<jni::array<jint>> p5, jni::ref<jni::array<jbyte>> p6, jni::ref<sun::font::TextLabelFactory> p7) { return call_static_method<"getComponents", jni::ref<jni::array<sun::font::TextLineComponent>>>(p1, p2, p3, p4, p5, p6, p7); }
	static jni::ref<java::awt::font::TextLine> createLineFromText(jni::ref<jni::array<jchar>> p1, jni::ref<java::awt::font::StyledParagraph> p2, jni::ref<sun::font::TextLabelFactory> p3, jboolean p4, jni::ref<jni::array<jfloat>> p5) { return call_static_method<"createLineFromText", jni::ref<java::awt::font::TextLine>>(p1, p2, p3, p4, p5); }
	static jni::ref<java::awt::font::TextLine> standardCreateTextLine(jni::ref<java::awt::font::FontRenderContext> p1, jni::ref<java::text::AttributedCharacterIterator> p2, jni::ref<jni::array<jchar>> p3, jni::ref<jni::array<jfloat>> p4) { return call_static_method<"standardCreateTextLine", jni::ref<java::awt::font::TextLine>>(p1, p2, p3, p4); }
	jni::ref<java::awt::font::TextLine> getJustifiedLine(jfloat p1, jfloat p2, jint p3, jint p4) { return call_method<"getJustifiedLine", jni::ref<java::awt::font::TextLine>>(p1, p2, p3, p4); }
	static jfloat getAdvanceBetween(jni::ref<jni::array<sun::font::TextLineComponent>> p1, jint p2, jint p3) { return call_static_method<"getAdvanceBetween", jfloat>(p1, p2, p3); }

protected:

	TextLine(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_FONT_TEXTLINE
