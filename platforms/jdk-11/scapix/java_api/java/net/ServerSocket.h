// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Closeable.h>

#ifndef SCAPIX_JAVA_API_JAVA_NET_SERVERSOCKET_FWD
#define SCAPIX_JAVA_API_JAVA_NET_SERVERSOCKET_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::net { class ServerSocket; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::net::ServerSocket>
{
	static constexpr fixed_string class_name = "java/net/ServerSocket";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::io::Closeable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NET_SERVERSOCKET_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_NET_SERVERSOCKET)
#define SCAPIX_JAVA_API_JAVA_NET_SERVERSOCKET

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/net/InetAddress.h>
#include <scapix/java_api/java/net/Socket.h>
#include <scapix/java_api/java/net/SocketAddress.h>
#include <scapix/java_api/java/net/SocketImplFactory.h>
#include <scapix/java_api/java/net/SocketOption.h>
#include <scapix/java_api/java/nio/channels/ServerSocketChannel.h>
#include <scapix/java_api/java/util/Set.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::net::ServerSocket : public jni::object_base<"java/net/ServerSocket",
	java::lang::Object,
	java::io::Closeable>
{
public:

	static jni::ref<java::net::ServerSocket> new_object() { return base_::new_object(); }
	static jni::ref<java::net::ServerSocket> new_object(jint port) { return base_::new_object(port); }
	static jni::ref<java::net::ServerSocket> new_object(jint port, jint backlog) { return base_::new_object(port, backlog); }
	static jni::ref<java::net::ServerSocket> new_object(jint port, jint backlog, jni::ref<java::net::InetAddress> bindAddr) { return base_::new_object(port, backlog, bindAddr); }
	void bind(jni::ref<java::net::SocketAddress> endpoint) { return call_method<"bind", void>(endpoint); }
	void bind(jni::ref<java::net::SocketAddress> endpoint, jint backlog) { return call_method<"bind", void>(endpoint, backlog); }
	jni::ref<java::net::InetAddress> getInetAddress() { return call_method<"getInetAddress", jni::ref<java::net::InetAddress>>(); }
	jint getLocalPort() { return call_method<"getLocalPort", jint>(); }
	jni::ref<java::net::SocketAddress> getLocalSocketAddress() { return call_method<"getLocalSocketAddress", jni::ref<java::net::SocketAddress>>(); }
	jni::ref<java::net::Socket> accept() { return call_method<"accept", jni::ref<java::net::Socket>>(); }
	void close() { return call_method<"close", void>(); }
	jni::ref<java::nio::channels::ServerSocketChannel> getChannel() { return call_method<"getChannel", jni::ref<java::nio::channels::ServerSocketChannel>>(); }
	jboolean isBound() { return call_method<"isBound", jboolean>(); }
	jboolean isClosed() { return call_method<"isClosed", jboolean>(); }
	void setSoTimeout(jint timeout) { return call_method<"setSoTimeout", void>(timeout); }
	jint getSoTimeout() { return call_method<"getSoTimeout", jint>(); }
	void setReuseAddress(jboolean on) { return call_method<"setReuseAddress", void>(on); }
	jboolean getReuseAddress() { return call_method<"getReuseAddress", jboolean>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	static void setSocketFactory(jni::ref<java::net::SocketImplFactory> fac) { return call_static_method<"setSocketFactory", void>(fac); }
	void setReceiveBufferSize(jint size) { return call_method<"setReceiveBufferSize", void>(size); }
	jint getReceiveBufferSize() { return call_method<"getReceiveBufferSize", jint>(); }
	void setPerformancePreferences(jint connectionTime, jint latency, jint bandwidth) { return call_method<"setPerformancePreferences", void>(connectionTime, latency, bandwidth); }
	jni::ref<java::net::ServerSocket> setOption(jni::ref<java::net::SocketOption> name, jni::ref<java::lang::Object> value) { return call_method<"setOption", jni::ref<java::net::ServerSocket>>(name, value); }
	jni::ref<java::lang::Object> getOption(jni::ref<java::net::SocketOption> name) { return call_method<"getOption", jni::ref<java::lang::Object>>(name); }
	jni::ref<java::util::Set> supportedOptions() { return call_method<"supportedOptions", jni::ref<java::util::Set>>(); }

protected:

	ServerSocket(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NET_SERVERSOCKET