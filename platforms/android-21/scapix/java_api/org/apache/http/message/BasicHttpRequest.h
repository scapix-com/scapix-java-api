// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/org/apache/http/message/AbstractHttpMessage.h>
#include <scapix/java_api/org/apache/http/HttpRequest.h>

#ifndef SCAPIX_JAVA_API_ORG_APACHE_HTTP_MESSAGE_BASICHTTPREQUEST_FWD
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_MESSAGE_BASICHTTPREQUEST_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::apache::http::message { class BasicHttpRequest; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::apache::http::message::BasicHttpRequest>
{
	static constexpr fixed_string class_name = "org/apache/http/message/BasicHttpRequest";
	using base_classes = std::tuple<scapix::java_api::org::apache::http::message::AbstractHttpMessage, scapix::java_api::org::apache::http::HttpRequest>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_MESSAGE_BASICHTTPREQUEST_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_APACHE_HTTP_MESSAGE_BASICHTTPREQUEST)
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_MESSAGE_BASICHTTPREQUEST

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/apache/http/ProtocolVersion.h>
#include <scapix/java_api/org/apache/http/RequestLine.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::apache::http::message::BasicHttpRequest : public jni::object_base<"org/apache/http/message/BasicHttpRequest",
	org::apache::http::message::AbstractHttpMessage,
	org::apache::http::HttpRequest>
{
public:

	static jni::ref<org::apache::http::message::BasicHttpRequest> new_object(jni::ref<java::lang::String> method, jni::ref<java::lang::String> uri) { return base_::new_object(method, uri); }
	static jni::ref<org::apache::http::message::BasicHttpRequest> new_object(jni::ref<java::lang::String> method, jni::ref<java::lang::String> uri, jni::ref<org::apache::http::ProtocolVersion> ver) { return base_::new_object(method, uri, ver); }
	static jni::ref<org::apache::http::message::BasicHttpRequest> new_object(jni::ref<org::apache::http::RequestLine> requestline) { return base_::new_object(requestline); }
	jni::ref<org::apache::http::ProtocolVersion> getProtocolVersion() { return call_method<"getProtocolVersion", jni::ref<org::apache::http::ProtocolVersion>>(); }
	jni::ref<org::apache::http::RequestLine> getRequestLine() { return call_method<"getRequestLine", jni::ref<org::apache::http::RequestLine>>(); }

protected:

	BasicHttpRequest(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_MESSAGE_BASICHTTPREQUEST
