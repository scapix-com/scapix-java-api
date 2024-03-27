// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ORG_APACHE_HTTP_AUTH_CREDENTIALS_FWD
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_AUTH_CREDENTIALS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::apache::http::auth { class Credentials; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::apache::http::auth::Credentials>
{
	static constexpr fixed_string class_name = "org/apache/http/auth/Credentials";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_AUTH_CREDENTIALS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_APACHE_HTTP_AUTH_CREDENTIALS)
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_AUTH_CREDENTIALS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/security/Principal.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::apache::http::auth::Credentials : public jni::object_base<"org/apache/http/auth/Credentials",
	java::lang::Object>
{
public:

	jni::ref<java::security::Principal> getUserPrincipal() { return call_method<"getUserPrincipal", jni::ref<java::security::Principal>>(); }
	jni::ref<java::lang::String> getPassword() { return call_method<"getPassword", jni::ref<java::lang::String>>(); }

protected:

	Credentials(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_AUTH_CREDENTIALS