// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/com/sun/jmx/snmp/internal/SnmpSubSystem.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_INTERNAL_SNMPSECURITYSUBSYSTEM_FWD
#define SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_INTERNAL_SNMPSECURITYSUBSYSTEM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::jmx::snmp::internal { class SnmpSecuritySubSystem; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::jmx::snmp::internal::SnmpSecuritySubSystem>
{
	static constexpr fixed_string class_name = "com/sun/jmx/snmp/internal/SnmpSecuritySubSystem";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::com::sun::jmx::snmp::internal::SnmpSubSystem>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_INTERNAL_SNMPSECURITYSUBSYSTEM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_INTERNAL_SNMPSECURITYSUBSYSTEM)
#define SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_INTERNAL_SNMPSECURITYSUBSYSTEM

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/jmx/snmp/SnmpSecurityParameters.h>
#include <scapix/java_api/com/sun/jmx/snmp/internal/SnmpDecryptedPdu.h>
#include <scapix/java_api/com/sun/jmx/snmp/internal/SnmpSecurityCache.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::jmx::snmp::internal::SnmpSecuritySubSystem : public jni::object_base<"com/sun/jmx/snmp/internal/SnmpSecuritySubSystem",
	java::lang::Object,
	com::sun::jmx::snmp::internal::SnmpSubSystem>
{
public:

	jni::ref<com::sun::jmx::snmp::internal::SnmpSecurityCache> createSecurityCache(jint p1) { return call_method<"createSecurityCache", jni::ref<com::sun::jmx::snmp::internal::SnmpSecurityCache>>(p1); }
	void releaseSecurityCache(jint p1, jni::ref<com::sun::jmx::snmp::internal::SnmpSecurityCache> p2) { return call_method<"releaseSecurityCache", void>(p1, p2); }
	jint generateRequestMsg(jni::ref<com::sun::jmx::snmp::internal::SnmpSecurityCache> p1, jint p2, jint p3, jint p4, jbyte p5, jint p6, jni::ref<com::sun::jmx::snmp::SnmpSecurityParameters> p7, jni::ref<jni::array<jbyte>> p8, jni::ref<jni::array<jbyte>> p9, jni::ref<jni::array<jbyte>> p10, jint p11, jni::ref<jni::array<jbyte>> p12) { return call_method<"generateRequestMsg", jint>(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); }
	jint generateResponseMsg(jni::ref<com::sun::jmx::snmp::internal::SnmpSecurityCache> p1, jint p2, jint p3, jint p4, jbyte p5, jint p6, jni::ref<com::sun::jmx::snmp::SnmpSecurityParameters> p7, jni::ref<jni::array<jbyte>> p8, jni::ref<jni::array<jbyte>> p9, jni::ref<jni::array<jbyte>> p10, jint p11, jni::ref<jni::array<jbyte>> p12) { return call_method<"generateResponseMsg", jint>(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); }
	jni::ref<com::sun::jmx::snmp::SnmpSecurityParameters> processIncomingRequest(jni::ref<com::sun::jmx::snmp::internal::SnmpSecurityCache> p1, jint p2, jint p3, jint p4, jbyte p5, jint p6, jni::ref<jni::array<jbyte>> p7, jni::ref<jni::array<jbyte>> p8, jni::ref<jni::array<jbyte>> p9, jni::ref<jni::array<jbyte>> p10, jni::ref<jni::array<jbyte>> p11, jni::ref<com::sun::jmx::snmp::internal::SnmpDecryptedPdu> p12) { return call_method<"processIncomingRequest", jni::ref<com::sun::jmx::snmp::SnmpSecurityParameters>>(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); }
	jni::ref<com::sun::jmx::snmp::SnmpSecurityParameters> processIncomingResponse(jni::ref<com::sun::jmx::snmp::internal::SnmpSecurityCache> p1, jint p2, jint p3, jint p4, jbyte p5, jint p6, jni::ref<jni::array<jbyte>> p7, jni::ref<jni::array<jbyte>> p8, jni::ref<jni::array<jbyte>> p9, jni::ref<jni::array<jbyte>> p10, jni::ref<jni::array<jbyte>> p11, jni::ref<com::sun::jmx::snmp::internal::SnmpDecryptedPdu> p12) { return call_method<"processIncomingResponse", jni::ref<com::sun::jmx::snmp::SnmpSecurityParameters>>(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); }

protected:

	SnmpSecuritySubSystem(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_INTERNAL_SNMPSECURITYSUBSYSTEM