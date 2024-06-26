// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/com/sun/jmx/snmp/SnmpDefinitions.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_DAEMON_SNMPINFORMHANDLER_FWD
#define SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_DAEMON_SNMPINFORMHANDLER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::jmx::snmp::daemon { class SnmpInformHandler; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::jmx::snmp::daemon::SnmpInformHandler>
{
	static constexpr fixed_string class_name = "com/sun/jmx/snmp/daemon/SnmpInformHandler";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::com::sun::jmx::snmp::SnmpDefinitions>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_DAEMON_SNMPINFORMHANDLER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_DAEMON_SNMPINFORMHANDLER)
#define SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_DAEMON_SNMPINFORMHANDLER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/jmx/snmp/SnmpVarBindList.h>
#include <scapix/java_api/com/sun/jmx/snmp/daemon/SnmpInformRequest.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::jmx::snmp::daemon::SnmpInformHandler : public jni::object_base<"com/sun/jmx/snmp/daemon/SnmpInformHandler",
	java::lang::Object,
	com::sun::jmx::snmp::SnmpDefinitions>
{
public:

	void processSnmpPollData(jni::ref<com::sun::jmx::snmp::daemon::SnmpInformRequest> p1, jint p2, jint p3, jni::ref<com::sun::jmx::snmp::SnmpVarBindList> p4) { return call_method<"processSnmpPollData", void>(p1, p2, p3, p4); }
	void processSnmpPollTimeout(jni::ref<com::sun::jmx::snmp::daemon::SnmpInformRequest> p1) { return call_method<"processSnmpPollTimeout", void>(p1); }
	void processSnmpInternalError(jni::ref<com::sun::jmx::snmp::daemon::SnmpInformRequest> p1, jni::ref<java::lang::String> p2) { return call_method<"processSnmpInternalError", void>(p1, p2); }

protected:

	SnmpInformHandler(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_DAEMON_SNMPINFORMHANDLER
