// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/jmx/snmp/agent/SnmpMibGroup.h>
#include <scapix/java_api/java/io/Serializable.h>
#include <scapix/java_api/com/sun/jmx/snmp/agent/SnmpStandardMetaServer.h>

#ifndef SCAPIX_JAVA_API_SUN_MANAGEMENT_SNMP_JVMMIB_JVMOSMETA_FWD
#define SCAPIX_JAVA_API_SUN_MANAGEMENT_SNMP_JVMMIB_JVMOSMETA_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::management::snmp::jvmmib { class JvmOSMeta; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::management::snmp::jvmmib::JvmOSMeta>
{
	static constexpr fixed_string class_name = "sun/management/snmp/jvmmib/JvmOSMeta";
	using base_classes = std::tuple<scapix::java_api::com::sun::jmx::snmp::agent::SnmpMibGroup, scapix::java_api::java::io::Serializable, scapix::java_api::com::sun::jmx::snmp::agent::SnmpStandardMetaServer>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MANAGEMENT_SNMP_JVMMIB_JVMOSMETA_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_MANAGEMENT_SNMP_JVMMIB_JVMOSMETA)
#define SCAPIX_JAVA_API_SUN_MANAGEMENT_SNMP_JVMMIB_JVMOSMETA

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/jmx/snmp/SnmpValue.h>
#include <scapix/java_api/com/sun/jmx/snmp/agent/SnmpMib.h>
#include <scapix/java_api/com/sun/jmx/snmp/agent/SnmpMibSubRequest.h>
#include <scapix/java_api/com/sun/jmx/snmp/agent/SnmpMibTable.h>
#include <scapix/java_api/com/sun/jmx/snmp/agent/SnmpStandardObjectServer.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/management/MBeanServer.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::management::snmp::jvmmib::JvmOSMeta : public jni::object_base<"sun/management/snmp/jvmmib/JvmOSMeta",
	com::sun::jmx::snmp::agent::SnmpMibGroup,
	java::io::Serializable,
	com::sun::jmx::snmp::agent::SnmpStandardMetaServer>
{
public:

	static jni::ref<sun::management::snmp::jvmmib::JvmOSMeta> new_object(jni::ref<com::sun::jmx::snmp::agent::SnmpMib> p1, jni::ref<com::sun::jmx::snmp::agent::SnmpStandardObjectServer> p2) { return base_::new_object(p1, p2); }
	jni::ref<com::sun::jmx::snmp::SnmpValue> get(jlong p1, jni::ref<java::lang::Object> p2) { return call_method<"get", jni::ref<com::sun::jmx::snmp::SnmpValue>>(p1, p2); }
	jni::ref<com::sun::jmx::snmp::SnmpValue> set(jni::ref<com::sun::jmx::snmp::SnmpValue> p1, jlong p2, jni::ref<java::lang::Object> p3) { return call_method<"set", jni::ref<com::sun::jmx::snmp::SnmpValue>>(p1, p2, p3); }
	void check(jni::ref<com::sun::jmx::snmp::SnmpValue> p1, jlong p2, jni::ref<java::lang::Object> p3) { return call_method<"check", void>(p1, p2, p3); }
	void get(jni::ref<com::sun::jmx::snmp::agent::SnmpMibSubRequest> p1, jint p2) { return call_method<"get", void>(p1, p2); }
	void set(jni::ref<com::sun::jmx::snmp::agent::SnmpMibSubRequest> p1, jint p2) { return call_method<"set", void>(p1, p2); }
	void check(jni::ref<com::sun::jmx::snmp::agent::SnmpMibSubRequest> p1, jint p2) { return call_method<"check", void>(p1, p2); }
	jboolean isVariable(jlong p1) { return call_method<"isVariable", jboolean>(p1); }
	jboolean isReadable(jlong p1) { return call_method<"isReadable", jboolean>(p1); }
	jboolean skipVariable(jlong p1, jni::ref<java::lang::Object> p2, jint p3) { return call_method<"skipVariable", jboolean>(p1, p2, p3); }
	jni::ref<java::lang::String> getAttributeName(jlong p1) { return call_method<"getAttributeName", jni::ref<java::lang::String>>(p1); }
	jboolean isTable(jlong p1) { return call_method<"isTable", jboolean>(p1); }
	jni::ref<com::sun::jmx::snmp::agent::SnmpMibTable> getTable(jlong p1) { return call_method<"getTable", jni::ref<com::sun::jmx::snmp::agent::SnmpMibTable>>(p1); }
	void registerTableNodes(jni::ref<com::sun::jmx::snmp::agent::SnmpMib> p1, jni::ref<javax::management::MBeanServer> p2) { return call_method<"registerTableNodes", void>(p1, p2); }

protected:

	JvmOSMeta(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MANAGEMENT_SNMP_JVMMIB_JVMOSMETA
