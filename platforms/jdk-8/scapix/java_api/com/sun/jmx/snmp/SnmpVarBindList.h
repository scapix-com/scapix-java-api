// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/Vector.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_SNMPVARBINDLIST_FWD
#define SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_SNMPVARBINDLIST_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::jmx::snmp { class SnmpVarBindList; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::jmx::snmp::SnmpVarBindList>
{
	static constexpr fixed_string class_name = "com/sun/jmx/snmp/SnmpVarBindList";
	using base_classes = std::tuple<scapix::java_api::java::util::Vector>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_SNMPVARBINDLIST_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_SNMPVARBINDLIST)
#define SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_SNMPVARBINDLIST

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/jmx/snmp/SnmpOid.h>
#include <scapix/java_api/com/sun/jmx/snmp/SnmpVarBind.h>
#include <scapix/java_api/com/sun/jmx/snmp/Timestamp.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Enumeration.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::jmx::snmp::SnmpVarBindList : public jni::object_base<"com/sun/jmx/snmp/SnmpVarBindList",
	java::util::Vector>
{
public:

	jni::ref<java::lang::String> identity() { return get_field<"identity", jni::ref<java::lang::String>>(); }
	void identity(jni::ref<java::lang::String> v) { set_field<"identity", jni::ref<java::lang::String>>(v); }

	static jni::ref<com::sun::jmx::snmp::SnmpVarBindList> new_object() { return base_::new_object(); }
	static jni::ref<com::sun::jmx::snmp::SnmpVarBindList> new_object(jint p1) { return base_::new_object(p1); }
	static jni::ref<com::sun::jmx::snmp::SnmpVarBindList> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }
	static jni::ref<com::sun::jmx::snmp::SnmpVarBindList> new_object(jni::ref<com::sun::jmx::snmp::SnmpVarBindList> p1) { return base_::new_object(p1); }
	static jni::ref<com::sun::jmx::snmp::SnmpVarBindList> new_object(jni::ref<java::util::Vector> p1) { return base_::new_object(p1); }
	static jni::ref<com::sun::jmx::snmp::SnmpVarBindList> new_object(jni::ref<java::lang::String> p1, jni::ref<java::util::Vector> p2) { return base_::new_object(p1, p2); }
	jni::ref<com::sun::jmx::snmp::Timestamp> getTimestamp() { return call_method<"getTimestamp", jni::ref<com::sun::jmx::snmp::Timestamp>>(); }
	void setTimestamp(jni::ref<com::sun::jmx::snmp::Timestamp> p1) { return call_method<"setTimestamp", void>(p1); }
	jni::ref<com::sun::jmx::snmp::SnmpVarBind> getVarBindAt(jint p1) { return call_method<"getVarBindAt", jni::ref<com::sun::jmx::snmp::SnmpVarBind>>(p1); }
	jint getVarBindCount() { return call_method<"getVarBindCount", jint>(); }
	jni::ref<java::util::Enumeration> getVarBindList() { return call_method<"getVarBindList", jni::ref<java::util::Enumeration>>(); }
	void setVarBindList(jni::ref<java::util::Vector> p1) { return call_method<"setVarBindList", void>(p1); }
	void setVarBindList(jni::ref<java::util::Vector> p1, jboolean p2) { return call_method<"setVarBindList", void>(p1, p2); }
	void addVarBindList(jni::ref<com::sun::jmx::snmp::SnmpVarBindList> p1) { return call_method<"addVarBindList", void>(p1); }
	jboolean removeVarBindList(jni::ref<com::sun::jmx::snmp::SnmpVarBindList> p1) { return call_method<"removeVarBindList", jboolean>(p1); }
	void replaceVarBind(jni::ref<com::sun::jmx::snmp::SnmpVarBind> p1, jint p2) { return call_method<"replaceVarBind", void>(p1, p2); }
	void addVarBind(jni::ref<jni::array<java::lang::String>> p1, jni::ref<java::lang::String> p2) { return call_method<"addVarBind", void>(p1, p2); }
	jboolean removeVarBind(jni::ref<jni::array<java::lang::String>> p1, jni::ref<java::lang::String> p2) { return call_method<"removeVarBind", jboolean>(p1, p2); }
	void addVarBind(jni::ref<jni::array<java::lang::String>> p1) { return call_method<"addVarBind", void>(p1); }
	jboolean removeVarBind(jni::ref<jni::array<java::lang::String>> p1) { return call_method<"removeVarBind", jboolean>(p1); }
	void addVarBind(jni::ref<java::lang::String> p1) { return call_method<"addVarBind", void>(p1); }
	jboolean removeVarBind(jni::ref<java::lang::String> p1) { return call_method<"removeVarBind", jboolean>(p1); }
	void addVarBind(jni::ref<com::sun::jmx::snmp::SnmpVarBind> p1) { return call_method<"addVarBind", void>(p1); }
	jboolean removeVarBind(jni::ref<com::sun::jmx::snmp::SnmpVarBind> p1) { return call_method<"removeVarBind", jboolean>(p1); }
	void addInstance(jni::ref<java::lang::String> p1) { return call_method<"addInstance", void>(p1); }
	void concat(jni::ref<java::util::Vector> p1) { return call_method<"concat", void>(p1); }
	jboolean checkForValidValues() { return call_method<"checkForValidValues", jboolean>(); }
	jboolean checkForUnspecifiedValue() { return call_method<"checkForUnspecifiedValue", jboolean>(); }
	jni::ref<com::sun::jmx::snmp::SnmpVarBindList> splitAt(jint p1) { return call_method<"splitAt", jni::ref<com::sun::jmx::snmp::SnmpVarBindList>>(p1); }
	jint indexOfOid(jni::ref<com::sun::jmx::snmp::SnmpVarBind> p1, jint p2, jint p3) { return call_method<"indexOfOid", jint>(p1, p2, p3); }
	jint indexOfOid(jni::ref<com::sun::jmx::snmp::SnmpVarBind> p1) { return call_method<"indexOfOid", jint>(p1); }
	jint indexOfOid(jni::ref<com::sun::jmx::snmp::SnmpOid> p1) { return call_method<"indexOfOid", jint>(p1); }
	jni::ref<com::sun::jmx::snmp::SnmpVarBindList> cloneWithValue() { return call_method<"cloneWithValue", jni::ref<com::sun::jmx::snmp::SnmpVarBindList>>(); }
	jni::ref<com::sun::jmx::snmp::SnmpVarBindList> cloneWithoutValue() { return call_method<"cloneWithoutValue", jni::ref<com::sun::jmx::snmp::SnmpVarBindList>>(); }
	jni::ref<com::sun::jmx::snmp::SnmpVarBindList> clone() { return call_method<"clone", jni::ref<com::sun::jmx::snmp::SnmpVarBindList>>(); }
	jni::ref<java::util::Vector> toVector(jboolean p1) { return call_method<"toVector", jni::ref<java::util::Vector>>(p1); }
	jni::ref<java::lang::String> oidListToString() { return call_method<"oidListToString", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> varBindListToString() { return call_method<"varBindListToString", jni::ref<java::lang::String>>(); }

protected:

	SnmpVarBindList(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_SNMPVARBINDLIST
