// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ORG_APACHE_HTTP_CLIENT_REDIRECTHANDLER_FWD
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_CLIENT_REDIRECTHANDLER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::apache::http::client { class RedirectHandler; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::apache::http::client::RedirectHandler>
{
	static constexpr fixed_string class_name = "org/apache/http/client/RedirectHandler";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_CLIENT_REDIRECTHANDLER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_APACHE_HTTP_CLIENT_REDIRECTHANDLER)
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_CLIENT_REDIRECTHANDLER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/net/URI.h>
#include <scapix/java_api/org/apache/http/HttpResponse.h>
#include <scapix/java_api/org/apache/http/protocol/HttpContext.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::apache::http::client::RedirectHandler : public jni::object_base<"org/apache/http/client/RedirectHandler",
	java::lang::Object>
{
public:

	jboolean isRedirectRequested(jni::ref<org::apache::http::HttpResponse> p1, jni::ref<org::apache::http::protocol::HttpContext> p2) { return call_method<"isRedirectRequested", jboolean>(p1, p2); }
	jni::ref<java::net::URI> getLocationURI(jni::ref<org::apache::http::HttpResponse> p1, jni::ref<org::apache::http::protocol::HttpContext> p2) { return call_method<"getLocationURI", jni::ref<java::net::URI>>(p1, p2); }

protected:

	RedirectHandler(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_CLIENT_REDIRECTHANDLER
