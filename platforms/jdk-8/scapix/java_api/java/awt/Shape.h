// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_AWT_SHAPE_FWD
#define SCAPIX_JAVA_API_JAVA_AWT_SHAPE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::awt { class Shape; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::awt::Shape>
{
	static constexpr fixed_string class_name = "java/awt/Shape";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_SHAPE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_AWT_SHAPE)
#define SCAPIX_JAVA_API_JAVA_AWT_SHAPE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Rectangle.h>
#include <scapix/java_api/java/awt/geom/AffineTransform.h>
#include <scapix/java_api/java/awt/geom/PathIterator.h>
#include <scapix/java_api/java/awt/geom/Point2D.h>
#include <scapix/java_api/java/awt/geom/Rectangle2D.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::awt::Shape : public jni::object_base<"java/awt/Shape",
	java::lang::Object>
{
public:

	jni::ref<java::awt::Rectangle> getBounds() { return call_method<"getBounds", jni::ref<java::awt::Rectangle>>(); }
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

	Shape(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_SHAPE
