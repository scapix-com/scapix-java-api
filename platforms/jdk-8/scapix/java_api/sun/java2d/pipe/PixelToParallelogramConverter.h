// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/java2d/pipe/PixelToShapeConverter.h>
#include <scapix/java_api/sun/java2d/pipe/ShapeDrawPipe.h>

#ifndef SCAPIX_JAVA_API_SUN_JAVA2D_PIPE_PIXELTOPARALLELOGRAMCONVERTER_FWD
#define SCAPIX_JAVA_API_SUN_JAVA2D_PIPE_PIXELTOPARALLELOGRAMCONVERTER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::java2d::pipe { class PixelToParallelogramConverter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::java2d::pipe::PixelToParallelogramConverter>
{
	static constexpr fixed_string class_name = "sun/java2d/pipe/PixelToParallelogramConverter";
	using base_classes = std::tuple<scapix::java_api::sun::java2d::pipe::PixelToShapeConverter, scapix::java_api::sun::java2d::pipe::ShapeDrawPipe>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_JAVA2D_PIPE_PIXELTOPARALLELOGRAMCONVERTER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_JAVA2D_PIPE_PIXELTOPARALLELOGRAMCONVERTER)
#define SCAPIX_JAVA_API_SUN_JAVA2D_PIPE_PIXELTOPARALLELOGRAMCONVERTER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Shape.h>
#include <scapix/java_api/sun/java2d/SunGraphics2D.h>
#include <scapix/java_api/sun/java2d/pipe/ParallelogramPipe.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::java2d::pipe::PixelToParallelogramConverter : public jni::object_base<"sun/java2d/pipe/PixelToParallelogramConverter",
	sun::java2d::pipe::PixelToShapeConverter,
	sun::java2d::pipe::ShapeDrawPipe>
{
public:

	static jni::ref<sun::java2d::pipe::PixelToParallelogramConverter> new_object(jni::ref<sun::java2d::pipe::ShapeDrawPipe> p1, jni::ref<sun::java2d::pipe::ParallelogramPipe> p2, jdouble p3, jdouble p4, jboolean p5) { return base_::new_object(p1, p2, p3, p4, p5); }
	void drawLine(jni::ref<sun::java2d::SunGraphics2D> p1, jint p2, jint p3, jint p4, jint p5) { return call_method<"drawLine", void>(p1, p2, p3, p4, p5); }
	void drawRect(jni::ref<sun::java2d::SunGraphics2D> p1, jint p2, jint p3, jint p4, jint p5) { return call_method<"drawRect", void>(p1, p2, p3, p4, p5); }
	void fillRect(jni::ref<sun::java2d::SunGraphics2D> p1, jint p2, jint p3, jint p4, jint p5) { return call_method<"fillRect", void>(p1, p2, p3, p4, p5); }
	void draw(jni::ref<sun::java2d::SunGraphics2D> p1, jni::ref<java::awt::Shape> p2) { return call_method<"draw", void>(p1, p2); }
	void fill(jni::ref<sun::java2d::SunGraphics2D> p1, jni::ref<java::awt::Shape> p2) { return call_method<"fill", void>(p1, p2); }
	jboolean drawGeneralLine(jni::ref<sun::java2d::SunGraphics2D> p1, jdouble p2, jdouble p3, jdouble p4, jdouble p5) { return call_method<"drawGeneralLine", jboolean>(p1, p2, p3, p4, p5); }
	void fillRectangle(jni::ref<sun::java2d::SunGraphics2D> p1, jdouble p2, jdouble p3, jdouble p4, jdouble p5) { return call_method<"fillRectangle", void>(p1, p2, p3, p4, p5); }
	void drawRectangle(jni::ref<sun::java2d::SunGraphics2D> p1, jdouble p2, jdouble p3, jdouble p4, jdouble p5, jdouble p6) { return call_method<"drawRectangle", void>(p1, p2, p3, p4, p5, p6); }
	void fillOuterParallelogram(jni::ref<sun::java2d::SunGraphics2D> p1, jdouble p2, jdouble p3, jdouble p4, jdouble p5, jdouble p6, jdouble p7, jdouble p8, jdouble p9, jdouble p10, jdouble p11, jdouble p12, jdouble p13, jdouble p14, jdouble p15) { return call_method<"fillOuterParallelogram", void>(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15); }

protected:

	PixelToParallelogramConverter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_JAVA2D_PIPE_PIXELTOPARALLELOGRAMCONVERTER
