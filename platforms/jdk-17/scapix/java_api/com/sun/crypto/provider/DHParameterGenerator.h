// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/security/AlgorithmParameterGeneratorSpi.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_DHPARAMETERGENERATOR_FWD
#define SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_DHPARAMETERGENERATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::crypto::provider { class DHParameterGenerator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::crypto::provider::DHParameterGenerator>
{
	static constexpr fixed_string class_name = "com/sun/crypto/provider/DHParameterGenerator";
	using base_classes = std::tuple<scapix::java_api::java::security::AlgorithmParameterGeneratorSpi>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_DHPARAMETERGENERATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_DHPARAMETERGENERATOR)
#define SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_DHPARAMETERGENERATOR

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::crypto::provider::DHParameterGenerator : public jni::object_base<"com/sun/crypto/provider/DHParameterGenerator",
	java::security::AlgorithmParameterGeneratorSpi>
{
public:

	static jni::ref<com::sun::crypto::provider::DHParameterGenerator> new_object() { return base_::new_object(); }

protected:

	DHParameterGenerator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_DHPARAMETERGENERATOR
