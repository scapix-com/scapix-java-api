// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/security/ec/point/ExtendedHomogeneousPoint.h>
#include <scapix/java_api/sun/security/ec/point/ImmutablePoint.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_EC_POINT_EXTENDEDHOMOGENEOUSPOINT_IMMUTABLE_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_EC_POINT_EXTENDEDHOMOGENEOUSPOINT_IMMUTABLE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::ec::point { class ExtendedHomogeneousPoint_Immutable; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::ec::point::ExtendedHomogeneousPoint_Immutable>
{
	static constexpr fixed_string class_name = "sun/security/ec/point/ExtendedHomogeneousPoint$Immutable";
	using base_classes = std::tuple<scapix::java_api::sun::security::ec::point::ExtendedHomogeneousPoint, scapix::java_api::sun::security::ec::point::ImmutablePoint>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_EC_POINT_EXTENDEDHOMOGENEOUSPOINT_IMMUTABLE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_EC_POINT_EXTENDEDHOMOGENEOUSPOINT_IMMUTABLE)
#define SCAPIX_JAVA_API_SUN_SECURITY_EC_POINT_EXTENDEDHOMOGENEOUSPOINT_IMMUTABLE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/sun/security/util/math/ImmutableIntegerModuloP.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::ec::point::ExtendedHomogeneousPoint_Immutable : public jni::object_base<"sun/security/ec/point/ExtendedHomogeneousPoint$Immutable",
	sun::security::ec::point::ExtendedHomogeneousPoint,
	sun::security::ec::point::ImmutablePoint>
{
public:

	static jni::ref<sun::security::ec::point::ExtendedHomogeneousPoint_Immutable> new_object(jni::ref<sun::security::util::math::ImmutableIntegerModuloP> x, jni::ref<sun::security::util::math::ImmutableIntegerModuloP> y, jni::ref<sun::security::util::math::ImmutableIntegerModuloP> t, jni::ref<sun::security::util::math::ImmutableIntegerModuloP> z) { return base_::new_object(x, y, t, z); }

protected:

	ExtendedHomogeneousPoint_Immutable(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_EC_POINT_EXTENDEDHOMOGENEOUSPOINT_IMMUTABLE