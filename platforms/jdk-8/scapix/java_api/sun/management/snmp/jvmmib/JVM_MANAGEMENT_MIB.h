// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/jmx/snmp/agent/SnmpMib.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_SUN_MANAGEMENT_SNMP_JVMMIB_JVM_MANAGEMENT_MIB_FWD
#define SCAPIX_JAVA_API_SUN_MANAGEMENT_SNMP_JVMMIB_JVM_MANAGEMENT_MIB_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::management::snmp::jvmmib { class JVM_MANAGEMENT_MIB; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::management::snmp::jvmmib::JVM_MANAGEMENT_MIB>
{
	static constexpr fixed_string class_name = "sun/management/snmp/jvmmib/JVM_MANAGEMENT_MIB";
	using base_classes = std::tuple<scapix::java_api::com::sun::jmx::snmp::agent::SnmpMib, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MANAGEMENT_SNMP_JVMMIB_JVM_MANAGEMENT_MIB_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_MANAGEMENT_SNMP_JVMMIB_JVM_MANAGEMENT_MIB)
#define SCAPIX_JAVA_API_SUN_MANAGEMENT_SNMP_JVMMIB_JVM_MANAGEMENT_MIB

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/jmx/snmp/agent/SnmpMibTable.h>
#include <scapix/java_api/com/sun/jmx/snmp/agent/SnmpStandardObjectServer.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/management/MBeanServer.h>
#include <scapix/java_api/javax/management/ObjectName.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::management::snmp::jvmmib::JVM_MANAGEMENT_MIB : public jni::object_base<"sun/management/snmp/jvmmib/JVM_MANAGEMENT_MIB",
	com::sun::jmx::snmp::agent::SnmpMib,
	java::io::Serializable>
{
public:

	static jni::ref<sun::management::snmp::jvmmib::JVM_MANAGEMENT_MIB> new_object() { return base_::new_object(); }
	void init() { return call_method<"init", void>(); }
	jni::ref<javax::management::ObjectName> preRegister(jni::ref<javax::management::MBeanServer> p1, jni::ref<javax::management::ObjectName> p2) { return call_method<"preRegister", jni::ref<javax::management::ObjectName>>(p1, p2); }
	void populate(jni::ref<javax::management::MBeanServer> p1, jni::ref<javax::management::ObjectName> p2) { return call_method<"populate", void>(p1, p2); }
	void registerTableMeta(jni::ref<java::lang::String> p1, jni::ref<com::sun::jmx::snmp::agent::SnmpMibTable> p2) { return call_method<"registerTableMeta", void>(p1, p2); }
	jni::ref<com::sun::jmx::snmp::agent::SnmpMibTable> getRegisteredTableMeta(jni::ref<java::lang::String> p1) { return call_method<"getRegisteredTableMeta", jni::ref<com::sun::jmx::snmp::agent::SnmpMibTable>>(p1); }
	jni::ref<com::sun::jmx::snmp::agent::SnmpStandardObjectServer> getStandardObjectServer() { return call_method<"getStandardObjectServer", jni::ref<com::sun::jmx::snmp::agent::SnmpStandardObjectServer>>(); }

protected:

	JVM_MANAGEMENT_MIB(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MANAGEMENT_SNMP_JVMMIB_JVM_MANAGEMENT_MIB