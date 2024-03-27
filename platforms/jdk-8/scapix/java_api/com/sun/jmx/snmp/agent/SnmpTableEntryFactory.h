// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/com/sun/jmx/snmp/agent/SnmpTableCallbackHandler.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_AGENT_SNMPTABLEENTRYFACTORY_FWD
#define SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_AGENT_SNMPTABLEENTRYFACTORY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::jmx::snmp::agent { class SnmpTableEntryFactory; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::jmx::snmp::agent::SnmpTableEntryFactory>
{
	static constexpr fixed_string class_name = "com/sun/jmx/snmp/agent/SnmpTableEntryFactory";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::com::sun::jmx::snmp::agent::SnmpTableCallbackHandler>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_AGENT_SNMPTABLEENTRYFACTORY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_AGENT_SNMPTABLEENTRYFACTORY)
#define SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_AGENT_SNMPTABLEENTRYFACTORY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/jmx/snmp/SnmpOid.h>
#include <scapix/java_api/com/sun/jmx/snmp/agent/SnmpMibSubRequest.h>
#include <scapix/java_api/com/sun/jmx/snmp/agent/SnmpMibTable.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::jmx::snmp::agent::SnmpTableEntryFactory : public jni::object_base<"com/sun/jmx/snmp/agent/SnmpTableEntryFactory",
	java::lang::Object,
	com::sun::jmx::snmp::agent::SnmpTableCallbackHandler>
{
public:

	void createNewEntry(jni::ref<com::sun::jmx::snmp::agent::SnmpMibSubRequest> p1, jni::ref<com::sun::jmx::snmp::SnmpOid> p2, jint p3, jni::ref<com::sun::jmx::snmp::agent::SnmpMibTable> p4) { return call_method<"createNewEntry", void>(p1, p2, p3, p4); }

protected:

	SnmpTableEntryFactory(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_AGENT_SNMPTABLEENTRYFACTORY
