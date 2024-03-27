// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/sun/security/util/math/IntegerModuloP.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_UTIL_MATH_INTPOLY_INTEGERPOLYNOMIAL_ELEMENT_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_UTIL_MATH_INTPOLY_INTEGERPOLYNOMIAL_ELEMENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::util::math::intpoly { class IntegerPolynomial_Element; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::util::math::intpoly::IntegerPolynomial_Element>
{
	static constexpr fixed_string class_name = "sun/security/util/math/intpoly/IntegerPolynomial$Element";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::sun::security::util::math::IntegerModuloP>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_UTIL_MATH_INTPOLY_INTEGERPOLYNOMIAL_ELEMENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_UTIL_MATH_INTPOLY_INTEGERPOLYNOMIAL_ELEMENT)
#define SCAPIX_JAVA_API_SUN_SECURITY_UTIL_MATH_INTPOLY_INTEGERPOLYNOMIAL_ELEMENT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/math/BigInteger.h>
#include <scapix/java_api/sun/security/util/math/IntegerFieldModuloP.h>
#include <scapix/java_api/sun/security/util/math/intpoly/IntegerPolynomial.h>
#include <scapix/java_api/sun/security/util/math/intpoly/IntegerPolynomial_ImmutableElement.h>
#include <scapix/java_api/sun/security/util/math/intpoly/IntegerPolynomial_MutableElement.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::util::math::intpoly::IntegerPolynomial_Element : public jni::object_base<"sun/security/util/math/intpoly/IntegerPolynomial$Element",
	java::lang::Object,
	sun::security::util::math::IntegerModuloP>
{
public:

	static jni::ref<sun::security::util::math::intpoly::IntegerPolynomial_Element> new_object(jni::ref<sun::security::util::math::intpoly::IntegerPolynomial> p1, jni::ref<java::math::BigInteger> v) { return base_::new_object(p1, v); }
	static jni::ref<sun::security::util::math::intpoly::IntegerPolynomial_Element> new_object(jni::ref<sun::security::util::math::intpoly::IntegerPolynomial> p1, jboolean v) { return base_::new_object(p1, v); }
	jni::ref<sun::security::util::math::IntegerFieldModuloP> getField() { return call_method<"getField", jni::ref<sun::security::util::math::IntegerFieldModuloP>>(); }
	jni::ref<java::math::BigInteger> asBigInteger() { return call_method<"asBigInteger", jni::ref<java::math::BigInteger>>(); }
	jni::ref<sun::security::util::math::intpoly::IntegerPolynomial_MutableElement> mutable_() { return call_method<"mutable", jni::ref<sun::security::util::math::intpoly::IntegerPolynomial_MutableElement>>(); }
	jni::ref<sun::security::util::math::intpoly::IntegerPolynomial_ImmutableElement> add(jni::ref<sun::security::util::math::IntegerModuloP> genB) { return call_method<"add", jni::ref<sun::security::util::math::intpoly::IntegerPolynomial_ImmutableElement>>(genB); }
	jni::ref<sun::security::util::math::intpoly::IntegerPolynomial_ImmutableElement> additiveInverse() { return call_method<"additiveInverse", jni::ref<sun::security::util::math::intpoly::IntegerPolynomial_ImmutableElement>>(); }
	jni::ref<sun::security::util::math::intpoly::IntegerPolynomial_ImmutableElement> multiply(jni::ref<sun::security::util::math::IntegerModuloP> genB) { return call_method<"multiply", jni::ref<sun::security::util::math::intpoly::IntegerPolynomial_ImmutableElement>>(genB); }
	jni::ref<sun::security::util::math::intpoly::IntegerPolynomial_ImmutableElement> square() { return call_method<"square", jni::ref<sun::security::util::math::intpoly::IntegerPolynomial_ImmutableElement>>(); }
	void addModPowerTwo(jni::ref<sun::security::util::math::IntegerModuloP> arg, jni::ref<jni::array<jbyte>> result) { return call_method<"addModPowerTwo", void>(arg, result); }
	void asByteArray(jni::ref<jni::array<jbyte>> result) { return call_method<"asByteArray", void>(result); }

protected:

	IntegerPolynomial_Element(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_UTIL_MATH_INTPOLY_INTEGERPOLYNOMIAL_ELEMENT
