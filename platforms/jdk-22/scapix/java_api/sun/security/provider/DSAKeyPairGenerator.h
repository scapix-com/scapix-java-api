// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/security/KeyPairGenerator.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_DSAKEYPAIRGENERATOR_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_DSAKEYPAIRGENERATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::provider { class DSAKeyPairGenerator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::provider::DSAKeyPairGenerator>
{
	static constexpr fixed_string class_name = "sun/security/provider/DSAKeyPairGenerator";
	using base_classes = std::tuple<scapix::java_api::java::security::KeyPairGenerator>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_DSAKEYPAIRGENERATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_DSAKEYPAIRGENERATOR)
#define SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_DSAKEYPAIRGENERATOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/security/KeyPair.h>
#include <scapix/java_api/java/security/SecureRandom.h>
#include <scapix/java_api/java/security/spec/AlgorithmParameterSpec.h>
#include <scapix/java_api/sun/security/provider/DSAKeyPairGenerator_Legacy.h>
#include <scapix/java_api/sun/security/provider/DSAKeyPairGenerator_Current.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::provider::DSAKeyPairGenerator : public jni::object_base<"sun/security/provider/DSAKeyPairGenerator",
	java::security::KeyPairGenerator>
{
public:

	using Legacy = DSAKeyPairGenerator_Legacy;
	using Current = DSAKeyPairGenerator_Current;

	void initialize(jint modlen, jni::ref<java::security::SecureRandom> random) { return call_method<"initialize", void>(modlen, random); }
	void initialize(jni::ref<java::security::spec::AlgorithmParameterSpec> params, jni::ref<java::security::SecureRandom> random) { return call_method<"initialize", void>(params, random); }
	jni::ref<java::security::KeyPair> generateKeyPair() { return call_method<"generateKeyPair", jni::ref<java::security::KeyPair>>(); }

protected:

	DSAKeyPairGenerator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_DSAKEYPAIRGENERATOR
