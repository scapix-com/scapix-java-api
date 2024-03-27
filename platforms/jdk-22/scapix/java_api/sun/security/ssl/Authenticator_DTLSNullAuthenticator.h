// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/security/ssl/Authenticator_DTLSAuthenticator.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_SSL_AUTHENTICATOR_DTLSNULLAUTHENTICATOR_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_AUTHENTICATOR_DTLSNULLAUTHENTICATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::ssl { class Authenticator_DTLSNullAuthenticator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::ssl::Authenticator_DTLSNullAuthenticator>
{
	static constexpr fixed_string class_name = "sun/security/ssl/Authenticator$DTLSNullAuthenticator";
	using base_classes = std::tuple<scapix::java_api::sun::security::ssl::Authenticator_DTLSAuthenticator>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_AUTHENTICATOR_DTLSNULLAUTHENTICATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_SSL_AUTHENTICATOR_DTLSNULLAUTHENTICATOR)
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_AUTHENTICATOR_DTLSNULLAUTHENTICATOR

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::ssl::Authenticator_DTLSNullAuthenticator : public jni::object_base<"sun/security/ssl/Authenticator$DTLSNullAuthenticator",
	sun::security::ssl::Authenticator_DTLSAuthenticator>
{
public:


protected:

	Authenticator_DTLSNullAuthenticator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_AUTHENTICATOR_DTLSNULLAUTHENTICATOR
