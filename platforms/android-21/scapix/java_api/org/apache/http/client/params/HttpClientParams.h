// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ORG_APACHE_HTTP_CLIENT_PARAMS_HTTPCLIENTPARAMS_FWD
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_CLIENT_PARAMS_HTTPCLIENTPARAMS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::apache::http::client::params { class HttpClientParams; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::apache::http::client::params::HttpClientParams>
{
	static constexpr fixed_string class_name = "org/apache/http/client/params/HttpClientParams";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_CLIENT_PARAMS_HTTPCLIENTPARAMS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_APACHE_HTTP_CLIENT_PARAMS_HTTPCLIENTPARAMS)
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_CLIENT_PARAMS_HTTPCLIENTPARAMS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/apache/http/params/HttpParams.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::apache::http::client::params::HttpClientParams : public jni::object_base<"org/apache/http/client/params/HttpClientParams",
	java::lang::Object>
{
public:

	static jboolean isRedirecting(jni::ref<org::apache::http::params::HttpParams> params) { return call_static_method<"isRedirecting", jboolean>(params); }
	static void setRedirecting(jni::ref<org::apache::http::params::HttpParams> params, jboolean value) { return call_static_method<"setRedirecting", void>(params, value); }
	static jboolean isAuthenticating(jni::ref<org::apache::http::params::HttpParams> params) { return call_static_method<"isAuthenticating", jboolean>(params); }
	static void setAuthenticating(jni::ref<org::apache::http::params::HttpParams> params, jboolean value) { return call_static_method<"setAuthenticating", void>(params, value); }
	static jni::ref<java::lang::String> getCookiePolicy(jni::ref<org::apache::http::params::HttpParams> params) { return call_static_method<"getCookiePolicy", jni::ref<java::lang::String>>(params); }
	static void setCookiePolicy(jni::ref<org::apache::http::params::HttpParams> params, jni::ref<java::lang::String> cookiePolicy) { return call_static_method<"setCookiePolicy", void>(params, cookiePolicy); }

protected:

	HttpClientParams(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_CLIENT_PARAMS_HTTPCLIENTPARAMS
