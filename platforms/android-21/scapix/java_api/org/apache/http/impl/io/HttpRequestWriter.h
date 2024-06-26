// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/org/apache/http/impl/io/AbstractMessageWriter.h>

#ifndef SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_IO_HTTPREQUESTWRITER_FWD
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_IO_HTTPREQUESTWRITER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::apache::http::impl::io { class HttpRequestWriter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::apache::http::impl::io::HttpRequestWriter>
{
	static constexpr fixed_string class_name = "org/apache/http/impl/io/HttpRequestWriter";
	using base_classes = std::tuple<scapix::java_api::org::apache::http::impl::io::AbstractMessageWriter>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_IO_HTTPREQUESTWRITER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_IO_HTTPREQUESTWRITER)
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_IO_HTTPREQUESTWRITER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/org/apache/http/io/SessionOutputBuffer.h>
#include <scapix/java_api/org/apache/http/message/LineFormatter.h>
#include <scapix/java_api/org/apache/http/params/HttpParams.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::apache::http::impl::io::HttpRequestWriter : public jni::object_base<"org/apache/http/impl/io/HttpRequestWriter",
	org::apache::http::impl::io::AbstractMessageWriter>
{
public:

	static jni::ref<org::apache::http::impl::io::HttpRequestWriter> new_object(jni::ref<org::apache::http::io::SessionOutputBuffer> buffer, jni::ref<org::apache::http::message::LineFormatter> formatter, jni::ref<org::apache::http::params::HttpParams> params) { return base_::new_object(buffer, formatter, params); }

protected:

	HttpRequestWriter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_IO_HTTPREQUESTWRITER
