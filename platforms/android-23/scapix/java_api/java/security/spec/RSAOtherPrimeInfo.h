// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_SECURITY_SPEC_RSAOTHERPRIMEINFO_FWD
#define SCAPIX_JAVA_API_JAVA_SECURITY_SPEC_RSAOTHERPRIMEINFO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::security::spec { class RSAOtherPrimeInfo; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::security::spec::RSAOtherPrimeInfo>
{
	static constexpr fixed_string class_name = "java/security/spec/RSAOtherPrimeInfo";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_SPEC_RSAOTHERPRIMEINFO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_SECURITY_SPEC_RSAOTHERPRIMEINFO)
#define SCAPIX_JAVA_API_JAVA_SECURITY_SPEC_RSAOTHERPRIMEINFO

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/math/BigInteger.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::security::spec::RSAOtherPrimeInfo : public jni::object_base<"java/security/spec/RSAOtherPrimeInfo",
	java::lang::Object>
{
public:

	static jni::ref<java::security::spec::RSAOtherPrimeInfo> new_object(jni::ref<java::math::BigInteger> prime, jni::ref<java::math::BigInteger> primeExponent, jni::ref<java::math::BigInteger> crtCoefficient) { return base_::new_object(prime, primeExponent, crtCoefficient); }
	jni::ref<java::math::BigInteger> getCrtCoefficient() { return call_method<"getCrtCoefficient", jni::ref<java::math::BigInteger>>(); }
	jni::ref<java::math::BigInteger> getPrime() { return call_method<"getPrime", jni::ref<java::math::BigInteger>>(); }
	jni::ref<java::math::BigInteger> getExponent() { return call_method<"getExponent", jni::ref<java::math::BigInteger>>(); }

protected:

	RSAOtherPrimeInfo(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_SPEC_RSAOTHERPRIMEINFO
