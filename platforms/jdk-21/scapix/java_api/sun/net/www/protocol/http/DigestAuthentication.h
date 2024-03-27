// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/net/www/protocol/http/AuthenticationInfo.h>

#ifndef SCAPIX_JAVA_API_SUN_NET_WWW_PROTOCOL_HTTP_DIGESTAUTHENTICATION_FWD
#define SCAPIX_JAVA_API_SUN_NET_WWW_PROTOCOL_HTTP_DIGESTAUTHENTICATION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::net::www::protocol::http { class DigestAuthentication; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::net::www::protocol::http::DigestAuthentication>
{
	static constexpr fixed_string class_name = "sun/net/www/protocol/http/DigestAuthentication";
	using base_classes = std::tuple<scapix::java_api::sun::net::www::protocol::http::AuthenticationInfo>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NET_WWW_PROTOCOL_HTTP_DIGESTAUTHENTICATION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_NET_WWW_PROTOCOL_HTTP_DIGESTAUTHENTICATION)
#define SCAPIX_JAVA_API_SUN_NET_WWW_PROTOCOL_HTTP_DIGESTAUTHENTICATION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/net/PasswordAuthentication.h>
#include <scapix/java_api/java/net/URL.h>
#include <scapix/java_api/sun/net/www/HeaderParser.h>
#include <scapix/java_api/sun/net/www/protocol/http/DigestAuthentication_Parameters.h>
#include <scapix/java_api/sun/net/www/protocol/http/HttpURLConnection.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::net::www::protocol::http::DigestAuthentication : public jni::object_base<"sun/net/www/protocol/http/DigestAuthentication",
	sun::net::www::protocol::http::AuthenticationInfo>
{
public:

	static jni::ref<sun::net::www::protocol::http::DigestAuthentication> new_object(jboolean isProxy, jni::ref<java::net::URL> url, jni::ref<java::lang::String> realm, jni::ref<java::lang::String> authMethod, jni::ref<java::net::PasswordAuthentication> pw, jni::ref<sun::net::www::protocol::http::DigestAuthentication_Parameters> params) { return base_::new_object(isProxy, url, realm, authMethod, pw, params); }
	static jni::ref<sun::net::www::protocol::http::DigestAuthentication> new_object(jboolean isProxy, jni::ref<java::lang::String> host, jint port, jni::ref<java::lang::String> realm, jni::ref<java::lang::String> authMethod, jni::ref<java::net::PasswordAuthentication> pw, jni::ref<sun::net::www::protocol::http::DigestAuthentication_Parameters> params) { return base_::new_object(isProxy, host, port, realm, authMethod, pw, params); }
	jboolean supportsPreemptiveAuthorization() { return call_method<"supportsPreemptiveAuthorization", jboolean>(); }
	jni::ref<java::lang::String> getHeaderValue(jni::ref<java::net::URL> url, jni::ref<java::lang::String> method) { return call_method<"getHeaderValue", jni::ref<java::lang::String>>(url, method); }
	jboolean isAuthorizationStale(jni::ref<java::lang::String> header) { return call_method<"isAuthorizationStale", jboolean>(header); }
	jboolean setHeaders(jni::ref<sun::net::www::protocol::http::HttpURLConnection> conn, jni::ref<sun::net::www::HeaderParser> p, jni::ref<java::lang::String> raw) { return call_method<"setHeaders", jboolean>(conn, p, raw); }
	void checkResponse(jni::ref<java::lang::String> header, jni::ref<java::lang::String> method, jni::ref<java::net::URL> url) { return call_method<"checkResponse", void>(header, method, url); }
	void checkResponse(jni::ref<java::lang::String> header, jni::ref<java::lang::String> method, jni::ref<java::lang::String> uri) { return call_method<"checkResponse", void>(header, method, uri); }

protected:

	DigestAuthentication(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NET_WWW_PROTOCOL_HTTP_DIGESTAUTHENTICATION
