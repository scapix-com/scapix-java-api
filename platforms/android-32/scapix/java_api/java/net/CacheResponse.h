// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_NET_CACHERESPONSE_FWD
#define SCAPIX_JAVA_API_JAVA_NET_CACHERESPONSE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::net { class CacheResponse; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::net::CacheResponse>
{
	static constexpr fixed_string class_name = "java/net/CacheResponse";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NET_CACHERESPONSE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_NET_CACHERESPONSE)
#define SCAPIX_JAVA_API_JAVA_NET_CACHERESPONSE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/InputStream.h>
#include <scapix/java_api/java/util/Map.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::net::CacheResponse : public jni::object_base<"java/net/CacheResponse",
	java::lang::Object>
{
public:

	static jni::ref<java::net::CacheResponse> new_object() { return base_::new_object(); }
	jni::ref<java::util::Map> getHeaders() { return call_method<"getHeaders", jni::ref<java::util::Map>>(); }
	jni::ref<java::io::InputStream> getBody() { return call_method<"getBody", jni::ref<java::io::InputStream>>(); }

protected:

	CacheResponse(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NET_CACHERESPONSE
