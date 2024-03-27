// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/security/PrivateKey.h>
#include <scapix/java_api/javax/crypto/interfaces/DHPrivateKey.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_DHPRIVATEKEY_FWD
#define SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_DHPRIVATEKEY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::crypto::provider { class DHPrivateKey; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::crypto::provider::DHPrivateKey>
{
	static constexpr fixed_string class_name = "com/sun/crypto/provider/DHPrivateKey";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::security::PrivateKey, scapix::java_api::javax::crypto::interfaces::DHPrivateKey, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_DHPRIVATEKEY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_DHPRIVATEKEY)
#define SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_DHPRIVATEKEY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/math/BigInteger.h>
#include <scapix/java_api/javax/crypto/spec/DHParameterSpec.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::crypto::provider::DHPrivateKey : public jni::object_base<"com/sun/crypto/provider/DHPrivateKey",
	java::lang::Object,
	java::security::PrivateKey,
	javax::crypto::interfaces::DHPrivateKey,
	java::io::Serializable>
{
public:

	jni::ref<java::lang::String> getFormat() { return call_method<"getFormat", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getAlgorithm() { return call_method<"getAlgorithm", jni::ref<java::lang::String>>(); }
	jni::ref<jni::array<jbyte>> getEncoded() { return call_method<"getEncoded", jni::ref<jni::array<jbyte>>>(); }
	jni::ref<java::math::BigInteger> getX() { return call_method<"getX", jni::ref<java::math::BigInteger>>(); }
	jni::ref<javax::crypto::spec::DHParameterSpec> getParams() { return call_method<"getParams", jni::ref<javax::crypto::spec::DHParameterSpec>>(); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> obj) { return call_method<"equals", jboolean>(obj); }

protected:

	DHPrivateKey(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_DHPRIVATEKEY