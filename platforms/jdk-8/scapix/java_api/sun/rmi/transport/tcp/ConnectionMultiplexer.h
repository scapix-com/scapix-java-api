// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_RMI_TRANSPORT_TCP_CONNECTIONMULTIPLEXER_FWD
#define SCAPIX_JAVA_API_SUN_RMI_TRANSPORT_TCP_CONNECTIONMULTIPLEXER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::rmi::transport::tcp { class ConnectionMultiplexer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::rmi::transport::tcp::ConnectionMultiplexer>
{
	static constexpr fixed_string class_name = "sun/rmi/transport/tcp/ConnectionMultiplexer";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_RMI_TRANSPORT_TCP_CONNECTIONMULTIPLEXER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_RMI_TRANSPORT_TCP_CONNECTIONMULTIPLEXER)
#define SCAPIX_JAVA_API_SUN_RMI_TRANSPORT_TCP_CONNECTIONMULTIPLEXER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/InputStream.h>
#include <scapix/java_api/java/io/OutputStream.h>
#include <scapix/java_api/sun/rmi/transport/tcp/TCPChannel.h>
#include <scapix/java_api/sun/rmi/transport/tcp/TCPConnection.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::rmi::transport::tcp::ConnectionMultiplexer : public jni::object_base<"sun/rmi/transport/tcp/ConnectionMultiplexer",
	java::lang::Object>
{
public:

	static jni::ref<sun::rmi::transport::tcp::ConnectionMultiplexer> new_object(jni::ref<sun::rmi::transport::tcp::TCPChannel> p1, jni::ref<java::io::InputStream> p2, jni::ref<java::io::OutputStream> p3, jboolean p4) { return base_::new_object(p1, p2, p3, p4); }
	void run() { return call_method<"run", void>(); }
	jni::ref<sun::rmi::transport::tcp::TCPConnection> openConnection() { return call_method<"openConnection", jni::ref<sun::rmi::transport::tcp::TCPConnection>>(); }
	void shutDown() { return call_method<"shutDown", void>(); }

protected:

	ConnectionMultiplexer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_RMI_TRANSPORT_TCP_CONNECTIONMULTIPLEXER
