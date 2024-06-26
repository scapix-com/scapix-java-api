// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_MANAGEMENT_SNMP_JVMMIB_JVMRTINPUTARGSENTRYMBEAN_FWD
#define SCAPIX_JAVA_API_SUN_MANAGEMENT_SNMP_JVMMIB_JVMRTINPUTARGSENTRYMBEAN_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::management::snmp::jvmmib { class JvmRTInputArgsEntryMBean; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::management::snmp::jvmmib::JvmRTInputArgsEntryMBean>
{
	static constexpr fixed_string class_name = "sun/management/snmp/jvmmib/JvmRTInputArgsEntryMBean";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MANAGEMENT_SNMP_JVMMIB_JVMRTINPUTARGSENTRYMBEAN_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_MANAGEMENT_SNMP_JVMMIB_JVMRTINPUTARGSENTRYMBEAN)
#define SCAPIX_JAVA_API_SUN_MANAGEMENT_SNMP_JVMMIB_JVMRTINPUTARGSENTRYMBEAN

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Integer.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::management::snmp::jvmmib::JvmRTInputArgsEntryMBean : public jni::object_base<"sun/management/snmp/jvmmib/JvmRTInputArgsEntryMBean",
	java::lang::Object>
{
public:

	jni::ref<java::lang::String> getJvmRTInputArgsItem() { return call_method<"getJvmRTInputArgsItem", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::Integer> getJvmRTInputArgsIndex() { return call_method<"getJvmRTInputArgsIndex", jni::ref<java::lang::Integer>>(); }

protected:

	JvmRTInputArgsEntryMBean(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MANAGEMENT_SNMP_JVMMIB_JVMRTINPUTARGSENTRYMBEAN
