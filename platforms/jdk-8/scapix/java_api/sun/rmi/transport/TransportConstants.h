// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_RMI_TRANSPORT_TRANSPORTCONSTANTS_FWD
#define SCAPIX_JAVA_API_SUN_RMI_TRANSPORT_TRANSPORTCONSTANTS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::rmi::transport { class TransportConstants; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::rmi::transport::TransportConstants>
{
	static constexpr fixed_string class_name = "sun/rmi/transport/TransportConstants";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_RMI_TRANSPORT_TRANSPORTCONSTANTS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_RMI_TRANSPORT_TRANSPORTCONSTANTS)
#define SCAPIX_JAVA_API_SUN_RMI_TRANSPORT_TRANSPORTCONSTANTS

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::rmi::transport::TransportConstants : public jni::object_base<"sun/rmi/transport/TransportConstants",
	java::lang::Object>
{
public:

	static jint Magic() { return get_static_field<"Magic", jint>(); }
	static jshort Version() { return get_static_field<"Version", jshort>(); }
	static jbyte StreamProtocol() { return get_static_field<"StreamProtocol", jbyte>(); }
	static jbyte SingleOpProtocol() { return get_static_field<"SingleOpProtocol", jbyte>(); }
	static jbyte MultiplexProtocol() { return get_static_field<"MultiplexProtocol", jbyte>(); }
	static jbyte ProtocolAck() { return get_static_field<"ProtocolAck", jbyte>(); }
	static jbyte ProtocolNack() { return get_static_field<"ProtocolNack", jbyte>(); }
	static jbyte Call() { return get_static_field<"Call", jbyte>(); }
	static jbyte Return() { return get_static_field<"Return", jbyte>(); }
	static jbyte Ping() { return get_static_field<"Ping", jbyte>(); }
	static jbyte PingAck() { return get_static_field<"PingAck", jbyte>(); }
	static jbyte DGCAck() { return get_static_field<"DGCAck", jbyte>(); }
	static jbyte NormalReturn() { return get_static_field<"NormalReturn", jbyte>(); }
	static jbyte ExceptionalReturn() { return get_static_field<"ExceptionalReturn", jbyte>(); }

	static jni::ref<sun::rmi::transport::TransportConstants> new_object() { return base_::new_object(); }

protected:

	TransportConstants(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_RMI_TRANSPORT_TRANSPORTCONSTANTS
