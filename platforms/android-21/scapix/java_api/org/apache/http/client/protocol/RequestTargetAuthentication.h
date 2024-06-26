// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/org/apache/http/HttpRequestInterceptor.h>

#ifndef SCAPIX_JAVA_API_ORG_APACHE_HTTP_CLIENT_PROTOCOL_REQUESTTARGETAUTHENTICATION_FWD
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_CLIENT_PROTOCOL_REQUESTTARGETAUTHENTICATION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::apache::http::client::protocol { class RequestTargetAuthentication; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::apache::http::client::protocol::RequestTargetAuthentication>
{
	static constexpr fixed_string class_name = "org/apache/http/client/protocol/RequestTargetAuthentication";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::org::apache::http::HttpRequestInterceptor>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_CLIENT_PROTOCOL_REQUESTTARGETAUTHENTICATION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_APACHE_HTTP_CLIENT_PROTOCOL_REQUESTTARGETAUTHENTICATION)
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_CLIENT_PROTOCOL_REQUESTTARGETAUTHENTICATION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/org/apache/http/HttpRequest.h>
#include <scapix/java_api/org/apache/http/protocol/HttpContext.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::apache::http::client::protocol::RequestTargetAuthentication : public jni::object_base<"org/apache/http/client/protocol/RequestTargetAuthentication",
	java::lang::Object,
	org::apache::http::HttpRequestInterceptor>
{
public:

	static jni::ref<org::apache::http::client::protocol::RequestTargetAuthentication> new_object() { return base_::new_object(); }
	void process(jni::ref<org::apache::http::HttpRequest> request, jni::ref<org::apache::http::protocol::HttpContext> context) { return call_method<"process", void>(request, context); }

protected:

	RequestTargetAuthentication(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_CLIENT_PROTOCOL_REQUESTTARGETAUTHENTICATION
