// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_MPM_SNMPMSGTRANSLATOR_FWD
#define SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_MPM_SNMPMSGTRANSLATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::jmx::snmp::mpm { class SnmpMsgTranslator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::jmx::snmp::mpm::SnmpMsgTranslator>
{
	static constexpr fixed_string class_name = "com/sun/jmx/snmp/mpm/SnmpMsgTranslator";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_MPM_SNMPMSGTRANSLATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_MPM_SNMPMSGTRANSLATOR)
#define SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_MPM_SNMPMSGTRANSLATOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/jmx/snmp/SnmpMsg.h>
#include <scapix/java_api/com/sun/jmx/snmp/SnmpSecurityParameters.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::jmx::snmp::mpm::SnmpMsgTranslator : public jni::object_base<"com/sun/jmx/snmp/mpm/SnmpMsgTranslator",
	java::lang::Object>
{
public:

	jint getMsgId(jni::ref<com::sun::jmx::snmp::SnmpMsg> p1) { return call_method<"getMsgId", jint>(p1); }
	jint getMsgMaxSize(jni::ref<com::sun::jmx::snmp::SnmpMsg> p1) { return call_method<"getMsgMaxSize", jint>(p1); }
	jbyte getMsgFlags(jni::ref<com::sun::jmx::snmp::SnmpMsg> p1) { return call_method<"getMsgFlags", jbyte>(p1); }
	jint getMsgSecurityModel(jni::ref<com::sun::jmx::snmp::SnmpMsg> p1) { return call_method<"getMsgSecurityModel", jint>(p1); }
	jint getSecurityLevel(jni::ref<com::sun::jmx::snmp::SnmpMsg> p1) { return call_method<"getSecurityLevel", jint>(p1); }
	jni::ref<jni::array<jbyte>> getFlatSecurityParameters(jni::ref<com::sun::jmx::snmp::SnmpMsg> p1) { return call_method<"getFlatSecurityParameters", jni::ref<jni::array<jbyte>>>(p1); }
	jni::ref<com::sun::jmx::snmp::SnmpSecurityParameters> getSecurityParameters(jni::ref<com::sun::jmx::snmp::SnmpMsg> p1) { return call_method<"getSecurityParameters", jni::ref<com::sun::jmx::snmp::SnmpSecurityParameters>>(p1); }
	jni::ref<jni::array<jbyte>> getContextEngineId(jni::ref<com::sun::jmx::snmp::SnmpMsg> p1) { return call_method<"getContextEngineId", jni::ref<jni::array<jbyte>>>(p1); }
	jni::ref<jni::array<jbyte>> getContextName(jni::ref<com::sun::jmx::snmp::SnmpMsg> p1) { return call_method<"getContextName", jni::ref<jni::array<jbyte>>>(p1); }
	jni::ref<jni::array<jbyte>> getRawContextName(jni::ref<com::sun::jmx::snmp::SnmpMsg> p1) { return call_method<"getRawContextName", jni::ref<jni::array<jbyte>>>(p1); }
	jni::ref<jni::array<jbyte>> getAccessContext(jni::ref<com::sun::jmx::snmp::SnmpMsg> p1) { return call_method<"getAccessContext", jni::ref<jni::array<jbyte>>>(p1); }
	jni::ref<jni::array<jbyte>> getEncryptedPdu(jni::ref<com::sun::jmx::snmp::SnmpMsg> p1) { return call_method<"getEncryptedPdu", jni::ref<jni::array<jbyte>>>(p1); }
	void setContextName(jni::ref<com::sun::jmx::snmp::SnmpMsg> p1, jni::ref<jni::array<jbyte>> p2) { return call_method<"setContextName", void>(p1, p2); }
	void setContextEngineId(jni::ref<com::sun::jmx::snmp::SnmpMsg> p1, jni::ref<jni::array<jbyte>> p2) { return call_method<"setContextEngineId", void>(p1, p2); }

protected:

	SnmpMsgTranslator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_MPM_SNMPMSGTRANSLATOR
