// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/sun/security/util/math/SmallValue.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_UTIL_MATH_INTPOLY_INTEGERPOLYNOMIAL_LIMB_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_UTIL_MATH_INTPOLY_INTEGERPOLYNOMIAL_LIMB_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::util::math::intpoly { class IntegerPolynomial_Limb; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::util::math::intpoly::IntegerPolynomial_Limb>
{
	static constexpr fixed_string class_name = "sun/security/util/math/intpoly/IntegerPolynomial$Limb";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::sun::security::util::math::SmallValue>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_UTIL_MATH_INTPOLY_INTEGERPOLYNOMIAL_LIMB_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_UTIL_MATH_INTPOLY_INTEGERPOLYNOMIAL_LIMB)
#define SCAPIX_JAVA_API_SUN_SECURITY_UTIL_MATH_INTPOLY_INTEGERPOLYNOMIAL_LIMB

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::util::math::intpoly::IntegerPolynomial_Limb : public jni::object_base<"sun/security/util/math/intpoly/IntegerPolynomial$Limb",
	java::lang::Object,
	sun::security::util::math::SmallValue>
{
public:


protected:

	IntegerPolynomial_Limb(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_UTIL_MATH_INTPOLY_INTEGERPOLYNOMIAL_LIMB