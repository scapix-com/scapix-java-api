// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/org/apache/http/HttpServerConnection.h>

#ifndef SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_ABSTRACTHTTPSERVERCONNECTION_FWD
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_ABSTRACTHTTPSERVERCONNECTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::apache::http::impl { class AbstractHttpServerConnection; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::apache::http::impl::AbstractHttpServerConnection>
{
	static constexpr fixed_string class_name = "org/apache/http/impl/AbstractHttpServerConnection";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::org::apache::http::HttpServerConnection>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_ABSTRACTHTTPSERVERCONNECTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_ABSTRACTHTTPSERVERCONNECTION)
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_ABSTRACTHTTPSERVERCONNECTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/org/apache/http/HttpConnectionMetrics.h>
#include <scapix/java_api/org/apache/http/HttpEntityEnclosingRequest.h>
#include <scapix/java_api/org/apache/http/HttpRequest.h>
#include <scapix/java_api/org/apache/http/HttpResponse.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::apache::http::impl::AbstractHttpServerConnection : public jni::object_base<"org/apache/http/impl/AbstractHttpServerConnection",
	java::lang::Object,
	org::apache::http::HttpServerConnection>
{
public:

	static jni::ref<org::apache::http::impl::AbstractHttpServerConnection> new_object() { return base_::new_object(); }
	jni::ref<org::apache::http::HttpRequest> receiveRequestHeader() { return call_method<"receiveRequestHeader", jni::ref<org::apache::http::HttpRequest>>(); }
	void receiveRequestEntity(jni::ref<org::apache::http::HttpEntityEnclosingRequest> request) { return call_method<"receiveRequestEntity", void>(request); }
	void flush() { return call_method<"flush", void>(); }
	void sendResponseHeader(jni::ref<org::apache::http::HttpResponse> response) { return call_method<"sendResponseHeader", void>(response); }
	void sendResponseEntity(jni::ref<org::apache::http::HttpResponse> response) { return call_method<"sendResponseEntity", void>(response); }
	jboolean isStale() { return call_method<"isStale", jboolean>(); }
	jni::ref<org::apache::http::HttpConnectionMetrics> getMetrics() { return call_method<"getMetrics", jni::ref<org::apache::http::HttpConnectionMetrics>>(); }

protected:

	AbstractHttpServerConnection(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_ABSTRACTHTTPSERVERCONNECTION
