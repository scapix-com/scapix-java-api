// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/sun/java2d/pipe/ShapeDrawPipe.h>
#include <scapix/java_api/sun/java2d/pipe/ParallelogramPipe.h>

#ifndef SCAPIX_JAVA_API_SUN_JAVA2D_PIPE_AASHAPEPIPE_FWD
#define SCAPIX_JAVA_API_SUN_JAVA2D_PIPE_AASHAPEPIPE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::java2d::pipe { class AAShapePipe; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::java2d::pipe::AAShapePipe>
{
	static constexpr fixed_string class_name = "sun/java2d/pipe/AAShapePipe";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::sun::java2d::pipe::ShapeDrawPipe, scapix::java_api::sun::java2d::pipe::ParallelogramPipe>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_JAVA2D_PIPE_AASHAPEPIPE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_JAVA2D_PIPE_AASHAPEPIPE)
#define SCAPIX_JAVA_API_SUN_JAVA2D_PIPE_AASHAPEPIPE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/BasicStroke.h>
#include <scapix/java_api/java/awt/Shape.h>
#include <scapix/java_api/sun/java2d/SunGraphics2D.h>
#include <scapix/java_api/sun/java2d/pipe/AAShapePipe_TileState.h>
#include <scapix/java_api/sun/java2d/pipe/AATileGenerator.h>
#include <scapix/java_api/sun/java2d/pipe/CompositePipe.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::java2d::pipe::AAShapePipe : public jni::object_base<"sun/java2d/pipe/AAShapePipe",
	java::lang::Object,
	sun::java2d::pipe::ShapeDrawPipe,
	sun::java2d::pipe::ParallelogramPipe>
{
public:

	static jni::ref<sun::java2d::pipe::AAShapePipe> new_object(jni::ref<sun::java2d::pipe::CompositePipe> p1) { return base_::new_object(p1); }
	void draw(jni::ref<sun::java2d::SunGraphics2D> p1, jni::ref<java::awt::Shape> p2) { return call_method<"draw", void>(p1, p2); }
	void fill(jni::ref<sun::java2d::SunGraphics2D> p1, jni::ref<java::awt::Shape> p2) { return call_method<"fill", void>(p1, p2); }
	void fillParallelogram(jni::ref<sun::java2d::SunGraphics2D> p1, jdouble p2, jdouble p3, jdouble p4, jdouble p5, jdouble p6, jdouble p7, jdouble p8, jdouble p9, jdouble p10, jdouble p11) { return call_method<"fillParallelogram", void>(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); }
	void drawParallelogram(jni::ref<sun::java2d::SunGraphics2D> p1, jdouble p2, jdouble p3, jdouble p4, jdouble p5, jdouble p6, jdouble p7, jdouble p8, jdouble p9, jdouble p10, jdouble p11, jdouble p12, jdouble p13) { return call_method<"drawParallelogram", void>(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13); }
	void renderPath(jni::ref<sun::java2d::SunGraphics2D> p1, jni::ref<java::awt::Shape> p2, jni::ref<java::awt::BasicStroke> p3) { return call_method<"renderPath", void>(p1, p2, p3); }
	void renderTiles(jni::ref<sun::java2d::SunGraphics2D> p1, jni::ref<java::awt::Shape> p2, jni::ref<sun::java2d::pipe::AATileGenerator> p3, jni::ref<jni::array<jint>> p4, jni::ref<sun::java2d::pipe::AAShapePipe_TileState> p5) { return call_method<"renderTiles", void>(p1, p2, p3, p4, p5); }

protected:

	AAShapePipe(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_JAVA2D_PIPE_AASHAPEPIPE
