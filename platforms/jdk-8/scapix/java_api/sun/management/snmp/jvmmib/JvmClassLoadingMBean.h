// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_MANAGEMENT_SNMP_JVMMIB_JVMCLASSLOADINGMBEAN_FWD
#define SCAPIX_JAVA_API_SUN_MANAGEMENT_SNMP_JVMMIB_JVMCLASSLOADINGMBEAN_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::management::snmp::jvmmib { class JvmClassLoadingMBean; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::management::snmp::jvmmib::JvmClassLoadingMBean>
{
	static constexpr fixed_string class_name = "sun/management/snmp/jvmmib/JvmClassLoadingMBean";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MANAGEMENT_SNMP_JVMMIB_JVMCLASSLOADINGMBEAN_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_MANAGEMENT_SNMP_JVMMIB_JVMCLASSLOADINGMBEAN)
#define SCAPIX_JAVA_API_SUN_MANAGEMENT_SNMP_JVMMIB_JVMCLASSLOADINGMBEAN

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Long.h>
#include <scapix/java_api/sun/management/snmp/jvmmib/EnumJvmClassesVerboseLevel.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::management::snmp::jvmmib::JvmClassLoadingMBean : public jni::object_base<"sun/management/snmp/jvmmib/JvmClassLoadingMBean",
	java::lang::Object>
{
public:

	jni::ref<sun::management::snmp::jvmmib::EnumJvmClassesVerboseLevel> getJvmClassesVerboseLevel() { return call_method<"getJvmClassesVerboseLevel", jni::ref<sun::management::snmp::jvmmib::EnumJvmClassesVerboseLevel>>(); }
	void setJvmClassesVerboseLevel(jni::ref<sun::management::snmp::jvmmib::EnumJvmClassesVerboseLevel> p1) { return call_method<"setJvmClassesVerboseLevel", void>(p1); }
	void checkJvmClassesVerboseLevel(jni::ref<sun::management::snmp::jvmmib::EnumJvmClassesVerboseLevel> p1) { return call_method<"checkJvmClassesVerboseLevel", void>(p1); }
	jni::ref<java::lang::Long> getJvmClassesUnloadedCount() { return call_method<"getJvmClassesUnloadedCount", jni::ref<java::lang::Long>>(); }
	jni::ref<java::lang::Long> getJvmClassesTotalLoadedCount() { return call_method<"getJvmClassesTotalLoadedCount", jni::ref<java::lang::Long>>(); }
	jni::ref<java::lang::Long> getJvmClassesLoadedCount() { return call_method<"getJvmClassesLoadedCount", jni::ref<java::lang::Long>>(); }

protected:

	JvmClassLoadingMBean(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MANAGEMENT_SNMP_JVMMIB_JVMCLASSLOADINGMBEAN
