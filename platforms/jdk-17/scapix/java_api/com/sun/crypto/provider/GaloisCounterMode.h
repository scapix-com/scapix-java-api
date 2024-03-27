// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/crypto/CipherSpi.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_GALOISCOUNTERMODE_FWD
#define SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_GALOISCOUNTERMODE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::crypto::provider { class GaloisCounterMode; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::crypto::provider::GaloisCounterMode>
{
	static constexpr fixed_string class_name = "com/sun/crypto/provider/GaloisCounterMode";
	using base_classes = std::tuple<scapix::java_api::javax::crypto::CipherSpi>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_GALOISCOUNTERMODE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_GALOISCOUNTERMODE)
#define SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_GALOISCOUNTERMODE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/crypto/provider/GaloisCounterMode_AES256.h>
#include <scapix/java_api/com/sun/crypto/provider/GaloisCounterMode_AES192.h>
#include <scapix/java_api/com/sun/crypto/provider/GaloisCounterMode_AES128.h>
#include <scapix/java_api/com/sun/crypto/provider/GaloisCounterMode_AESGCM.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::crypto::provider::GaloisCounterMode : public jni::object_base<"com/sun/crypto/provider/GaloisCounterMode",
	javax::crypto::CipherSpi>
{
public:

	using AES256 = GaloisCounterMode_AES256;
	using AES192 = GaloisCounterMode_AES192;
	using AES128 = GaloisCounterMode_AES128;
	using AESGCM = GaloisCounterMode_AESGCM;


protected:

	GaloisCounterMode(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_GALOISCOUNTERMODE