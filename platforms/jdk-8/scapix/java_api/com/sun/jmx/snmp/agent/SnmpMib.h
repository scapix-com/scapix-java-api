// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/jmx/snmp/agent/SnmpMibAgent.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_AGENT_SNMPMIB_FWD
#define SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_AGENT_SNMPMIB_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::jmx::snmp::agent { class SnmpMib; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::jmx::snmp::agent::SnmpMib>
{
	static constexpr fixed_string class_name = "com/sun/jmx/snmp/agent/SnmpMib";
	using base_classes = std::tuple<scapix::java_api::com::sun::jmx::snmp::agent::SnmpMibAgent, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_AGENT_SNMPMIB_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_AGENT_SNMPMIB)
#define SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_AGENT_SNMPMIB

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/jmx/snmp/agent/SnmpMibRequest.h>
#include <scapix/java_api/com/sun/jmx/snmp/agent/SnmpMibTable.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::jmx::snmp::agent::SnmpMib : public jni::object_base<"com/sun/jmx/snmp/agent/SnmpMib",
	com::sun::jmx::snmp::agent::SnmpMibAgent,
	java::io::Serializable>
{
public:

	static jni::ref<com::sun::jmx::snmp::agent::SnmpMib> new_object() { return base_::new_object(); }
	void registerTableMeta(jni::ref<java::lang::String> p1, jni::ref<com::sun::jmx::snmp::agent::SnmpMibTable> p2) { return call_method<"registerTableMeta", void>(p1, p2); }
	jni::ref<com::sun::jmx::snmp::agent::SnmpMibTable> getRegisteredTableMeta(jni::ref<java::lang::String> p1) { return call_method<"getRegisteredTableMeta", jni::ref<com::sun::jmx::snmp::agent::SnmpMibTable>>(p1); }
	void get(jni::ref<com::sun::jmx::snmp::agent::SnmpMibRequest> p1) { return call_method<"get", void>(p1); }
	void set(jni::ref<com::sun::jmx::snmp::agent::SnmpMibRequest> p1) { return call_method<"set", void>(p1); }
	void check(jni::ref<com::sun::jmx::snmp::agent::SnmpMibRequest> p1) { return call_method<"check", void>(p1); }
	void getNext(jni::ref<com::sun::jmx::snmp::agent::SnmpMibRequest> p1) { return call_method<"getNext", void>(p1); }
	void getBulk(jni::ref<com::sun::jmx::snmp::agent::SnmpMibRequest> p1, jint p2, jint p3) { return call_method<"getBulk", void>(p1, p2, p3); }
	jni::ref<jni::array<jlong>> getRootOid() { return call_method<"getRootOid", jni::ref<jni::array<jlong>>>(); }

protected:

	SnmpMib(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_AGENT_SNMPMIB