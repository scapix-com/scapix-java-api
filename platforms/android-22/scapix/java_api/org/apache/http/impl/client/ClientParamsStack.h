// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/org/apache/http/params/AbstractHttpParams.h>

#ifndef SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_CLIENT_CLIENTPARAMSSTACK_FWD
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_CLIENT_CLIENTPARAMSSTACK_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::apache::http::impl::client { class ClientParamsStack; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::apache::http::impl::client::ClientParamsStack>
{
	static constexpr fixed_string class_name = "org/apache/http/impl/client/ClientParamsStack";
	using base_classes = std::tuple<scapix::java_api::org::apache::http::params::AbstractHttpParams>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_CLIENT_CLIENTPARAMSSTACK_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_CLIENT_CLIENTPARAMSSTACK)
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_CLIENT_CLIENTPARAMSSTACK

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/apache/http/params/HttpParams.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::apache::http::impl::client::ClientParamsStack : public jni::object_base<"org/apache/http/impl/client/ClientParamsStack",
	org::apache::http::params::AbstractHttpParams>
{
public:

	static jni::ref<org::apache::http::impl::client::ClientParamsStack> new_object(jni::ref<org::apache::http::params::HttpParams> aparams, jni::ref<org::apache::http::params::HttpParams> cparams, jni::ref<org::apache::http::params::HttpParams> rparams, jni::ref<org::apache::http::params::HttpParams> oparams) { return base_::new_object(aparams, cparams, rparams, oparams); }
	static jni::ref<org::apache::http::impl::client::ClientParamsStack> new_object(jni::ref<org::apache::http::impl::client::ClientParamsStack> stack) { return base_::new_object(stack); }
	static jni::ref<org::apache::http::impl::client::ClientParamsStack> new_object(jni::ref<org::apache::http::impl::client::ClientParamsStack> stack, jni::ref<org::apache::http::params::HttpParams> aparams, jni::ref<org::apache::http::params::HttpParams> cparams, jni::ref<org::apache::http::params::HttpParams> rparams, jni::ref<org::apache::http::params::HttpParams> oparams) { return base_::new_object(stack, aparams, cparams, rparams, oparams); }
	jni::ref<org::apache::http::params::HttpParams> getApplicationParams() { return call_method<"getApplicationParams", jni::ref<org::apache::http::params::HttpParams>>(); }
	jni::ref<org::apache::http::params::HttpParams> getClientParams() { return call_method<"getClientParams", jni::ref<org::apache::http::params::HttpParams>>(); }
	jni::ref<org::apache::http::params::HttpParams> getRequestParams() { return call_method<"getRequestParams", jni::ref<org::apache::http::params::HttpParams>>(); }
	jni::ref<org::apache::http::params::HttpParams> getOverrideParams() { return call_method<"getOverrideParams", jni::ref<org::apache::http::params::HttpParams>>(); }
	jni::ref<java::lang::Object> getParameter(jni::ref<java::lang::String> name) { return call_method<"getParameter", jni::ref<java::lang::Object>>(name); }
	jni::ref<org::apache::http::params::HttpParams> setParameter(jni::ref<java::lang::String> name, jni::ref<java::lang::Object> value) { return call_method<"setParameter", jni::ref<org::apache::http::params::HttpParams>>(name, value); }
	jboolean removeParameter(jni::ref<java::lang::String> name) { return call_method<"removeParameter", jboolean>(name); }
	jni::ref<org::apache::http::params::HttpParams> copy() { return call_method<"copy", jni::ref<org::apache::http::params::HttpParams>>(); }

protected:

	ClientParamsStack(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_CLIENT_CLIENTPARAMSSTACK
