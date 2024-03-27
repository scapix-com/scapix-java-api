// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/awt/Graphics2D.h>
#include <scapix/java_api/sun/awt/ConstrainableGraphics.h>
#include <scapix/java_api/java/lang/Cloneable.h>
#include <scapix/java_api/sun/java2d/DestSurfaceProvider.h>

#ifndef SCAPIX_JAVA_API_SUN_JAVA2D_SUNGRAPHICS2D_FWD
#define SCAPIX_JAVA_API_SUN_JAVA2D_SUNGRAPHICS2D_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::java2d { class SunGraphics2D; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::java2d::SunGraphics2D>
{
	static constexpr fixed_string class_name = "sun/java2d/SunGraphics2D";
	using base_classes = std::tuple<scapix::java_api::java::awt::Graphics2D, scapix::java_api::sun::awt::ConstrainableGraphics, scapix::java_api::java::lang::Cloneable, scapix::java_api::sun::java2d::DestSurfaceProvider>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_JAVA2D_SUNGRAPHICS2D_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_JAVA2D_SUNGRAPHICS2D)
#define SCAPIX_JAVA_API_SUN_JAVA2D_SUNGRAPHICS2D

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Color.h>
#include <scapix/java_api/java/awt/Composite.h>
#include <scapix/java_api/java/awt/Font.h>
#include <scapix/java_api/java/awt/FontMetrics.h>
#include <scapix/java_api/java/awt/Graphics.h>
#include <scapix/java_api/java/awt/GraphicsConfiguration.h>
#include <scapix/java_api/java/awt/Image.h>
#include <scapix/java_api/java/awt/Paint.h>
#include <scapix/java_api/java/awt/Rectangle.h>
#include <scapix/java_api/java/awt/RenderingHints.h>
#include <scapix/java_api/java/awt/RenderingHints_Key.h>
#include <scapix/java_api/java/awt/Shape.h>
#include <scapix/java_api/java/awt/Stroke.h>
#include <scapix/java_api/java/awt/font/FontRenderContext.h>
#include <scapix/java_api/java/awt/font/GlyphVector.h>
#include <scapix/java_api/java/awt/geom/AffineTransform.h>
#include <scapix/java_api/java/awt/image/BufferedImage.h>
#include <scapix/java_api/java/awt/image/BufferedImageOp.h>
#include <scapix/java_api/java/awt/image/ColorModel.h>
#include <scapix/java_api/java/awt/image/ImageObserver.h>
#include <scapix/java_api/java/awt/image/RenderedImage.h>
#include <scapix/java_api/java/awt/image/renderable/RenderableImage.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/text/AttributedCharacterIterator.h>
#include <scapix/java_api/java/util/Map.h>
#include <scapix/java_api/sun/java2d/Surface.h>
#include <scapix/java_api/sun/java2d/SurfaceData.h>
#include <scapix/java_api/sun/java2d/loops/CompositeType.h>
#include <scapix/java_api/sun/java2d/loops/FontInfo.h>
#include <scapix/java_api/sun/java2d/loops/MaskFill.h>
#include <scapix/java_api/sun/java2d/loops/RenderLoops.h>
#include <scapix/java_api/sun/java2d/pipe/DrawImagePipe.h>
#include <scapix/java_api/sun/java2d/pipe/PixelDrawPipe.h>
#include <scapix/java_api/sun/java2d/pipe/PixelFillPipe.h>
#include <scapix/java_api/sun/java2d/pipe/Region.h>
#include <scapix/java_api/sun/java2d/pipe/ShapeDrawPipe.h>
#include <scapix/java_api/sun/java2d/pipe/TextPipe.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::java2d::SunGraphics2D : public jni::object_base<"sun/java2d/SunGraphics2D",
	java::awt::Graphics2D,
	sun::awt::ConstrainableGraphics,
	java::lang::Cloneable,
	sun::java2d::DestSurfaceProvider>
{
public:

	static jint PAINT_CUSTOM() { return get_static_field<"PAINT_CUSTOM", jint>(); }
	static jint PAINT_TEXTURE() { return get_static_field<"PAINT_TEXTURE", jint>(); }
	static jint PAINT_RAD_GRADIENT() { return get_static_field<"PAINT_RAD_GRADIENT", jint>(); }
	static jint PAINT_LIN_GRADIENT() { return get_static_field<"PAINT_LIN_GRADIENT", jint>(); }
	static jint PAINT_GRADIENT() { return get_static_field<"PAINT_GRADIENT", jint>(); }
	static jint PAINT_ALPHACOLOR() { return get_static_field<"PAINT_ALPHACOLOR", jint>(); }
	static jint PAINT_OPAQUECOLOR() { return get_static_field<"PAINT_OPAQUECOLOR", jint>(); }
	static jint COMP_CUSTOM() { return get_static_field<"COMP_CUSTOM", jint>(); }
	static jint COMP_XOR() { return get_static_field<"COMP_XOR", jint>(); }
	static jint COMP_ALPHA() { return get_static_field<"COMP_ALPHA", jint>(); }
	static jint COMP_ISCOPY() { return get_static_field<"COMP_ISCOPY", jint>(); }
	static jint STROKE_CUSTOM() { return get_static_field<"STROKE_CUSTOM", jint>(); }
	static jint STROKE_WIDE() { return get_static_field<"STROKE_WIDE", jint>(); }
	static jint STROKE_THINDASHED() { return get_static_field<"STROKE_THINDASHED", jint>(); }
	static jint STROKE_THIN() { return get_static_field<"STROKE_THIN", jint>(); }
	static jint TRANSFORM_GENERIC() { return get_static_field<"TRANSFORM_GENERIC", jint>(); }
	static jint TRANSFORM_TRANSLATESCALE() { return get_static_field<"TRANSFORM_TRANSLATESCALE", jint>(); }
	static jint TRANSFORM_ANY_TRANSLATE() { return get_static_field<"TRANSFORM_ANY_TRANSLATE", jint>(); }
	static jint TRANSFORM_INT_TRANSLATE() { return get_static_field<"TRANSFORM_INT_TRANSLATE", jint>(); }
	static jint TRANSFORM_ISIDENT() { return get_static_field<"TRANSFORM_ISIDENT", jint>(); }
	static jint CLIP_SHAPE() { return get_static_field<"CLIP_SHAPE", jint>(); }
	static jint CLIP_RECTANGULAR() { return get_static_field<"CLIP_RECTANGULAR", jint>(); }
	static jint CLIP_DEVICE() { return get_static_field<"CLIP_DEVICE", jint>(); }
	jint eargb() { return get_field<"eargb", jint>(); }
	void eargb(jint v) { set_field<"eargb", jint>(v); }
	jint pixel() { return get_field<"pixel", jint>(); }
	void pixel(jint v) { set_field<"pixel", jint>(v); }
	jni::ref<sun::java2d::SurfaceData> surfaceData() { return get_field<"surfaceData", jni::ref<sun::java2d::SurfaceData>>(); }
	void surfaceData(jni::ref<sun::java2d::SurfaceData> v) { set_field<"surfaceData", jni::ref<sun::java2d::SurfaceData>>(v); }
	jni::ref<sun::java2d::pipe::PixelDrawPipe> drawpipe() { return get_field<"drawpipe", jni::ref<sun::java2d::pipe::PixelDrawPipe>>(); }
	void drawpipe(jni::ref<sun::java2d::pipe::PixelDrawPipe> v) { set_field<"drawpipe", jni::ref<sun::java2d::pipe::PixelDrawPipe>>(v); }
	jni::ref<sun::java2d::pipe::PixelFillPipe> fillpipe() { return get_field<"fillpipe", jni::ref<sun::java2d::pipe::PixelFillPipe>>(); }
	void fillpipe(jni::ref<sun::java2d::pipe::PixelFillPipe> v) { set_field<"fillpipe", jni::ref<sun::java2d::pipe::PixelFillPipe>>(v); }
	jni::ref<sun::java2d::pipe::DrawImagePipe> imagepipe() { return get_field<"imagepipe", jni::ref<sun::java2d::pipe::DrawImagePipe>>(); }
	void imagepipe(jni::ref<sun::java2d::pipe::DrawImagePipe> v) { set_field<"imagepipe", jni::ref<sun::java2d::pipe::DrawImagePipe>>(v); }
	jni::ref<sun::java2d::pipe::ShapeDrawPipe> shapepipe() { return get_field<"shapepipe", jni::ref<sun::java2d::pipe::ShapeDrawPipe>>(); }
	void shapepipe(jni::ref<sun::java2d::pipe::ShapeDrawPipe> v) { set_field<"shapepipe", jni::ref<sun::java2d::pipe::ShapeDrawPipe>>(v); }
	jni::ref<sun::java2d::pipe::TextPipe> textpipe() { return get_field<"textpipe", jni::ref<sun::java2d::pipe::TextPipe>>(); }
	void textpipe(jni::ref<sun::java2d::pipe::TextPipe> v) { set_field<"textpipe", jni::ref<sun::java2d::pipe::TextPipe>>(v); }
	jni::ref<sun::java2d::loops::MaskFill> alphafill() { return get_field<"alphafill", jni::ref<sun::java2d::loops::MaskFill>>(); }
	void alphafill(jni::ref<sun::java2d::loops::MaskFill> v) { set_field<"alphafill", jni::ref<sun::java2d::loops::MaskFill>>(v); }
	jni::ref<sun::java2d::loops::RenderLoops> loops() { return get_field<"loops", jni::ref<sun::java2d::loops::RenderLoops>>(); }
	void loops(jni::ref<sun::java2d::loops::RenderLoops> v) { set_field<"loops", jni::ref<sun::java2d::loops::RenderLoops>>(v); }
	jni::ref<sun::java2d::loops::CompositeType> imageComp() { return get_field<"imageComp", jni::ref<sun::java2d::loops::CompositeType>>(); }
	void imageComp(jni::ref<sun::java2d::loops::CompositeType> v) { set_field<"imageComp", jni::ref<sun::java2d::loops::CompositeType>>(v); }
	jint paintState() { return get_field<"paintState", jint>(); }
	void paintState(jint v) { set_field<"paintState", jint>(v); }
	jint compositeState() { return get_field<"compositeState", jint>(); }
	void compositeState(jint v) { set_field<"compositeState", jint>(v); }
	jint strokeState() { return get_field<"strokeState", jint>(); }
	void strokeState(jint v) { set_field<"strokeState", jint>(v); }
	jint transformState() { return get_field<"transformState", jint>(); }
	void transformState(jint v) { set_field<"transformState", jint>(v); }
	jint clipState() { return get_field<"clipState", jint>(); }
	void clipState(jint v) { set_field<"clipState", jint>(v); }
	jni::ref<java::awt::Color> foregroundColor() { return get_field<"foregroundColor", jni::ref<java::awt::Color>>(); }
	void foregroundColor(jni::ref<java::awt::Color> v) { set_field<"foregroundColor", jni::ref<java::awt::Color>>(v); }
	jni::ref<java::awt::Color> backgroundColor() { return get_field<"backgroundColor", jni::ref<java::awt::Color>>(); }
	void backgroundColor(jni::ref<java::awt::Color> v) { set_field<"backgroundColor", jni::ref<java::awt::Color>>(v); }
	jni::ref<java::awt::geom::AffineTransform> transform_() { return get_field<"transform", jni::ref<java::awt::geom::AffineTransform>>(); }
	void transform_(jni::ref<java::awt::geom::AffineTransform> v) { set_field<"transform", jni::ref<java::awt::geom::AffineTransform>>(v); }
	jint transX() { return get_field<"transX", jint>(); }
	void transX(jint v) { set_field<"transX", jint>(v); }
	jint transY() { return get_field<"transY", jint>(); }
	void transY(jint v) { set_field<"transY", jint>(v); }
	jni::ref<java::awt::Paint> paint() { return get_field<"paint", jni::ref<java::awt::Paint>>(); }
	void paint(jni::ref<java::awt::Paint> v) { set_field<"paint", jni::ref<java::awt::Paint>>(v); }
	jni::ref<java::awt::Stroke> stroke() { return get_field<"stroke", jni::ref<java::awt::Stroke>>(); }
	void stroke(jni::ref<java::awt::Stroke> v) { set_field<"stroke", jni::ref<java::awt::Stroke>>(v); }
	jni::ref<java::awt::Composite> composite() { return get_field<"composite", jni::ref<java::awt::Composite>>(); }
	void composite(jni::ref<java::awt::Composite> v) { set_field<"composite", jni::ref<java::awt::Composite>>(v); }
	jint renderHint() { return get_field<"renderHint", jint>(); }
	void renderHint(jint v) { set_field<"renderHint", jint>(v); }
	jint antialiasHint() { return get_field<"antialiasHint", jint>(); }
	void antialiasHint(jint v) { set_field<"antialiasHint", jint>(v); }
	jint textAntialiasHint() { return get_field<"textAntialiasHint", jint>(); }
	void textAntialiasHint(jint v) { set_field<"textAntialiasHint", jint>(v); }
	jint lcdTextContrast() { return get_field<"lcdTextContrast", jint>(); }
	void lcdTextContrast(jint v) { set_field<"lcdTextContrast", jint>(v); }
	jint strokeHint() { return get_field<"strokeHint", jint>(); }
	void strokeHint(jint v) { set_field<"strokeHint", jint>(v); }
	jint interpolationType() { return get_field<"interpolationType", jint>(); }
	void interpolationType(jint v) { set_field<"interpolationType", jint>(v); }
	jni::ref<java::awt::RenderingHints> hints() { return get_field<"hints", jni::ref<java::awt::RenderingHints>>(); }
	void hints(jni::ref<java::awt::RenderingHints> v) { set_field<"hints", jni::ref<java::awt::RenderingHints>>(v); }
	jni::ref<sun::java2d::pipe::Region> constrainClip() { return get_field<"constrainClip", jni::ref<sun::java2d::pipe::Region>>(); }
	void constrainClip(jni::ref<sun::java2d::pipe::Region> v) { set_field<"constrainClip", jni::ref<sun::java2d::pipe::Region>>(v); }
	jint constrainX() { return get_field<"constrainX", jint>(); }
	void constrainX(jint v) { set_field<"constrainX", jint>(v); }
	jint constrainY() { return get_field<"constrainY", jint>(); }
	void constrainY(jint v) { set_field<"constrainY", jint>(v); }
	jni::ref<sun::java2d::pipe::Region> clipRegion() { return get_field<"clipRegion", jni::ref<sun::java2d::pipe::Region>>(); }
	void clipRegion(jni::ref<sun::java2d::pipe::Region> v) { set_field<"clipRegion", jni::ref<sun::java2d::pipe::Region>>(v); }
	jni::ref<java::awt::Shape> usrClip() { return get_field<"usrClip", jni::ref<java::awt::Shape>>(); }
	void usrClip(jni::ref<java::awt::Shape> v) { set_field<"usrClip", jni::ref<java::awt::Shape>>(v); }
	static jdouble MinPenSizeAA() { return get_static_field<"MinPenSizeAA", jdouble>(); }
	static jdouble MinPenSizeAASquared() { return get_static_field<"MinPenSizeAASquared", jdouble>(); }
	static jdouble MinPenSizeSquared() { return get_static_field<"MinPenSizeSquared", jdouble>(); }

	static jni::ref<sun::java2d::SunGraphics2D> new_object(jni::ref<sun::java2d::SurfaceData> p1, jni::ref<java::awt::Color> p2, jni::ref<java::awt::Color> p3, jni::ref<java::awt::Font> p4) { return base_::new_object(p1, p2, p3, p4); }
	jni::ref<java::awt::Graphics> create() { return call_method<"create", jni::ref<java::awt::Graphics>>(); }
	void setDevClip(jint p1, jint p2, jint p3, jint p4) { return call_method<"setDevClip", void>(p1, p2, p3, p4); }
	void setDevClip(jni::ref<java::awt::Rectangle> p1) { return call_method<"setDevClip", void>(p1); }
	void constrain(jint p1, jint p2, jint p3, jint p4, jni::ref<sun::java2d::pipe::Region> p5) { return call_method<"constrain", void>(p1, p2, p3, p4, p5); }
	void constrain(jint p1, jint p2, jint p3, jint p4) { return call_method<"constrain", void>(p1, p2, p3, p4); }
	void validatePipe() { return call_method<"validatePipe", void>(); }
	jni::ref<sun::java2d::pipe::Region> getCompClip() { return call_method<"getCompClip", jni::ref<sun::java2d::pipe::Region>>(); }
	jni::ref<java::awt::Font> getFont() { return call_method<"getFont", jni::ref<java::awt::Font>>(); }
	jni::ref<sun::java2d::loops::FontInfo> checkFontInfo(jni::ref<sun::java2d::loops::FontInfo> p1, jni::ref<java::awt::Font> p2, jni::ref<java::awt::font::FontRenderContext> p3) { return call_method<"checkFontInfo", jni::ref<sun::java2d::loops::FontInfo>>(p1, p2, p3); }
	static jboolean isRotated(jni::ref<jni::array<jdouble>> p1) { return call_static_method<"isRotated", jboolean>(p1); }
	void setFont(jni::ref<java::awt::Font> p1) { return call_method<"setFont", void>(p1); }
	jni::ref<sun::java2d::loops::FontInfo> getFontInfo() { return call_method<"getFontInfo", jni::ref<sun::java2d::loops::FontInfo>>(); }
	jni::ref<sun::java2d::loops::FontInfo> getGVFontInfo(jni::ref<java::awt::Font> p1, jni::ref<java::awt::font::FontRenderContext> p2) { return call_method<"getGVFontInfo", jni::ref<sun::java2d::loops::FontInfo>>(p1, p2); }
	jni::ref<java::awt::FontMetrics> getFontMetrics() { return call_method<"getFontMetrics", jni::ref<java::awt::FontMetrics>>(); }
	jni::ref<java::awt::FontMetrics> getFontMetrics(jni::ref<java::awt::Font> p1) { return call_method<"getFontMetrics", jni::ref<java::awt::FontMetrics>>(p1); }
	jboolean hit(jni::ref<java::awt::Rectangle> p1, jni::ref<java::awt::Shape> p2, jboolean p3) { return call_method<"hit", jboolean>(p1, p2, p3); }
	jni::ref<java::awt::image::ColorModel> getDeviceColorModel() { return call_method<"getDeviceColorModel", jni::ref<java::awt::image::ColorModel>>(); }
	jni::ref<java::awt::GraphicsConfiguration> getDeviceConfiguration() { return call_method<"getDeviceConfiguration", jni::ref<java::awt::GraphicsConfiguration>>(); }
	jni::ref<sun::java2d::SurfaceData> getSurfaceData() { return call_method<"getSurfaceData", jni::ref<sun::java2d::SurfaceData>>(); }
	void setComposite(jni::ref<java::awt::Composite> p1) { return call_method<"setComposite", void>(p1); }
	void setPaint(jni::ref<java::awt::Paint> p1) { return call_method<"setPaint", void>(p1); }
	void setStroke(jni::ref<java::awt::Stroke> p1) { return call_method<"setStroke", void>(p1); }
	void setRenderingHint(jni::ref<java::awt::RenderingHints_Key> p1, jni::ref<java::lang::Object> p2) { return call_method<"setRenderingHint", void>(p1, p2); }
	jni::ref<java::lang::Object> getRenderingHint(jni::ref<java::awt::RenderingHints_Key> p1) { return call_method<"getRenderingHint", jni::ref<java::lang::Object>>(p1); }
	void setRenderingHints(jni::ref<java::util::Map> p1) { return call_method<"setRenderingHints", void>(p1); }
	void addRenderingHints(jni::ref<java::util::Map> p1) { return call_method<"addRenderingHints", void>(p1); }
	jni::ref<java::awt::RenderingHints> getRenderingHints() { return call_method<"getRenderingHints", jni::ref<java::awt::RenderingHints>>(); }
	void translate(jdouble p1, jdouble p2) { return call_method<"translate", void>(p1, p2); }
	void rotate(jdouble p1) { return call_method<"rotate", void>(p1); }
	void rotate(jdouble p1, jdouble p2, jdouble p3) { return call_method<"rotate", void>(p1, p2, p3); }
	void scale(jdouble p1, jdouble p2) { return call_method<"scale", void>(p1, p2); }
	void shear(jdouble p1, jdouble p2) { return call_method<"shear", void>(p1, p2); }
	void transform(jni::ref<java::awt::geom::AffineTransform> p1) { return call_method<"transform", void>(p1); }
	void translate(jint p1, jint p2) { return call_method<"translate", void>(p1, p2); }
	void setTransform(jni::ref<java::awt::geom::AffineTransform> p1) { return call_method<"setTransform", void>(p1); }
	jni::ref<java::awt::geom::AffineTransform> getTransform() { return call_method<"getTransform", jni::ref<java::awt::geom::AffineTransform>>(); }
	jni::ref<java::awt::geom::AffineTransform> cloneTransform() { return call_method<"cloneTransform", jni::ref<java::awt::geom::AffineTransform>>(); }
	jni::ref<java::awt::Paint> getPaint() { return call_method<"getPaint", jni::ref<java::awt::Paint>>(); }
	jni::ref<java::awt::Composite> getComposite() { return call_method<"getComposite", jni::ref<java::awt::Composite>>(); }
	jni::ref<java::awt::Color> getColor() { return call_method<"getColor", jni::ref<java::awt::Color>>(); }
	void setColor(jni::ref<java::awt::Color> p1) { return call_method<"setColor", void>(p1); }
	void setBackground(jni::ref<java::awt::Color> p1) { return call_method<"setBackground", void>(p1); }
	jni::ref<java::awt::Color> getBackground() { return call_method<"getBackground", jni::ref<java::awt::Color>>(); }
	jni::ref<java::awt::Stroke> getStroke() { return call_method<"getStroke", jni::ref<java::awt::Stroke>>(); }
	jni::ref<java::awt::Rectangle> getClipBounds() { return call_method<"getClipBounds", jni::ref<java::awt::Rectangle>>(); }
	jni::ref<java::awt::Rectangle> getClipBounds(jni::ref<java::awt::Rectangle> p1) { return call_method<"getClipBounds", jni::ref<java::awt::Rectangle>>(p1); }
	jboolean hitClip(jint p1, jint p2, jint p3, jint p4) { return call_method<"hitClip", jboolean>(p1, p2, p3, p4); }
	jni::ref<java::awt::Shape> untransformShape(jni::ref<java::awt::Shape> p1) { return call_method<"untransformShape", jni::ref<java::awt::Shape>>(p1); }
	void clipRect(jint p1, jint p2, jint p3, jint p4) { return call_method<"clipRect", void>(p1, p2, p3, p4); }
	void setClip(jint p1, jint p2, jint p3, jint p4) { return call_method<"setClip", void>(p1, p2, p3, p4); }
	jni::ref<java::awt::Shape> getClip() { return call_method<"getClip", jni::ref<java::awt::Shape>>(); }
	void setClip(jni::ref<java::awt::Shape> p1) { return call_method<"setClip", void>(p1); }
	void clip(jni::ref<java::awt::Shape> p1) { return call_method<"clip", void>(p1); }
	void setPaintMode() { return call_method<"setPaintMode", void>(); }
	void setXORMode(jni::ref<java::awt::Color> p1) { return call_method<"setXORMode", void>(p1); }
	void copyArea(jint p1, jint p2, jint p3, jint p4, jint p5, jint p6) { return call_method<"copyArea", void>(p1, p2, p3, p4, p5, p6); }
	void drawLine(jint p1, jint p2, jint p3, jint p4) { return call_method<"drawLine", void>(p1, p2, p3, p4); }
	void drawRoundRect(jint p1, jint p2, jint p3, jint p4, jint p5, jint p6) { return call_method<"drawRoundRect", void>(p1, p2, p3, p4, p5, p6); }
	void fillRoundRect(jint p1, jint p2, jint p3, jint p4, jint p5, jint p6) { return call_method<"fillRoundRect", void>(p1, p2, p3, p4, p5, p6); }
	void drawOval(jint p1, jint p2, jint p3, jint p4) { return call_method<"drawOval", void>(p1, p2, p3, p4); }
	void fillOval(jint p1, jint p2, jint p3, jint p4) { return call_method<"fillOval", void>(p1, p2, p3, p4); }
	void drawArc(jint p1, jint p2, jint p3, jint p4, jint p5, jint p6) { return call_method<"drawArc", void>(p1, p2, p3, p4, p5, p6); }
	void fillArc(jint p1, jint p2, jint p3, jint p4, jint p5, jint p6) { return call_method<"fillArc", void>(p1, p2, p3, p4, p5, p6); }
	void drawPolyline(jni::ref<jni::array<jint>> p1, jni::ref<jni::array<jint>> p2, jint p3) { return call_method<"drawPolyline", void>(p1, p2, p3); }
	void drawPolygon(jni::ref<jni::array<jint>> p1, jni::ref<jni::array<jint>> p2, jint p3) { return call_method<"drawPolygon", void>(p1, p2, p3); }
	void fillPolygon(jni::ref<jni::array<jint>> p1, jni::ref<jni::array<jint>> p2, jint p3) { return call_method<"fillPolygon", void>(p1, p2, p3); }
	void drawRect(jint p1, jint p2, jint p3, jint p4) { return call_method<"drawRect", void>(p1, p2, p3, p4); }
	void fillRect(jint p1, jint p2, jint p3, jint p4) { return call_method<"fillRect", void>(p1, p2, p3, p4); }
	void clearRect(jint p1, jint p2, jint p3, jint p4) { return call_method<"clearRect", void>(p1, p2, p3, p4); }
	void draw(jni::ref<java::awt::Shape> p1) { return call_method<"draw", void>(p1); }
	void fill(jni::ref<java::awt::Shape> p1) { return call_method<"fill", void>(p1); }
	void drawRenderedImage(jni::ref<java::awt::image::RenderedImage> p1, jni::ref<java::awt::geom::AffineTransform> p2) { return call_method<"drawRenderedImage", void>(p1, p2); }
	void drawRenderableImage(jni::ref<java::awt::image::renderable::RenderableImage> p1, jni::ref<java::awt::geom::AffineTransform> p2) { return call_method<"drawRenderableImage", void>(p1, p2); }
	void drawString(jni::ref<java::lang::String> p1, jint p2, jint p3) { return call_method<"drawString", void>(p1, p2, p3); }
	void drawString(jni::ref<java::lang::String> p1, jfloat p2, jfloat p3) { return call_method<"drawString", void>(p1, p2, p3); }
	void drawString(jni::ref<java::text::AttributedCharacterIterator> p1, jint p2, jint p3) { return call_method<"drawString", void>(p1, p2, p3); }
	void drawString(jni::ref<java::text::AttributedCharacterIterator> p1, jfloat p2, jfloat p3) { return call_method<"drawString", void>(p1, p2, p3); }
	void drawGlyphVector(jni::ref<java::awt::font::GlyphVector> p1, jfloat p2, jfloat p3) { return call_method<"drawGlyphVector", void>(p1, p2, p3); }
	void drawChars(jni::ref<jni::array<jchar>> p1, jint p2, jint p3, jint p4, jint p5) { return call_method<"drawChars", void>(p1, p2, p3, p4, p5); }
	void drawBytes(jni::ref<jni::array<jbyte>> p1, jint p2, jint p3, jint p4, jint p5) { return call_method<"drawBytes", void>(p1, p2, p3, p4, p5); }
	jboolean drawImage(jni::ref<java::awt::Image> p1, jint p2, jint p3, jint p4, jint p5, jni::ref<java::awt::image::ImageObserver> p6) { return call_method<"drawImage", jboolean>(p1, p2, p3, p4, p5, p6); }
	jboolean copyImage(jni::ref<java::awt::Image> p1, jint p2, jint p3, jint p4, jint p5, jint p6, jint p7, jni::ref<java::awt::Color> p8, jni::ref<java::awt::image::ImageObserver> p9) { return call_method<"copyImage", jboolean>(p1, p2, p3, p4, p5, p6, p7, p8, p9); }
	jboolean drawImage(jni::ref<java::awt::Image> p1, jint p2, jint p3, jint p4, jint p5, jni::ref<java::awt::Color> p6, jni::ref<java::awt::image::ImageObserver> p7) { return call_method<"drawImage", jboolean>(p1, p2, p3, p4, p5, p6, p7); }
	jboolean drawImage(jni::ref<java::awt::Image> p1, jint p2, jint p3, jni::ref<java::awt::image::ImageObserver> p4) { return call_method<"drawImage", jboolean>(p1, p2, p3, p4); }
	jboolean drawImage(jni::ref<java::awt::Image> p1, jint p2, jint p3, jni::ref<java::awt::Color> p4, jni::ref<java::awt::image::ImageObserver> p5) { return call_method<"drawImage", jboolean>(p1, p2, p3, p4, p5); }
	jboolean drawImage(jni::ref<java::awt::Image> p1, jint p2, jint p3, jint p4, jint p5, jint p6, jint p7, jint p8, jint p9, jni::ref<java::awt::image::ImageObserver> p10) { return call_method<"drawImage", jboolean>(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); }
	jboolean drawImage(jni::ref<java::awt::Image> p1, jint p2, jint p3, jint p4, jint p5, jint p6, jint p7, jint p8, jint p9, jni::ref<java::awt::Color> p10, jni::ref<java::awt::image::ImageObserver> p11) { return call_method<"drawImage", jboolean>(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); }
	jboolean drawImage(jni::ref<java::awt::Image> p1, jni::ref<java::awt::geom::AffineTransform> p2, jni::ref<java::awt::image::ImageObserver> p3) { return call_method<"drawImage", jboolean>(p1, p2, p3); }
	void drawImage(jni::ref<java::awt::image::BufferedImage> p1, jni::ref<java::awt::image::BufferedImageOp> p2, jint p3, jint p4) { return call_method<"drawImage", void>(p1, p2, p3, p4); }
	jni::ref<java::awt::font::FontRenderContext> getFontRenderContext() { return call_method<"getFontRenderContext", jni::ref<java::awt::font::FontRenderContext>>(); }
	void dispose() { return call_method<"dispose", void>(); }
	void finalize() { return call_method<"finalize", void>(); }
	jni::ref<java::lang::Object> getDestination() { return call_method<"getDestination", jni::ref<java::lang::Object>>(); }
	jni::ref<sun::java2d::Surface> getDestSurface() { return call_method<"getDestSurface", jni::ref<sun::java2d::Surface>>(); }

protected:

	SunGraphics2D(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_JAVA2D_SUNGRAPHICS2D