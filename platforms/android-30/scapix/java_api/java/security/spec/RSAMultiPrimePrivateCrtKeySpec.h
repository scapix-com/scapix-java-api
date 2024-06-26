// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/security/spec/RSAPrivateKeySpec.h>

#ifndef SCAPIX_JAVA_API_JAVA_SECURITY_SPEC_RSAMULTIPRIMEPRIVATECRTKEYSPEC_FWD
#define SCAPIX_JAVA_API_JAVA_SECURITY_SPEC_RSAMULTIPRIMEPRIVATECRTKEYSPEC_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::security::spec { class RSAMultiPrimePrivateCrtKeySpec; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::security::spec::RSAMultiPrimePrivateCrtKeySpec>
{
	static constexpr fixed_string class_name = "java/security/spec/RSAMultiPrimePrivateCrtKeySpec";
	using base_classes = std::tuple<scapix::java_api::java::security::spec::RSAPrivateKeySpec>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_SPEC_RSAMULTIPRIMEPRIVATECRTKEYSPEC_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_SECURITY_SPEC_RSAMULTIPRIMEPRIVATECRTKEYSPEC)
#define SCAPIX_JAVA_API_JAVA_SECURITY_SPEC_RSAMULTIPRIMEPRIVATECRTKEYSPEC

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/math/BigInteger.h>
#include <scapix/java_api/java/security/spec/RSAOtherPrimeInfo.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::security::spec::RSAMultiPrimePrivateCrtKeySpec : public jni::object_base<"java/security/spec/RSAMultiPrimePrivateCrtKeySpec",
	java::security::spec::RSAPrivateKeySpec>
{
public:

	static jni::ref<java::security::spec::RSAMultiPrimePrivateCrtKeySpec> new_object(jni::ref<java::math::BigInteger> modulus, jni::ref<java::math::BigInteger> publicExponent, jni::ref<java::math::BigInteger> privateExponent, jni::ref<java::math::BigInteger> primeP, jni::ref<java::math::BigInteger> primeQ, jni::ref<java::math::BigInteger> primeExponentP, jni::ref<java::math::BigInteger> primeExponentQ, jni::ref<java::math::BigInteger> crtCoefficient, jni::ref<jni::array<java::security::spec::RSAOtherPrimeInfo>> otherPrimeInfo) { return base_::new_object(modulus, publicExponent, privateExponent, primeP, primeQ, primeExponentP, primeExponentQ, crtCoefficient, otherPrimeInfo); }
	jni::ref<java::math::BigInteger> getPublicExponent() { return call_method<"getPublicExponent", jni::ref<java::math::BigInteger>>(); }
	jni::ref<java::math::BigInteger> getPrimeP() { return call_method<"getPrimeP", jni::ref<java::math::BigInteger>>(); }
	jni::ref<java::math::BigInteger> getPrimeQ() { return call_method<"getPrimeQ", jni::ref<java::math::BigInteger>>(); }
	jni::ref<java::math::BigInteger> getPrimeExponentP() { return call_method<"getPrimeExponentP", jni::ref<java::math::BigInteger>>(); }
	jni::ref<java::math::BigInteger> getPrimeExponentQ() { return call_method<"getPrimeExponentQ", jni::ref<java::math::BigInteger>>(); }
	jni::ref<java::math::BigInteger> getCrtCoefficient() { return call_method<"getCrtCoefficient", jni::ref<java::math::BigInteger>>(); }
	jni::ref<jni::array<java::security::spec::RSAOtherPrimeInfo>> getOtherPrimeInfo() { return call_method<"getOtherPrimeInfo", jni::ref<jni::array<java::security::spec::RSAOtherPrimeInfo>>>(); }

protected:

	RSAMultiPrimePrivateCrtKeySpec(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_SPEC_RSAMULTIPRIMEPRIVATECRTKEYSPEC
