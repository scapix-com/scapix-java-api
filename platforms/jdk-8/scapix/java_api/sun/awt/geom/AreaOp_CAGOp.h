// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/awt/geom/AreaOp.h>

#ifndef SCAPIX_JAVA_API_SUN_AWT_GEOM_AREAOP_CAGOP_FWD
#define SCAPIX_JAVA_API_SUN_AWT_GEOM_AREAOP_CAGOP_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::awt::geom { class AreaOp_CAGOp; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::awt::geom::AreaOp_CAGOp>
{
	static constexpr fixed_string class_name = "sun/awt/geom/AreaOp$CAGOp";
	using base_classes = std::tuple<scapix::java_api::sun::awt::geom::AreaOp>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_GEOM_AREAOP_CAGOP_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_AWT_GEOM_AREAOP_CAGOP)
#define SCAPIX_JAVA_API_SUN_AWT_GEOM_AREAOP_CAGOP

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/sun/awt/geom/Edge.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::awt::geom::AreaOp_CAGOp : public jni::object_base<"sun/awt/geom/AreaOp$CAGOp",
	sun::awt::geom::AreaOp>
{
public:

	static jni::ref<sun::awt::geom::AreaOp_CAGOp> new_object() { return base_::new_object(); }
	void newRow() { return call_method<"newRow", void>(); }
	jint classify(jni::ref<sun::awt::geom::Edge> p1) { return call_method<"classify", jint>(p1); }
	jint getState() { return call_method<"getState", jint>(); }
	jboolean newClassification(jboolean p1, jboolean p2) { return call_method<"newClassification", jboolean>(p1, p2); }

protected:

	AreaOp_CAGOp(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_GEOM_AREAOP_CAGOP
