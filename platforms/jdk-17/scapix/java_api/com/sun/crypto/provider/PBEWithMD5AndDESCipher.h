// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/crypto/CipherSpi.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_PBEWITHMD5ANDDESCIPHER_FWD
#define SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_PBEWITHMD5ANDDESCIPHER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::crypto::provider { class PBEWithMD5AndDESCipher; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::crypto::provider::PBEWithMD5AndDESCipher>
{
	static constexpr fixed_string class_name = "com/sun/crypto/provider/PBEWithMD5AndDESCipher";
	using base_classes = std::tuple<scapix::java_api::javax::crypto::CipherSpi>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_PBEWITHMD5ANDDESCIPHER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_PBEWITHMD5ANDDESCIPHER)
#define SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_PBEWITHMD5ANDDESCIPHER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::crypto::provider::PBEWithMD5AndDESCipher : public jni::object_base<"com/sun/crypto/provider/PBEWithMD5AndDESCipher",
	javax::crypto::CipherSpi>
{
public:

	static jni::ref<com::sun::crypto::provider::PBEWithMD5AndDESCipher> new_object() { return base_::new_object(); }

protected:

	PBEWithMD5AndDESCipher(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_PBEWITHMD5ANDDESCIPHER