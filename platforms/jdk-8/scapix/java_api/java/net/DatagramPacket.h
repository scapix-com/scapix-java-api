// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_NET_DATAGRAMPACKET_FWD
#define SCAPIX_JAVA_API_JAVA_NET_DATAGRAMPACKET_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::net { class DatagramPacket; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::net::DatagramPacket>
{
	static constexpr fixed_string class_name = "java/net/DatagramPacket";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NET_DATAGRAMPACKET_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_NET_DATAGRAMPACKET)
#define SCAPIX_JAVA_API_JAVA_NET_DATAGRAMPACKET

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/net/InetAddress.h>
#include <scapix/java_api/java/net/SocketAddress.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::net::DatagramPacket : public jni::object_base<"java/net/DatagramPacket",
	java::lang::Object>
{
public:

	static jni::ref<java::net::DatagramPacket> new_object(jni::ref<jni::array<jbyte>> p1, jint p2, jint p3) { return base_::new_object(p1, p2, p3); }
	static jni::ref<java::net::DatagramPacket> new_object(jni::ref<jni::array<jbyte>> p1, jint p2) { return base_::new_object(p1, p2); }
	static jni::ref<java::net::DatagramPacket> new_object(jni::ref<jni::array<jbyte>> p1, jint p2, jint p3, jni::ref<java::net::InetAddress> p4, jint p5) { return base_::new_object(p1, p2, p3, p4, p5); }
	static jni::ref<java::net::DatagramPacket> new_object(jni::ref<jni::array<jbyte>> p1, jint p2, jint p3, jni::ref<java::net::SocketAddress> p4) { return base_::new_object(p1, p2, p3, p4); }
	static jni::ref<java::net::DatagramPacket> new_object(jni::ref<jni::array<jbyte>> p1, jint p2, jni::ref<java::net::InetAddress> p3, jint p4) { return base_::new_object(p1, p2, p3, p4); }
	static jni::ref<java::net::DatagramPacket> new_object(jni::ref<jni::array<jbyte>> p1, jint p2, jni::ref<java::net::SocketAddress> p3) { return base_::new_object(p1, p2, p3); }
	jni::ref<java::net::InetAddress> getAddress() { return call_method<"getAddress", jni::ref<java::net::InetAddress>>(); }
	jint getPort() { return call_method<"getPort", jint>(); }
	jni::ref<jni::array<jbyte>> getData() { return call_method<"getData", jni::ref<jni::array<jbyte>>>(); }
	jint getOffset() { return call_method<"getOffset", jint>(); }
	jint getLength() { return call_method<"getLength", jint>(); }
	void setData(jni::ref<jni::array<jbyte>> p1, jint p2, jint p3) { return call_method<"setData", void>(p1, p2, p3); }
	void setAddress(jni::ref<java::net::InetAddress> p1) { return call_method<"setAddress", void>(p1); }
	void setPort(jint p1) { return call_method<"setPort", void>(p1); }
	void setSocketAddress(jni::ref<java::net::SocketAddress> p1) { return call_method<"setSocketAddress", void>(p1); }
	jni::ref<java::net::SocketAddress> getSocketAddress() { return call_method<"getSocketAddress", jni::ref<java::net::SocketAddress>>(); }
	void setData(jni::ref<jni::array<jbyte>> p1) { return call_method<"setData", void>(p1); }
	void setLength(jint p1) { return call_method<"setLength", void>(p1); }

protected:

	DatagramPacket(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NET_DATAGRAMPACKET
