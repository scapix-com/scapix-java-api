// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_NET_WWW_PROTOCOL_HTTP_AUTHCACHEVALUE_FWD
#define SCAPIX_JAVA_API_SUN_NET_WWW_PROTOCOL_HTTP_AUTHCACHEVALUE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::net::www::protocol::http { class AuthCacheValue; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::net::www::protocol::http::AuthCacheValue>
{
	static constexpr fixed_string class_name = "sun/net/www/protocol/http/AuthCacheValue";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NET_WWW_PROTOCOL_HTTP_AUTHCACHEVALUE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_NET_WWW_PROTOCOL_HTTP_AUTHCACHEVALUE)
#define SCAPIX_JAVA_API_SUN_NET_WWW_PROTOCOL_HTTP_AUTHCACHEVALUE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/sun/net/www/protocol/http/AuthCacheValue_Type.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::net::www::protocol::http::AuthCacheValue : public jni::object_base<"sun/net/www/protocol/http/AuthCacheValue",
	java::lang::Object>
{
public:

	using Type = AuthCacheValue_Type;


protected:

	AuthCacheValue(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NET_WWW_PROTOCOL_HTTP_AUTHCACHEVALUE
