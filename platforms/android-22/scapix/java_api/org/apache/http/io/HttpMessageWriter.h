// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ORG_APACHE_HTTP_IO_HTTPMESSAGEWRITER_FWD
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_IO_HTTPMESSAGEWRITER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::apache::http::io { class HttpMessageWriter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::apache::http::io::HttpMessageWriter>
{
	static constexpr fixed_string class_name = "org/apache/http/io/HttpMessageWriter";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_IO_HTTPMESSAGEWRITER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_APACHE_HTTP_IO_HTTPMESSAGEWRITER)
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_IO_HTTPMESSAGEWRITER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/org/apache/http/HttpMessage.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::apache::http::io::HttpMessageWriter : public jni::object_base<"org/apache/http/io/HttpMessageWriter",
	java::lang::Object>
{
public:

	void write(jni::ref<org::apache::http::HttpMessage> p1) { return call_method<"write", void>(p1); }

protected:

	HttpMessageWriter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_IO_HTTPMESSAGEWRITER
