// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/org/apache/http/message/AbstractHttpMessage.h>
#include <scapix/java_api/org/apache/http/client/methods/HttpUriRequest.h>
#include <scapix/java_api/org/apache/http/client/methods/AbortableHttpRequest.h>
#include <scapix/java_api/java/lang/Cloneable.h>

#ifndef SCAPIX_JAVA_API_ORG_APACHE_HTTP_CLIENT_METHODS_HTTPREQUESTBASE_FWD
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_CLIENT_METHODS_HTTPREQUESTBASE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::apache::http::client::methods { class HttpRequestBase; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::apache::http::client::methods::HttpRequestBase>
{
	static constexpr fixed_string class_name = "org/apache/http/client/methods/HttpRequestBase";
	using base_classes = std::tuple<scapix::java_api::org::apache::http::message::AbstractHttpMessage, scapix::java_api::org::apache::http::client::methods::HttpUriRequest, scapix::java_api::org::apache::http::client::methods::AbortableHttpRequest, scapix::java_api::java::lang::Cloneable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_CLIENT_METHODS_HTTPREQUESTBASE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_APACHE_HTTP_CLIENT_METHODS_HTTPREQUESTBASE)
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_CLIENT_METHODS_HTTPREQUESTBASE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/net/URI.h>
#include <scapix/java_api/org/apache/http/ProtocolVersion.h>
#include <scapix/java_api/org/apache/http/RequestLine.h>
#include <scapix/java_api/org/apache/http/conn/ClientConnectionRequest.h>
#include <scapix/java_api/org/apache/http/conn/ConnectionReleaseTrigger.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::apache::http::client::methods::HttpRequestBase : public jni::object_base<"org/apache/http/client/methods/HttpRequestBase",
	org::apache::http::message::AbstractHttpMessage,
	org::apache::http::client::methods::HttpUriRequest,
	org::apache::http::client::methods::AbortableHttpRequest,
	java::lang::Cloneable>
{
public:

	static jni::ref<org::apache::http::client::methods::HttpRequestBase> new_object() { return base_::new_object(); }
	jni::ref<java::lang::String> getMethod() { return call_method<"getMethod", jni::ref<java::lang::String>>(); }
	jni::ref<org::apache::http::ProtocolVersion> getProtocolVersion() { return call_method<"getProtocolVersion", jni::ref<org::apache::http::ProtocolVersion>>(); }
	jni::ref<java::net::URI> getURI() { return call_method<"getURI", jni::ref<java::net::URI>>(); }
	jni::ref<org::apache::http::RequestLine> getRequestLine() { return call_method<"getRequestLine", jni::ref<org::apache::http::RequestLine>>(); }
	void setURI(jni::ref<java::net::URI> uri) { return call_method<"setURI", void>(uri); }
	void setConnectionRequest(jni::ref<org::apache::http::conn::ClientConnectionRequest> connRequest) { return call_method<"setConnectionRequest", void>(connRequest); }
	void setReleaseTrigger(jni::ref<org::apache::http::conn::ConnectionReleaseTrigger> releaseTrigger) { return call_method<"setReleaseTrigger", void>(releaseTrigger); }
	void abort() { return call_method<"abort", void>(); }
	jboolean isAborted() { return call_method<"isAborted", jboolean>(); }
	jni::ref<java::lang::Object> clone() { return call_method<"clone", jni::ref<java::lang::Object>>(); }

protected:

	HttpRequestBase(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_CLIENT_METHODS_HTTPREQUESTBASE