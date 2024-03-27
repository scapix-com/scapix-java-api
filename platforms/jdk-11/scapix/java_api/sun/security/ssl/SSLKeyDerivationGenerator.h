// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLKEYDERIVATIONGENERATOR_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLKEYDERIVATIONGENERATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::ssl { class SSLKeyDerivationGenerator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::ssl::SSLKeyDerivationGenerator>
{
	static constexpr fixed_string class_name = "sun/security/ssl/SSLKeyDerivationGenerator";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLKEYDERIVATIONGENERATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLKEYDERIVATIONGENERATOR)
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLKEYDERIVATIONGENERATOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/crypto/SecretKey.h>
#include <scapix/java_api/sun/security/ssl/HandshakeContext.h>
#include <scapix/java_api/sun/security/ssl/SSLKeyDerivation.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::ssl::SSLKeyDerivationGenerator : public jni::object_base<"sun/security/ssl/SSLKeyDerivationGenerator",
	java::lang::Object>
{
public:

	jni::ref<sun::security::ssl::SSLKeyDerivation> createKeyDerivation(jni::ref<sun::security::ssl::HandshakeContext> p1, jni::ref<javax::crypto::SecretKey> p2) { return call_method<"createKeyDerivation", jni::ref<sun::security::ssl::SSLKeyDerivation>>(p1, p2); }

protected:

	SSLKeyDerivationGenerator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLKEYDERIVATIONGENERATOR