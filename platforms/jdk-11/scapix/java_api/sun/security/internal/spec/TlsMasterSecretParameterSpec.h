// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/security/spec/AlgorithmParameterSpec.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_INTERNAL_SPEC_TLSMASTERSECRETPARAMETERSPEC_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_INTERNAL_SPEC_TLSMASTERSECRETPARAMETERSPEC_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::internal::spec { class TlsMasterSecretParameterSpec; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::internal::spec::TlsMasterSecretParameterSpec>
{
	static constexpr fixed_string class_name = "sun/security/internal/spec/TlsMasterSecretParameterSpec";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::security::spec::AlgorithmParameterSpec>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_INTERNAL_SPEC_TLSMASTERSECRETPARAMETERSPEC_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_INTERNAL_SPEC_TLSMASTERSECRETPARAMETERSPEC)
#define SCAPIX_JAVA_API_SUN_SECURITY_INTERNAL_SPEC_TLSMASTERSECRETPARAMETERSPEC

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/crypto/SecretKey.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::internal::spec::TlsMasterSecretParameterSpec : public jni::object_base<"sun/security/internal/spec/TlsMasterSecretParameterSpec",
	java::lang::Object,
	java::security::spec::AlgorithmParameterSpec>
{
public:

	static jni::ref<sun::security::internal::spec::TlsMasterSecretParameterSpec> new_object(jni::ref<javax::crypto::SecretKey> premasterSecret, jint majorVersion, jint minorVersion, jni::ref<jni::array<jbyte>> clientRandom, jni::ref<jni::array<jbyte>> serverRandom, jni::ref<java::lang::String> prfHashAlg, jint prfHashLength, jint prfBlockSize) { return base_::new_object(premasterSecret, majorVersion, minorVersion, clientRandom, serverRandom, prfHashAlg, prfHashLength, prfBlockSize); }
	static jni::ref<sun::security::internal::spec::TlsMasterSecretParameterSpec> new_object(jni::ref<javax::crypto::SecretKey> premasterSecret, jint majorVersion, jint minorVersion, jni::ref<jni::array<jbyte>> extendedMasterSecretSessionHash, jni::ref<java::lang::String> prfHashAlg, jint prfHashLength, jint prfBlockSize) { return base_::new_object(premasterSecret, majorVersion, minorVersion, extendedMasterSecretSessionHash, prfHashAlg, prfHashLength, prfBlockSize); }
	jni::ref<javax::crypto::SecretKey> getPremasterSecret() { return call_method<"getPremasterSecret", jni::ref<javax::crypto::SecretKey>>(); }
	jint getMajorVersion() { return call_method<"getMajorVersion", jint>(); }
	jint getMinorVersion() { return call_method<"getMinorVersion", jint>(); }
	jni::ref<jni::array<jbyte>> getClientRandom() { return call_method<"getClientRandom", jni::ref<jni::array<jbyte>>>(); }
	jni::ref<jni::array<jbyte>> getServerRandom() { return call_method<"getServerRandom", jni::ref<jni::array<jbyte>>>(); }
	jni::ref<jni::array<jbyte>> getExtendedMasterSecretSessionHash() { return call_method<"getExtendedMasterSecretSessionHash", jni::ref<jni::array<jbyte>>>(); }
	jni::ref<java::lang::String> getPRFHashAlg() { return call_method<"getPRFHashAlg", jni::ref<java::lang::String>>(); }
	jint getPRFHashLength() { return call_method<"getPRFHashLength", jint>(); }
	jint getPRFBlockSize() { return call_method<"getPRFBlockSize", jint>(); }

protected:

	TlsMasterSecretParameterSpec(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_INTERNAL_SPEC_TLSMASTERSECRETPARAMETERSPEC
