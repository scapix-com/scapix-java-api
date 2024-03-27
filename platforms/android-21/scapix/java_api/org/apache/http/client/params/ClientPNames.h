// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ORG_APACHE_HTTP_CLIENT_PARAMS_CLIENTPNAMES_FWD
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_CLIENT_PARAMS_CLIENTPNAMES_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::apache::http::client::params { class ClientPNames; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::apache::http::client::params::ClientPNames>
{
	static constexpr fixed_string class_name = "org/apache/http/client/params/ClientPNames";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_CLIENT_PARAMS_CLIENTPNAMES_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_APACHE_HTTP_CLIENT_PARAMS_CLIENTPNAMES)
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_CLIENT_PARAMS_CLIENTPNAMES

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::apache::http::client::params::ClientPNames : public jni::object_base<"org/apache/http/client/params/ClientPNames",
	java::lang::Object>
{
public:

	static jni::ref<java::lang::String> ALLOW_CIRCULAR_REDIRECTS() { return get_static_field<"ALLOW_CIRCULAR_REDIRECTS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> CONNECTION_MANAGER_FACTORY() { return get_static_field<"CONNECTION_MANAGER_FACTORY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> CONNECTION_MANAGER_FACTORY_CLASS_NAME() { return get_static_field<"CONNECTION_MANAGER_FACTORY_CLASS_NAME", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> COOKIE_POLICY() { return get_static_field<"COOKIE_POLICY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DEFAULT_HEADERS() { return get_static_field<"DEFAULT_HEADERS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DEFAULT_HOST() { return get_static_field<"DEFAULT_HOST", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> HANDLE_AUTHENTICATION() { return get_static_field<"HANDLE_AUTHENTICATION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> HANDLE_REDIRECTS() { return get_static_field<"HANDLE_REDIRECTS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> MAX_REDIRECTS() { return get_static_field<"MAX_REDIRECTS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> REJECT_RELATIVE_REDIRECT() { return get_static_field<"REJECT_RELATIVE_REDIRECT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> VIRTUAL_HOST() { return get_static_field<"VIRTUAL_HOST", jni::ref<java::lang::String>>(); }


protected:

	ClientPNames(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_CLIENT_PARAMS_CLIENTPNAMES
