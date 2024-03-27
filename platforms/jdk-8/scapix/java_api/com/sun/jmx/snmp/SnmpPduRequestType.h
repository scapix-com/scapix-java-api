// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/com/sun/jmx/snmp/SnmpAckPdu.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_SNMPPDUREQUESTTYPE_FWD
#define SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_SNMPPDUREQUESTTYPE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::jmx::snmp { class SnmpPduRequestType; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::jmx::snmp::SnmpPduRequestType>
{
	static constexpr fixed_string class_name = "com/sun/jmx/snmp/SnmpPduRequestType";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::com::sun::jmx::snmp::SnmpAckPdu>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_SNMPPDUREQUESTTYPE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_SNMPPDUREQUESTTYPE)
#define SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_SNMPPDUREQUESTTYPE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::jmx::snmp::SnmpPduRequestType : public jni::object_base<"com/sun/jmx/snmp/SnmpPduRequestType",
	java::lang::Object,
	com::sun::jmx::snmp::SnmpAckPdu>
{
public:

	void setErrorIndex(jint p1) { return call_method<"setErrorIndex", void>(p1); }
	void setErrorStatus(jint p1) { return call_method<"setErrorStatus", void>(p1); }
	jint getErrorIndex() { return call_method<"getErrorIndex", jint>(); }
	jint getErrorStatus() { return call_method<"getErrorStatus", jint>(); }

protected:

	SnmpPduRequestType(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_SNMPPDUREQUESTTYPE