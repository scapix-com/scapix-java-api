// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/crypto/provider/SymmetricCipher.h>
#include <scapix/java_api/com/sun/crypto/provider/BlowfishConstants.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_BLOWFISHCRYPT_FWD
#define SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_BLOWFISHCRYPT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::crypto::provider { class BlowfishCrypt; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::crypto::provider::BlowfishCrypt>
{
	static constexpr fixed_string class_name = "com/sun/crypto/provider/BlowfishCrypt";
	using base_classes = std::tuple<scapix::java_api::com::sun::crypto::provider::SymmetricCipher, scapix::java_api::com::sun::crypto::provider::BlowfishConstants>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_BLOWFISHCRYPT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_BLOWFISHCRYPT)
#define SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_BLOWFISHCRYPT

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::crypto::provider::BlowfishCrypt : public jni::object_base<"com/sun/crypto/provider/BlowfishCrypt",
	com::sun::crypto::provider::SymmetricCipher,
	com::sun::crypto::provider::BlowfishConstants>
{
public:


protected:

	BlowfishCrypt(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_BLOWFISHCRYPT