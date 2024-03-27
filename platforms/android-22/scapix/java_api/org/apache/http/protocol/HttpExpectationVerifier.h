// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ORG_APACHE_HTTP_PROTOCOL_HTTPEXPECTATIONVERIFIER_FWD
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_PROTOCOL_HTTPEXPECTATIONVERIFIER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::apache::http::protocol { class HttpExpectationVerifier; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::apache::http::protocol::HttpExpectationVerifier>
{
	static constexpr fixed_string class_name = "org/apache/http/protocol/HttpExpectationVerifier";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_PROTOCOL_HTTPEXPECTATIONVERIFIER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_APACHE_HTTP_PROTOCOL_HTTPEXPECTATIONVERIFIER)
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_PROTOCOL_HTTPEXPECTATIONVERIFIER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/org/apache/http/HttpRequest.h>
#include <scapix/java_api/org/apache/http/HttpResponse.h>
#include <scapix/java_api/org/apache/http/protocol/HttpContext.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::apache::http::protocol::HttpExpectationVerifier : public jni::object_base<"org/apache/http/protocol/HttpExpectationVerifier",
	java::lang::Object>
{
public:

	void verify(jni::ref<org::apache::http::HttpRequest> p1, jni::ref<org::apache::http::HttpResponse> p2, jni::ref<org::apache::http::protocol::HttpContext> p3) { return call_method<"verify", void>(p1, p2, p3); }

protected:

	HttpExpectationVerifier(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_PROTOCOL_HTTPEXPECTATIONVERIFIER