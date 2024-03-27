// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/awt/geom/Path2D.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVA_AWT_GEOM_PATH2D_FLOAT_FWD
#define SCAPIX_JAVA_API_JAVA_AWT_GEOM_PATH2D_FLOAT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::awt::geom { class Path2D_Float; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::awt::geom::Path2D_Float>
{
	static constexpr fixed_string class_name = "java/awt/geom/Path2D$Float";
	using base_classes = std::tuple<scapix::java_api::java::awt::geom::Path2D, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_GEOM_PATH2D_FLOAT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_AWT_GEOM_PATH2D_FLOAT)
#define SCAPIX_JAVA_API_JAVA_AWT_GEOM_PATH2D_FLOAT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Shape.h>
#include <scapix/java_api/java/awt/geom/AffineTransform.h>
#include <scapix/java_api/java/awt/geom/PathIterator.h>
#include <scapix/java_api/java/awt/geom/Rectangle2D.h>
#include <scapix/java_api/java/lang/Object.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::awt::geom::Path2D_Float : public jni::object_base<"java/awt/geom/Path2D$Float",
	java::awt::geom::Path2D,
	java::io::Serializable>
{
public:

	static jni::ref<java::awt::geom::Path2D_Float> new_object() { return base_::new_object(); }
	static jni::ref<java::awt::geom::Path2D_Float> new_object(jint p1) { return base_::new_object(p1); }
	static jni::ref<java::awt::geom::Path2D_Float> new_object(jint p1, jint p2) { return base_::new_object(p1, p2); }
	static jni::ref<java::awt::geom::Path2D_Float> new_object(jni::ref<java::awt::Shape> p1) { return base_::new_object(p1); }
	static jni::ref<java::awt::geom::Path2D_Float> new_object(jni::ref<java::awt::Shape> p1, jni::ref<java::awt::geom::AffineTransform> p2) { return base_::new_object(p1, p2); }
	void moveTo(jdouble p1, jdouble p2) { return call_method<"moveTo", void>(p1, p2); }
	void moveTo(jfloat p1, jfloat p2) { return call_method<"moveTo", void>(p1, p2); }
	void lineTo(jdouble p1, jdouble p2) { return call_method<"lineTo", void>(p1, p2); }
	void lineTo(jfloat p1, jfloat p2) { return call_method<"lineTo", void>(p1, p2); }
	void quadTo(jdouble p1, jdouble p2, jdouble p3, jdouble p4) { return call_method<"quadTo", void>(p1, p2, p3, p4); }
	void quadTo(jfloat p1, jfloat p2, jfloat p3, jfloat p4) { return call_method<"quadTo", void>(p1, p2, p3, p4); }
	void curveTo(jdouble p1, jdouble p2, jdouble p3, jdouble p4, jdouble p5, jdouble p6) { return call_method<"curveTo", void>(p1, p2, p3, p4, p5, p6); }
	void curveTo(jfloat p1, jfloat p2, jfloat p3, jfloat p4, jfloat p5, jfloat p6) { return call_method<"curveTo", void>(p1, p2, p3, p4, p5, p6); }
	void append(jni::ref<java::awt::geom::PathIterator> p1, jboolean p2) { return call_method<"append", void>(p1, p2); }
	void transform(jni::ref<java::awt::geom::AffineTransform> p1) { return call_method<"transform", void>(p1); }
	jni::ref<java::awt::geom::Rectangle2D> getBounds2D() { return call_method<"getBounds2D", jni::ref<java::awt::geom::Rectangle2D>>(); }
	jni::ref<java::awt::geom::PathIterator> getPathIterator(jni::ref<java::awt::geom::AffineTransform> p1) { return call_method<"getPathIterator", jni::ref<java::awt::geom::PathIterator>>(p1); }
	jni::ref<java::lang::Object> clone() { return call_method<"clone", jni::ref<java::lang::Object>>(); }

protected:

	Path2D_Float(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_GEOM_PATH2D_FLOAT
