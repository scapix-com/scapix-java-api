// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/crypto/provider/GaloisCounterMode.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_GALOISCOUNTERMODE_AES256_FWD
#define SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_GALOISCOUNTERMODE_AES256_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::crypto::provider { class GaloisCounterMode_AES256; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::crypto::provider::GaloisCounterMode_AES256>
{
	static constexpr fixed_string class_name = "com/sun/crypto/provider/GaloisCounterMode$AES256";
	using base_classes = std::tuple<scapix::java_api::com::sun::crypto::provider::GaloisCounterMode>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_GALOISCOUNTERMODE_AES256_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_GALOISCOUNTERMODE_AES256)
#define SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_GALOISCOUNTERMODE_AES256

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::crypto::provider::GaloisCounterMode_AES256 : public jni::object_base<"com/sun/crypto/provider/GaloisCounterMode$AES256",
	com::sun::crypto::provider::GaloisCounterMode>
{
public:

	static jni::ref<com::sun::crypto::provider::GaloisCounterMode_AES256> new_object() { return base_::new_object(); }

protected:

	GaloisCounterMode_AES256(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_GALOISCOUNTERMODE_AES256