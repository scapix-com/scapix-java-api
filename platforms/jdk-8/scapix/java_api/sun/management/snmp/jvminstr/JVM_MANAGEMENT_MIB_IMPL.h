// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/management/snmp/jvmmib/JVM_MANAGEMENT_MIB.h>

#ifndef SCAPIX_JAVA_API_SUN_MANAGEMENT_SNMP_JVMINSTR_JVM_MANAGEMENT_MIB_IMPL_FWD
#define SCAPIX_JAVA_API_SUN_MANAGEMENT_SNMP_JVMINSTR_JVM_MANAGEMENT_MIB_IMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::management::snmp::jvminstr { class JVM_MANAGEMENT_MIB_IMPL; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::management::snmp::jvminstr::JVM_MANAGEMENT_MIB_IMPL>
{
	static constexpr fixed_string class_name = "sun/management/snmp/jvminstr/JVM_MANAGEMENT_MIB_IMPL";
	using base_classes = std::tuple<scapix::java_api::sun::management::snmp::jvmmib::JVM_MANAGEMENT_MIB>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MANAGEMENT_SNMP_JVMINSTR_JVM_MANAGEMENT_MIB_IMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_MANAGEMENT_SNMP_JVMINSTR_JVM_MANAGEMENT_MIB_IMPL)
#define SCAPIX_JAVA_API_SUN_MANAGEMENT_SNMP_JVMINSTR_JVM_MANAGEMENT_MIB_IMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/jmx/snmp/SnmpOidTable.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/sun/management/snmp/jvminstr/NotificationTarget.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::management::snmp::jvminstr::JVM_MANAGEMENT_MIB_IMPL : public jni::object_base<"sun/management/snmp/jvminstr/JVM_MANAGEMENT_MIB_IMPL",
	sun::management::snmp::jvmmib::JVM_MANAGEMENT_MIB>
{
public:

	static jni::ref<com::sun::jmx::snmp::SnmpOidTable> getOidTable() { return call_static_method<"getOidTable", jni::ref<com::sun::jmx::snmp::SnmpOidTable>>(); }
	static jni::ref<sun::management::snmp::jvminstr::JVM_MANAGEMENT_MIB_IMPL> new_object() { return base_::new_object(); }
	void addTarget(jni::ref<sun::management::snmp::jvminstr::NotificationTarget> p1) { return call_method<"addTarget", void>(p1); }
	void terminate() { return call_method<"terminate", void>(); }
	void addTargets(jni::ref<java::util::List> p1) { return call_method<"addTargets", void>(p1); }
	jlong validity() { return call_method<"validity", jlong>(); }

protected:

	JVM_MANAGEMENT_MIB_IMPL(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MANAGEMENT_SNMP_JVMINSTR_JVM_MANAGEMENT_MIB_IMPL
