// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/org/apache/http/HttpClientConnection.h>

#ifndef SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_ABSTRACTHTTPCLIENTCONNECTION_FWD
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_ABSTRACTHTTPCLIENTCONNECTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::apache::http::impl { class AbstractHttpClientConnection; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::apache::http::impl::AbstractHttpClientConnection>
{
	static constexpr fixed_string class_name = "org/apache/http/impl/AbstractHttpClientConnection";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::org::apache::http::HttpClientConnection>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_ABSTRACTHTTPCLIENTCONNECTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_ABSTRACTHTTPCLIENTCONNECTION)
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_ABSTRACTHTTPCLIENTCONNECTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/org/apache/http/HttpConnectionMetrics.h>
#include <scapix/java_api/org/apache/http/HttpEntityEnclosingRequest.h>
#include <scapix/java_api/org/apache/http/HttpRequest.h>
#include <scapix/java_api/org/apache/http/HttpResponse.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::apache::http::impl::AbstractHttpClientConnection : public jni::object_base<"org/apache/http/impl/AbstractHttpClientConnection",
	java::lang::Object,
	org::apache::http::HttpClientConnection>
{
public:

	static jni::ref<org::apache::http::impl::AbstractHttpClientConnection> new_object() { return base_::new_object(); }
	jboolean isResponseAvailable(jint timeout) { return call_method<"isResponseAvailable", jboolean>(timeout); }
	void sendRequestHeader(jni::ref<org::apache::http::HttpRequest> request) { return call_method<"sendRequestHeader", void>(request); }
	void sendRequestEntity(jni::ref<org::apache::http::HttpEntityEnclosingRequest> request) { return call_method<"sendRequestEntity", void>(request); }
	void flush() { return call_method<"flush", void>(); }
	jni::ref<org::apache::http::HttpResponse> receiveResponseHeader() { return call_method<"receiveResponseHeader", jni::ref<org::apache::http::HttpResponse>>(); }
	void receiveResponseEntity(jni::ref<org::apache::http::HttpResponse> response) { return call_method<"receiveResponseEntity", void>(response); }
	jboolean isStale() { return call_method<"isStale", jboolean>(); }
	jni::ref<org::apache::http::HttpConnectionMetrics> getMetrics() { return call_method<"getMetrics", jni::ref<org::apache::http::HttpConnectionMetrics>>(); }

protected:

	AbstractHttpClientConnection(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_ABSTRACTHTTPCLIENTCONNECTION