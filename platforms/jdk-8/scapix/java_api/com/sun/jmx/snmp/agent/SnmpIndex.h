// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_AGENT_SNMPINDEX_FWD
#define SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_AGENT_SNMPINDEX_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::jmx::snmp::agent { class SnmpIndex; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::jmx::snmp::agent::SnmpIndex>
{
	static constexpr fixed_string class_name = "com/sun/jmx/snmp/agent/SnmpIndex";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_AGENT_SNMPINDEX_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_AGENT_SNMPINDEX)
#define SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_AGENT_SNMPINDEX

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/jmx/snmp/SnmpOid.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Vector.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::jmx::snmp::agent::SnmpIndex : public jni::object_base<"com/sun/jmx/snmp/agent/SnmpIndex",
	java::lang::Object,
	java::io::Serializable>
{
public:

	static jni::ref<com::sun::jmx::snmp::agent::SnmpIndex> new_object(jni::ref<jni::array<com::sun::jmx::snmp::SnmpOid>> p1) { return base_::new_object(p1); }
	static jni::ref<com::sun::jmx::snmp::agent::SnmpIndex> new_object(jni::ref<com::sun::jmx::snmp::SnmpOid> p1) { return base_::new_object(p1); }
	jint getNbComponents() { return call_method<"getNbComponents", jint>(); }
	jni::ref<java::util::Vector> getComponents() { return call_method<"getComponents", jni::ref<java::util::Vector>>(); }
	jboolean equals(jni::ref<com::sun::jmx::snmp::agent::SnmpIndex> p1) { return call_method<"equals", jboolean>(p1); }
	jint compareTo(jni::ref<com::sun::jmx::snmp::agent::SnmpIndex> p1) { return call_method<"compareTo", jint>(p1); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	SnmpIndex(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_AGENT_SNMPINDEX
