// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/jmx/snmp/SnmpValue.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_SNMPINT_FWD
#define SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_SNMPINT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::jmx::snmp { class SnmpInt; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::jmx::snmp::SnmpInt>
{
	static constexpr fixed_string class_name = "com/sun/jmx/snmp/SnmpInt";
	using base_classes = std::tuple<scapix::java_api::com::sun::jmx::snmp::SnmpValue>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_SNMPINT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_SNMPINT)
#define SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_SNMPINT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/jmx/snmp/Enumerated.h>
#include <scapix/java_api/com/sun/jmx/snmp/SnmpOid.h>
#include <scapix/java_api/java/lang/Integer.h>
#include <scapix/java_api/java/lang/Long.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::jmx::snmp::SnmpInt : public jni::object_base<"com/sun/jmx/snmp/SnmpInt",
	com::sun::jmx::snmp::SnmpValue>
{
public:

	static jni::ref<com::sun::jmx::snmp::SnmpInt> new_object(jint p1) { return base_::new_object(p1); }
	static jni::ref<com::sun::jmx::snmp::SnmpInt> new_object(jni::ref<java::lang::Integer> p1) { return base_::new_object(p1); }
	static jni::ref<com::sun::jmx::snmp::SnmpInt> new_object(jlong p1) { return base_::new_object(p1); }
	static jni::ref<com::sun::jmx::snmp::SnmpInt> new_object(jni::ref<java::lang::Long> p1) { return base_::new_object(p1); }
	static jni::ref<com::sun::jmx::snmp::SnmpInt> new_object(jni::ref<com::sun::jmx::snmp::Enumerated> p1) { return base_::new_object(p1); }
	static jni::ref<com::sun::jmx::snmp::SnmpInt> new_object(jboolean p1) { return base_::new_object(p1); }
	jlong longValue() { return call_method<"longValue", jlong>(); }
	jni::ref<java::lang::Long> toLong() { return call_method<"toLong", jni::ref<java::lang::Long>>(); }
	jint intValue() { return call_method<"intValue", jint>(); }
	jni::ref<java::lang::Integer> toInteger() { return call_method<"toInteger", jni::ref<java::lang::Integer>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jni::ref<com::sun::jmx::snmp::SnmpOid> toOid() { return call_method<"toOid", jni::ref<com::sun::jmx::snmp::SnmpOid>>(); }
	static jni::ref<com::sun::jmx::snmp::SnmpOid> toOid(jni::ref<jni::array<jlong>> p1, jint p2) { return call_static_method<"toOid", jni::ref<com::sun::jmx::snmp::SnmpOid>>(p1, p2); }
	static jint nextOid(jni::ref<jni::array<jlong>> p1, jint p2) { return call_static_method<"nextOid", jint>(p1, p2); }
	static void appendToOid(jni::ref<com::sun::jmx::snmp::SnmpOid> p1, jni::ref<com::sun::jmx::snmp::SnmpOid> p2) { return call_static_method<"appendToOid", void>(p1, p2); }
	jni::ref<com::sun::jmx::snmp::SnmpValue> duplicate() { return call_method<"duplicate", jni::ref<com::sun::jmx::snmp::SnmpValue>>(); }
	jni::ref<java::lang::Object> clone() { return call_method<"clone", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::String> getTypeName() { return call_method<"getTypeName", jni::ref<java::lang::String>>(); }

protected:

	SnmpInt(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_SNMPINT
