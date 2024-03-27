// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_AWT_GEOM_CHAINEND_FWD
#define SCAPIX_JAVA_API_SUN_AWT_GEOM_CHAINEND_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::awt::geom { class ChainEnd; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::awt::geom::ChainEnd>
{
	static constexpr fixed_string class_name = "sun/awt/geom/ChainEnd";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_GEOM_CHAINEND_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_AWT_GEOM_CHAINEND)
#define SCAPIX_JAVA_API_SUN_AWT_GEOM_CHAINEND

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/sun/awt/geom/CurveLink.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::awt::geom::ChainEnd : public jni::object_base<"sun/awt/geom/ChainEnd",
	java::lang::Object>
{
public:

	static jni::ref<sun::awt::geom::ChainEnd> new_object(jni::ref<sun::awt::geom::CurveLink> p1, jni::ref<sun::awt::geom::ChainEnd> p2) { return base_::new_object(p1, p2); }
	jni::ref<sun::awt::geom::CurveLink> getChain() { return call_method<"getChain", jni::ref<sun::awt::geom::CurveLink>>(); }
	void setOtherEnd(jni::ref<sun::awt::geom::ChainEnd> p1) { return call_method<"setOtherEnd", void>(p1); }
	jni::ref<sun::awt::geom::ChainEnd> getPartner() { return call_method<"getPartner", jni::ref<sun::awt::geom::ChainEnd>>(); }
	jni::ref<sun::awt::geom::CurveLink> linkTo(jni::ref<sun::awt::geom::ChainEnd> p1) { return call_method<"linkTo", jni::ref<sun::awt::geom::CurveLink>>(p1); }
	void addLink(jni::ref<sun::awt::geom::CurveLink> p1) { return call_method<"addLink", void>(p1); }
	jdouble getX() { return call_method<"getX", jdouble>(); }

protected:

	ChainEnd(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_GEOM_CHAINEND
