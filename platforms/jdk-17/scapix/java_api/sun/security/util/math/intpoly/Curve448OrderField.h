// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/security/util/math/intpoly/IntegerPolynomial.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_UTIL_MATH_INTPOLY_CURVE448ORDERFIELD_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_UTIL_MATH_INTPOLY_CURVE448ORDERFIELD_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::util::math::intpoly { class Curve448OrderField; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::util::math::intpoly::Curve448OrderField>
{
	static constexpr fixed_string class_name = "sun/security/util/math/intpoly/Curve448OrderField";
	using base_classes = std::tuple<scapix::java_api::sun::security::util::math::intpoly::IntegerPolynomial>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_UTIL_MATH_INTPOLY_CURVE448ORDERFIELD_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_UTIL_MATH_INTPOLY_CURVE448ORDERFIELD)
#define SCAPIX_JAVA_API_SUN_SECURITY_UTIL_MATH_INTPOLY_CURVE448ORDERFIELD

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/math/BigInteger.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::util::math::intpoly::Curve448OrderField : public jni::object_base<"sun/security/util/math/intpoly/Curve448OrderField",
	sun::security::util::math::intpoly::IntegerPolynomial>
{
public:

	static jni::ref<java::math::BigInteger> MODULUS() { return get_static_field<"MODULUS", jni::ref<java::math::BigInteger>>(); }

	static jni::ref<sun::security::util::math::intpoly::Curve448OrderField> new_object() { return base_::new_object(); }

protected:

	Curve448OrderField(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_UTIL_MATH_INTPOLY_CURVE448ORDERFIELD
