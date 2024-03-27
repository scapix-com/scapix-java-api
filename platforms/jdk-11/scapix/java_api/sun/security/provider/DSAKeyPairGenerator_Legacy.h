// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/security/provider/DSAKeyPairGenerator.h>
#include <scapix/java_api/java/security/interfaces/DSAKeyPairGenerator.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_DSAKEYPAIRGENERATOR_LEGACY_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_DSAKEYPAIRGENERATOR_LEGACY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::provider { class DSAKeyPairGenerator_Legacy; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::provider::DSAKeyPairGenerator_Legacy>
{
	static constexpr fixed_string class_name = "sun/security/provider/DSAKeyPairGenerator$Legacy";
	using base_classes = std::tuple<scapix::java_api::sun::security::provider::DSAKeyPairGenerator, scapix::java_api::java::security::interfaces::DSAKeyPairGenerator>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_DSAKEYPAIRGENERATOR_LEGACY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_DSAKEYPAIRGENERATOR_LEGACY)
#define SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_DSAKEYPAIRGENERATOR_LEGACY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/security/SecureRandom.h>
#include <scapix/java_api/java/security/interfaces/DSAParams.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::provider::DSAKeyPairGenerator_Legacy : public jni::object_base<"sun/security/provider/DSAKeyPairGenerator$Legacy",
	sun::security::provider::DSAKeyPairGenerator,
	java::security::interfaces::DSAKeyPairGenerator>
{
public:

	static jni::ref<sun::security::provider::DSAKeyPairGenerator_Legacy> new_object() { return base_::new_object(); }
	void initialize(jint modlen, jboolean genParams, jni::ref<java::security::SecureRandom> random) { return call_method<"initialize", void>(modlen, genParams, random); }
	void initialize(jni::ref<java::security::interfaces::DSAParams> params, jni::ref<java::security::SecureRandom> random) { return call_method<"initialize", void>(params, random); }

protected:

	DSAKeyPairGenerator_Legacy(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_DSAKEYPAIRGENERATOR_LEGACY
