// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_SNMPSECURITYPARAMETERS_FWD
#define SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_SNMPSECURITYPARAMETERS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::jmx::snmp { class SnmpSecurityParameters; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::jmx::snmp::SnmpSecurityParameters>
{
	static constexpr fixed_string class_name = "com/sun/jmx/snmp/SnmpSecurityParameters";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_SNMPSECURITYPARAMETERS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_SNMPSECURITYPARAMETERS)
#define SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_SNMPSECURITYPARAMETERS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::jmx::snmp::SnmpSecurityParameters : public jni::object_base<"com/sun/jmx/snmp/SnmpSecurityParameters",
	java::lang::Object>
{
public:

	jint encode(jni::ref<jni::array<jbyte>> p1) { return call_method<"encode", jint>(p1); }
	void decode(jni::ref<jni::array<jbyte>> p1) { return call_method<"decode", void>(p1); }
	jni::ref<java::lang::String> getPrincipal() { return call_method<"getPrincipal", jni::ref<java::lang::String>>(); }

protected:

	SnmpSecurityParameters(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_SNMPSECURITYPARAMETERS
