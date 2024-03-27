// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/net/InetAddress.h>

#ifndef SCAPIX_JAVA_API_JAVA_NET_INET6ADDRESS_FWD
#define SCAPIX_JAVA_API_JAVA_NET_INET6ADDRESS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::net { class Inet6Address; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::net::Inet6Address>
{
	static constexpr fixed_string class_name = "java/net/Inet6Address";
	using base_classes = std::tuple<scapix::java_api::java::net::InetAddress>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NET_INET6ADDRESS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_NET_INET6ADDRESS)
#define SCAPIX_JAVA_API_JAVA_NET_INET6ADDRESS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/net/NetworkInterface.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::net::Inet6Address : public jni::object_base<"java/net/Inet6Address",
	java::net::InetAddress>
{
public:

	static jni::ref<java::net::Inet6Address> getByAddress(jni::ref<java::lang::String> host, jni::ref<jni::array<jbyte>> addr, jint scope_id) { return call_static_method<"getByAddress", jni::ref<java::net::Inet6Address>>(host, addr, scope_id); }
	static jni::ref<java::net::Inet6Address> getByAddress(jni::ref<java::lang::String> host, jni::ref<jni::array<jbyte>> addr, jni::ref<java::net::NetworkInterface> nif) { return call_static_method<"getByAddress", jni::ref<java::net::Inet6Address>>(host, addr, nif); }
	jboolean isAnyLocalAddress() { return call_method<"isAnyLocalAddress", jboolean>(); }
	jboolean isIPv4CompatibleAddress() { return call_method<"isIPv4CompatibleAddress", jboolean>(); }
	jboolean isLinkLocalAddress() { return call_method<"isLinkLocalAddress", jboolean>(); }
	jboolean isLoopbackAddress() { return call_method<"isLoopbackAddress", jboolean>(); }
	jboolean isMCGlobal() { return call_method<"isMCGlobal", jboolean>(); }
	jboolean isMCLinkLocal() { return call_method<"isMCLinkLocal", jboolean>(); }
	jboolean isMCNodeLocal() { return call_method<"isMCNodeLocal", jboolean>(); }
	jboolean isMCOrgLocal() { return call_method<"isMCOrgLocal", jboolean>(); }
	jboolean isMCSiteLocal() { return call_method<"isMCSiteLocal", jboolean>(); }
	jboolean isMulticastAddress() { return call_method<"isMulticastAddress", jboolean>(); }
	jboolean isSiteLocalAddress() { return call_method<"isSiteLocalAddress", jboolean>(); }
	jint getScopeId() { return call_method<"getScopeId", jint>(); }
	jni::ref<java::net::NetworkInterface> getScopedInterface() { return call_method<"getScopedInterface", jni::ref<java::net::NetworkInterface>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	Inet6Address(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NET_INET6ADDRESS
