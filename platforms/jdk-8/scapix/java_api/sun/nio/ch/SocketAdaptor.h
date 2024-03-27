// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/net/Socket.h>

#ifndef SCAPIX_JAVA_API_SUN_NIO_CH_SOCKETADAPTOR_FWD
#define SCAPIX_JAVA_API_SUN_NIO_CH_SOCKETADAPTOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::nio::ch { class SocketAdaptor; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::nio::ch::SocketAdaptor>
{
	static constexpr fixed_string class_name = "sun/nio/ch/SocketAdaptor";
	using base_classes = std::tuple<scapix::java_api::java::net::Socket>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_CH_SOCKETADAPTOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_NIO_CH_SOCKETADAPTOR)
#define SCAPIX_JAVA_API_SUN_NIO_CH_SOCKETADAPTOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/InputStream.h>
#include <scapix/java_api/java/io/OutputStream.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/net/InetAddress.h>
#include <scapix/java_api/java/net/SocketAddress.h>
#include <scapix/java_api/java/nio/channels/SocketChannel.h>
#include <scapix/java_api/sun/nio/ch/SocketChannelImpl.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::nio::ch::SocketAdaptor : public jni::object_base<"sun/nio/ch/SocketAdaptor",
	java::net::Socket>
{
public:

	static jni::ref<java::net::Socket> create(jni::ref<sun::nio::ch::SocketChannelImpl> p1) { return call_static_method<"create", jni::ref<java::net::Socket>>(p1); }
	jni::ref<java::nio::channels::SocketChannel> getChannel() { return call_method<"getChannel", jni::ref<java::nio::channels::SocketChannel>>(); }
	void connect(jni::ref<java::net::SocketAddress> p1) { return call_method<"connect", void>(p1); }
	void connect(jni::ref<java::net::SocketAddress> p1, jint p2) { return call_method<"connect", void>(p1, p2); }
	void bind(jni::ref<java::net::SocketAddress> p1) { return call_method<"bind", void>(p1); }
	jni::ref<java::net::InetAddress> getInetAddress() { return call_method<"getInetAddress", jni::ref<java::net::InetAddress>>(); }
	jni::ref<java::net::InetAddress> getLocalAddress() { return call_method<"getLocalAddress", jni::ref<java::net::InetAddress>>(); }
	jint getPort() { return call_method<"getPort", jint>(); }
	jint getLocalPort() { return call_method<"getLocalPort", jint>(); }
	jni::ref<java::io::InputStream> getInputStream() { return call_method<"getInputStream", jni::ref<java::io::InputStream>>(); }
	jni::ref<java::io::OutputStream> getOutputStream() { return call_method<"getOutputStream", jni::ref<java::io::OutputStream>>(); }
	void setTcpNoDelay(jboolean p1) { return call_method<"setTcpNoDelay", void>(p1); }
	jboolean getTcpNoDelay() { return call_method<"getTcpNoDelay", jboolean>(); }
	void setSoLinger(jboolean p1, jint p2) { return call_method<"setSoLinger", void>(p1, p2); }
	jint getSoLinger() { return call_method<"getSoLinger", jint>(); }
	void sendUrgentData(jint p1) { return call_method<"sendUrgentData", void>(p1); }
	void setOOBInline(jboolean p1) { return call_method<"setOOBInline", void>(p1); }
	jboolean getOOBInline() { return call_method<"getOOBInline", jboolean>(); }
	void setSoTimeout(jint p1) { return call_method<"setSoTimeout", void>(p1); }
	jint getSoTimeout() { return call_method<"getSoTimeout", jint>(); }
	void setSendBufferSize(jint p1) { return call_method<"setSendBufferSize", void>(p1); }
	jint getSendBufferSize() { return call_method<"getSendBufferSize", jint>(); }
	void setReceiveBufferSize(jint p1) { return call_method<"setReceiveBufferSize", void>(p1); }
	jint getReceiveBufferSize() { return call_method<"getReceiveBufferSize", jint>(); }
	void setKeepAlive(jboolean p1) { return call_method<"setKeepAlive", void>(p1); }
	jboolean getKeepAlive() { return call_method<"getKeepAlive", jboolean>(); }
	void setTrafficClass(jint p1) { return call_method<"setTrafficClass", void>(p1); }
	jint getTrafficClass() { return call_method<"getTrafficClass", jint>(); }
	void setReuseAddress(jboolean p1) { return call_method<"setReuseAddress", void>(p1); }
	jboolean getReuseAddress() { return call_method<"getReuseAddress", jboolean>(); }
	void close() { return call_method<"close", void>(); }
	void shutdownInput() { return call_method<"shutdownInput", void>(); }
	void shutdownOutput() { return call_method<"shutdownOutput", void>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jboolean isConnected() { return call_method<"isConnected", jboolean>(); }
	jboolean isBound() { return call_method<"isBound", jboolean>(); }
	jboolean isClosed() { return call_method<"isClosed", jboolean>(); }
	jboolean isInputShutdown() { return call_method<"isInputShutdown", jboolean>(); }
	jboolean isOutputShutdown() { return call_method<"isOutputShutdown", jboolean>(); }

protected:

	SocketAdaptor(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_CH_SOCKETADAPTOR
