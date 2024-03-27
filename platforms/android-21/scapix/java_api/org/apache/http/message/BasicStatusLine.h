// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/org/apache/http/StatusLine.h>
#include <scapix/java_api/java/lang/Cloneable.h>

#ifndef SCAPIX_JAVA_API_ORG_APACHE_HTTP_MESSAGE_BASICSTATUSLINE_FWD
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_MESSAGE_BASICSTATUSLINE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::apache::http::message { class BasicStatusLine; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::apache::http::message::BasicStatusLine>
{
	static constexpr fixed_string class_name = "org/apache/http/message/BasicStatusLine";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::org::apache::http::StatusLine, scapix::java_api::java::lang::Cloneable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_MESSAGE_BASICSTATUSLINE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_APACHE_HTTP_MESSAGE_BASICSTATUSLINE)
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_MESSAGE_BASICSTATUSLINE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/apache/http/ProtocolVersion.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::apache::http::message::BasicStatusLine : public jni::object_base<"org/apache/http/message/BasicStatusLine",
	java::lang::Object,
	org::apache::http::StatusLine,
	java::lang::Cloneable>
{
public:

	static jni::ref<org::apache::http::message::BasicStatusLine> new_object(jni::ref<org::apache::http::ProtocolVersion> version, jint statusCode, jni::ref<java::lang::String> reasonPhrase) { return base_::new_object(version, statusCode, reasonPhrase); }
	jint getStatusCode() { return call_method<"getStatusCode", jint>(); }
	jni::ref<org::apache::http::ProtocolVersion> getProtocolVersion() { return call_method<"getProtocolVersion", jni::ref<org::apache::http::ProtocolVersion>>(); }
	jni::ref<java::lang::String> getReasonPhrase() { return call_method<"getReasonPhrase", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::Object> clone() { return call_method<"clone", jni::ref<java::lang::Object>>(); }

protected:

	BasicStatusLine(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_MESSAGE_BASICSTATUSLINE
