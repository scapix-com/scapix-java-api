// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/crypto/CipherSpi.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_AESWRAPCIPHER_FWD
#define SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_AESWRAPCIPHER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::crypto::provider { class AESWrapCipher; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::crypto::provider::AESWrapCipher>
{
	static constexpr fixed_string class_name = "com/sun/crypto/provider/AESWrapCipher";
	using base_classes = std::tuple<scapix::java_api::javax::crypto::CipherSpi>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_AESWRAPCIPHER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_AESWRAPCIPHER)
#define SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_AESWRAPCIPHER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/crypto/provider/AESWrapCipher_AES256.h>
#include <scapix/java_api/com/sun/crypto/provider/AESWrapCipher_AES192.h>
#include <scapix/java_api/com/sun/crypto/provider/AESWrapCipher_AES128.h>
#include <scapix/java_api/com/sun/crypto/provider/AESWrapCipher_General.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::crypto::provider::AESWrapCipher : public jni::object_base<"com/sun/crypto/provider/AESWrapCipher",
	javax::crypto::CipherSpi>
{
public:

	using AES256 = AESWrapCipher_AES256;
	using AES192 = AESWrapCipher_AES192;
	using AES128 = AESWrapCipher_AES128;
	using General = AESWrapCipher_General;

	static jni::ref<com::sun::crypto::provider::AESWrapCipher> new_object(jint keySize) { return base_::new_object(keySize); }

protected:

	AESWrapCipher(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_AESWRAPCIPHER