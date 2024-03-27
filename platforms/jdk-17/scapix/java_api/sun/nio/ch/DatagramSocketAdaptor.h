// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/net/MulticastSocket.h>

#ifndef SCAPIX_JAVA_API_SUN_NIO_CH_DATAGRAMSOCKETADAPTOR_FWD
#define SCAPIX_JAVA_API_SUN_NIO_CH_DATAGRAMSOCKETADAPTOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::nio::ch { class DatagramSocketAdaptor; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::nio::ch::DatagramSocketAdaptor>
{
	static constexpr fixed_string class_name = "sun/nio/ch/DatagramSocketAdaptor";
	using base_classes = std::tuple<scapix::java_api::java::net::MulticastSocket>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_CH_DATAGRAMSOCKETADAPTOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_NIO_CH_DATAGRAMSOCKETADAPTOR)
#define SCAPIX_JAVA_API_SUN_NIO_CH_DATAGRAMSOCKETADAPTOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/net/DatagramPacket.h>
#include <scapix/java_api/java/net/DatagramSocket.h>
#include <scapix/java_api/java/net/InetAddress.h>
#include <scapix/java_api/java/net/NetworkInterface.h>
#include <scapix/java_api/java/net/SocketAddress.h>
#include <scapix/java_api/java/net/SocketOption.h>
#include <scapix/java_api/java/nio/channels/DatagramChannel.h>
#include <scapix/java_api/java/util/Set.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::nio::ch::DatagramSocketAdaptor : public jni::object_base<"sun/nio/ch/DatagramSocketAdaptor",
	java::net::MulticastSocket>
{
public:

	void bind(jni::ref<java::net::SocketAddress> local) { return call_method<"bind", void>(local); }
	void connect(jni::ref<java::net::InetAddress> address, jint port) { return call_method<"connect", void>(address, port); }
	void connect(jni::ref<java::net::SocketAddress> remote) { return call_method<"connect", void>(remote); }
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
	jni::ref<java::net::DatagramSocket> setOption(jni::ref<java::net::SocketOption> name, jni::ref<java::lang::Object> value) { return call_method<"setOption", jni::ref<java::net::DatagramSocket>>(name, value); }
	jni::ref<java::lang::Object> getOption(jni::ref<java::net::SocketOption> name) { return call_method<"getOption", jni::ref<java::lang::Object>>(name); }
	jni::ref<java::util::Set> supportedOptions() { return call_method<"supportedOptions", jni::ref<java::util::Set>>(); }
	void setTTL(jbyte ttl) { return call_method<"setTTL", void>(ttl); }
	void setTimeToLive(jint ttl) { return call_method<"setTimeToLive", void>(ttl); }
	jbyte getTTL() { return call_method<"getTTL", jbyte>(); }
	jint getTimeToLive() { return call_method<"getTimeToLive", jint>(); }
	void joinGroup(jni::ref<java::net::InetAddress> group) { return call_method<"joinGroup", void>(group); }
	void leaveGroup(jni::ref<java::net::InetAddress> group) { return call_method<"leaveGroup", void>(group); }
	void joinGroup(jni::ref<java::net::SocketAddress> mcastaddr, jni::ref<java::net::NetworkInterface> netIf) { return call_method<"joinGroup", void>(mcastaddr, netIf); }
	void leaveGroup(jni::ref<java::net::SocketAddress> mcastaddr, jni::ref<java::net::NetworkInterface> netIf) { return call_method<"leaveGroup", void>(mcastaddr, netIf); }
	void setInterface(jni::ref<java::net::InetAddress> inf) { return call_method<"setInterface", void>(inf); }
	jni::ref<java::net::InetAddress> getInterface() { return call_method<"getInterface", jni::ref<java::net::InetAddress>>(); }
	void setNetworkInterface(jni::ref<java::net::NetworkInterface> netIf) { return call_method<"setNetworkInterface", void>(netIf); }
	jni::ref<java::net::NetworkInterface> getNetworkInterface() { return call_method<"getNetworkInterface", jni::ref<java::net::NetworkInterface>>(); }
	void setLoopbackMode(jboolean disable) { return call_method<"setLoopbackMode", void>(disable); }
	jboolean getLoopbackMode() { return call_method<"getLoopbackMode", jboolean>(); }
	void send(jni::ref<java::net::DatagramPacket> p, jbyte ttl) { return call_method<"send", void>(p, ttl); }

protected:

	DatagramSocketAdaptor(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_CH_DATAGRAMSOCKETADAPTOR