// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_NET_RESPONSECACHE_FWD
#define SCAPIX_JAVA_API_JAVA_NET_RESPONSECACHE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::net { class ResponseCache; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::net::ResponseCache>
{
	static constexpr fixed_string class_name = "java/net/ResponseCache";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NET_RESPONSECACHE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_NET_RESPONSECACHE)
#define SCAPIX_JAVA_API_JAVA_NET_RESPONSECACHE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/net/CacheRequest.h>
#include <scapix/java_api/java/net/CacheResponse.h>
#include <scapix/java_api/java/net/URI.h>
#include <scapix/java_api/java/net/URLConnection.h>
#include <scapix/java_api/java/util/Map.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::net::ResponseCache : public jni::object_base<"java/net/ResponseCache",
	java::lang::Object>
{
public:

	static jni::ref<java::net::ResponseCache> new_object() { return base_::new_object(); }
	static jni::ref<java::net::ResponseCache> getDefault() { return call_static_method<"getDefault", jni::ref<java::net::ResponseCache>>(); }
	static void setDefault(jni::ref<java::net::ResponseCache> responseCache) { return call_static_method<"setDefault", void>(responseCache); }
	jni::ref<java::net::CacheResponse> get(jni::ref<java::net::URI> p1, jni::ref<java::lang::String> p2, jni::ref<java::util::Map> p3) { return call_method<"get", jni::ref<java::net::CacheResponse>>(p1, p2, p3); }
	jni::ref<java::net::CacheRequest> put(jni::ref<java::net::URI> p1, jni::ref<java::net::URLConnection> p2) { return call_method<"put", jni::ref<java::net::CacheRequest>>(p1, p2); }

protected:

	ResponseCache(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NET_RESPONSECACHE