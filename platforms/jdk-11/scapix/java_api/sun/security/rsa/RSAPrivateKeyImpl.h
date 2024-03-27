// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/security/pkcs/PKCS8Key.h>
#include <scapix/java_api/java/security/interfaces/RSAPrivateKey.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_RSA_RSAPRIVATEKEYIMPL_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_RSA_RSAPRIVATEKEYIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::rsa { class RSAPrivateKeyImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::rsa::RSAPrivateKeyImpl>
{
	static constexpr fixed_string class_name = "sun/security/rsa/RSAPrivateKeyImpl";
	using base_classes = std::tuple<scapix::java_api::sun::security::pkcs::PKCS8Key, scapix::java_api::java::security::interfaces::RSAPrivateKey>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_RSA_RSAPRIVATEKEYIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_RSA_RSAPRIVATEKEYIMPL)
#define SCAPIX_JAVA_API_SUN_SECURITY_RSA_RSAPRIVATEKEYIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/math/BigInteger.h>
#include <scapix/java_api/java/security/spec/AlgorithmParameterSpec.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::rsa::RSAPrivateKeyImpl : public jni::object_base<"sun/security/rsa/RSAPrivateKeyImpl",
	sun::security::pkcs::PKCS8Key,
	java::security::interfaces::RSAPrivateKey>
{
public:

	jni::ref<java::lang::String> getAlgorithm() { return call_method<"getAlgorithm", jni::ref<java::lang::String>>(); }
	jni::ref<java::math::BigInteger> getModulus() { return call_method<"getModulus", jni::ref<java::math::BigInteger>>(); }
	jni::ref<java::math::BigInteger> getPrivateExponent() { return call_method<"getPrivateExponent", jni::ref<java::math::BigInteger>>(); }
	jni::ref<java::security::spec::AlgorithmParameterSpec> getParams() { return call_method<"getParams", jni::ref<java::security::spec::AlgorithmParameterSpec>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	RSAPrivateKeyImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_RSA_RSAPRIVATEKEYIMPL
