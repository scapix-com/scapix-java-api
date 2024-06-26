// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/HashMap.h>
#include <scapix/java_api/java/lang/Runnable.h>

#ifndef SCAPIX_JAVA_API_SUN_NET_WWW_HTTP_KEEPALIVECACHE_FWD
#define SCAPIX_JAVA_API_SUN_NET_WWW_HTTP_KEEPALIVECACHE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::net::www::http { class KeepAliveCache; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::net::www::http::KeepAliveCache>
{
	static constexpr fixed_string class_name = "sun/net/www/http/KeepAliveCache";
	using base_classes = std::tuple<scapix::java_api::java::util::HashMap, scapix::java_api::java::lang::Runnable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NET_WWW_HTTP_KEEPALIVECACHE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_NET_WWW_HTTP_KEEPALIVECACHE)
#define SCAPIX_JAVA_API_SUN_NET_WWW_HTTP_KEEPALIVECACHE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/net/URL.h>
#include <scapix/java_api/sun/net/www/http/HttpClient.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::net::www::http::KeepAliveCache : public jni::object_base<"sun/net/www/http/KeepAliveCache",
	java::util::HashMap,
	java::lang::Runnable>
{
public:

	static jni::ref<sun::net::www::http::KeepAliveCache> new_object() { return base_::new_object(); }
	void put(jni::ref<java::net::URL> url, jni::ref<java::lang::Object> obj, jni::ref<sun::net::www::http::HttpClient> http) { return call_method<"put", void>(url, obj, http); }
	jni::ref<sun::net::www::http::HttpClient> get(jni::ref<java::net::URL> url, jni::ref<java::lang::Object> obj) { return call_method<"get", jni::ref<sun::net::www::http::HttpClient>>(url, obj); }
	void run() { return call_method<"run", void>(); }

protected:

	KeepAliveCache(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NET_WWW_HTTP_KEEPALIVECACHE
