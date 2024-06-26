// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_NET_WWW_PROTOCOL_HTTP_HTTPAUTHENTICATOR_FWD
#define SCAPIX_JAVA_API_SUN_NET_WWW_PROTOCOL_HTTP_HTTPAUTHENTICATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::net::www::protocol::http { class HttpAuthenticator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::net::www::protocol::http::HttpAuthenticator>
{
	static constexpr fixed_string class_name = "sun/net/www/protocol/http/HttpAuthenticator";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NET_WWW_PROTOCOL_HTTP_HTTPAUTHENTICATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_NET_WWW_PROTOCOL_HTTP_HTTPAUTHENTICATOR)
#define SCAPIX_JAVA_API_SUN_NET_WWW_PROTOCOL_HTTP_HTTPAUTHENTICATOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/net/URL.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::net::www::protocol::http::HttpAuthenticator : public jni::object_base<"sun/net/www/protocol/http/HttpAuthenticator",
	java::lang::Object>
{
public:

	jboolean schemeSupported(jni::ref<java::lang::String> p1) { return call_method<"schemeSupported", jboolean>(p1); }
	jni::ref<java::lang::String> authString(jni::ref<java::net::URL> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::String> p3) { return call_method<"authString", jni::ref<java::lang::String>>(p1, p2, p3); }

protected:

	HttpAuthenticator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NET_WWW_PROTOCOL_HTTP_HTTPAUTHENTICATOR
