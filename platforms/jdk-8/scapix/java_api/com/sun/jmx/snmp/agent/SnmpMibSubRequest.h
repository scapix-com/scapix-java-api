// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/com/sun/jmx/snmp/agent/SnmpMibRequest.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_AGENT_SNMPMIBSUBREQUEST_FWD
#define SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_AGENT_SNMPMIBSUBREQUEST_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::jmx::snmp::agent { class SnmpMibSubRequest; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::jmx::snmp::agent::SnmpMibSubRequest>
{
	static constexpr fixed_string class_name = "com/sun/jmx/snmp/agent/SnmpMibSubRequest";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::com::sun::jmx::snmp::agent::SnmpMibRequest>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_AGENT_SNMPMIBSUBREQUEST_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_AGENT_SNMPMIBSUBREQUEST)
#define SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_AGENT_SNMPMIBSUBREQUEST

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/jmx/snmp/SnmpOid.h>
#include <scapix/java_api/com/sun/jmx/snmp/SnmpStatusException.h>
#include <scapix/java_api/com/sun/jmx/snmp/SnmpVarBind.h>
#include <scapix/java_api/java/util/Enumeration.h>
#include <scapix/java_api/java/util/Vector.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::jmx::snmp::agent::SnmpMibSubRequest : public jni::object_base<"com/sun/jmx/snmp/agent/SnmpMibSubRequest",
	java::lang::Object,
	com::sun::jmx::snmp::agent::SnmpMibRequest>
{
public:

	jni::ref<java::util::Enumeration> getElements() { return call_method<"getElements", jni::ref<java::util::Enumeration>>(); }
	jni::ref<java::util::Vector> getSubList() { return call_method<"getSubList", jni::ref<java::util::Vector>>(); }
	jni::ref<com::sun::jmx::snmp::SnmpOid> getEntryOid() { return call_method<"getEntryOid", jni::ref<com::sun::jmx::snmp::SnmpOid>>(); }
	jboolean isNewEntry() { return call_method<"isNewEntry", jboolean>(); }
	jni::ref<com::sun::jmx::snmp::SnmpVarBind> getRowStatusVarBind() { return call_method<"getRowStatusVarBind", jni::ref<com::sun::jmx::snmp::SnmpVarBind>>(); }
	void registerGetException(jni::ref<com::sun::jmx::snmp::SnmpVarBind> p1, jni::ref<com::sun::jmx::snmp::SnmpStatusException> p2) { return call_method<"registerGetException", void>(p1, p2); }
	void registerSetException(jni::ref<com::sun::jmx::snmp::SnmpVarBind> p1, jni::ref<com::sun::jmx::snmp::SnmpStatusException> p2) { return call_method<"registerSetException", void>(p1, p2); }
	void registerCheckException(jni::ref<com::sun::jmx::snmp::SnmpVarBind> p1, jni::ref<com::sun::jmx::snmp::SnmpStatusException> p2) { return call_method<"registerCheckException", void>(p1, p2); }

protected:

	SnmpMibSubRequest(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_AGENT_SNMPMIBSUBREQUEST
