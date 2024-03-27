// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/crypto/CipherSpi.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_CIPHERWITHWRAPPINGSPI_FWD
#define SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_CIPHERWITHWRAPPINGSPI_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::crypto::provider { class CipherWithWrappingSpi; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::crypto::provider::CipherWithWrappingSpi>
{
	static constexpr fixed_string class_name = "com/sun/crypto/provider/CipherWithWrappingSpi";
	using base_classes = std::tuple<scapix::java_api::javax::crypto::CipherSpi>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_CIPHERWITHWRAPPINGSPI_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_CIPHERWITHWRAPPINGSPI)
#define SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_CIPHERWITHWRAPPINGSPI

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::crypto::provider::CipherWithWrappingSpi : public jni::object_base<"com/sun/crypto/provider/CipherWithWrappingSpi",
	javax::crypto::CipherSpi>
{
public:

	static jni::ref<com::sun::crypto::provider::CipherWithWrappingSpi> new_object() { return base_::new_object(); }

protected:

	CipherWithWrappingSpi(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_CIPHERWITHWRAPPINGSPI