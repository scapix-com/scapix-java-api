// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/sun/security/util/math/IntegerFieldModuloP.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_UTIL_MATH_INTPOLY_INTEGERPOLYNOMIAL_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_UTIL_MATH_INTPOLY_INTEGERPOLYNOMIAL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::util::math::intpoly { class IntegerPolynomial; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::util::math::intpoly::IntegerPolynomial>
{
	static constexpr fixed_string class_name = "sun/security/util/math/intpoly/IntegerPolynomial";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::sun::security::util::math::IntegerFieldModuloP>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_UTIL_MATH_INTPOLY_INTEGERPOLYNOMIAL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_UTIL_MATH_INTPOLY_INTEGERPOLYNOMIAL)
#define SCAPIX_JAVA_API_SUN_SECURITY_UTIL_MATH_INTPOLY_INTEGERPOLYNOMIAL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/math/BigInteger.h>
#include <scapix/java_api/sun/security/util/math/SmallValue.h>
#include <scapix/java_api/sun/security/util/math/intpoly/IntegerPolynomial_ImmutableElement.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::util::math::intpoly::IntegerPolynomial : public jni::object_base<"sun/security/util/math/intpoly/IntegerPolynomial",
	java::lang::Object,
	sun::security::util::math::IntegerFieldModuloP>
{
public:

	jint getMaxAdds() { return call_method<"getMaxAdds", jint>(); }
	jni::ref<java::math::BigInteger> getSize() { return call_method<"getSize", jni::ref<java::math::BigInteger>>(); }
	jni::ref<sun::security::util::math::intpoly::IntegerPolynomial_ImmutableElement> get0() { return call_method<"get0", jni::ref<sun::security::util::math::intpoly::IntegerPolynomial_ImmutableElement>>(); }
	jni::ref<sun::security::util::math::intpoly::IntegerPolynomial_ImmutableElement> get1() { return call_method<"get1", jni::ref<sun::security::util::math::intpoly::IntegerPolynomial_ImmutableElement>>(); }
	jni::ref<sun::security::util::math::intpoly::IntegerPolynomial_ImmutableElement> getElement(jni::ref<java::math::BigInteger> v) { return call_method<"getElement", jni::ref<sun::security::util::math::intpoly::IntegerPolynomial_ImmutableElement>>(v); }
	jni::ref<sun::security::util::math::SmallValue> getSmallValue(jint value) { return call_method<"getSmallValue", jni::ref<sun::security::util::math::SmallValue>>(value); }
	jni::ref<sun::security::util::math::intpoly::IntegerPolynomial_ImmutableElement> getElement(jni::ref<jni::array<jbyte>> v, jint offset, jint length, jbyte highByte) { return call_method<"getElement", jni::ref<sun::security::util::math::intpoly::IntegerPolynomial_ImmutableElement>>(v, offset, length, highByte); }

protected:

	IntegerPolynomial(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_UTIL_MATH_INTPOLY_INTEGERPOLYNOMIAL