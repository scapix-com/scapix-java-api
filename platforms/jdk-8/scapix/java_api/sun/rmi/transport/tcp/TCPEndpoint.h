// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/sun/rmi/transport/Endpoint.h>

#ifndef SCAPIX_JAVA_API_SUN_RMI_TRANSPORT_TCP_TCPENDPOINT_FWD
#define SCAPIX_JAVA_API_SUN_RMI_TRANSPORT_TCP_TCPENDPOINT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::rmi::transport::tcp { class TCPEndpoint; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::rmi::transport::tcp::TCPEndpoint>
{
	static constexpr fixed_string class_name = "sun/rmi/transport/tcp/TCPEndpoint";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::sun::rmi::transport::Endpoint>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_RMI_TRANSPORT_TCP_TCPENDPOINT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_RMI_TRANSPORT_TCP_TCPENDPOINT)
#define SCAPIX_JAVA_API_SUN_RMI_TRANSPORT_TCP_TCPENDPOINT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/DataInput.h>
#include <scapix/java_api/java/io/DataOutput.h>
#include <scapix/java_api/java/io/ObjectInput.h>
#include <scapix/java_api/java/io/ObjectOutput.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/rmi/server/RMIClientSocketFactory.h>
#include <scapix/java_api/java/rmi/server/RMIServerSocketFactory.h>
#include <scapix/java_api/sun/rmi/transport/Channel.h>
#include <scapix/java_api/sun/rmi/transport/Target.h>
#include <scapix/java_api/sun/rmi/transport/Transport.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::rmi::transport::tcp::TCPEndpoint : public jni::object_base<"sun/rmi/transport/tcp/TCPEndpoint",
	java::lang::Object,
	sun::rmi::transport::Endpoint>
{
public:

	static jni::ref<sun::rmi::transport::tcp::TCPEndpoint> new_object(jni::ref<java::lang::String> p1, jint p2) { return base_::new_object(p1, p2); }
	static jni::ref<sun::rmi::transport::tcp::TCPEndpoint> new_object(jni::ref<java::lang::String> p1, jint p2, jni::ref<java::rmi::server::RMIClientSocketFactory> p3, jni::ref<java::rmi::server::RMIServerSocketFactory> p4) { return base_::new_object(p1, p2, p3, p4); }
	static jni::ref<sun::rmi::transport::tcp::TCPEndpoint> getLocalEndpoint(jint p1) { return call_static_method<"getLocalEndpoint", jni::ref<sun::rmi::transport::tcp::TCPEndpoint>>(p1); }
	static jni::ref<sun::rmi::transport::tcp::TCPEndpoint> getLocalEndpoint(jint p1, jni::ref<java::rmi::server::RMIClientSocketFactory> p2, jni::ref<java::rmi::server::RMIServerSocketFactory> p3) { return call_static_method<"getLocalEndpoint", jni::ref<sun::rmi::transport::tcp::TCPEndpoint>>(p1, p2, p3); }
	jni::ref<sun::rmi::transport::Transport> getOutboundTransport() { return call_method<"getOutboundTransport", jni::ref<sun::rmi::transport::Transport>>(); }
	static void shedConnectionCaches() { return call_static_method<"shedConnectionCaches", void>(); }
	void exportObject(jni::ref<sun::rmi::transport::Target> p1) { return call_method<"exportObject", void>(p1); }
	jni::ref<sun::rmi::transport::Channel> getChannel() { return call_method<"getChannel", jni::ref<sun::rmi::transport::Channel>>(); }
	jni::ref<java::lang::String> getHost() { return call_method<"getHost", jni::ref<java::lang::String>>(); }
	jint getPort() { return call_method<"getPort", jint>(); }
	jint getListenPort() { return call_method<"getListenPort", jint>(); }
	jni::ref<sun::rmi::transport::Transport> getInboundTransport() { return call_method<"getInboundTransport", jni::ref<sun::rmi::transport::Transport>>(); }
	jni::ref<java::rmi::server::RMIClientSocketFactory> getClientSocketFactory() { return call_method<"getClientSocketFactory", jni::ref<java::rmi::server::RMIClientSocketFactory>>(); }
	jni::ref<java::rmi::server::RMIServerSocketFactory> getServerSocketFactory() { return call_method<"getServerSocketFactory", jni::ref<java::rmi::server::RMIServerSocketFactory>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	void write(jni::ref<java::io::ObjectOutput> p1) { return call_method<"write", void>(p1); }
	static jni::ref<sun::rmi::transport::tcp::TCPEndpoint> read(jni::ref<java::io::ObjectInput> p1) { return call_static_method<"read", jni::ref<sun::rmi::transport::tcp::TCPEndpoint>>(p1); }
	void writeHostPortFormat(jni::ref<java::io::DataOutput> p1) { return call_method<"writeHostPortFormat", void>(p1); }
	static jni::ref<sun::rmi::transport::tcp::TCPEndpoint> readHostPortFormat(jni::ref<java::io::DataInput> p1) { return call_static_method<"readHostPortFormat", jni::ref<sun::rmi::transport::tcp::TCPEndpoint>>(p1); }

protected:

	TCPEndpoint(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_RMI_TRANSPORT_TCP_TCPENDPOINT