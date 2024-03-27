// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/sun/java2d/pipe/ShapeDrawPipe.h>

#ifndef SCAPIX_JAVA_API_SUN_JAVA2D_PIPE_SPANSHAPERENDERER_FWD
#define SCAPIX_JAVA_API_SUN_JAVA2D_PIPE_SPANSHAPERENDERER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::java2d::pipe { class SpanShapeRenderer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::java2d::pipe::SpanShapeRenderer>
{
	static constexpr fixed_string class_name = "sun/java2d/pipe/SpanShapeRenderer";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::sun::java2d::pipe::ShapeDrawPipe>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_JAVA2D_PIPE_SPANSHAPERENDERER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_JAVA2D_PIPE_SPANSHAPERENDERER)
#define SCAPIX_JAVA_API_SUN_JAVA2D_PIPE_SPANSHAPERENDERER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Rectangle.h>
#include <scapix/java_api/java/awt/Shape.h>
#include <scapix/java_api/java/awt/geom/Rectangle2D.h>
#include <scapix/java_api/sun/java2d/SunGraphics2D.h>
#include <scapix/java_api/sun/java2d/pipe/Region.h>
#include <scapix/java_api/sun/java2d/pipe/ShapeSpanIterator.h>
#include <scapix/java_api/sun/java2d/pipe/SpanIterator.h>
#include <scapix/java_api/sun/java2d/pipe/SpanShapeRenderer_Composite.h>
#include <scapix/java_api/sun/java2d/pipe/SpanShapeRenderer_Simple.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::java2d::pipe::SpanShapeRenderer : public jni::object_base<"sun/java2d/pipe/SpanShapeRenderer",
	java::lang::Object,
	sun::java2d::pipe::ShapeDrawPipe>
{
public:

	using Composite = SpanShapeRenderer_Composite;
	using Simple = SpanShapeRenderer_Simple;

	static jint NON_RECTILINEAR_TRANSFORM_MASK() { return get_static_field<"NON_RECTILINEAR_TRANSFORM_MASK", jint>(); }

	static jni::ref<sun::java2d::pipe::SpanShapeRenderer> new_object() { return base_::new_object(); }
	void draw(jni::ref<sun::java2d::SunGraphics2D> p1, jni::ref<java::awt::Shape> p2) { return call_method<"draw", void>(p1, p2); }
	void fill(jni::ref<sun::java2d::SunGraphics2D> p1, jni::ref<java::awt::Shape> p2) { return call_method<"fill", void>(p1, p2); }
	jni::ref<java::lang::Object> startSequence(jni::ref<sun::java2d::SunGraphics2D> p1, jni::ref<java::awt::Shape> p2, jni::ref<java::awt::Rectangle> p3, jni::ref<jni::array<jint>> p4) { return call_method<"startSequence", jni::ref<java::lang::Object>>(p1, p2, p3, p4); }
	void renderBox(jni::ref<java::lang::Object> p1, jint p2, jint p3, jint p4, jint p5) { return call_method<"renderBox", void>(p1, p2, p3, p4, p5); }
	void endSequence(jni::ref<java::lang::Object> p1) { return call_method<"endSequence", void>(p1); }
	void renderRect(jni::ref<sun::java2d::SunGraphics2D> p1, jni::ref<java::awt::geom::Rectangle2D> p2) { return call_method<"renderRect", void>(p1, p2); }
	void renderSpans(jni::ref<sun::java2d::SunGraphics2D> p1, jni::ref<sun::java2d::pipe::Region> p2, jni::ref<java::awt::Shape> p3, jni::ref<sun::java2d::pipe::ShapeSpanIterator> p4) { return call_method<"renderSpans", void>(p1, p2, p3, p4); }
	void spanClipLoop(jni::ref<java::lang::Object> p1, jni::ref<sun::java2d::pipe::SpanIterator> p2, jni::ref<sun::java2d::pipe::Region> p3, jni::ref<jni::array<jint>> p4) { return call_method<"spanClipLoop", void>(p1, p2, p3, p4); }

protected:

	SpanShapeRenderer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_JAVA2D_PIPE_SPANSHAPERENDERER