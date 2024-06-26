// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Exception.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_SNMPSECURITYEXCEPTION_FWD
#define SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_SNMPSECURITYEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::jmx::snmp { class SnmpSecurityException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::jmx::snmp::SnmpSecurityException>
{
	static constexpr fixed_string class_name = "com/sun/jmx/snmp/SnmpSecurityException";
	using base_classes = std::tuple<scapix::java_api::java::lang::Exception>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_SNMPSECURITYEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_SNMPSECURITYEXCEPTION)
#define SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_SNMPSECURITYEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/jmx/snmp/SnmpSecurityParameters.h>
#include <scapix/java_api/com/sun/jmx/snmp/SnmpVarBind.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::jmx::snmp::SnmpSecurityException : public jni::object_base<"com/sun/jmx/snmp/SnmpSecurityException",
	java::lang::Exception>
{
public:

	jni::ref<jni::array<com::sun::jmx::snmp::SnmpVarBind>> list() { return get_field<"list", jni::ref<jni::array<com::sun::jmx::snmp::SnmpVarBind>>>(); }
	void list(jni::ref<jni::array<com::sun::jmx::snmp::SnmpVarBind>> v) { set_field<"list", jni::ref<jni::array<com::sun::jmx::snmp::SnmpVarBind>>>(v); }
	jint status() { return get_field<"status", jint>(); }
	void status(jint v) { set_field<"status", jint>(v); }
	jni::ref<com::sun::jmx::snmp::SnmpSecurityParameters> params() { return get_field<"params", jni::ref<com::sun::jmx::snmp::SnmpSecurityParameters>>(); }
	void params(jni::ref<com::sun::jmx::snmp::SnmpSecurityParameters> v) { set_field<"params", jni::ref<com::sun::jmx::snmp::SnmpSecurityParameters>>(v); }
	jni::ref<jni::array<jbyte>> contextEngineId() { return get_field<"contextEngineId", jni::ref<jni::array<jbyte>>>(); }
	void contextEngineId(jni::ref<jni::array<jbyte>> v) { set_field<"contextEngineId", jni::ref<jni::array<jbyte>>>(v); }
	jni::ref<jni::array<jbyte>> contextName() { return get_field<"contextName", jni::ref<jni::array<jbyte>>>(); }
	void contextName(jni::ref<jni::array<jbyte>> v) { set_field<"contextName", jni::ref<jni::array<jbyte>>>(v); }
	jbyte flags() { return get_field<"flags", jbyte>(); }
	void flags(jbyte v) { set_field<"flags", jbyte>(v); }

	static jni::ref<com::sun::jmx::snmp::SnmpSecurityException> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }

protected:

	SnmpSecurityException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_SNMPSECURITYEXCEPTION
