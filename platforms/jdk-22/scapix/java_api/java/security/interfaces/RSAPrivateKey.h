// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/security/PrivateKey.h>
#include <scapix/java_api/java/security/interfaces/RSAKey.h>

#ifndef SCAPIX_JAVA_API_JAVA_SECURITY_INTERFACES_RSAPRIVATEKEY_FWD
#define SCAPIX_JAVA_API_JAVA_SECURITY_INTERFACES_RSAPRIVATEKEY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::security::interfaces { class RSAPrivateKey; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::security::interfaces::RSAPrivateKey>
{
	static constexpr fixed_string class_name = "java/security/interfaces/RSAPrivateKey";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::security::PrivateKey, scapix::java_api::java::security::interfaces::RSAKey>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_INTERFACES_RSAPRIVATEKEY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_SECURITY_INTERFACES_RSAPRIVATEKEY)
#define SCAPIX_JAVA_API_JAVA_SECURITY_INTERFACES_RSAPRIVATEKEY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/math/BigInteger.h>
#include <scapix/java_api/java/security/spec/AlgorithmParameterSpec.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::security::interfaces::RSAPrivateKey : public jni::object_base<"java/security/interfaces/RSAPrivateKey",
	java::lang::Object,
	java::security::PrivateKey,
	java::security::interfaces::RSAKey>
{
public:

	static jlong serialVersionUID() { return get_static_field<"serialVersionUID", jlong>(); }

	jni::ref<java::math::BigInteger> getPrivateExponent() { return call_method<"getPrivateExponent", jni::ref<java::math::BigInteger>>(); }
	jni::ref<java::security::spec::AlgorithmParameterSpec> getParams() { return call_method<"getParams", jni::ref<java::security::spec::AlgorithmParameterSpec>>(); }

protected:

	RSAPrivateKey(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_INTERFACES_RSAPRIVATEKEY
