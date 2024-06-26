// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/awt/geom/Arc2D.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVA_AWT_GEOM_ARC2D_FLOAT_FWD
#define SCAPIX_JAVA_API_JAVA_AWT_GEOM_ARC2D_FLOAT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::awt::geom { class Arc2D_Float; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::awt::geom::Arc2D_Float>
{
	static constexpr fixed_string class_name = "java/awt/geom/Arc2D$Float";
	using base_classes = std::tuple<scapix::java_api::java::awt::geom::Arc2D, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_GEOM_ARC2D_FLOAT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_AWT_GEOM_ARC2D_FLOAT)
#define SCAPIX_JAVA_API_JAVA_AWT_GEOM_ARC2D_FLOAT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/geom/Rectangle2D.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::awt::geom::Arc2D_Float : public jni::object_base<"java/awt/geom/Arc2D$Float",
	java::awt::geom::Arc2D,
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
	jfloat start() { return get_field<"start", jfloat>(); }
	void start(jfloat v) { set_field<"start", jfloat>(v); }
	jfloat extent() { return get_field<"extent", jfloat>(); }
	void extent(jfloat v) { set_field<"extent", jfloat>(v); }

	static jni::ref<java::awt::geom::Arc2D_Float> new_object() { return base_::new_object(); }
	static jni::ref<java::awt::geom::Arc2D_Float> new_object(jint p1) { return base_::new_object(p1); }
	static jni::ref<java::awt::geom::Arc2D_Float> new_object(jfloat p1, jfloat p2, jfloat p3, jfloat p4, jfloat p5, jfloat p6, jint p7) { return base_::new_object(p1, p2, p3, p4, p5, p6, p7); }
	static jni::ref<java::awt::geom::Arc2D_Float> new_object(jni::ref<java::awt::geom::Rectangle2D> p1, jfloat p2, jfloat p3, jint p4) { return base_::new_object(p1, p2, p3, p4); }
	jdouble getX() { return call_method<"getX", jdouble>(); }
	jdouble getY() { return call_method<"getY", jdouble>(); }
	jdouble getWidth() { return call_method<"getWidth", jdouble>(); }
	jdouble getHeight() { return call_method<"getHeight", jdouble>(); }
	jdouble getAngleStart() { return call_method<"getAngleStart", jdouble>(); }
	jdouble getAngleExtent() { return call_method<"getAngleExtent", jdouble>(); }
	jboolean isEmpty() { return call_method<"isEmpty", jboolean>(); }
	void setArc(jdouble p1, jdouble p2, jdouble p3, jdouble p4, jdouble p5, jdouble p6, jint p7) { return call_method<"setArc", void>(p1, p2, p3, p4, p5, p6, p7); }
	void setAngleStart(jdouble p1) { return call_method<"setAngleStart", void>(p1); }
	void setAngleExtent(jdouble p1) { return call_method<"setAngleExtent", void>(p1); }

protected:

	Arc2D_Float(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_GEOM_ARC2D_FLOAT
