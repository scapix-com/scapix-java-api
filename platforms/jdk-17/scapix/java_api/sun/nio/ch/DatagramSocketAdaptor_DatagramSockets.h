// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_NIO_CH_DATAGRAMSOCKETADAPTOR_DATAGRAMSOCKETS_FWD
#define SCAPIX_JAVA_API_SUN_NIO_CH_DATAGRAMSOCKETADAPTOR_DATAGRAMSOCKETS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::nio::ch { class DatagramSocketAdaptor_DatagramSockets; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::nio::ch::DatagramSocketAdaptor_DatagramSockets>
{
	static constexpr fixed_string class_name = "sun/nio/ch/DatagramSocketAdaptor$DatagramSockets";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_CH_DATAGRAMSOCKETADAPTOR_DATAGRAMSOCKETS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_NIO_CH_DATAGRAMSOCKETADAPTOR_DATAGRAMSOCKETS)
#define SCAPIX_JAVA_API_SUN_NIO_CH_DATAGRAMSOCKETADAPTOR_DATAGRAMSOCKETS

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::nio::ch::DatagramSocketAdaptor_DatagramSockets : public jni::object_base<"sun/nio/ch/DatagramSocketAdaptor$DatagramSockets",
	java::lang::Object>
{
public:


protected:

	DatagramSocketAdaptor_DatagramSockets(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_CH_DATAGRAMSOCKETADAPTOR_DATAGRAMSOCKETS
