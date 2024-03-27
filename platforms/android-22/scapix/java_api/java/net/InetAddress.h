// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVA_NET_INETADDRESS_FWD
#define SCAPIX_JAVA_API_JAVA_NET_INETADDRESS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::net { class InetAddress; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::net::InetAddress>
{
	static constexpr fixed_string class_name = "java/net/InetAddress";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NET_INETADDRESS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_NET_INETADDRESS)
#define SCAPIX_JAVA_API_JAVA_NET_INETADDRESS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/net/NetworkInterface.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::net::InetAddress : public jni::object_base<"java/net/InetAddress",
	java::lang::Object,
	java::io::Serializable>
{
public:

	jboolean equals(jni::ref<java::lang::Object> obj) { return call_method<"equals", jboolean>(obj); }
	jni::ref<jni::array<jbyte>> getAddress() { return call_method<"getAddress", jni::ref<jni::array<jbyte>>>(); }
	static jni::ref<jni::array<java::net::InetAddress>> getAllByName(jni::ref<java::lang::String> host) { return call_static_method<"getAllByName", jni::ref<jni::array<java::net::InetAddress>>>(host); }
	static jni::ref<java::net::InetAddress> getByName(jni::ref<java::lang::String> host) { return call_static_method<"getByName", jni::ref<java::net::InetAddress>>(host); }
	jni::ref<java::lang::String> getHostAddress() { return call_method<"getHostAddress", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getHostName() { return call_method<"getHostName", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getCanonicalHostName() { return call_method<"getCanonicalHostName", jni::ref<java::lang::String>>(); }
	static jni::ref<java::net::InetAddress> getLocalHost() { return call_static_method<"getLocalHost", jni::ref<java::net::InetAddress>>(); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	static jni::ref<java::net::InetAddress> getLoopbackAddress() { return call_static_method<"getLoopbackAddress", jni::ref<java::net::InetAddress>>(); }
	jboolean isAnyLocalAddress() { return call_method<"isAnyLocalAddress", jboolean>(); }
	jboolean isLinkLocalAddress() { return call_method<"isLinkLocalAddress", jboolean>(); }
	jboolean isLoopbackAddress() { return call_method<"isLoopbackAddress", jboolean>(); }
	jboolean isMCGlobal() { return call_method<"isMCGlobal", jboolean>(); }
	jboolean isMCLinkLocal() { return call_method<"isMCLinkLocal", jboolean>(); }
	jboolean isMCNodeLocal() { return call_method<"isMCNodeLocal", jboolean>(); }
	jboolean isMCOrgLocal() { return call_method<"isMCOrgLocal", jboolean>(); }
	jboolean isMCSiteLocal() { return call_method<"isMCSiteLocal", jboolean>(); }
	jboolean isMulticastAddress() { return call_method<"isMulticastAddress", jboolean>(); }
	jboolean isSiteLocalAddress() { return call_method<"isSiteLocalAddress", jboolean>(); }
	jboolean isReachable(jint timeout) { return call_method<"isReachable", jboolean>(timeout); }
	jboolean isReachable(jni::ref<java::net::NetworkInterface> networkInterface, jint ttl, jint timeout) { return call_method<"isReachable", jboolean>(networkInterface, ttl, timeout); }
	static jni::ref<java::net::InetAddress> getByAddress(jni::ref<jni::array<jbyte>> ipAddress) { return call_static_method<"getByAddress", jni::ref<java::net::InetAddress>>(ipAddress); }
	static jni::ref<java::net::InetAddress> getByAddress(jni::ref<java::lang::String> hostName, jni::ref<jni::array<jbyte>> ipAddress) { return call_static_method<"getByAddress", jni::ref<java::net::InetAddress>>(hostName, ipAddress); }

protected:

	InetAddress(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NET_INETADDRESS