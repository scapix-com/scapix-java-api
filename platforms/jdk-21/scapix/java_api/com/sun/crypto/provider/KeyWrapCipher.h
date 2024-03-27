// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/crypto/CipherSpi.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_KEYWRAPCIPHER_FWD
#define SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_KEYWRAPCIPHER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::crypto::provider { class KeyWrapCipher; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::crypto::provider::KeyWrapCipher>
{
	static constexpr fixed_string class_name = "com/sun/crypto/provider/KeyWrapCipher";
	using base_classes = std::tuple<scapix::java_api::javax::crypto::CipherSpi>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_KEYWRAPCIPHER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_KEYWRAPCIPHER)
#define SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_KEYWRAPCIPHER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/crypto/provider/FeedbackCipher.h>
#include <scapix/java_api/com/sun/crypto/provider/Padding.h>
#include <scapix/java_api/com/sun/crypto/provider/KeyWrapCipher_AES256_KWP_NoPadding.h>
#include <scapix/java_api/com/sun/crypto/provider/KeyWrapCipher_AES192_KWP_NoPadding.h>
#include <scapix/java_api/com/sun/crypto/provider/KeyWrapCipher_AES128_KWP_NoPadding.h>
#include <scapix/java_api/com/sun/crypto/provider/KeyWrapCipher_AES_KWP_NoPadding.h>
#include <scapix/java_api/com/sun/crypto/provider/KeyWrapCipher_AES256_KW_PKCS5Padding.h>
#include <scapix/java_api/com/sun/crypto/provider/KeyWrapCipher_AES192_KW_PKCS5Padding.h>
#include <scapix/java_api/com/sun/crypto/provider/KeyWrapCipher_AES128_KW_PKCS5Padding.h>
#include <scapix/java_api/com/sun/crypto/provider/KeyWrapCipher_AES_KW_PKCS5Padding.h>
#include <scapix/java_api/com/sun/crypto/provider/KeyWrapCipher_AES256_KW_NoPadding.h>
#include <scapix/java_api/com/sun/crypto/provider/KeyWrapCipher_AES192_KW_NoPadding.h>
#include <scapix/java_api/com/sun/crypto/provider/KeyWrapCipher_AES128_KW_NoPadding.h>
#include <scapix/java_api/com/sun/crypto/provider/KeyWrapCipher_AES_KW_NoPadding.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::crypto::provider::KeyWrapCipher : public jni::object_base<"com/sun/crypto/provider/KeyWrapCipher",
	javax::crypto::CipherSpi>
{
public:

	using AES256_KWP_NoPadding = KeyWrapCipher_AES256_KWP_NoPadding;
	using AES192_KWP_NoPadding = KeyWrapCipher_AES192_KWP_NoPadding;
	using AES128_KWP_NoPadding = KeyWrapCipher_AES128_KWP_NoPadding;
	using AES_KWP_NoPadding = KeyWrapCipher_AES_KWP_NoPadding;
	using AES256_KW_PKCS5Padding = KeyWrapCipher_AES256_KW_PKCS5Padding;
	using AES192_KW_PKCS5Padding = KeyWrapCipher_AES192_KW_PKCS5Padding;
	using AES128_KW_PKCS5Padding = KeyWrapCipher_AES128_KW_PKCS5Padding;
	using AES_KW_PKCS5Padding = KeyWrapCipher_AES_KW_PKCS5Padding;
	using AES256_KW_NoPadding = KeyWrapCipher_AES256_KW_NoPadding;
	using AES192_KW_NoPadding = KeyWrapCipher_AES192_KW_NoPadding;
	using AES128_KW_NoPadding = KeyWrapCipher_AES128_KW_NoPadding;
	using AES_KW_NoPadding = KeyWrapCipher_AES_KW_NoPadding;

	static jni::ref<com::sun::crypto::provider::KeyWrapCipher> new_object(jni::ref<com::sun::crypto::provider::FeedbackCipher> cipher, jni::ref<com::sun::crypto::provider::Padding> padding, jint keySize) { return base_::new_object(cipher, padding, keySize); }

protected:

	KeyWrapCipher(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_KEYWRAPCIPHER
