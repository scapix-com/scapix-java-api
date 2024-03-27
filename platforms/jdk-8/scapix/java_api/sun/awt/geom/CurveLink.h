// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_AWT_GEOM_CURVELINK_FWD
#define SCAPIX_JAVA_API_SUN_AWT_GEOM_CURVELINK_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::awt::geom { class CurveLink; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::awt::geom::CurveLink>
{
	static constexpr fixed_string class_name = "sun/awt/geom/CurveLink";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_GEOM_CURVELINK_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_AWT_GEOM_CURVELINK)
#define SCAPIX_JAVA_API_SUN_AWT_GEOM_CURVELINK

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/sun/awt/geom/Curve.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::awt::geom::CurveLink : public jni::object_base<"sun/awt/geom/CurveLink",
	java::lang::Object>
{
public:

	static jni::ref<sun::awt::geom::CurveLink> new_object(jni::ref<sun::awt::geom::Curve> p1, jdouble p2, jdouble p3, jint p4) { return base_::new_object(p1, p2, p3, p4); }
	jboolean absorb(jni::ref<sun::awt::geom::CurveLink> p1) { return call_method<"absorb", jboolean>(p1); }
	jboolean absorb(jni::ref<sun::awt::geom::Curve> p1, jdouble p2, jdouble p3, jint p4) { return call_method<"absorb", jboolean>(p1, p2, p3, p4); }
	jboolean isEmpty() { return call_method<"isEmpty", jboolean>(); }
	jni::ref<sun::awt::geom::Curve> getCurve() { return call_method<"getCurve", jni::ref<sun::awt::geom::Curve>>(); }
	jni::ref<sun::awt::geom::Curve> getSubCurve() { return call_method<"getSubCurve", jni::ref<sun::awt::geom::Curve>>(); }
	jni::ref<sun::awt::geom::Curve> getMoveto() { return call_method<"getMoveto", jni::ref<sun::awt::geom::Curve>>(); }
	jdouble getXTop() { return call_method<"getXTop", jdouble>(); }
	jdouble getYTop() { return call_method<"getYTop", jdouble>(); }
	jdouble getXBot() { return call_method<"getXBot", jdouble>(); }
	jdouble getYBot() { return call_method<"getYBot", jdouble>(); }
	jdouble getX() { return call_method<"getX", jdouble>(); }
	jint getEdgeTag() { return call_method<"getEdgeTag", jint>(); }
	void setNext(jni::ref<sun::awt::geom::CurveLink> p1) { return call_method<"setNext", void>(p1); }
	jni::ref<sun::awt::geom::CurveLink> getNext() { return call_method<"getNext", jni::ref<sun::awt::geom::CurveLink>>(); }

protected:

	CurveLink(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_GEOM_CURVELINK