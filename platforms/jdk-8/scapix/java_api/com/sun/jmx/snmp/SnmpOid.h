// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/jmx/snmp/SnmpValue.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_SNMPOID_FWD
#define SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_SNMPOID_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::jmx::snmp { class SnmpOid; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::jmx::snmp::SnmpOid>
{
	static constexpr fixed_string class_name = "com/sun/jmx/snmp/SnmpOid";
	using base_classes = std::tuple<scapix::java_api::com::sun::jmx::snmp::SnmpValue>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_SNMPOID_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_SNMPOID)
#define SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_SNMPOID

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/jmx/snmp/SnmpOidTable.h>
#include <scapix/java_api/java/lang/Boolean.h>
#include <scapix/java_api/java/lang/Byte.h>
#include <scapix/java_api/java/lang/Integer.h>
#include <scapix/java_api/java/lang/Long.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::jmx::snmp::SnmpOid : public jni::object_base<"com/sun/jmx/snmp/SnmpOid",
	com::sun::jmx::snmp::SnmpValue>
{
public:

	static jni::ref<com::sun::jmx::snmp::SnmpOid> new_object() { return base_::new_object(); }
	static jni::ref<com::sun::jmx::snmp::SnmpOid> new_object(jni::ref<jni::array<jlong>> p1) { return base_::new_object(p1); }
	static jni::ref<com::sun::jmx::snmp::SnmpOid> new_object(jlong p1) { return base_::new_object(p1); }
	static jni::ref<com::sun::jmx::snmp::SnmpOid> new_object(jlong p1, jlong p2, jlong p3, jlong p4) { return base_::new_object(p1, p2, p3, p4); }
	static jni::ref<com::sun::jmx::snmp::SnmpOid> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }
	jint getLength() { return call_method<"getLength", jint>(); }
	jni::ref<jni::array<jlong>> longValue() { return call_method<"longValue", jni::ref<jni::array<jlong>>>(); }
	jni::ref<jni::array<jlong>> longValue(jboolean p1) { return call_method<"longValue", jni::ref<jni::array<jlong>>>(p1); }
	jlong getOidArc(jint p1) { return call_method<"getOidArc", jlong>(p1); }
	jni::ref<java::lang::Long> toLong() { return call_method<"toLong", jni::ref<java::lang::Long>>(); }
	jni::ref<java::lang::Integer> toInteger() { return call_method<"toInteger", jni::ref<java::lang::Integer>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::Boolean> toBoolean() { return call_method<"toBoolean", jni::ref<java::lang::Boolean>>(); }
	jni::ref<jni::array<java::lang::Byte>> toByte() { return call_method<"toByte", jni::ref<jni::array<java::lang::Byte>>>(); }
	jni::ref<com::sun::jmx::snmp::SnmpOid> toOid() { return call_method<"toOid", jni::ref<com::sun::jmx::snmp::SnmpOid>>(); }
	static jni::ref<com::sun::jmx::snmp::SnmpOid> toOid(jni::ref<jni::array<jlong>> p1, jint p2) { return call_static_method<"toOid", jni::ref<com::sun::jmx::snmp::SnmpOid>>(p1, p2); }
	static jint nextOid(jni::ref<jni::array<jlong>> p1, jint p2) { return call_static_method<"nextOid", jint>(p1, p2); }
	static void appendToOid(jni::ref<com::sun::jmx::snmp::SnmpOid> p1, jni::ref<com::sun::jmx::snmp::SnmpOid> p2) { return call_static_method<"appendToOid", void>(p1, p2); }
	jni::ref<com::sun::jmx::snmp::SnmpValue> duplicate() { return call_method<"duplicate", jni::ref<com::sun::jmx::snmp::SnmpValue>>(); }
	jni::ref<java::lang::Object> clone() { return call_method<"clone", jni::ref<java::lang::Object>>(); }
	void insert(jlong p1) { return call_method<"insert", void>(p1); }
	void insert(jint p1) { return call_method<"insert", void>(p1); }
	void append(jni::ref<com::sun::jmx::snmp::SnmpOid> p1) { return call_method<"append", void>(p1); }
	void append(jlong p1) { return call_method<"append", void>(p1); }
	void addToOid(jni::ref<java::lang::String> p1) { return call_method<"addToOid", void>(p1); }
	void addToOid(jni::ref<jni::array<jlong>> p1) { return call_method<"addToOid", void>(p1); }
	jboolean isValid() { return call_method<"isValid", jboolean>(); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jint compareTo(jni::ref<com::sun::jmx::snmp::SnmpOid> p1) { return call_method<"compareTo", jint>(p1); }
	jni::ref<java::lang::String> resolveVarName(jni::ref<java::lang::String> p1) { return call_method<"resolveVarName", jni::ref<java::lang::String>>(p1); }
	jni::ref<java::lang::String> getTypeName() { return call_method<"getTypeName", jni::ref<java::lang::String>>(); }
	static jni::ref<com::sun::jmx::snmp::SnmpOidTable> getSnmpOidTable() { return call_static_method<"getSnmpOidTable", jni::ref<com::sun::jmx::snmp::SnmpOidTable>>(); }
	static void setSnmpOidTable(jni::ref<com::sun::jmx::snmp::SnmpOidTable> p1) { return call_static_method<"setSnmpOidTable", void>(p1); }
	jni::ref<java::lang::String> toOctetString() { return call_method<"toOctetString", jni::ref<java::lang::String>>(); }

protected:

	SnmpOid(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_SNMPOID
