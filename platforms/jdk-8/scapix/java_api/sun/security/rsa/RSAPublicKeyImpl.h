// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/security/x509/X509Key.h>
#include <scapix/java_api/java/security/interfaces/RSAPublicKey.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_RSA_RSAPUBLICKEYIMPL_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_RSA_RSAPUBLICKEYIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::rsa { class RSAPublicKeyImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::rsa::RSAPublicKeyImpl>
{
	static constexpr fixed_string class_name = "sun/security/rsa/RSAPublicKeyImpl";
	using base_classes = std::tuple<scapix::java_api::sun::security::x509::X509Key, scapix::java_api::java::security::interfaces::RSAPublicKey>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_RSA_RSAPUBLICKEYIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_RSA_RSAPUBLICKEYIMPL)
#define SCAPIX_JAVA_API_SUN_SECURITY_RSA_RSAPUBLICKEYIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/math/BigInteger.h>
#include <scapix/java_api/java/security/spec/AlgorithmParameterSpec.h>
#include <scapix/java_api/sun/security/rsa/RSAUtil_KeyType.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::rsa::RSAPublicKeyImpl : public jni::object_base<"sun/security/rsa/RSAPublicKeyImpl",
	sun::security::x509::X509Key,
	java::security::interfaces::RSAPublicKey>
{
public:

	static jni::ref<java::security::interfaces::RSAPublicKey> newKey(jni::ref<jni::array<jbyte>> p1) { return call_static_method<"newKey", jni::ref<java::security::interfaces::RSAPublicKey>>(p1); }
	static jni::ref<java::security::interfaces::RSAPublicKey> newKey(jni::ref<sun::security::rsa::RSAUtil_KeyType> p1, jni::ref<java::lang::String> p2, jni::ref<jni::array<jbyte>> p3) { return call_static_method<"newKey", jni::ref<java::security::interfaces::RSAPublicKey>>(p1, p2, p3); }
	static jni::ref<java::security::interfaces::RSAPublicKey> newKey(jni::ref<sun::security::rsa::RSAUtil_KeyType> p1, jni::ref<java::security::spec::AlgorithmParameterSpec> p2, jni::ref<java::math::BigInteger> p3, jni::ref<java::math::BigInteger> p4) { return call_static_method<"newKey", jni::ref<java::security::interfaces::RSAPublicKey>>(p1, p2, p3, p4); }
	jni::ref<java::lang::String> getAlgorithm() { return call_method<"getAlgorithm", jni::ref<java::lang::String>>(); }
	jni::ref<java::math::BigInteger> getModulus() { return call_method<"getModulus", jni::ref<java::math::BigInteger>>(); }
	jni::ref<java::math::BigInteger> getPublicExponent() { return call_method<"getPublicExponent", jni::ref<java::math::BigInteger>>(); }
	jni::ref<java::security::spec::AlgorithmParameterSpec> getParams() { return call_method<"getParams", jni::ref<java::security::spec::AlgorithmParameterSpec>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	RSAPublicKeyImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_RSA_RSAPUBLICKEYIMPL
