// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/crypto/KeyGeneratorSpi.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_KEYGENERATORCORE_HMACSHA2KG_FWD
#define SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_KEYGENERATORCORE_HMACSHA2KG_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::crypto::provider { class KeyGeneratorCore_HmacSHA2KG; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::crypto::provider::KeyGeneratorCore_HmacSHA2KG>
{
	static constexpr fixed_string class_name = "com/sun/crypto/provider/KeyGeneratorCore$HmacSHA2KG";
	using base_classes = std::tuple<scapix::java_api::javax::crypto::KeyGeneratorSpi>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_KEYGENERATORCORE_HMACSHA2KG_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_KEYGENERATORCORE_HMACSHA2KG)
#define SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_KEYGENERATORCORE_HMACSHA2KG

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/crypto/provider/KeyGeneratorCore_HmacSHA2KG_SHA512.h>
#include <scapix/java_api/com/sun/crypto/provider/KeyGeneratorCore_HmacSHA2KG_SHA384.h>
#include <scapix/java_api/com/sun/crypto/provider/KeyGeneratorCore_HmacSHA2KG_SHA256.h>
#include <scapix/java_api/com/sun/crypto/provider/KeyGeneratorCore_HmacSHA2KG_SHA224.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::crypto::provider::KeyGeneratorCore_HmacSHA2KG : public jni::object_base<"com/sun/crypto/provider/KeyGeneratorCore$HmacSHA2KG",
	javax::crypto::KeyGeneratorSpi>
{
public:

	using SHA512 = KeyGeneratorCore_HmacSHA2KG_SHA512;
	using SHA384 = KeyGeneratorCore_HmacSHA2KG_SHA384;
	using SHA256 = KeyGeneratorCore_HmacSHA2KG_SHA256;
	using SHA224 = KeyGeneratorCore_HmacSHA2KG_SHA224;


protected:

	KeyGeneratorCore_HmacSHA2KG(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_KEYGENERATORCORE_HMACSHA2KG
