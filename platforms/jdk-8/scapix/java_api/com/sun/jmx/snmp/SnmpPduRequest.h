// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/jmx/snmp/SnmpPduPacket.h>
#include <scapix/java_api/com/sun/jmx/snmp/SnmpPduRequestType.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_SNMPPDUREQUEST_FWD
#define SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_SNMPPDUREQUEST_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::jmx::snmp { class SnmpPduRequest; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::jmx::snmp::SnmpPduRequest>
{
	static constexpr fixed_string class_name = "com/sun/jmx/snmp/SnmpPduRequest";
	using base_classes = std::tuple<scapix::java_api::com::sun::jmx::snmp::SnmpPduPacket, scapix::java_api::com::sun::jmx::snmp::SnmpPduRequestType>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_SNMPPDUREQUEST_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_SNMPPDUREQUEST)
#define SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_SNMPPDUREQUEST

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/jmx/snmp/SnmpPdu.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::jmx::snmp::SnmpPduRequest : public jni::object_base<"com/sun/jmx/snmp/SnmpPduRequest",
	com::sun::jmx::snmp::SnmpPduPacket,
	com::sun::jmx::snmp::SnmpPduRequestType>
{
public:

	jint errorStatus() { return get_field<"errorStatus", jint>(); }
	void errorStatus(jint v) { set_field<"errorStatus", jint>(v); }
	jint errorIndex() { return get_field<"errorIndex", jint>(); }
	void errorIndex(jint v) { set_field<"errorIndex", jint>(v); }

	static jni::ref<com::sun::jmx::snmp::SnmpPduRequest> new_object() { return base_::new_object(); }
	void setErrorIndex(jint p1) { return call_method<"setErrorIndex", void>(p1); }
	void setErrorStatus(jint p1) { return call_method<"setErrorStatus", void>(p1); }
	jint getErrorIndex() { return call_method<"getErrorIndex", jint>(); }
	jint getErrorStatus() { return call_method<"getErrorStatus", jint>(); }
	jni::ref<com::sun::jmx::snmp::SnmpPdu> getResponsePdu() { return call_method<"getResponsePdu", jni::ref<com::sun::jmx::snmp::SnmpPdu>>(); }

protected:

	SnmpPduRequest(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_SNMPPDUREQUEST