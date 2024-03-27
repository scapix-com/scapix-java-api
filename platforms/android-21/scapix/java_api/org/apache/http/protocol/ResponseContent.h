// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/org/apache/http/HttpResponseInterceptor.h>

#ifndef SCAPIX_JAVA_API_ORG_APACHE_HTTP_PROTOCOL_RESPONSECONTENT_FWD
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_PROTOCOL_RESPONSECONTENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::apache::http::protocol { class ResponseContent; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::apache::http::protocol::ResponseContent>
{
	static constexpr fixed_string class_name = "org/apache/http/protocol/ResponseContent";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::org::apache::http::HttpResponseInterceptor>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_PROTOCOL_RESPONSECONTENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_APACHE_HTTP_PROTOCOL_RESPONSECONTENT)
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_PROTOCOL_RESPONSECONTENT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/org/apache/http/HttpResponse.h>
#include <scapix/java_api/org/apache/http/protocol/HttpContext.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::apache::http::protocol::ResponseContent : public jni::object_base<"org/apache/http/protocol/ResponseContent",
	java::lang::Object,
	org::apache::http::HttpResponseInterceptor>
{
public:

	static jni::ref<org::apache::http::protocol::ResponseContent> new_object() { return base_::new_object(); }
	void process(jni::ref<org::apache::http::HttpResponse> response, jni::ref<org::apache::http::protocol::HttpContext> context) { return call_method<"process", void>(response, context); }

protected:

	ResponseContent(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_PROTOCOL_RESPONSECONTENT
