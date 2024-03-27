// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ORG_APACHE_HTTP_AUTH_PARAMS_AUTHPARAMS_FWD
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_AUTH_PARAMS_AUTHPARAMS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::apache::http::auth::params { class AuthParams; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::apache::http::auth::params::AuthParams>
{
	static constexpr fixed_string class_name = "org/apache/http/auth/params/AuthParams";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_AUTH_PARAMS_AUTHPARAMS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_APACHE_HTTP_AUTH_PARAMS_AUTHPARAMS)
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_AUTH_PARAMS_AUTHPARAMS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/apache/http/params/HttpParams.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::apache::http::auth::params::AuthParams : public jni::object_base<"org/apache/http/auth/params/AuthParams",
	java::lang::Object>
{
public:

	static jni::ref<java::lang::String> getCredentialCharset(jni::ref<org::apache::http::params::HttpParams> params) { return call_static_method<"getCredentialCharset", jni::ref<java::lang::String>>(params); }
	static void setCredentialCharset(jni::ref<org::apache::http::params::HttpParams> params, jni::ref<java::lang::String> charset) { return call_static_method<"setCredentialCharset", void>(params, charset); }

protected:

	AuthParams(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_AUTH_PARAMS_AUTHPARAMS
