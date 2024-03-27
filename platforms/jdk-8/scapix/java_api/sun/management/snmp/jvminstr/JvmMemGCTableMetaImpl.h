// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/management/snmp/jvmmib/JvmMemGCTableMeta.h>

#ifndef SCAPIX_JAVA_API_SUN_MANAGEMENT_SNMP_JVMINSTR_JVMMEMGCTABLEMETAIMPL_FWD
#define SCAPIX_JAVA_API_SUN_MANAGEMENT_SNMP_JVMINSTR_JVMMEMGCTABLEMETAIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::management::snmp::jvminstr { class JvmMemGCTableMetaImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::management::snmp::jvminstr::JvmMemGCTableMetaImpl>
{
	static constexpr fixed_string class_name = "sun/management/snmp/jvminstr/JvmMemGCTableMetaImpl";
	using base_classes = std::tuple<scapix::java_api::sun::management::snmp::jvmmib::JvmMemGCTableMeta>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MANAGEMENT_SNMP_JVMINSTR_JVMMEMGCTABLEMETAIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_MANAGEMENT_SNMP_JVMINSTR_JVMMEMGCTABLEMETAIMPL)
#define SCAPIX_JAVA_API_SUN_MANAGEMENT_SNMP_JVMINSTR_JVMMEMGCTABLEMETAIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/jmx/snmp/SnmpOid.h>
#include <scapix/java_api/com/sun/jmx/snmp/agent/SnmpMib.h>
#include <scapix/java_api/com/sun/jmx/snmp/agent/SnmpStandardObjectServer.h>
#include <scapix/java_api/java/lang/Object.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::management::snmp::jvminstr::JvmMemGCTableMetaImpl : public jni::object_base<"sun/management/snmp/jvminstr/JvmMemGCTableMetaImpl",
	sun::management::snmp::jvmmib::JvmMemGCTableMeta>
{
public:

	static jni::ref<sun::management::snmp::jvminstr::JvmMemGCTableMetaImpl> new_object(jni::ref<com::sun::jmx::snmp::agent::SnmpMib> p1, jni::ref<com::sun::jmx::snmp::agent::SnmpStandardObjectServer> p2) { return base_::new_object(p1, p2); }
	jni::ref<java::lang::Object> getEntry(jni::ref<com::sun::jmx::snmp::SnmpOid> p1) { return call_method<"getEntry", jni::ref<java::lang::Object>>(p1); }

protected:

	JvmMemGCTableMetaImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MANAGEMENT_SNMP_JVMINSTR_JVMMEMGCTABLEMETAIMPL