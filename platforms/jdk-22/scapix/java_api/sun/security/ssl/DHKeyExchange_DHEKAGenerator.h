// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/sun/security/ssl/SSLKeyAgreementGenerator.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_SSL_DHKEYEXCHANGE_DHEKAGENERATOR_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_DHKEYEXCHANGE_DHEKAGENERATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::ssl { class DHKeyExchange_DHEKAGenerator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::ssl::DHKeyExchange_DHEKAGenerator>
{
	static constexpr fixed_string class_name = "sun/security/ssl/DHKeyExchange$DHEKAGenerator";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::sun::security::ssl::SSLKeyAgreementGenerator>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_DHKEYEXCHANGE_DHEKAGENERATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_SSL_DHKEYEXCHANGE_DHEKAGENERATOR)
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_DHKEYEXCHANGE_DHEKAGENERATOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/sun/security/ssl/HandshakeContext.h>
#include <scapix/java_api/sun/security/ssl/SSLKeyDerivation.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::ssl::DHKeyExchange_DHEKAGenerator : public jni::object_base<"sun/security/ssl/DHKeyExchange$DHEKAGenerator",
	java::lang::Object,
	sun::security::ssl::SSLKeyAgreementGenerator>
{
public:

	jni::ref<sun::security::ssl::SSLKeyDerivation> createKeyDerivation(jni::ref<sun::security::ssl::HandshakeContext> context) { return call_method<"createKeyDerivation", jni::ref<sun::security::ssl::SSLKeyDerivation>>(context); }

protected:

	DHKeyExchange_DHEKAGenerator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_DHKEYEXCHANGE_DHEKAGENERATOR
