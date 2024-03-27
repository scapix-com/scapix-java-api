// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ORG_APACHE_HTTP_PROTOCOL_HTTPSERVICE_FWD
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_PROTOCOL_HTTPSERVICE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::apache::http::protocol { class HttpService; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::apache::http::protocol::HttpService>
{
	static constexpr fixed_string class_name = "org/apache/http/protocol/HttpService";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_PROTOCOL_HTTPSERVICE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_APACHE_HTTP_PROTOCOL_HTTPSERVICE)
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_PROTOCOL_HTTPSERVICE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/org/apache/http/ConnectionReuseStrategy.h>
#include <scapix/java_api/org/apache/http/HttpResponseFactory.h>
#include <scapix/java_api/org/apache/http/HttpServerConnection.h>
#include <scapix/java_api/org/apache/http/params/HttpParams.h>
#include <scapix/java_api/org/apache/http/protocol/HttpContext.h>
#include <scapix/java_api/org/apache/http/protocol/HttpExpectationVerifier.h>
#include <scapix/java_api/org/apache/http/protocol/HttpProcessor.h>
#include <scapix/java_api/org/apache/http/protocol/HttpRequestHandlerResolver.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::apache::http::protocol::HttpService : public jni::object_base<"org/apache/http/protocol/HttpService",
	java::lang::Object>
{
public:

	static jni::ref<org::apache::http::protocol::HttpService> new_object(jni::ref<org::apache::http::protocol::HttpProcessor> proc, jni::ref<org::apache::http::ConnectionReuseStrategy> connStrategy, jni::ref<org::apache::http::HttpResponseFactory> responseFactory) { return base_::new_object(proc, connStrategy, responseFactory); }
	void setHttpProcessor(jni::ref<org::apache::http::protocol::HttpProcessor> processor) { return call_method<"setHttpProcessor", void>(processor); }
	void setConnReuseStrategy(jni::ref<org::apache::http::ConnectionReuseStrategy> connStrategy) { return call_method<"setConnReuseStrategy", void>(connStrategy); }
	void setResponseFactory(jni::ref<org::apache::http::HttpResponseFactory> responseFactory) { return call_method<"setResponseFactory", void>(responseFactory); }
	void setHandlerResolver(jni::ref<org::apache::http::protocol::HttpRequestHandlerResolver> handlerResolver) { return call_method<"setHandlerResolver", void>(handlerResolver); }
	void setExpectationVerifier(jni::ref<org::apache::http::protocol::HttpExpectationVerifier> expectationVerifier) { return call_method<"setExpectationVerifier", void>(expectationVerifier); }
	jni::ref<org::apache::http::params::HttpParams> getParams() { return call_method<"getParams", jni::ref<org::apache::http::params::HttpParams>>(); }
	void setParams(jni::ref<org::apache::http::params::HttpParams> params) { return call_method<"setParams", void>(params); }
	void handleRequest(jni::ref<org::apache::http::HttpServerConnection> conn, jni::ref<org::apache::http::protocol::HttpContext> context) { return call_method<"handleRequest", void>(conn, context); }

protected:

	HttpService(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_PROTOCOL_HTTPSERVICE