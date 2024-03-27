// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/awt/Shape.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVA_AWT_POLYGON_FWD
#define SCAPIX_JAVA_API_JAVA_AWT_POLYGON_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::awt { class Polygon; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::awt::Polygon>
{
	static constexpr fixed_string class_name = "java/awt/Polygon";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::awt::Shape, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_POLYGON_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_AWT_POLYGON)
#define SCAPIX_JAVA_API_JAVA_AWT_POLYGON

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Point.h>
#include <scapix/java_api/java/awt/Rectangle.h>
#include <scapix/java_api/java/awt/geom/AffineTransform.h>
#include <scapix/java_api/java/awt/geom/PathIterator.h>
#include <scapix/java_api/java/awt/geom/Point2D.h>
#include <scapix/java_api/java/awt/geom/Rectangle2D.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::awt::Polygon : public jni::object_base<"java/awt/Polygon",
	java::lang::Object,
	java::awt::Shape,
	java::io::Serializable>
{
public:

	jint npoints() { return get_field<"npoints", jint>(); }
	void npoints(jint v) { set_field<"npoints", jint>(v); }
	jni::ref<jni::array<jint>> xpoints() { return get_field<"xpoints", jni::ref<jni::array<jint>>>(); }
	void xpoints(jni::ref<jni::array<jint>> v) { set_field<"xpoints", jni::ref<jni::array<jint>>>(v); }
	jni::ref<jni::array<jint>> ypoints() { return get_field<"ypoints", jni::ref<jni::array<jint>>>(); }
	void ypoints(jni::ref<jni::array<jint>> v) { set_field<"ypoints", jni::ref<jni::array<jint>>>(v); }

	static jni::ref<java::awt::Polygon> new_object() { return base_::new_object(); }
	static jni::ref<java::awt::Polygon> new_object(jni::ref<jni::array<jint>> p1, jni::ref<jni::array<jint>> p2, jint p3) { return base_::new_object(p1, p2, p3); }
	void reset() { return call_method<"reset", void>(); }
	void invalidate() { return call_method<"invalidate", void>(); }
	void translate(jint p1, jint p2) { return call_method<"translate", void>(p1, p2); }
	void addPoint(jint p1, jint p2) { return call_method<"addPoint", void>(p1, p2); }
	jni::ref<java::awt::Rectangle> getBounds() { return call_method<"getBounds", jni::ref<java::awt::Rectangle>>(); }
	jni::ref<java::awt::Rectangle> getBoundingBox() { return call_method<"getBoundingBox", jni::ref<java::awt::Rectangle>>(); }
	jboolean contains(jni::ref<java::awt::Point> p1) { return call_method<"contains", jboolean>(p1); }
	jboolean contains(jint p1, jint p2) { return call_method<"contains", jboolean>(p1, p2); }
	jboolean inside(jint p1, jint p2) { return call_method<"inside", jboolean>(p1, p2); }
	jni::ref<java::awt::geom::Rectangle2D> getBounds2D() { return call_method<"getBounds2D", jni::ref<java::awt::geom::Rectangle2D>>(); }
	jboolean contains(jdouble p1, jdouble p2) { return call_method<"contains", jboolean>(p1, p2); }
	jboolean contains(jni::ref<java::awt::geom::Point2D> p1) { return call_method<"contains", jboolean>(p1); }
	jboolean intersects(jdouble p1, jdouble p2, jdouble p3, jdouble p4) { return call_method<"intersects", jboolean>(p1, p2, p3, p4); }
	jboolean intersects(jni::ref<java::awt::geom::Rectangle2D> p1) { return call_method<"intersects", jboolean>(p1); }
	jboolean contains(jdouble p1, jdouble p2, jdouble p3, jdouble p4) { return call_method<"contains", jboolean>(p1, p2, p3, p4); }
	jboolean contains(jni::ref<java::awt::geom::Rectangle2D> p1) { return call_method<"contains", jboolean>(p1); }
	jni::ref<java::awt::geom::PathIterator> getPathIterator(jni::ref<java::awt::geom::AffineTransform> p1) { return call_method<"getPathIterator", jni::ref<java::awt::geom::PathIterator>>(p1); }
	jni::ref<java::awt::geom::PathIterator> getPathIterator(jni::ref<java::awt::geom::AffineTransform> p1, jdouble p2) { return call_method<"getPathIterator", jni::ref<java::awt::geom::PathIterator>>(p1, p2); }

protected:

	Polygon(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_POLYGON