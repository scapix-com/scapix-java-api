// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/awt/geom/RectangularShape.h>

#ifndef SCAPIX_JAVA_API_JAVA_AWT_GEOM_ARC2D_FWD
#define SCAPIX_JAVA_API_JAVA_AWT_GEOM_ARC2D_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::awt::geom { class Arc2D; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::awt::geom::Arc2D>
{
	static constexpr fixed_string class_name = "java/awt/geom/Arc2D";
	using base_classes = std::tuple<scapix::java_api::java::awt::geom::RectangularShape>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_GEOM_ARC2D_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_AWT_GEOM_ARC2D)
#define SCAPIX_JAVA_API_JAVA_AWT_GEOM_ARC2D

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/geom/AffineTransform.h>
#include <scapix/java_api/java/awt/geom/Dimension2D.h>
#include <scapix/java_api/java/awt/geom/PathIterator.h>
#include <scapix/java_api/java/awt/geom/Point2D.h>
#include <scapix/java_api/java/awt/geom/Rectangle2D.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/awt/geom/Arc2D_Float.h>
#include <scapix/java_api/java/awt/geom/Arc2D_Double.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::awt::geom::Arc2D : public jni::object_base<"java/awt/geom/Arc2D",
	java::awt::geom::RectangularShape>
{
public:

	using Float = Arc2D_Float;
	using Double = Arc2D_Double;

	static jint OPEN() { return get_static_field<"OPEN", jint>(); }
	static jint CHORD() { return get_static_field<"CHORD", jint>(); }
	static jint PIE() { return get_static_field<"PIE", jint>(); }

	jdouble getAngleStart() { return call_method<"getAngleStart", jdouble>(); }
	jdouble getAngleExtent() { return call_method<"getAngleExtent", jdouble>(); }
	jint getArcType() { return call_method<"getArcType", jint>(); }
	jni::ref<java::awt::geom::Point2D> getStartPoint() { return call_method<"getStartPoint", jni::ref<java::awt::geom::Point2D>>(); }
	jni::ref<java::awt::geom::Point2D> getEndPoint() { return call_method<"getEndPoint", jni::ref<java::awt::geom::Point2D>>(); }
	void setArc(jdouble p1, jdouble p2, jdouble p3, jdouble p4, jdouble p5, jdouble p6, jint p7) { return call_method<"setArc", void>(p1, p2, p3, p4, p5, p6, p7); }
	void setArc(jni::ref<java::awt::geom::Point2D> p1, jni::ref<java::awt::geom::Dimension2D> p2, jdouble p3, jdouble p4, jint p5) { return call_method<"setArc", void>(p1, p2, p3, p4, p5); }
	void setArc(jni::ref<java::awt::geom::Rectangle2D> p1, jdouble p2, jdouble p3, jint p4) { return call_method<"setArc", void>(p1, p2, p3, p4); }
	void setArc(jni::ref<java::awt::geom::Arc2D> p1) { return call_method<"setArc", void>(p1); }
	void setArcByCenter(jdouble p1, jdouble p2, jdouble p3, jdouble p4, jdouble p5, jint p6) { return call_method<"setArcByCenter", void>(p1, p2, p3, p4, p5, p6); }
	void setArcByTangent(jni::ref<java::awt::geom::Point2D> p1, jni::ref<java::awt::geom::Point2D> p2, jni::ref<java::awt::geom::Point2D> p3, jdouble p4) { return call_method<"setArcByTangent", void>(p1, p2, p3, p4); }
	void setAngleStart(jdouble p1) { return call_method<"setAngleStart", void>(p1); }
	void setAngleExtent(jdouble p1) { return call_method<"setAngleExtent", void>(p1); }
	void setAngleStart(jni::ref<java::awt::geom::Point2D> p1) { return call_method<"setAngleStart", void>(p1); }
	void setAngles(jdouble p1, jdouble p2, jdouble p3, jdouble p4) { return call_method<"setAngles", void>(p1, p2, p3, p4); }
	void setAngles(jni::ref<java::awt::geom::Point2D> p1, jni::ref<java::awt::geom::Point2D> p2) { return call_method<"setAngles", void>(p1, p2); }
	void setArcType(jint p1) { return call_method<"setArcType", void>(p1); }
	void setFrame(jdouble p1, jdouble p2, jdouble p3, jdouble p4) { return call_method<"setFrame", void>(p1, p2, p3, p4); }
	jni::ref<java::awt::geom::Rectangle2D> getBounds2D() { return call_method<"getBounds2D", jni::ref<java::awt::geom::Rectangle2D>>(); }
	jboolean containsAngle(jdouble p1) { return call_method<"containsAngle", jboolean>(p1); }
	jboolean contains(jdouble p1, jdouble p2) { return call_method<"contains", jboolean>(p1, p2); }
	jboolean intersects(jdouble p1, jdouble p2, jdouble p3, jdouble p4) { return call_method<"intersects", jboolean>(p1, p2, p3, p4); }
	jboolean contains(jdouble p1, jdouble p2, jdouble p3, jdouble p4) { return call_method<"contains", jboolean>(p1, p2, p3, p4); }
	jboolean contains(jni::ref<java::awt::geom::Rectangle2D> p1) { return call_method<"contains", jboolean>(p1); }
	jni::ref<java::awt::geom::PathIterator> getPathIterator(jni::ref<java::awt::geom::AffineTransform> p1) { return call_method<"getPathIterator", jni::ref<java::awt::geom::PathIterator>>(p1); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }

protected:

	Arc2D(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_GEOM_ARC2D
