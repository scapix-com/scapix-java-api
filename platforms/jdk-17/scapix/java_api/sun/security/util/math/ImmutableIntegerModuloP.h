// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/sun/security/util/math/IntegerModuloP.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_UTIL_MATH_IMMUTABLEINTEGERMODULOP_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_UTIL_MATH_IMMUTABLEINTEGERMODULOP_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::util::math { class ImmutableIntegerModuloP; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::util::math::ImmutableIntegerModuloP>
{
	static constexpr fixed_string class_name = "sun/security/util/math/ImmutableIntegerModuloP";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::sun::security::util::math::IntegerModuloP>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_UTIL_MATH_IMMUTABLEINTEGERMODULOP_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_UTIL_MATH_IMMUTABLEINTEGERMODULOP)
#define SCAPIX_JAVA_API_SUN_SECURITY_UTIL_MATH_IMMUTABLEINTEGERMODULOP

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::util::math::ImmutableIntegerModuloP : public jni::object_base<"sun/security/util/math/ImmutableIntegerModuloP",
	java::lang::Object,
	sun::security::util::math::IntegerModuloP>
{
public:


protected:

	ImmutableIntegerModuloP(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_UTIL_MATH_IMMUTABLEINTEGERMODULOP
