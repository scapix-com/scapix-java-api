// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/sun/security/ec/point/Point.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_EC_POINT_PROJECTIVEPOINT_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_EC_POINT_PROJECTIVEPOINT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::ec::point { class ProjectivePoint; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::ec::point::ProjectivePoint>
{
	static constexpr fixed_string class_name = "sun/security/ec/point/ProjectivePoint";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::sun::security::ec::point::Point>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_EC_POINT_PROJECTIVEPOINT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_EC_POINT_PROJECTIVEPOINT)
#define SCAPIX_JAVA_API_SUN_SECURITY_EC_POINT_PROJECTIVEPOINT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/sun/security/ec/point/AffinePoint.h>
#include <scapix/java_api/sun/security/ec/point/ProjectivePoint_Immutable.h>
#include <scapix/java_api/sun/security/ec/point/ProjectivePoint_Mutable.h>
#include <scapix/java_api/sun/security/util/math/IntegerFieldModuloP.h>
#include <scapix/java_api/sun/security/util/math/IntegerModuloP.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::ec::point::ProjectivePoint : public jni::object_base<"sun/security/ec/point/ProjectivePoint",
	java::lang::Object,
	sun::security::ec::point::Point>
{
public:

	using Immutable = ProjectivePoint_Immutable;
	using Mutable = ProjectivePoint_Mutable;

	jni::ref<sun::security::util::math::IntegerFieldModuloP> getField() { return call_method<"getField", jni::ref<sun::security::util::math::IntegerFieldModuloP>>(); }
	jni::ref<sun::security::ec::point::ProjectivePoint_Immutable> fixed() { return call_method<"fixed", jni::ref<sun::security::ec::point::ProjectivePoint_Immutable>>(); }
	jni::ref<sun::security::ec::point::ProjectivePoint_Mutable> mutable_() { return call_method<"mutable", jni::ref<sun::security::ec::point::ProjectivePoint_Mutable>>(); }
	jni::ref<sun::security::util::math::IntegerModuloP> getX() { return call_method<"getX", jni::ref<sun::security::util::math::IntegerModuloP>>(); }
	jni::ref<sun::security::util::math::IntegerModuloP> getY() { return call_method<"getY", jni::ref<sun::security::util::math::IntegerModuloP>>(); }
	jni::ref<sun::security::util::math::IntegerModuloP> getZ() { return call_method<"getZ", jni::ref<sun::security::util::math::IntegerModuloP>>(); }
	jni::ref<sun::security::ec::point::AffinePoint> asAffine() { return call_method<"asAffine", jni::ref<sun::security::ec::point::AffinePoint>>(); }
	jboolean affineEquals(jni::ref<sun::security::ec::point::Point> p) { return call_method<"affineEquals", jboolean>(p); }

protected:

	ProjectivePoint(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_EC_POINT_PROJECTIVEPOINT