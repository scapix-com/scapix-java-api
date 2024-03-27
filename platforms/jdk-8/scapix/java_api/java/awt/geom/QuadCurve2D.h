// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/awt/Shape.h>
#include <scapix/java_api/java/lang/Cloneable.h>

#ifndef SCAPIX_JAVA_API_JAVA_AWT_GEOM_QUADCURVE2D_FWD
#define SCAPIX_JAVA_API_JAVA_AWT_GEOM_QUADCURVE2D_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::awt::geom { class QuadCurve2D; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::awt::geom::QuadCurve2D>
{
	static constexpr fixed_string class_name = "java/awt/geom/QuadCurve2D";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::awt::Shape, scapix::java_api::java::lang::Cloneable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_GEOM_QUADCURVE2D_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_AWT_GEOM_QUADCURVE2D)
#define SCAPIX_JAVA_API_JAVA_AWT_GEOM_QUADCURVE2D

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Rectangle.h>
#include <scapix/java_api/java/awt/geom/AffineTransform.h>
#include <scapix/java_api/java/awt/geom/PathIterator.h>
#include <scapix/java_api/java/awt/geom/Point2D.h>
#include <scapix/java_api/java/awt/geom/Rectangle2D.h>
#include <scapix/java_api/java/awt/geom/QuadCurve2D_Float.h>
#include <scapix/java_api/java/awt/geom/QuadCurve2D_Double.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::awt::geom::QuadCurve2D : public jni::object_base<"java/awt/geom/QuadCurve2D",
	java::lang::Object,
	java::awt::Shape,
	java::lang::Cloneable>
{
public:

	using Float = QuadCurve2D_Float;
	using Double = QuadCurve2D_Double;

	jdouble getX1() { return call_method<"getX1", jdouble>(); }
	jdouble getY1() { return call_method<"getY1", jdouble>(); }
	jni::ref<java::awt::geom::Point2D> getP1() { return call_method<"getP1", jni::ref<java::awt::geom::Point2D>>(); }
	jdouble getCtrlX() { return call_method<"getCtrlX", jdouble>(); }
	jdouble getCtrlY() { return call_method<"getCtrlY", jdouble>(); }
	jni::ref<java::awt::geom::Point2D> getCtrlPt() { return call_method<"getCtrlPt", jni::ref<java::awt::geom::Point2D>>(); }
	jdouble getX2() { return call_method<"getX2", jdouble>(); }
	jdouble getY2() { return call_method<"getY2", jdouble>(); }
	jni::ref<java::awt::geom::Point2D> getP2() { return call_method<"getP2", jni::ref<java::awt::geom::Point2D>>(); }
	void setCurve(jdouble p1, jdouble p2, jdouble p3, jdouble p4, jdouble p5, jdouble p6) { return call_method<"setCurve", void>(p1, p2, p3, p4, p5, p6); }
	void setCurve(jni::ref<jni::array<jdouble>> p1, jint p2) { return call_method<"setCurve", void>(p1, p2); }
	void setCurve(jni::ref<java::awt::geom::Point2D> p1, jni::ref<java::awt::geom::Point2D> p2, jni::ref<java::awt::geom::Point2D> p3) { return call_method<"setCurve", void>(p1, p2, p3); }
	void setCurve(jni::ref<jni::array<java::awt::geom::Point2D>> p1, jint p2) { return call_method<"setCurve", void>(p1, p2); }
	void setCurve(jni::ref<java::awt::geom::QuadCurve2D> p1) { return call_method<"setCurve", void>(p1); }
	static jdouble getFlatnessSq(jdouble p1, jdouble p2, jdouble p3, jdouble p4, jdouble p5, jdouble p6) { return call_static_method<"getFlatnessSq", jdouble>(p1, p2, p3, p4, p5, p6); }
	static jdouble getFlatness(jdouble p1, jdouble p2, jdouble p3, jdouble p4, jdouble p5, jdouble p6) { return call_static_method<"getFlatness", jdouble>(p1, p2, p3, p4, p5, p6); }
	static jdouble getFlatnessSq(jni::ref<jni::array<jdouble>> p1, jint p2) { return call_static_method<"getFlatnessSq", jdouble>(p1, p2); }
	static jdouble getFlatness(jni::ref<jni::array<jdouble>> p1, jint p2) { return call_static_method<"getFlatness", jdouble>(p1, p2); }
	jdouble getFlatnessSq() { return call_method<"getFlatnessSq", jdouble>(); }
	jdouble getFlatness() { return call_method<"getFlatness", jdouble>(); }
	void subdivide(jni::ref<java::awt::geom::QuadCurve2D> p1, jni::ref<java::awt::geom::QuadCurve2D> p2) { return call_method<"subdivide", void>(p1, p2); }
	static void subdivide(jni::ref<java::awt::geom::QuadCurve2D> p1, jni::ref<java::awt::geom::QuadCurve2D> p2, jni::ref<java::awt::geom::QuadCurve2D> p3) { return call_static_method<"subdivide", void>(p1, p2, p3); }
	static void subdivide(jni::ref<jni::array<jdouble>> p1, jint p2, jni::ref<jni::array<jdouble>> p3, jint p4, jni::ref<jni::array<jdouble>> p5, jint p6) { return call_static_method<"subdivide", void>(p1, p2, p3, p4, p5, p6); }
	static jint solveQuadratic(jni::ref<jni::array<jdouble>> p1) { return call_static_method<"solveQuadratic", jint>(p1); }
	static jint solveQuadratic(jni::ref<jni::array<jdouble>> p1, jni::ref<jni::array<jdouble>> p2) { return call_static_method<"solveQuadratic", jint>(p1, p2); }
	jboolean contains(jdouble p1, jdouble p2) { return call_method<"contains", jboolean>(p1, p2); }
	jboolean contains(jni::ref<java::awt::geom::Point2D> p1) { return call_method<"contains", jboolean>(p1); }
	jboolean intersects(jdouble p1, jdouble p2, jdouble p3, jdouble p4) { return call_method<"intersects", jboolean>(p1, p2, p3, p4); }
	jboolean intersects(jni::ref<java::awt::geom::Rectangle2D> p1) { return call_method<"intersects", jboolean>(p1); }
	jboolean contains(jdouble p1, jdouble p2, jdouble p3, jdouble p4) { return call_method<"contains", jboolean>(p1, p2, p3, p4); }
	jboolean contains(jni::ref<java::awt::geom::Rectangle2D> p1) { return call_method<"contains", jboolean>(p1); }
	jni::ref<java::awt::Rectangle> getBounds() { return call_method<"getBounds", jni::ref<java::awt::Rectangle>>(); }
	jni::ref<java::awt::geom::PathIterator> getPathIterator(jni::ref<java::awt::geom::AffineTransform> p1) { return call_method<"getPathIterator", jni::ref<java::awt::geom::PathIterator>>(p1); }
	jni::ref<java::awt::geom::PathIterator> getPathIterator(jni::ref<java::awt::geom::AffineTransform> p1, jdouble p2) { return call_method<"getPathIterator", jni::ref<java::awt::geom::PathIterator>>(p1, p2); }
	jni::ref<java::lang::Object> clone() { return call_method<"clone", jni::ref<java::lang::Object>>(); }

protected:

	QuadCurve2D(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_GEOM_QUADCURVE2D
