// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/com/sun/jmx/snmp/SnmpDefinitions.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_SNMPPARAMS_FWD
#define SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_SNMPPARAMS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::jmx::snmp { class SnmpParams; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::jmx::snmp::SnmpParams>
{
	static constexpr fixed_string class_name = "com/sun/jmx/snmp/SnmpParams";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::com::sun::jmx::snmp::SnmpDefinitions>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_SNMPPARAMS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_SNMPPARAMS)
#define SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_SNMPPARAMS

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::jmx::snmp::SnmpParams : public jni::object_base<"com/sun/jmx/snmp/SnmpParams",
	java::lang::Object,
	com::sun::jmx::snmp::SnmpDefinitions>
{
public:

	jboolean allowSnmpSets() { return call_method<"allowSnmpSets", jboolean>(); }
	jint getProtocolVersion() { return call_method<"getProtocolVersion", jint>(); }
	void setProtocolVersion(jint p1) { return call_method<"setProtocolVersion", void>(p1); }

protected:

	SnmpParams(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_SNMPPARAMS
