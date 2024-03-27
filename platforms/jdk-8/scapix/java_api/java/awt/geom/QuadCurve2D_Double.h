// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/awt/geom/QuadCurve2D.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVA_AWT_GEOM_QUADCURVE2D_DOUBLE_FWD
#define SCAPIX_JAVA_API_JAVA_AWT_GEOM_QUADCURVE2D_DOUBLE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::awt::geom { class QuadCurve2D_Double; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::awt::geom::QuadCurve2D_Double>
{
	static constexpr fixed_string class_name = "java/awt/geom/QuadCurve2D$Double";
	using base_classes = std::tuple<scapix::java_api::java::awt::geom::QuadCurve2D, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_GEOM_QUADCURVE2D_DOUBLE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_AWT_GEOM_QUADCURVE2D_DOUBLE)
#define SCAPIX_JAVA_API_JAVA_AWT_GEOM_QUADCURVE2D_DOUBLE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/geom/Point2D.h>
#include <scapix/java_api/java/awt/geom/Rectangle2D.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::awt::geom::QuadCurve2D_Double : public jni::object_base<"java/awt/geom/QuadCurve2D$Double",
	java::awt::geom::QuadCurve2D,
	java::io::Serializable>
{
public:

	jdouble x1() { return get_field<"x1", jdouble>(); }
	void x1(jdouble v) { set_field<"x1", jdouble>(v); }
	jdouble y1() { return get_field<"y1", jdouble>(); }
	void y1(jdouble v) { set_field<"y1", jdouble>(v); }
	jdouble ctrlx() { return get_field<"ctrlx", jdouble>(); }
	void ctrlx(jdouble v) { set_field<"ctrlx", jdouble>(v); }
	jdouble ctrly() { return get_field<"ctrly", jdouble>(); }
	void ctrly(jdouble v) { set_field<"ctrly", jdouble>(v); }
	jdouble x2() { return get_field<"x2", jdouble>(); }
	void x2(jdouble v) { set_field<"x2", jdouble>(v); }
	jdouble y2() { return get_field<"y2", jdouble>(); }
	void y2(jdouble v) { set_field<"y2", jdouble>(v); }

	static jni::ref<java::awt::geom::QuadCurve2D_Double> new_object() { return base_::new_object(); }
	static jni::ref<java::awt::geom::QuadCurve2D_Double> new_object(jdouble p1, jdouble p2, jdouble p3, jdouble p4, jdouble p5, jdouble p6) { return base_::new_object(p1, p2, p3, p4, p5, p6); }
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
	jni::ref<java::awt::geom::Rectangle2D> getBounds2D() { return call_method<"getBounds2D", jni::ref<java::awt::geom::Rectangle2D>>(); }

protected:

	QuadCurve2D_Double(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_GEOM_QUADCURVE2D_DOUBLE