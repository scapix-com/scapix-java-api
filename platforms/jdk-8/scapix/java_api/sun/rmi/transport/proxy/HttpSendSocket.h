// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/net/Socket.h>
#include <scapix/java_api/sun/rmi/transport/proxy/RMISocketInfo.h>

#ifndef SCAPIX_JAVA_API_SUN_RMI_TRANSPORT_PROXY_HTTPSENDSOCKET_FWD
#define SCAPIX_JAVA_API_SUN_RMI_TRANSPORT_PROXY_HTTPSENDSOCKET_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::rmi::transport::proxy { class HttpSendSocket; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::rmi::transport::proxy::HttpSendSocket>
{
	static constexpr fixed_string class_name = "sun/rmi/transport/proxy/HttpSendSocket";
	using base_classes = std::tuple<scapix::java_api::java::net::Socket, scapix::java_api::sun::rmi::transport::proxy::RMISocketInfo>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_RMI_TRANSPORT_PROXY_HTTPSENDSOCKET_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_RMI_TRANSPORT_PROXY_HTTPSENDSOCKET)
#define SCAPIX_JAVA_API_SUN_RMI_TRANSPORT_PROXY_HTTPSENDSOCKET

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/InputStream.h>
#include <scapix/java_api/java/io/OutputStream.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/net/InetAddress.h>
#include <scapix/java_api/java/net/URL.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::rmi::transport::proxy::HttpSendSocket : public jni::object_base<"sun/rmi/transport/proxy/HttpSendSocket",
	java::net::Socket,
	sun::rmi::transport::proxy::RMISocketInfo>
{
public:

	static jni::ref<sun::rmi::transport::proxy::HttpSendSocket> new_object(jni::ref<java::lang::String> p1, jint p2, jni::ref<java::net::URL> p3) { return base_::new_object(p1, p2, p3); }
	static jni::ref<sun::rmi::transport::proxy::HttpSendSocket> new_object(jni::ref<java::lang::String> p1, jint p2) { return base_::new_object(p1, p2); }
	static jni::ref<sun::rmi::transport::proxy::HttpSendSocket> new_object(jni::ref<java::net::InetAddress> p1, jint p2) { return base_::new_object(p1, p2); }
	jboolean isReusable() { return call_method<"isReusable", jboolean>(); }
	jni::ref<java::io::OutputStream> writeNotify() { return call_method<"writeNotify", jni::ref<java::io::OutputStream>>(); }
	jni::ref<java::io::InputStream> readNotify() { return call_method<"readNotify", jni::ref<java::io::InputStream>>(); }
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
	void setSoTimeout(jint p1) { return call_method<"setSoTimeout", void>(p1); }
	jint getSoTimeout() { return call_method<"getSoTimeout", jint>(); }
	void close() { return call_method<"close", void>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	HttpSendSocket(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_RMI_TRANSPORT_PROXY_HTTPSENDSOCKET
