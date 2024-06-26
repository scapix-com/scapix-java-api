// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_CRYPTO_KEYAGREEMENT_FWD
#define SCAPIX_JAVA_API_JAVAX_CRYPTO_KEYAGREEMENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::crypto { class KeyAgreement; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::crypto::KeyAgreement>
{
	static constexpr fixed_string class_name = "javax/crypto/KeyAgreement";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_CRYPTO_KEYAGREEMENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_CRYPTO_KEYAGREEMENT)
#define SCAPIX_JAVA_API_JAVAX_CRYPTO_KEYAGREEMENT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/security/Key.h>
#include <scapix/java_api/java/security/Provider.h>
#include <scapix/java_api/java/security/SecureRandom.h>
#include <scapix/java_api/java/security/spec/AlgorithmParameterSpec.h>
#include <scapix/java_api/javax/crypto/SecretKey.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::crypto::KeyAgreement : public jni::object_base<"javax/crypto/KeyAgreement",
	java::lang::Object>
{
public:

	jni::ref<java::lang::String> getAlgorithm() { return call_method<"getAlgorithm", jni::ref<java::lang::String>>(); }
	jni::ref<java::security::Provider> getProvider() { return call_method<"getProvider", jni::ref<java::security::Provider>>(); }
	static jni::ref<javax::crypto::KeyAgreement> getInstance(jni::ref<java::lang::String> algorithm) { return call_static_method<"getInstance", jni::ref<javax::crypto::KeyAgreement>>(algorithm); }
	static jni::ref<javax::crypto::KeyAgreement> getInstance(jni::ref<java::lang::String> algorithm, jni::ref<java::lang::String> provider) { return call_static_method<"getInstance", jni::ref<javax::crypto::KeyAgreement>>(algorithm, provider); }
	static jni::ref<javax::crypto::KeyAgreement> getInstance(jni::ref<java::lang::String> algorithm, jni::ref<java::security::Provider> provider) { return call_static_method<"getInstance", jni::ref<javax::crypto::KeyAgreement>>(algorithm, provider); }
	void init(jni::ref<java::security::Key> key) { return call_method<"init", void>(key); }
	void init(jni::ref<java::security::Key> key, jni::ref<java::security::SecureRandom> random) { return call_method<"init", void>(key, random); }
	void init(jni::ref<java::security::Key> key, jni::ref<java::security::spec::AlgorithmParameterSpec> params) { return call_method<"init", void>(key, params); }
	void init(jni::ref<java::security::Key> key, jni::ref<java::security::spec::AlgorithmParameterSpec> params, jni::ref<java::security::SecureRandom> random) { return call_method<"init", void>(key, params, random); }
	jni::ref<java::security::Key> doPhase(jni::ref<java::security::Key> key, jboolean lastPhase) { return call_method<"doPhase", jni::ref<java::security::Key>>(key, lastPhase); }
	jni::ref<jni::array<jbyte>> generateSecret() { return call_method<"generateSecret", jni::ref<jni::array<jbyte>>>(); }
	jint generateSecret(jni::ref<jni::array<jbyte>> sharedSecret, jint offset) { return call_method<"generateSecret", jint>(sharedSecret, offset); }
	jni::ref<javax::crypto::SecretKey> generateSecret(jni::ref<java::lang::String> algorithm) { return call_method<"generateSecret", jni::ref<javax::crypto::SecretKey>>(algorithm); }

protected:

	KeyAgreement(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_CRYPTO_KEYAGREEMENT
