// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/net/SocketAddress.h>

#ifndef SCAPIX_JAVA_API_JAVA_NET_INETSOCKETADDRESS_FWD
#define SCAPIX_JAVA_API_JAVA_NET_INETSOCKETADDRESS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::net { class InetSocketAddress; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::net::InetSocketAddress>
{
	static constexpr fixed_string class_name = "java/net/InetSocketAddress";
	using base_classes = std::tuple<scapix::java_api::java::net::SocketAddress>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NET_INETSOCKETADDRESS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_NET_INETSOCKETADDRESS)
#define SCAPIX_JAVA_API_JAVA_NET_INETSOCKETADDRESS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/net/InetAddress.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::net::InetSocketAddress : public jni::object_base<"java/net/InetSocketAddress",
	java::net::SocketAddress>
{
public:

	static jni::ref<java::net::InetSocketAddress> new_object(jint port) { return base_::new_object(port); }
	static jni::ref<java::net::InetSocketAddress> new_object(jni::ref<java::net::InetAddress> address, jint port) { return base_::new_object(address, port); }
	static jni::ref<java::net::InetSocketAddress> new_object(jni::ref<java::lang::String> host, jint port) { return base_::new_object(host, port); }
	static jni::ref<java::net::InetSocketAddress> createUnresolved(jni::ref<java::lang::String> host, jint port) { return call_static_method<"createUnresolved", jni::ref<java::net::InetSocketAddress>>(host, port); }
	jint getPort() { return call_method<"getPort", jint>(); }
	jni::ref<java::net::InetAddress> getAddress() { return call_method<"getAddress", jni::ref<java::net::InetAddress>>(); }
	jni::ref<java::lang::String> getHostName() { return call_method<"getHostName", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getHostString() { return call_method<"getHostString", jni::ref<java::lang::String>>(); }
	jboolean isUnresolved() { return call_method<"isUnresolved", jboolean>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jboolean equals(jni::ref<java::lang::Object> socketAddr) { return call_method<"equals", jboolean>(socketAddr); }
	jint hashCode() { return call_method<"hashCode", jint>(); }

protected:

	InetSocketAddress(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NET_INETSOCKETADDRESS