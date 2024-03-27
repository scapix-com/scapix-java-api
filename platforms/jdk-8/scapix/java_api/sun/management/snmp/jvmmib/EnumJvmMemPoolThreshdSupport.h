// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/jmx/snmp/Enumerated.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_SUN_MANAGEMENT_SNMP_JVMMIB_ENUMJVMMEMPOOLTHRESHDSUPPORT_FWD
#define SCAPIX_JAVA_API_SUN_MANAGEMENT_SNMP_JVMMIB_ENUMJVMMEMPOOLTHRESHDSUPPORT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::management::snmp::jvmmib { class EnumJvmMemPoolThreshdSupport; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::management::snmp::jvmmib::EnumJvmMemPoolThreshdSupport>
{
	static constexpr fixed_string class_name = "sun/management/snmp/jvmmib/EnumJvmMemPoolThreshdSupport";
	using base_classes = std::tuple<scapix::java_api::com::sun::jmx::snmp::Enumerated, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MANAGEMENT_SNMP_JVMMIB_ENUMJVMMEMPOOLTHRESHDSUPPORT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_MANAGEMENT_SNMP_JVMMIB_ENUMJVMMEMPOOLTHRESHDSUPPORT)
#define SCAPIX_JAVA_API_SUN_MANAGEMENT_SNMP_JVMMIB_ENUMJVMMEMPOOLTHRESHDSUPPORT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Integer.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::management::snmp::jvmmib::EnumJvmMemPoolThreshdSupport : public jni::object_base<"sun/management/snmp/jvmmib/EnumJvmMemPoolThreshdSupport",
	com::sun::jmx::snmp::Enumerated,
	java::io::Serializable>
{
public:

	static jni::ref<sun::management::snmp::jvmmib::EnumJvmMemPoolThreshdSupport> new_object(jint p1) { return base_::new_object(p1); }
	static jni::ref<sun::management::snmp::jvmmib::EnumJvmMemPoolThreshdSupport> new_object(jni::ref<java::lang::Integer> p1) { return base_::new_object(p1); }
	static jni::ref<sun::management::snmp::jvmmib::EnumJvmMemPoolThreshdSupport> new_object() { return base_::new_object(); }
	static jni::ref<sun::management::snmp::jvmmib::EnumJvmMemPoolThreshdSupport> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }

protected:

	EnumJvmMemPoolThreshdSupport(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MANAGEMENT_SNMP_JVMMIB_ENUMJVMMEMPOOLTHRESHDSUPPORT