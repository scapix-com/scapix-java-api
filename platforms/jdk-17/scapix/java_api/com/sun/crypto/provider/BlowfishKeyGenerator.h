// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/crypto/KeyGeneratorSpi.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_BLOWFISHKEYGENERATOR_FWD
#define SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_BLOWFISHKEYGENERATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::crypto::provider { class BlowfishKeyGenerator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::crypto::provider::BlowfishKeyGenerator>
{
	static constexpr fixed_string class_name = "com/sun/crypto/provider/BlowfishKeyGenerator";
	using base_classes = std::tuple<scapix::java_api::javax::crypto::KeyGeneratorSpi>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_BLOWFISHKEYGENERATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_BLOWFISHKEYGENERATOR)
#define SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_BLOWFISHKEYGENERATOR

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::crypto::provider::BlowfishKeyGenerator : public jni::object_base<"com/sun/crypto/provider/BlowfishKeyGenerator",
	javax::crypto::KeyGeneratorSpi>
{
public:

	static jni::ref<com::sun::crypto::provider::BlowfishKeyGenerator> new_object() { return base_::new_object(); }

protected:

	BlowfishKeyGenerator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_BLOWFISHKEYGENERATOR
