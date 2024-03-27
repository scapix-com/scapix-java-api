// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/crypto/CipherSpi.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_DESEDEWRAPCIPHER_FWD
#define SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_DESEDEWRAPCIPHER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::crypto::provider { class DESedeWrapCipher; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::crypto::provider::DESedeWrapCipher>
{
	static constexpr fixed_string class_name = "com/sun/crypto/provider/DESedeWrapCipher";
	using base_classes = std::tuple<scapix::java_api::javax::crypto::CipherSpi>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_DESEDEWRAPCIPHER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_DESEDEWRAPCIPHER)
#define SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_DESEDEWRAPCIPHER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::crypto::provider::DESedeWrapCipher : public jni::object_base<"com/sun/crypto/provider/DESedeWrapCipher",
	javax::crypto::CipherSpi>
{
public:

	static jni::ref<com::sun::crypto::provider::DESedeWrapCipher> new_object() { return base_::new_object(); }

protected:

	DESedeWrapCipher(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_DESEDEWRAPCIPHER
