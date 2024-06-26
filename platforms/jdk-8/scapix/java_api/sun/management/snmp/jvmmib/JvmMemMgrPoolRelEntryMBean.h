// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_MANAGEMENT_SNMP_JVMMIB_JVMMEMMGRPOOLRELENTRYMBEAN_FWD
#define SCAPIX_JAVA_API_SUN_MANAGEMENT_SNMP_JVMMIB_JVMMEMMGRPOOLRELENTRYMBEAN_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::management::snmp::jvmmib { class JvmMemMgrPoolRelEntryMBean; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::management::snmp::jvmmib::JvmMemMgrPoolRelEntryMBean>
{
	static constexpr fixed_string class_name = "sun/management/snmp/jvmmib/JvmMemMgrPoolRelEntryMBean";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MANAGEMENT_SNMP_JVMMIB_JVMMEMMGRPOOLRELENTRYMBEAN_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_MANAGEMENT_SNMP_JVMMIB_JVMMEMMGRPOOLRELENTRYMBEAN)
#define SCAPIX_JAVA_API_SUN_MANAGEMENT_SNMP_JVMMIB_JVMMEMMGRPOOLRELENTRYMBEAN

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Integer.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::management::snmp::jvmmib::JvmMemMgrPoolRelEntryMBean : public jni::object_base<"sun/management/snmp/jvmmib/JvmMemMgrPoolRelEntryMBean",
	java::lang::Object>
{
public:

	jni::ref<java::lang::String> getJvmMemMgrRelPoolName() { return call_method<"getJvmMemMgrRelPoolName", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getJvmMemMgrRelManagerName() { return call_method<"getJvmMemMgrRelManagerName", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::Integer> getJvmMemManagerIndex() { return call_method<"getJvmMemManagerIndex", jni::ref<java::lang::Integer>>(); }
	jni::ref<java::lang::Integer> getJvmMemPoolIndex() { return call_method<"getJvmMemPoolIndex", jni::ref<java::lang::Integer>>(); }

protected:

	JvmMemMgrPoolRelEntryMBean(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MANAGEMENT_SNMP_JVMMIB_JVMMEMMGRPOOLRELENTRYMBEAN
