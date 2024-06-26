// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/security/interfaces/RSAPrivateKey.h>

#ifndef SCAPIX_JAVA_API_JAVA_SECURITY_INTERFACES_RSAMULTIPRIMEPRIVATECRTKEY_FWD
#define SCAPIX_JAVA_API_JAVA_SECURITY_INTERFACES_RSAMULTIPRIMEPRIVATECRTKEY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::security::interfaces { class RSAMultiPrimePrivateCrtKey; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::security::interfaces::RSAMultiPrimePrivateCrtKey>
{
	static constexpr fixed_string class_name = "java/security/interfaces/RSAMultiPrimePrivateCrtKey";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::security::interfaces::RSAPrivateKey>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_INTERFACES_RSAMULTIPRIMEPRIVATECRTKEY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_SECURITY_INTERFACES_RSAMULTIPRIMEPRIVATECRTKEY)
#define SCAPIX_JAVA_API_JAVA_SECURITY_INTERFACES_RSAMULTIPRIMEPRIVATECRTKEY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/math/BigInteger.h>
#include <scapix/java_api/java/security/spec/RSAOtherPrimeInfo.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::security::interfaces::RSAMultiPrimePrivateCrtKey : public jni::object_base<"java/security/interfaces/RSAMultiPrimePrivateCrtKey",
	java::lang::Object,
	java::security::interfaces::RSAPrivateKey>
{
public:

	static jlong serialVersionUID() { return get_static_field<"serialVersionUID", jlong>(); }

	jni::ref<java::math::BigInteger> getCrtCoefficient() { return call_method<"getCrtCoefficient", jni::ref<java::math::BigInteger>>(); }
	jni::ref<jni::array<java::security::spec::RSAOtherPrimeInfo>> getOtherPrimeInfo() { return call_method<"getOtherPrimeInfo", jni::ref<jni::array<java::security::spec::RSAOtherPrimeInfo>>>(); }
	jni::ref<java::math::BigInteger> getPrimeP() { return call_method<"getPrimeP", jni::ref<java::math::BigInteger>>(); }
	jni::ref<java::math::BigInteger> getPrimeQ() { return call_method<"getPrimeQ", jni::ref<java::math::BigInteger>>(); }
	jni::ref<java::math::BigInteger> getPrimeExponentP() { return call_method<"getPrimeExponentP", jni::ref<java::math::BigInteger>>(); }
	jni::ref<java::math::BigInteger> getPrimeExponentQ() { return call_method<"getPrimeExponentQ", jni::ref<java::math::BigInteger>>(); }
	jni::ref<java::math::BigInteger> getPublicExponent() { return call_method<"getPublicExponent", jni::ref<java::math::BigInteger>>(); }

protected:

	RSAMultiPrimePrivateCrtKey(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_INTERFACES_RSAMULTIPRIMEPRIVATECRTKEY
