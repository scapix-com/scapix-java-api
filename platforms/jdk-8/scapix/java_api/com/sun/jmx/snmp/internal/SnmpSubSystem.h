// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_INTERNAL_SNMPSUBSYSTEM_FWD
#define SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_INTERNAL_SNMPSUBSYSTEM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::jmx::snmp::internal { class SnmpSubSystem; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::jmx::snmp::internal::SnmpSubSystem>
{
	static constexpr fixed_string class_name = "com/sun/jmx/snmp/internal/SnmpSubSystem";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_INTERNAL_SNMPSUBSYSTEM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_INTERNAL_SNMPSUBSYSTEM)
#define SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_INTERNAL_SNMPSUBSYSTEM

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/jmx/snmp/SnmpEngine.h>
#include <scapix/java_api/com/sun/jmx/snmp/internal/SnmpModel.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::jmx::snmp::internal::SnmpSubSystem : public jni::object_base<"com/sun/jmx/snmp/internal/SnmpSubSystem",
	java::lang::Object>
{
public:

	jni::ref<com::sun::jmx::snmp::SnmpEngine> getEngine() { return call_method<"getEngine", jni::ref<com::sun::jmx::snmp::SnmpEngine>>(); }
	void addModel(jint p1, jni::ref<com::sun::jmx::snmp::internal::SnmpModel> p2) { return call_method<"addModel", void>(p1, p2); }
	jni::ref<com::sun::jmx::snmp::internal::SnmpModel> removeModel(jint p1) { return call_method<"removeModel", jni::ref<com::sun::jmx::snmp::internal::SnmpModel>>(p1); }
	jni::ref<com::sun::jmx::snmp::internal::SnmpModel> getModel(jint p1) { return call_method<"getModel", jni::ref<com::sun::jmx::snmp::internal::SnmpModel>>(p1); }
	jni::ref<jni::array<jint>> getModelIds() { return call_method<"getModelIds", jni::ref<jni::array<jint>>>(); }
	jni::ref<jni::array<java::lang::String>> getModelNames() { return call_method<"getModelNames", jni::ref<jni::array<java::lang::String>>>(); }

protected:

	SnmpSubSystem(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_INTERNAL_SNMPSUBSYSTEM
