// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/net/www/protocol/http/AuthCacheValue.h>
#include <scapix/java_api/java/lang/Cloneable.h>

#ifndef SCAPIX_JAVA_API_SUN_NET_WWW_PROTOCOL_HTTP_AUTHENTICATIONINFO_FWD
#define SCAPIX_JAVA_API_SUN_NET_WWW_PROTOCOL_HTTP_AUTHENTICATIONINFO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::net::www::protocol::http { class AuthenticationInfo; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::net::www::protocol::http::AuthenticationInfo>
{
	static constexpr fixed_string class_name = "sun/net/www/protocol/http/AuthenticationInfo";
	using base_classes = std::tuple<scapix::java_api::sun::net::www::protocol::http::AuthCacheValue, scapix::java_api::java::lang::Cloneable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NET_WWW_PROTOCOL_HTTP_AUTHENTICATIONINFO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_NET_WWW_PROTOCOL_HTTP_AUTHENTICATIONINFO)
#define SCAPIX_JAVA_API_SUN_NET_WWW_PROTOCOL_HTTP_AUTHENTICATIONINFO

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/net/PasswordAuthentication.h>
#include <scapix/java_api/java/net/URL.h>
#include <scapix/java_api/sun/net/www/HeaderParser.h>
#include <scapix/java_api/sun/net/www/protocol/http/AuthCacheValue_Type.h>
#include <scapix/java_api/sun/net/www/protocol/http/AuthScheme.h>
#include <scapix/java_api/sun/net/www/protocol/http/HttpURLConnection.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::net::www::protocol::http::AuthenticationInfo : public jni::object_base<"sun/net/www/protocol/http/AuthenticationInfo",
	sun::net::www::protocol::http::AuthCacheValue,
	java::lang::Cloneable>
{
public:

	static jchar SERVER_AUTHENTICATION() { return get_static_field<"SERVER_AUTHENTICATION", jchar>(); }
	static jchar PROXY_AUTHENTICATION() { return get_static_field<"PROXY_AUTHENTICATION", jchar>(); }

	jni::ref<java::net::PasswordAuthentication> credentials() { return call_method<"credentials", jni::ref<java::net::PasswordAuthentication>>(); }
	jni::ref<sun::net::www::protocol::http::AuthCacheValue_Type> getAuthType() { return call_method<"getAuthType", jni::ref<sun::net::www::protocol::http::AuthCacheValue_Type>>(); }
	jni::ref<java::lang::String> getHost() { return call_method<"getHost", jni::ref<java::lang::String>>(); }
	jint getPort() { return call_method<"getPort", jint>(); }
	jni::ref<java::lang::String> getRealm() { return call_method<"getRealm", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getPath() { return call_method<"getPath", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getProtocolScheme() { return call_method<"getProtocolScheme", jni::ref<java::lang::String>>(); }
	static jni::ref<sun::net::www::protocol::http::AuthenticationInfo> new_object(jchar p1, jni::ref<sun::net::www::protocol::http::AuthScheme> p2, jni::ref<java::lang::String> p3, jint p4, jni::ref<java::lang::String> p5) { return base_::new_object(p1, p2, p3, p4, p5); }
	jni::ref<java::lang::Object> clone() { return call_method<"clone", jni::ref<java::lang::Object>>(); }
	static jni::ref<sun::net::www::protocol::http::AuthenticationInfo> new_object(jchar p1, jni::ref<sun::net::www::protocol::http::AuthScheme> p2, jni::ref<java::net::URL> p3, jni::ref<java::lang::String> p4) { return base_::new_object(p1, p2, p3, p4); }
	jboolean supportsPreemptiveAuthorization() { return call_method<"supportsPreemptiveAuthorization", jboolean>(); }
	jni::ref<java::lang::String> getHeaderName() { return call_method<"getHeaderName", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getHeaderValue(jni::ref<java::net::URL> p1, jni::ref<java::lang::String> p2) { return call_method<"getHeaderValue", jni::ref<java::lang::String>>(p1, p2); }
	jboolean setHeaders(jni::ref<sun::net::www::protocol::http::HttpURLConnection> p1, jni::ref<sun::net::www::HeaderParser> p2, jni::ref<java::lang::String> p3) { return call_method<"setHeaders", jboolean>(p1, p2, p3); }
	jboolean isAuthorizationStale(jni::ref<java::lang::String> p1) { return call_method<"isAuthorizationStale", jboolean>(p1); }

protected:

	AuthenticationInfo(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NET_WWW_PROTOCOL_HTTP_AUTHENTICATIONINFO
