// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/sun/security/internal/interfaces/TlsMasterSecret.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_TLSMASTERSECRETGENERATOR_TLSMASTERSECRETKEY_FWD
#define SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_TLSMASTERSECRETGENERATOR_TLSMASTERSECRETKEY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::crypto::provider { class TlsMasterSecretGenerator_TlsMasterSecretKey; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::crypto::provider::TlsMasterSecretGenerator_TlsMasterSecretKey>
{
	static constexpr fixed_string class_name = "com/sun/crypto/provider/TlsMasterSecretGenerator$TlsMasterSecretKey";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::sun::security::internal::interfaces::TlsMasterSecret>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_TLSMASTERSECRETGENERATOR_TLSMASTERSECRETKEY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_TLSMASTERSECRETGENERATOR_TLSMASTERSECRETKEY)
#define SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_TLSMASTERSECRETGENERATOR_TLSMASTERSECRETKEY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::crypto::provider::TlsMasterSecretGenerator_TlsMasterSecretKey : public jni::object_base<"com/sun/crypto/provider/TlsMasterSecretGenerator$TlsMasterSecretKey",
	java::lang::Object,
	sun::security::internal::interfaces::TlsMasterSecret>
{
public:

	jint getMajorVersion() { return call_method<"getMajorVersion", jint>(); }
	jint getMinorVersion() { return call_method<"getMinorVersion", jint>(); }
	jni::ref<java::lang::String> getAlgorithm() { return call_method<"getAlgorithm", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getFormat() { return call_method<"getFormat", jni::ref<java::lang::String>>(); }
	jni::ref<jni::array<jbyte>> getEncoded() { return call_method<"getEncoded", jni::ref<jni::array<jbyte>>>(); }

protected:

	TlsMasterSecretGenerator_TlsMasterSecretKey(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_TLSMASTERSECRETGENERATOR_TLSMASTERSECRETKEY
