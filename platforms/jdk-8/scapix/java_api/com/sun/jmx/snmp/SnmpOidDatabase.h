// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/com/sun/jmx/snmp/SnmpOidTable.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_SNMPOIDDATABASE_FWD
#define SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_SNMPOIDDATABASE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::jmx::snmp { class SnmpOidDatabase; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::jmx::snmp::SnmpOidDatabase>
{
	static constexpr fixed_string class_name = "com/sun/jmx/snmp/SnmpOidDatabase";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::com::sun::jmx::snmp::SnmpOidTable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_SNMPOIDDATABASE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_SNMPOIDDATABASE)
#define SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_SNMPOIDDATABASE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/jmx/snmp/SnmpOidRecord.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Vector.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::jmx::snmp::SnmpOidDatabase : public jni::object_base<"com/sun/jmx/snmp/SnmpOidDatabase",
	java::lang::Object,
	com::sun::jmx::snmp::SnmpOidTable>
{
public:

	void add(jni::ref<com::sun::jmx::snmp::SnmpOidTable> p1) { return call_method<"add", void>(p1); }
	void remove(jni::ref<com::sun::jmx::snmp::SnmpOidTable> p1) { return call_method<"remove", void>(p1); }
	void removeAll() { return call_method<"removeAll", void>(); }
	jni::ref<com::sun::jmx::snmp::SnmpOidRecord> resolveVarName(jni::ref<java::lang::String> p1) { return call_method<"resolveVarName", jni::ref<com::sun::jmx::snmp::SnmpOidRecord>>(p1); }
	jni::ref<com::sun::jmx::snmp::SnmpOidRecord> resolveVarOid(jni::ref<java::lang::String> p1) { return call_method<"resolveVarOid", jni::ref<com::sun::jmx::snmp::SnmpOidRecord>>(p1); }
	jni::ref<java::util::Vector> getAllEntries() { return call_method<"getAllEntries", jni::ref<java::util::Vector>>(); }

protected:

	SnmpOidDatabase(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_SNMPOIDDATABASE
