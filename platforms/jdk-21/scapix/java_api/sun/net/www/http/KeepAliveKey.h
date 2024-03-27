// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_NET_WWW_HTTP_KEEPALIVEKEY_FWD
#define SCAPIX_JAVA_API_SUN_NET_WWW_HTTP_KEEPALIVEKEY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::net::www::http { class KeepAliveKey; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::net::www::http::KeepAliveKey>
{
	static constexpr fixed_string class_name = "sun/net/www/http/KeepAliveKey";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NET_WWW_HTTP_KEEPALIVEKEY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_NET_WWW_HTTP_KEEPALIVEKEY)
#define SCAPIX_JAVA_API_SUN_NET_WWW_HTTP_KEEPALIVEKEY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/net/URL.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::net::www::http::KeepAliveKey : public jni::object_base<"sun/net/www/http/KeepAliveKey",
	java::lang::Object>
{
public:

	static jni::ref<sun::net::www::http::KeepAliveKey> new_object(jni::ref<java::net::URL> url, jni::ref<java::lang::Object> obj) { return base_::new_object(url, obj); }
	jboolean equals(jni::ref<java::lang::Object> obj) { return call_method<"equals", jboolean>(obj); }
	jint hashCode() { return call_method<"hashCode", jint>(); }

protected:

	KeepAliveKey(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NET_WWW_HTTP_KEEPALIVEKEY
