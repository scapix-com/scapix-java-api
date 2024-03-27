// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/sun/java2d/pipe/SpanIterator.h>
#include <scapix/java_api/sun/awt/geom/PathConsumer2D.h>

#ifndef SCAPIX_JAVA_API_SUN_JAVA2D_PIPE_SHAPESPANITERATOR_FWD
#define SCAPIX_JAVA_API_SUN_JAVA2D_PIPE_SHAPESPANITERATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::java2d::pipe { class ShapeSpanIterator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::java2d::pipe::ShapeSpanIterator>
{
	static constexpr fixed_string class_name = "sun/java2d/pipe/ShapeSpanIterator";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::sun::java2d::pipe::SpanIterator, scapix::java_api::sun::awt::geom::PathConsumer2D>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_JAVA2D_PIPE_SHAPESPANITERATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_JAVA2D_PIPE_SHAPESPANITERATOR)
#define SCAPIX_JAVA_API_SUN_JAVA2D_PIPE_SHAPESPANITERATOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Rectangle.h>
#include <scapix/java_api/java/awt/geom/PathIterator.h>
#include <scapix/java_api/sun/java2d/pipe/Region.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::java2d::pipe::ShapeSpanIterator : public jni::object_base<"sun/java2d/pipe/ShapeSpanIterator",
	java::lang::Object,
	sun::java2d::pipe::SpanIterator,
	sun::awt::geom::PathConsumer2D>
{
public:

	static void initIDs() { return call_static_method<"initIDs", void>(); }
	static jni::ref<sun::java2d::pipe::ShapeSpanIterator> new_object(jboolean p1) { return base_::new_object(p1); }
	void appendPath(jni::ref<java::awt::geom::PathIterator> p1) { return call_method<"appendPath", void>(p1); }
	void appendPoly(jni::ref<jni::array<jint>> p1, jni::ref<jni::array<jint>> p2, jint p3, jint p4, jint p5) { return call_method<"appendPoly", void>(p1, p2, p3, p4, p5); }
	void setOutputAreaXYWH(jint p1, jint p2, jint p3, jint p4) { return call_method<"setOutputAreaXYWH", void>(p1, p2, p3, p4); }
	void setOutputAreaXYXY(jint p1, jint p2, jint p3, jint p4) { return call_method<"setOutputAreaXYXY", void>(p1, p2, p3, p4); }
	void setOutputArea(jni::ref<java::awt::Rectangle> p1) { return call_method<"setOutputArea", void>(p1); }
	void setOutputArea(jni::ref<sun::java2d::pipe::Region> p1) { return call_method<"setOutputArea", void>(p1); }
	void setRule(jint p1) { return call_method<"setRule", void>(p1); }
	void addSegment(jint p1, jni::ref<jni::array<jfloat>> p2) { return call_method<"addSegment", void>(p1, p2); }
	void getPathBox(jni::ref<jni::array<jint>> p1) { return call_method<"getPathBox", void>(p1); }
	void intersectClipBox(jint p1, jint p2, jint p3, jint p4) { return call_method<"intersectClipBox", void>(p1, p2, p3, p4); }
	jboolean nextSpan(jni::ref<jni::array<jint>> p1) { return call_method<"nextSpan", jboolean>(p1); }
	void skipDownTo(jint p1) { return call_method<"skipDownTo", void>(p1); }
	jlong getNativeIterator() { return call_method<"getNativeIterator", jlong>(); }
	void dispose() { return call_method<"dispose", void>(); }
	void moveTo(jfloat p1, jfloat p2) { return call_method<"moveTo", void>(p1, p2); }
	void lineTo(jfloat p1, jfloat p2) { return call_method<"lineTo", void>(p1, p2); }
	void quadTo(jfloat p1, jfloat p2, jfloat p3, jfloat p4) { return call_method<"quadTo", void>(p1, p2, p3, p4); }
	void curveTo(jfloat p1, jfloat p2, jfloat p3, jfloat p4, jfloat p5, jfloat p6) { return call_method<"curveTo", void>(p1, p2, p3, p4, p5, p6); }
	void closePath() { return call_method<"closePath", void>(); }
	void pathDone() { return call_method<"pathDone", void>(); }
	jlong getNativeConsumer() { return call_method<"getNativeConsumer", jlong>(); }

protected:

	ShapeSpanIterator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_JAVA2D_PIPE_SHAPESPANITERATOR
