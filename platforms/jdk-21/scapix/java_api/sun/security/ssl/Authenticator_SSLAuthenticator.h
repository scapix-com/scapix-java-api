// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/security/ssl/Authenticator.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_SSL_AUTHENTICATOR_SSLAUTHENTICATOR_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_AUTHENTICATOR_SSLAUTHENTICATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::ssl { class Authenticator_SSLAuthenticator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::ssl::Authenticator_SSLAuthenticator>
{
	static constexpr fixed_string class_name = "sun/security/ssl/Authenticator$SSLAuthenticator";
	using base_classes = std::tuple<scapix::java_api::sun::security::ssl::Authenticator>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_AUTHENTICATOR_SSLAUTHENTICATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_SSL_AUTHENTICATOR_SSLAUTHENTICATOR)
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_AUTHENTICATOR_SSLAUTHENTICATOR

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::ssl::Authenticator_SSLAuthenticator : public jni::object_base<"sun/security/ssl/Authenticator$SSLAuthenticator",
	sun::security::ssl::Authenticator>
{
public:


protected:

	Authenticator_SSLAuthenticator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_AUTHENTICATOR_SSLAUTHENTICATOR
