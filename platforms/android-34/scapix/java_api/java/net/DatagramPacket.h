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

	static jni::ref<java::net::DatagramPacket> new_object(jni::ref<jni::array<jbyte>> buf, jint offset, jint length) { return base_::new_object(buf, offset, length); }
	static jni::ref<java::net::DatagramPacket> new_object(jni::ref<jni::array<jbyte>> buf, jint length) { return base_::new_object(buf, length); }
	static jni::ref<java::net::DatagramPacket> new_object(jni::ref<jni::array<jbyte>> buf, jint offset, jint length, jni::ref<java::net::InetAddress> address, jint port) { return base_::new_object(buf, offset, length, address, port); }
	static jni::ref<java::net::DatagramPacket> new_object(jni::ref<jni::array<jbyte>> buf, jint offset, jint length, jni::ref<java::net::SocketAddress> address) { return base_::new_object(buf, offset, length, address); }
	static jni::ref<java::net::DatagramPacket> new_object(jni::ref<jni::array<jbyte>> buf, jint length, jni::ref<java::net::InetAddress> address, jint port) { return base_::new_object(buf, length, address, port); }
	static jni::ref<java::net::DatagramPacket> new_object(jni::ref<jni::array<jbyte>> buf, jint length, jni::ref<java::net::SocketAddress> address) { return base_::new_object(buf, length, address); }
	jni::ref<java::net::InetAddress> getAddress() { return call_method<"getAddress", jni::ref<java::net::InetAddress>>(); }
	jint getPort() { return call_method<"getPort", jint>(); }
	jni::ref<jni::array<jbyte>> getData() { return call_method<"getData", jni::ref<jni::array<jbyte>>>(); }
	jint getOffset() { return call_method<"getOffset", jint>(); }
	jint getLength() { return call_method<"getLength", jint>(); }
	void setData(jni::ref<jni::array<jbyte>> buf, jint offset, jint length) { return call_method<"setData", void>(buf, offset, length); }
	void setAddress(jni::ref<java::net::InetAddress> iaddr) { return call_method<"setAddress", void>(iaddr); }
	void setPort(jint iport) { return call_method<"setPort", void>(iport); }
	void setSocketAddress(jni::ref<java::net::SocketAddress> address) { return call_method<"setSocketAddress", void>(address); }
	jni::ref<java::net::SocketAddress> getSocketAddress() { return call_method<"getSocketAddress", jni::ref<java::net::SocketAddress>>(); }
	void setData(jni::ref<jni::array<jbyte>> buf) { return call_method<"setData", void>(buf); }
	void setLength(jint length) { return call_method<"setLength", void>(length); }

protected:

	DatagramPacket(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NET_DATAGRAMPACKET
