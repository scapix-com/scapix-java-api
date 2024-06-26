// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_NET_INETADDRESS_CACHE_FWD
#define SCAPIX_JAVA_API_JAVA_NET_INETADDRESS_CACHE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::net { class InetAddress_Cache; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::net::InetAddress_Cache>
{
	static constexpr fixed_string class_name = "java/net/InetAddress$Cache";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NET_INETADDRESS_CACHE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_NET_INETADDRESS_CACHE)
#define SCAPIX_JAVA_API_JAVA_NET_INETADDRESS_CACHE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/net/InetAddress.h>
#include <scapix/java_api/java/net/InetAddress_Cache_Type.h>
#include <scapix/java_api/java/net/InetAddress_CacheEntry.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::net::InetAddress_Cache : public jni::object_base<"java/net/InetAddress$Cache",
	java::lang::Object>
{
public:

	static jni::ref<java::net::InetAddress_Cache> new_object(jni::ref<java::net::InetAddress_Cache_Type> p1) { return base_::new_object(p1); }
	jni::ref<java::net::InetAddress_Cache> put(jni::ref<java::lang::String> p1, jni::ref<jni::array<java::net::InetAddress>> p2) { return call_method<"put", jni::ref<java::net::InetAddress_Cache>>(p1, p2); }
	jni::ref<java::net::InetAddress_CacheEntry> get(jni::ref<java::lang::String> p1) { return call_method<"get", jni::ref<java::net::InetAddress_CacheEntry>>(p1); }

protected:

	InetAddress_Cache(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NET_INETADDRESS_CACHE
