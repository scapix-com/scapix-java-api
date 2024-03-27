// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/jmx/snmp/SnmpScopedPduPacket.h>
#include <scapix/java_api/com/sun/jmx/snmp/SnmpPduBulkType.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_SNMPSCOPEDPDUBULK_FWD
#define SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_SNMPSCOPEDPDUBULK_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::jmx::snmp { class SnmpScopedPduBulk; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::jmx::snmp::SnmpScopedPduBulk>
{
	static constexpr fixed_string class_name = "com/sun/jmx/snmp/SnmpScopedPduBulk";
	using base_classes = std::tuple<scapix::java_api::com::sun::jmx::snmp::SnmpScopedPduPacket, scapix::java_api::com::sun::jmx::snmp::SnmpPduBulkType>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_SNMPSCOPEDPDUBULK_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_SNMPSCOPEDPDUBULK)
#define SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_SNMPSCOPEDPDUBULK

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/jmx/snmp/SnmpPdu.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::jmx::snmp::SnmpScopedPduBulk : public jni::object_base<"com/sun/jmx/snmp/SnmpScopedPduBulk",
	com::sun::jmx::snmp::SnmpScopedPduPacket,
	com::sun::jmx::snmp::SnmpPduBulkType>
{
public:

	static jni::ref<com::sun::jmx::snmp::SnmpScopedPduBulk> new_object() { return base_::new_object(); }
	void setMaxRepetitions(jint p1) { return call_method<"setMaxRepetitions", void>(p1); }
	void setNonRepeaters(jint p1) { return call_method<"setNonRepeaters", void>(p1); }
	jint getMaxRepetitions() { return call_method<"getMaxRepetitions", jint>(); }
	jint getNonRepeaters() { return call_method<"getNonRepeaters", jint>(); }
	jni::ref<com::sun::jmx::snmp::SnmpPdu> getResponsePdu() { return call_method<"getResponsePdu", jni::ref<com::sun::jmx::snmp::SnmpPdu>>(); }

protected:

	SnmpScopedPduBulk(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_SNMPSCOPEDPDUBULK