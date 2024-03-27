// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/org/apache/http/RequestLine.h>
#include <scapix/java_api/java/lang/Cloneable.h>

#ifndef SCAPIX_JAVA_API_ORG_APACHE_HTTP_MESSAGE_BASICREQUESTLINE_FWD
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_MESSAGE_BASICREQUESTLINE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::apache::http::message { class BasicRequestLine; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::apache::http::message::BasicRequestLine>
{
	static constexpr fixed_string class_name = "org/apache/http/message/BasicRequestLine";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::org::apache::http::RequestLine, scapix::java_api::java::lang::Cloneable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_MESSAGE_BASICREQUESTLINE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_APACHE_HTTP_MESSAGE_BASICREQUESTLINE)
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_MESSAGE_BASICREQUESTLINE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/apache/http/ProtocolVersion.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::apache::http::message::BasicRequestLine : public jni::object_base<"org/apache/http/message/BasicRequestLine",
	java::lang::Object,
	org::apache::http::RequestLine,
	java::lang::Cloneable>
{
public:

	static jni::ref<org::apache::http::message::BasicRequestLine> new_object(jni::ref<java::lang::String> method, jni::ref<java::lang::String> uri, jni::ref<org::apache::http::ProtocolVersion> version) { return base_::new_object(method, uri, version); }
	jni::ref<java::lang::String> getMethod() { return call_method<"getMethod", jni::ref<java::lang::String>>(); }
	jni::ref<org::apache::http::ProtocolVersion> getProtocolVersion() { return call_method<"getProtocolVersion", jni::ref<org::apache::http::ProtocolVersion>>(); }
	jni::ref<java::lang::String> getUri() { return call_method<"getUri", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::Object> clone() { return call_method<"clone", jni::ref<java::lang::Object>>(); }

protected:

	BasicRequestLine(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_MESSAGE_BASICREQUESTLINE