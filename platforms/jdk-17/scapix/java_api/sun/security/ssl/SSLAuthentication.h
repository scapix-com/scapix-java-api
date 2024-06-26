// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/sun/security/ssl/SSLPossessionGenerator.h>
#include <scapix/java_api/sun/security/ssl/SSLHandshakeBinding.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLAUTHENTICATION_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLAUTHENTICATION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::ssl { class SSLAuthentication; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::ssl::SSLAuthentication>
{
	static constexpr fixed_string class_name = "sun/security/ssl/SSLAuthentication";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::sun::security::ssl::SSLPossessionGenerator, scapix::java_api::sun::security::ssl::SSLHandshakeBinding>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLAUTHENTICATION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLAUTHENTICATION)
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLAUTHENTICATION

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::ssl::SSLAuthentication : public jni::object_base<"sun/security/ssl/SSLAuthentication",
	java::lang::Object,
	sun::security::ssl::SSLPossessionGenerator,
	sun::security::ssl::SSLHandshakeBinding>
{
public:


protected:

	SSLAuthentication(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLAUTHENTICATION
