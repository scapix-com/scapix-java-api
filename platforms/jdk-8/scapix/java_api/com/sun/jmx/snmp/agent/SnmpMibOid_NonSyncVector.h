// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/Vector.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_AGENT_SNMPMIBOID_NONSYNCVECTOR_FWD
#define SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_AGENT_SNMPMIBOID_NONSYNCVECTOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::jmx::snmp::agent { class SnmpMibOid_NonSyncVector; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::jmx::snmp::agent::SnmpMibOid_NonSyncVector>
{
	static constexpr fixed_string class_name = "com/sun/jmx/snmp/agent/SnmpMibOid$NonSyncVector";
	using base_classes = std::tuple<scapix::java_api::java::util::Vector>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_AGENT_SNMPMIBOID_NONSYNCVECTOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_AGENT_SNMPMIBOID_NONSYNCVECTOR)
#define SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_AGENT_SNMPMIBOID_NONSYNCVECTOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/jmx/snmp/agent/SnmpMibOid.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::jmx::snmp::agent::SnmpMibOid_NonSyncVector : public jni::object_base<"com/sun/jmx/snmp/agent/SnmpMibOid$NonSyncVector",
	java::util::Vector>
{
public:

	static jni::ref<com::sun::jmx::snmp::agent::SnmpMibOid_NonSyncVector> new_object(jni::ref<com::sun::jmx::snmp::agent::SnmpMibOid> p1, jint p2) { return base_::new_object(p1, p2); }

protected:

	SnmpMibOid_NonSyncVector(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_AGENT_SNMPMIBOID_NONSYNCVECTOR