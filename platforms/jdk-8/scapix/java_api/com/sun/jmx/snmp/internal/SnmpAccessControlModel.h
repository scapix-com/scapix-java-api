// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/com/sun/jmx/snmp/internal/SnmpModel.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_INTERNAL_SNMPACCESSCONTROLMODEL_FWD
#define SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_INTERNAL_SNMPACCESSCONTROLMODEL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::jmx::snmp::internal { class SnmpAccessControlModel; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::jmx::snmp::internal::SnmpAccessControlModel>
{
	static constexpr fixed_string class_name = "com/sun/jmx/snmp/internal/SnmpAccessControlModel";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::com::sun::jmx::snmp::internal::SnmpModel>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_INTERNAL_SNMPACCESSCONTROLMODEL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_INTERNAL_SNMPACCESSCONTROLMODEL)
#define SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_INTERNAL_SNMPACCESSCONTROLMODEL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/jmx/snmp/SnmpOid.h>
#include <scapix/java_api/com/sun/jmx/snmp/SnmpPdu.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::jmx::snmp::internal::SnmpAccessControlModel : public jni::object_base<"com/sun/jmx/snmp/internal/SnmpAccessControlModel",
	java::lang::Object,
	com::sun::jmx::snmp::internal::SnmpModel>
{
public:

	void checkAccess(jint p1, jni::ref<java::lang::String> p2, jint p3, jint p4, jint p5, jni::ref<jni::array<jbyte>> p6, jni::ref<com::sun::jmx::snmp::SnmpOid> p7) { return call_method<"checkAccess", void>(p1, p2, p3, p4, p5, p6, p7); }
	void checkPduAccess(jint p1, jni::ref<java::lang::String> p2, jint p3, jint p4, jint p5, jni::ref<jni::array<jbyte>> p6, jni::ref<com::sun::jmx::snmp::SnmpPdu> p7) { return call_method<"checkPduAccess", void>(p1, p2, p3, p4, p5, p6, p7); }
	jboolean enableSnmpV1V2SetRequest() { return call_method<"enableSnmpV1V2SetRequest", jboolean>(); }
	jboolean disableSnmpV1V2SetRequest() { return call_method<"disableSnmpV1V2SetRequest", jboolean>(); }
	jboolean isSnmpV1V2SetRequestAuthorized() { return call_method<"isSnmpV1V2SetRequestAuthorized", jboolean>(); }

protected:

	SnmpAccessControlModel(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_INTERNAL_SNMPACCESSCONTROLMODEL
