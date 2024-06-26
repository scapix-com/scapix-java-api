// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/io/OutputStream.h>

#ifndef SCAPIX_JAVA_API_SUN_RMI_TRANSPORT_TCP_MULTIPLEXOUTPUTSTREAM_FWD
#define SCAPIX_JAVA_API_SUN_RMI_TRANSPORT_TCP_MULTIPLEXOUTPUTSTREAM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::rmi::transport::tcp { class MultiplexOutputStream; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::rmi::transport::tcp::MultiplexOutputStream>
{
	static constexpr fixed_string class_name = "sun/rmi/transport/tcp/MultiplexOutputStream";
	using base_classes = std::tuple<scapix::java_api::java::io::OutputStream>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_RMI_TRANSPORT_TCP_MULTIPLEXOUTPUTSTREAM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_RMI_TRANSPORT_TCP_MULTIPLEXOUTPUTSTREAM)
#define SCAPIX_JAVA_API_SUN_RMI_TRANSPORT_TCP_MULTIPLEXOUTPUTSTREAM

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::rmi::transport::tcp::MultiplexOutputStream : public jni::object_base<"sun/rmi/transport/tcp/MultiplexOutputStream",
	java::io::OutputStream>
{
public:

	void write(jint p1) { return call_method<"write", void>(p1); }
	void write(jni::ref<jni::array<jbyte>> p1, jint p2, jint p3) { return call_method<"write", void>(p1, p2, p3); }
	void flush() { return call_method<"flush", void>(); }
	void close() { return call_method<"close", void>(); }

protected:

	MultiplexOutputStream(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_RMI_TRANSPORT_TCP_MULTIPLEXOUTPUTSTREAM
