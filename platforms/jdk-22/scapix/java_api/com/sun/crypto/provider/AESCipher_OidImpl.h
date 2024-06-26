// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/crypto/provider/AESCipher.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_AESCIPHER_OIDIMPL_FWD
#define SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_AESCIPHER_OIDIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::crypto::provider { class AESCipher_OidImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::crypto::provider::AESCipher_OidImpl>
{
	static constexpr fixed_string class_name = "com/sun/crypto/provider/AESCipher$OidImpl";
	using base_classes = std::tuple<scapix::java_api::com::sun::crypto::provider::AESCipher>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_AESCIPHER_OIDIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_AESCIPHER_OIDIMPL)
#define SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_AESCIPHER_OIDIMPL

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::crypto::provider::AESCipher_OidImpl : public jni::object_base<"com/sun/crypto/provider/AESCipher$OidImpl",
	com::sun::crypto::provider::AESCipher>
{
public:


protected:

	AESCipher_OidImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_AESCIPHER_OIDIMPL
