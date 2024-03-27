// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/crypto/provider/AESCipher.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_AESCIPHER_GENERAL_FWD
#define SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_AESCIPHER_GENERAL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::crypto::provider { class AESCipher_General; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::crypto::provider::AESCipher_General>
{
	static constexpr fixed_string class_name = "com/sun/crypto/provider/AESCipher$General";
	using base_classes = std::tuple<scapix::java_api::com::sun::crypto::provider::AESCipher>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_AESCIPHER_GENERAL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_AESCIPHER_GENERAL)
#define SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_AESCIPHER_GENERAL

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::crypto::provider::AESCipher_General : public jni::object_base<"com/sun/crypto/provider/AESCipher$General",
	com::sun::crypto::provider::AESCipher>
{
public:

	static jni::ref<com::sun::crypto::provider::AESCipher_General> new_object() { return base_::new_object(); }

protected:

	AESCipher_General(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_AESCIPHER_GENERAL
