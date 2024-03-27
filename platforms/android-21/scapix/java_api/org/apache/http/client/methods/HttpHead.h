// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/org/apache/http/client/methods/HttpRequestBase.h>

#ifndef SCAPIX_JAVA_API_ORG_APACHE_HTTP_CLIENT_METHODS_HTTPHEAD_FWD
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_CLIENT_METHODS_HTTPHEAD_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::apache::http::client::methods { class HttpHead; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::apache::http::client::methods::HttpHead>
{
	static constexpr fixed_string class_name = "org/apache/http/client/methods/HttpHead";
	using base_classes = std::tuple<scapix::java_api::org::apache::http::client::methods::HttpRequestBase>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_CLIENT_METHODS_HTTPHEAD_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_APACHE_HTTP_CLIENT_METHODS_HTTPHEAD)
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_CLIENT_METHODS_HTTPHEAD

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/net/URI.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::apache::http::client::methods::HttpHead : public jni::object_base<"org/apache/http/client/methods/HttpHead",
	org::apache::http::client::methods::HttpRequestBase>
{
public:

	static jni::ref<java::lang::String> METHOD_NAME() { return get_static_field<"METHOD_NAME", jni::ref<java::lang::String>>(); }

	static jni::ref<org::apache::http::client::methods::HttpHead> new_object() { return base_::new_object(); }
	static jni::ref<org::apache::http::client::methods::HttpHead> new_object(jni::ref<java::net::URI> uri) { return base_::new_object(uri); }
	static jni::ref<org::apache::http::client::methods::HttpHead> new_object(jni::ref<java::lang::String> uri) { return base_::new_object(uri); }
	jni::ref<java::lang::String> getMethod() { return call_method<"getMethod", jni::ref<java::lang::String>>(); }

protected:

	HttpHead(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_CLIENT_METHODS_HTTPHEAD
