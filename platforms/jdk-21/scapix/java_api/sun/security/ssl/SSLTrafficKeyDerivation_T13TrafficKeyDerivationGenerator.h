// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/sun/security/ssl/SSLKeyDerivationGenerator.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLTRAFFICKEYDERIVATION_T13TRAFFICKEYDERIVATIONGENERATOR_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLTRAFFICKEYDERIVATION_T13TRAFFICKEYDERIVATIONGENERATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::ssl { class SSLTrafficKeyDerivation_T13TrafficKeyDerivationGenerator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::ssl::SSLTrafficKeyDerivation_T13TrafficKeyDerivationGenerator>
{
	static constexpr fixed_string class_name = "sun/security/ssl/SSLTrafficKeyDerivation$T13TrafficKeyDerivationGenerator";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::sun::security::ssl::SSLKeyDerivationGenerator>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLTRAFFICKEYDERIVATION_T13TRAFFICKEYDERIVATIONGENERATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLTRAFFICKEYDERIVATION_T13TRAFFICKEYDERIVATIONGENERATOR)
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLTRAFFICKEYDERIVATION_T13TRAFFICKEYDERIVATIONGENERATOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/crypto/SecretKey.h>
#include <scapix/java_api/sun/security/ssl/HandshakeContext.h>
#include <scapix/java_api/sun/security/ssl/SSLKeyDerivation.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::ssl::SSLTrafficKeyDerivation_T13TrafficKeyDerivationGenerator : public jni::object_base<"sun/security/ssl/SSLTrafficKeyDerivation$T13TrafficKeyDerivationGenerator",
	java::lang::Object,
	sun::security::ssl::SSLKeyDerivationGenerator>
{
public:

	jni::ref<sun::security::ssl::SSLKeyDerivation> createKeyDerivation(jni::ref<sun::security::ssl::HandshakeContext> context, jni::ref<javax::crypto::SecretKey> secretKey) { return call_method<"createKeyDerivation", jni::ref<sun::security::ssl::SSLKeyDerivation>>(context, secretKey); }

protected:

	SSLTrafficKeyDerivation_T13TrafficKeyDerivationGenerator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLTRAFFICKEYDERIVATION_T13TRAFFICKEYDERIVATIONGENERATOR
