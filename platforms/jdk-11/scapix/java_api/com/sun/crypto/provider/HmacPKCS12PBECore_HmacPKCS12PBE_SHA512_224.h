// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/crypto/provider/HmacPKCS12PBECore.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_HMACPKCS12PBECORE_HMACPKCS12PBE_SHA512_224_FWD
#define SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_HMACPKCS12PBECORE_HMACPKCS12PBE_SHA512_224_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::crypto::provider { class HmacPKCS12PBECore_HmacPKCS12PBE_SHA512_224; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::crypto::provider::HmacPKCS12PBECore_HmacPKCS12PBE_SHA512_224>
{
	static constexpr fixed_string class_name = "com/sun/crypto/provider/HmacPKCS12PBECore$HmacPKCS12PBE_SHA512_224";
	using base_classes = std::tuple<scapix::java_api::com::sun::crypto::provider::HmacPKCS12PBECore>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_HMACPKCS12PBECORE_HMACPKCS12PBE_SHA512_224_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_HMACPKCS12PBECORE_HMACPKCS12PBE_SHA512_224)
#define SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_HMACPKCS12PBECORE_HMACPKCS12PBE_SHA512_224

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::crypto::provider::HmacPKCS12PBECore_HmacPKCS12PBE_SHA512_224 : public jni::object_base<"com/sun/crypto/provider/HmacPKCS12PBECore$HmacPKCS12PBE_SHA512_224",
	com::sun::crypto::provider::HmacPKCS12PBECore>
{
public:

	static jni::ref<com::sun::crypto::provider::HmacPKCS12PBECore_HmacPKCS12PBE_SHA512_224> new_object() { return base_::new_object(); }

protected:

	HmacPKCS12PBECore_HmacPKCS12PBE_SHA512_224(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_HMACPKCS12PBECORE_HMACPKCS12PBE_SHA512_224
