// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/jmx/snmp/SnmpParams.h>
#include <scapix/java_api/java/lang/Cloneable.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_SNMPPARAMETERS_FWD
#define SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_SNMPPARAMETERS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::jmx::snmp { class SnmpParameters; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::jmx::snmp::SnmpParameters>
{
	static constexpr fixed_string class_name = "com/sun/jmx/snmp/SnmpParameters";
	using base_classes = std::tuple<scapix::java_api::com::sun::jmx::snmp::SnmpParams, scapix::java_api::java::lang::Cloneable, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_SNMPPARAMETERS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_SNMPPARAMETERS)
#define SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_SNMPPARAMETERS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::jmx::snmp::SnmpParameters : public jni::object_base<"com/sun/jmx/snmp/SnmpParameters",
	com::sun::jmx::snmp::SnmpParams,
	java::lang::Cloneable,
	java::io::Serializable>
{
public:

	static jni::ref<com::sun::jmx::snmp::SnmpParameters> new_object() { return base_::new_object(); }
	static jni::ref<com::sun::jmx::snmp::SnmpParameters> new_object(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return base_::new_object(p1, p2); }
	static jni::ref<com::sun::jmx::snmp::SnmpParameters> new_object(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::String> p3) { return base_::new_object(p1, p2, p3); }
	jni::ref<java::lang::String> getRdCommunity() { return call_method<"getRdCommunity", jni::ref<java::lang::String>>(); }
	void setRdCommunity(jni::ref<java::lang::String> p1) { return call_method<"setRdCommunity", void>(p1); }
	jni::ref<java::lang::String> getWrCommunity() { return call_method<"getWrCommunity", jni::ref<java::lang::String>>(); }
	void setWrCommunity(jni::ref<java::lang::String> p1) { return call_method<"setWrCommunity", void>(p1); }
	jni::ref<java::lang::String> getInformCommunity() { return call_method<"getInformCommunity", jni::ref<java::lang::String>>(); }
	void setInformCommunity(jni::ref<java::lang::String> p1) { return call_method<"setInformCommunity", void>(p1); }
	jboolean allowSnmpSets() { return call_method<"allowSnmpSets", jboolean>(); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::Object> clone() { return call_method<"clone", jni::ref<java::lang::Object>>(); }
	jni::ref<jni::array<jbyte>> encodeAuthentication(jint p1) { return call_method<"encodeAuthentication", jni::ref<jni::array<jbyte>>>(p1); }

protected:

	SnmpParameters(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_SNMPPARAMETERS
