// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/crypto/SecretKeyFactorySpi.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_PBKDF2HMACSHA1FACTORY_FWD
#define SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_PBKDF2HMACSHA1FACTORY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::crypto::provider { class PBKDF2HmacSHA1Factory; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::crypto::provider::PBKDF2HmacSHA1Factory>
{
	static constexpr fixed_string class_name = "com/sun/crypto/provider/PBKDF2HmacSHA1Factory";
	using base_classes = std::tuple<scapix::java_api::javax::crypto::SecretKeyFactorySpi>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_PBKDF2HMACSHA1FACTORY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_PBKDF2HMACSHA1FACTORY)
#define SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_PBKDF2HMACSHA1FACTORY

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::crypto::provider::PBKDF2HmacSHA1Factory : public jni::object_base<"com/sun/crypto/provider/PBKDF2HmacSHA1Factory",
	javax::crypto::SecretKeyFactorySpi>
{
public:

	static jni::ref<com::sun::crypto::provider::PBKDF2HmacSHA1Factory> new_object() { return base_::new_object(); }

protected:

	PBKDF2HmacSHA1Factory(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_PBKDF2HMACSHA1FACTORY
