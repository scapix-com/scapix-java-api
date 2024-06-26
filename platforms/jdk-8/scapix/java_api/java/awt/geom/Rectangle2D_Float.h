// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/awt/geom/Rectangle2D.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVA_AWT_GEOM_RECTANGLE2D_FLOAT_FWD
#define SCAPIX_JAVA_API_JAVA_AWT_GEOM_RECTANGLE2D_FLOAT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::awt::geom { class Rectangle2D_Float; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::awt::geom::Rectangle2D_Float>
{
	static constexpr fixed_string class_name = "java/awt/geom/Rectangle2D$Float";
	using base_classes = std::tuple<scapix::java_api::java::awt::geom::Rectangle2D, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_GEOM_RECTANGLE2D_FLOAT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_AWT_GEOM_RECTANGLE2D_FLOAT)
#define SCAPIX_JAVA_API_JAVA_AWT_GEOM_RECTANGLE2D_FLOAT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::awt::geom::Rectangle2D_Float : public jni::object_base<"java/awt/geom/Rectangle2D$Float",
	java::awt::geom::Rectangle2D,
	java::io::Serializable>
{
public:

	jfloat x() { return get_field<"x", jfloat>(); }
	void x(jfloat v) { set_field<"x", jfloat>(v); }
	jfloat y() { return get_field<"y", jfloat>(); }
	void y(jfloat v) { set_field<"y", jfloat>(v); }
	jfloat width() { return get_field<"width", jfloat>(); }
	void width(jfloat v) { set_field<"width", jfloat>(v); }
	jfloat height() { return get_field<"height", jfloat>(); }
	void height(jfloat v) { set_field<"height", jfloat>(v); }

	static jni::ref<java::awt::geom::Rectangle2D_Float> new_object() { return base_::new_object(); }
	static jni::ref<java::awt::geom::Rectangle2D_Float> new_object(jfloat p1, jfloat p2, jfloat p3, jfloat p4) { return base_::new_object(p1, p2, p3, p4); }
	jdouble getX() { return call_method<"getX", jdouble>(); }
	jdouble getY() { return call_method<"getY", jdouble>(); }
	jdouble getWidth() { return call_method<"getWidth", jdouble>(); }
	jdouble getHeight() { return call_method<"getHeight", jdouble>(); }
	jboolean isEmpty() { return call_method<"isEmpty", jboolean>(); }
	void setRect(jfloat p1, jfloat p2, jfloat p3, jfloat p4) { return call_method<"setRect", void>(p1, p2, p3, p4); }
	void setRect(jdouble p1, jdouble p2, jdouble p3, jdouble p4) { return call_method<"setRect", void>(p1, p2, p3, p4); }
	void setRect(jni::ref<java::awt::geom::Rectangle2D> p1) { return call_method<"setRect", void>(p1); }
	jint outcode(jdouble p1, jdouble p2) { return call_method<"outcode", jint>(p1, p2); }
	jni::ref<java::awt::geom::Rectangle2D> getBounds2D() { return call_method<"getBounds2D", jni::ref<java::awt::geom::Rectangle2D>>(); }
	jni::ref<java::awt::geom::Rectangle2D> createIntersection(jni::ref<java::awt::geom::Rectangle2D> p1) { return call_method<"createIntersection", jni::ref<java::awt::geom::Rectangle2D>>(p1); }
	jni::ref<java::awt::geom::Rectangle2D> createUnion(jni::ref<java::awt::geom::Rectangle2D> p1) { return call_method<"createUnion", jni::ref<java::awt::geom::Rectangle2D>>(p1); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	Rectangle2D_Float(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_GEOM_RECTANGLE2D_FLOAT
