// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_DHKEM_PARAMS_FWD
#define SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_DHKEM_PARAMS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::crypto::provider { class DHKEM_Params; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::crypto::provider::DHKEM_Params>
{
	static constexpr fixed_string class_name = "com/sun/crypto/provider/DHKEM$Params";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_DHKEM_PARAMS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_DHKEM_PARAMS)
#define SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_DHKEM_PARAMS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/security/KeyPair.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::crypto::provider::DHKEM_Params : public jni::object_base<"com/sun/crypto/provider/DHKEM$Params",
	java::lang::Enum>
{
public:

	static jni::ref<com::sun::crypto::provider::DHKEM_Params> P256() { return get_static_field<"P256", jni::ref<com::sun::crypto::provider::DHKEM_Params>>(); }
	static jni::ref<com::sun::crypto::provider::DHKEM_Params> P384() { return get_static_field<"P384", jni::ref<com::sun::crypto::provider::DHKEM_Params>>(); }
	static jni::ref<com::sun::crypto::provider::DHKEM_Params> P521() { return get_static_field<"P521", jni::ref<com::sun::crypto::provider::DHKEM_Params>>(); }
	static jni::ref<com::sun::crypto::provider::DHKEM_Params> X25519() { return get_static_field<"X25519", jni::ref<com::sun::crypto::provider::DHKEM_Params>>(); }
	static jni::ref<com::sun::crypto::provider::DHKEM_Params> X448() { return get_static_field<"X448", jni::ref<com::sun::crypto::provider::DHKEM_Params>>(); }

	static jni::ref<jni::array<com::sun::crypto::provider::DHKEM_Params>> values() { return call_static_method<"values", jni::ref<jni::array<com::sun::crypto::provider::DHKEM_Params>>>(); }
	static jni::ref<com::sun::crypto::provider::DHKEM_Params> valueOf(jni::ref<java::lang::String> name) { return call_static_method<"valueOf", jni::ref<com::sun::crypto::provider::DHKEM_Params>>(name); }
	jni::ref<java::security::KeyPair> deriveKeyPair(jni::ref<jni::array<jbyte>> ikm) { return call_method<"deriveKeyPair", jni::ref<java::security::KeyPair>>(ikm); }

protected:

	DHKEM_Params(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_DHKEM_PARAMS
