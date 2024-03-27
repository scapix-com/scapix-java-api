// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/crypto/provider/CipherBlockChaining.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_CIPHERTEXTSTEALING_FWD
#define SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_CIPHERTEXTSTEALING_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::crypto::provider { class CipherTextStealing; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::crypto::provider::CipherTextStealing>
{
	static constexpr fixed_string class_name = "com/sun/crypto/provider/CipherTextStealing";
	using base_classes = std::tuple<scapix::java_api::com::sun::crypto::provider::CipherBlockChaining>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_CIPHERTEXTSTEALING_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_CIPHERTEXTSTEALING)
#define SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_CIPHERTEXTSTEALING

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::crypto::provider::CipherTextStealing : public jni::object_base<"com/sun/crypto/provider/CipherTextStealing",
	com::sun::crypto::provider::CipherBlockChaining>
{
public:


protected:

	CipherTextStealing(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_CIPHERTEXTSTEALING
