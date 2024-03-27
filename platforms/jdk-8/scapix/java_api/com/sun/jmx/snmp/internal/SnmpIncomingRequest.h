// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_INTERNAL_SNMPINCOMINGREQUEST_FWD
#define SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_INTERNAL_SNMPINCOMINGREQUEST_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::jmx::snmp::internal { class SnmpIncomingRequest; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::jmx::snmp::internal::SnmpIncomingRequest>
{
	static constexpr fixed_string class_name = "com/sun/jmx/snmp/internal/SnmpIncomingRequest";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_INTERNAL_SNMPINCOMINGREQUEST_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_INTERNAL_SNMPINCOMINGREQUEST)
#define SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_INTERNAL_SNMPINCOMINGREQUEST

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/jmx/snmp/SnmpMsg.h>
#include <scapix/java_api/com/sun/jmx/snmp/SnmpPdu.h>
#include <scapix/java_api/com/sun/jmx/snmp/SnmpSecurityParameters.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/net/InetAddress.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::jmx::snmp::internal::SnmpIncomingRequest : public jni::object_base<"com/sun/jmx/snmp/internal/SnmpIncomingRequest",
	java::lang::Object>
{
public:

	jni::ref<com::sun::jmx::snmp::SnmpSecurityParameters> getSecurityParameters() { return call_method<"getSecurityParameters", jni::ref<com::sun::jmx::snmp::SnmpSecurityParameters>>(); }
	jboolean isReport() { return call_method<"isReport", jboolean>(); }
	jboolean isResponse() { return call_method<"isResponse", jboolean>(); }
	void noResponse() { return call_method<"noResponse", void>(); }
	jni::ref<java::lang::String> getPrincipal() { return call_method<"getPrincipal", jni::ref<java::lang::String>>(); }
	jint getSecurityLevel() { return call_method<"getSecurityLevel", jint>(); }
	jint getSecurityModel() { return call_method<"getSecurityModel", jint>(); }
	jni::ref<jni::array<jbyte>> getContextName() { return call_method<"getContextName", jni::ref<jni::array<jbyte>>>(); }
	jni::ref<jni::array<jbyte>> getContextEngineId() { return call_method<"getContextEngineId", jni::ref<jni::array<jbyte>>>(); }
	jni::ref<jni::array<jbyte>> getAccessContext() { return call_method<"getAccessContext", jni::ref<jni::array<jbyte>>>(); }
	jint encodeMessage(jni::ref<jni::array<jbyte>> p1) { return call_method<"encodeMessage", jint>(p1); }
	void decodeMessage(jni::ref<jni::array<jbyte>> p1, jint p2, jni::ref<java::net::InetAddress> p3, jint p4) { return call_method<"decodeMessage", void>(p1, p2, p3, p4); }
	jni::ref<com::sun::jmx::snmp::SnmpMsg> encodeSnmpPdu(jni::ref<com::sun::jmx::snmp::SnmpPdu> p1, jint p2) { return call_method<"encodeSnmpPdu", jni::ref<com::sun::jmx::snmp::SnmpMsg>>(p1, p2); }
	jni::ref<com::sun::jmx::snmp::SnmpPdu> decodeSnmpPdu() { return call_method<"decodeSnmpPdu", jni::ref<com::sun::jmx::snmp::SnmpPdu>>(); }
	jni::ref<java::lang::String> printRequestMessage() { return call_method<"printRequestMessage", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> printResponseMessage() { return call_method<"printResponseMessage", jni::ref<java::lang::String>>(); }

protected:

	SnmpIncomingRequest(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_INTERNAL_SNMPINCOMINGREQUEST