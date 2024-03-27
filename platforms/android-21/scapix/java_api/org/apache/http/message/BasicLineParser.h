// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/org/apache/http/message/LineParser.h>

#ifndef SCAPIX_JAVA_API_ORG_APACHE_HTTP_MESSAGE_BASICLINEPARSER_FWD
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_MESSAGE_BASICLINEPARSER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::apache::http::message { class BasicLineParser; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::apache::http::message::BasicLineParser>
{
	static constexpr fixed_string class_name = "org/apache/http/message/BasicLineParser";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::org::apache::http::message::LineParser>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_MESSAGE_BASICLINEPARSER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_APACHE_HTTP_MESSAGE_BASICLINEPARSER)
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_MESSAGE_BASICLINEPARSER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/apache/http/Header.h>
#include <scapix/java_api/org/apache/http/ProtocolVersion.h>
#include <scapix/java_api/org/apache/http/RequestLine.h>
#include <scapix/java_api/org/apache/http/StatusLine.h>
#include <scapix/java_api/org/apache/http/message/ParserCursor.h>
#include <scapix/java_api/org/apache/http/util/CharArrayBuffer.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::apache::http::message::BasicLineParser : public jni::object_base<"org/apache/http/message/BasicLineParser",
	java::lang::Object,
	org::apache::http::message::LineParser>
{
public:

	static jni::ref<org::apache::http::message::BasicLineParser> DEFAULT() { return get_static_field<"DEFAULT", jni::ref<org::apache::http::message::BasicLineParser>>(); }

	static jni::ref<org::apache::http::message::BasicLineParser> new_object(jni::ref<org::apache::http::ProtocolVersion> proto) { return base_::new_object(proto); }
	static jni::ref<org::apache::http::message::BasicLineParser> new_object() { return base_::new_object(); }
	static jni::ref<org::apache::http::ProtocolVersion> parseProtocolVersion(jni::ref<java::lang::String> value, jni::ref<org::apache::http::message::LineParser> parser) { return call_static_method<"parseProtocolVersion", jni::ref<org::apache::http::ProtocolVersion>>(value, parser); }
	jni::ref<org::apache::http::ProtocolVersion> parseProtocolVersion(jni::ref<org::apache::http::util::CharArrayBuffer> buffer, jni::ref<org::apache::http::message::ParserCursor> cursor) { return call_method<"parseProtocolVersion", jni::ref<org::apache::http::ProtocolVersion>>(buffer, cursor); }
	jboolean hasProtocolVersion(jni::ref<org::apache::http::util::CharArrayBuffer> buffer, jni::ref<org::apache::http::message::ParserCursor> cursor) { return call_method<"hasProtocolVersion", jboolean>(buffer, cursor); }
	static jni::ref<org::apache::http::RequestLine> parseRequestLine(jni::ref<java::lang::String> value, jni::ref<org::apache::http::message::LineParser> parser) { return call_static_method<"parseRequestLine", jni::ref<org::apache::http::RequestLine>>(value, parser); }
	jni::ref<org::apache::http::RequestLine> parseRequestLine(jni::ref<org::apache::http::util::CharArrayBuffer> buffer, jni::ref<org::apache::http::message::ParserCursor> cursor) { return call_method<"parseRequestLine", jni::ref<org::apache::http::RequestLine>>(buffer, cursor); }
	static jni::ref<org::apache::http::StatusLine> parseStatusLine(jni::ref<java::lang::String> value, jni::ref<org::apache::http::message::LineParser> parser) { return call_static_method<"parseStatusLine", jni::ref<org::apache::http::StatusLine>>(value, parser); }
	jni::ref<org::apache::http::StatusLine> parseStatusLine(jni::ref<org::apache::http::util::CharArrayBuffer> buffer, jni::ref<org::apache::http::message::ParserCursor> cursor) { return call_method<"parseStatusLine", jni::ref<org::apache::http::StatusLine>>(buffer, cursor); }
	static jni::ref<org::apache::http::Header> parseHeader(jni::ref<java::lang::String> value, jni::ref<org::apache::http::message::LineParser> parser) { return call_static_method<"parseHeader", jni::ref<org::apache::http::Header>>(value, parser); }
	jni::ref<org::apache::http::Header> parseHeader(jni::ref<org::apache::http::util::CharArrayBuffer> buffer) { return call_method<"parseHeader", jni::ref<org::apache::http::Header>>(buffer); }

protected:

	BasicLineParser(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_MESSAGE_BASICLINEPARSER
