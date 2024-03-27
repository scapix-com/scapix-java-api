// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/org/apache/http/HttpRequestInterceptor.h>
#include <scapix/java_api/org/apache/http/HttpResponseInterceptor.h>

#ifndef SCAPIX_JAVA_API_ORG_APACHE_HTTP_PROTOCOL_HTTPPROCESSOR_FWD
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_PROTOCOL_HTTPPROCESSOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::apache::http::protocol { class HttpProcessor; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::apache::http::protocol::HttpProcessor>
{
	static constexpr fixed_string class_name = "org/apache/http/protocol/HttpProcessor";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::org::apache::http::HttpRequestInterceptor, scapix::java_api::org::apache::http::HttpResponseInterceptor>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_PROTOCOL_HTTPPROCESSOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_APACHE_HTTP_PROTOCOL_HTTPPROCESSOR)
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_PROTOCOL_HTTPPROCESSOR

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::apache::http::protocol::HttpProcessor : public jni::object_base<"org/apache/http/protocol/HttpProcessor",
	java::lang::Object,
	org::apache::http::HttpRequestInterceptor,
	org::apache::http::HttpResponseInterceptor>
{
public:


protected:

	HttpProcessor(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_PROTOCOL_HTTPPROCESSOR