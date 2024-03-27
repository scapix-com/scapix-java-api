// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Closeable.h>

#ifndef SCAPIX_JAVA_API_JAVA_NET_DATAGRAMSOCKET_FWD
#define SCAPIX_JAVA_API_JAVA_NET_DATAGRAMSOCKET_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::net { class DatagramSocket; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::net::DatagramSocket>
{
	static constexpr fixed_string class_name = "java/net/DatagramSocket";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::io::Closeable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NET_DATAGRAMSOCKET_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_NET_DATAGRAMSOCKET)
#define SCAPIX_JAVA_API_JAVA_NET_DATAGRAMSOCKET

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/net/DatagramPacket.h>
#include <scapix/java_api/java/net/DatagramSocketImplFactory.h>
#include <scapix/java_api/java/net/InetAddress.h>
#include <scapix/java_api/java/net/SocketAddress.h>
#include <scapix/java_api/java/nio/channels/DatagramChannel.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::net::DatagramSocket : public jni::object_base<"java/net/DatagramSocket",
	java::lang::Object,
	java::io::Closeable>
{
public:

	static jni::ref<java::net::DatagramSocket> new_object() { return base_::new_object(); }
	static jni::ref<java::net::DatagramSocket> new_object(jni::ref<java::net::SocketAddress> bindaddr) { return base_::new_object(bindaddr); }
	static jni::ref<java::net::DatagramSocket> new_object(jint port) { return base_::new_object(port); }
	static jni::ref<java::net::DatagramSocket> new_object(jint port, jni::ref<java::net::InetAddress> laddr) { return base_::new_object(port, laddr); }
	void bind(jni::ref<java::net::SocketAddress> addr) { return call_method<"bind", void>(addr); }
	void connect(jni::ref<java::net::InetAddress> address, jint port) { return call_method<"connect", void>(address, port); }
	void connect(jni::ref<java::net::SocketAddress> addr) { return call_method<"connect", void>(addr); }
	void disconnect() { return call_method<"disconnect", void>(); }
	jboolean isBound() { return call_method<"isBound", jboolean>(); }
	jboolean isConnected() { return call_method<"isConnected", jboolean>(); }
	jni::ref<java::net::InetAddress> getInetAddress() { return call_method<"getInetAddress", jni::ref<java::net::InetAddress>>(); }
	jint getPort() { return call_method<"getPort", jint>(); }
	jni::ref<java::net::SocketAddress> getRemoteSocketAddress() { return call_method<"getRemoteSocketAddress", jni::ref<java::net::SocketAddress>>(); }
	jni::ref<java::net::SocketAddress> getLocalSocketAddress() { return call_method<"getLocalSocketAddress", jni::ref<java::net::SocketAddress>>(); }
	void send(jni::ref<java::net::DatagramPacket> p) { return call_method<"send", void>(p); }
	void receive(jni::ref<java::net::DatagramPacket> p) { return call_method<"receive", void>(p); }
	jni::ref<java::net::InetAddress> getLocalAddress() { return call_method<"getLocalAddress", jni::ref<java::net::InetAddress>>(); }
	jint getLocalPort() { return call_method<"getLocalPort", jint>(); }
	void setSoTimeout(jint timeout) { return call_method<"setSoTimeout", void>(timeout); }
	jint getSoTimeout() { return call_method<"getSoTimeout", jint>(); }
	void setSendBufferSize(jint size) { return call_method<"setSendBufferSize", void>(size); }
	jint getSendBufferSize() { return call_method<"getSendBufferSize", jint>(); }
	void setReceiveBufferSize(jint size) { return call_method<"setReceiveBufferSize", void>(size); }
	jint getReceiveBufferSize() { return call_method<"getReceiveBufferSize", jint>(); }
	void setReuseAddress(jboolean on) { return call_method<"setReuseAddress", void>(on); }
	jboolean getReuseAddress() { return call_method<"getReuseAddress", jboolean>(); }
	void setBroadcast(jboolean on) { return call_method<"setBroadcast", void>(on); }
	jboolean getBroadcast() { return call_method<"getBroadcast", jboolean>(); }
	void setTrafficClass(jint tc) { return call_method<"setTrafficClass", void>(tc); }
	jint getTrafficClass() { return call_method<"getTrafficClass", jint>(); }
	void close() { return call_method<"close", void>(); }
	jboolean isClosed() { return call_method<"isClosed", jboolean>(); }
	jni::ref<java::nio::channels::DatagramChannel> getChannel() { return call_method<"getChannel", jni::ref<java::nio::channels::DatagramChannel>>(); }
	static void setDatagramSocketImplFactory(jni::ref<java::net::DatagramSocketImplFactory> fac) { return call_static_method<"setDatagramSocketImplFactory", void>(fac); }

protected:

	DatagramSocket(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NET_DATAGRAMSOCKET
