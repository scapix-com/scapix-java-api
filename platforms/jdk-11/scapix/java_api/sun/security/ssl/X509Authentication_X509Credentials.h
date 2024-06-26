// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/sun/security/ssl/SSLCredentials.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_SSL_X509AUTHENTICATION_X509CREDENTIALS_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_X509AUTHENTICATION_X509CREDENTIALS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::ssl { class X509Authentication_X509Credentials; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::ssl::X509Authentication_X509Credentials>
{
	static constexpr fixed_string class_name = "sun/security/ssl/X509Authentication$X509Credentials";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::sun::security::ssl::SSLCredentials>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_X509AUTHENTICATION_X509CREDENTIALS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_SSL_X509AUTHENTICATION_X509CREDENTIALS)
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_X509AUTHENTICATION_X509CREDENTIALS

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::ssl::X509Authentication_X509Credentials : public jni::object_base<"sun/security/ssl/X509Authentication$X509Credentials",
	java::lang::Object,
	sun::security::ssl::SSLCredentials>
{
public:


protected:

	X509Authentication_X509Credentials(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_X509AUTHENTICATION_X509CREDENTIALS
