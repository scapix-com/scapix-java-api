// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/awt/geom/AreaOp_CAGOp.h>

#ifndef SCAPIX_JAVA_API_SUN_AWT_GEOM_AREAOP_ADDOP_FWD
#define SCAPIX_JAVA_API_SUN_AWT_GEOM_AREAOP_ADDOP_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::awt::geom { class AreaOp_AddOp; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::awt::geom::AreaOp_AddOp>
{
	static constexpr fixed_string class_name = "sun/awt/geom/AreaOp$AddOp";
	using base_classes = std::tuple<scapix::java_api::sun::awt::geom::AreaOp_CAGOp>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_GEOM_AREAOP_ADDOP_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_AWT_GEOM_AREAOP_ADDOP)
#define SCAPIX_JAVA_API_SUN_AWT_GEOM_AREAOP_ADDOP

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::awt::geom::AreaOp_AddOp : public jni::object_base<"sun/awt/geom/AreaOp$AddOp",
	sun::awt::geom::AreaOp_CAGOp>
{
public:

	static jni::ref<sun::awt::geom::AreaOp_AddOp> new_object() { return base_::new_object(); }
	jboolean newClassification(jboolean p1, jboolean p2) { return call_method<"newClassification", jboolean>(p1, p2); }

protected:

	AreaOp_AddOp(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_GEOM_AREAOP_ADDOP
