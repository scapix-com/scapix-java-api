// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/crypto/KeyGeneratorSpi.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_KEYGENERATORCORE_HMACKG_FWD
#define SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_KEYGENERATORCORE_HMACKG_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::crypto::provider { class KeyGeneratorCore_HmacKG; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::crypto::provider::KeyGeneratorCore_HmacKG>
{
	static constexpr fixed_string class_name = "com/sun/crypto/provider/KeyGeneratorCore$HmacKG";
	using base_classes = std::tuple<scapix::java_api::javax::crypto::KeyGeneratorSpi>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_KEYGENERATORCORE_HMACKG_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_KEYGENERATORCORE_HMACKG)
#define SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_KEYGENERATORCORE_HMACKG

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/crypto/provider/KeyGeneratorCore_HmacKG_SHA3_512.h>
#include <scapix/java_api/com/sun/crypto/provider/KeyGeneratorCore_HmacKG_SHA3_384.h>
#include <scapix/java_api/com/sun/crypto/provider/KeyGeneratorCore_HmacKG_SHA3_256.h>
#include <scapix/java_api/com/sun/crypto/provider/KeyGeneratorCore_HmacKG_SHA3_224.h>
#include <scapix/java_api/com/sun/crypto/provider/KeyGeneratorCore_HmacKG_SHA512_256.h>
#include <scapix/java_api/com/sun/crypto/provider/KeyGeneratorCore_HmacKG_SHA512_224.h>
#include <scapix/java_api/com/sun/crypto/provider/KeyGeneratorCore_HmacKG_SHA512.h>
#include <scapix/java_api/com/sun/crypto/provider/KeyGeneratorCore_HmacKG_SHA384.h>
#include <scapix/java_api/com/sun/crypto/provider/KeyGeneratorCore_HmacKG_SHA256.h>
#include <scapix/java_api/com/sun/crypto/provider/KeyGeneratorCore_HmacKG_SHA224.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::crypto::provider::KeyGeneratorCore_HmacKG : public jni::object_base<"com/sun/crypto/provider/KeyGeneratorCore$HmacKG",
	javax::crypto::KeyGeneratorSpi>
{
public:

	using SHA3_512 = KeyGeneratorCore_HmacKG_SHA3_512;
	using SHA3_384 = KeyGeneratorCore_HmacKG_SHA3_384;
	using SHA3_256 = KeyGeneratorCore_HmacKG_SHA3_256;
	using SHA3_224 = KeyGeneratorCore_HmacKG_SHA3_224;
	using SHA512_256 = KeyGeneratorCore_HmacKG_SHA512_256;
	using SHA512_224 = KeyGeneratorCore_HmacKG_SHA512_224;
	using SHA512 = KeyGeneratorCore_HmacKG_SHA512;
	using SHA384 = KeyGeneratorCore_HmacKG_SHA384;
	using SHA256 = KeyGeneratorCore_HmacKG_SHA256;
	using SHA224 = KeyGeneratorCore_HmacKG_SHA224;


protected:

	KeyGeneratorCore_HmacKG(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_KEYGENERATORCORE_HMACKG
