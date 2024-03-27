// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/jmx/snmp/SnmpUnsignedInt.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_SNMPCOUNTER_FWD
#define SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_SNMPCOUNTER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::jmx::snmp { class SnmpCounter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::jmx::snmp::SnmpCounter>
{
	static constexpr fixed_string class_name = "com/sun/jmx/snmp/SnmpCounter";
	using base_classes = std::tuple<scapix::java_api::com::sun::jmx::snmp::SnmpUnsignedInt>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_SNMPCOUNTER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_SNMPCOUNTER)
#define SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_SNMPCOUNTER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Integer.h>
#include <scapix/java_api/java/lang/Long.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::jmx::snmp::SnmpCounter : public jni::object_base<"com/sun/jmx/snmp/SnmpCounter",
	com::sun::jmx::snmp::SnmpUnsignedInt>
{
public:

	static jni::ref<com::sun::jmx::snmp::SnmpCounter> new_object(jint p1) { return base_::new_object(p1); }
	static jni::ref<com::sun::jmx::snmp::SnmpCounter> new_object(jni::ref<java::lang::Integer> p1) { return base_::new_object(p1); }
	static jni::ref<com::sun::jmx::snmp::SnmpCounter> new_object(jlong p1) { return base_::new_object(p1); }
	static jni::ref<com::sun::jmx::snmp::SnmpCounter> new_object(jni::ref<java::lang::Long> p1) { return base_::new_object(p1); }
	jni::ref<java::lang::String> getTypeName() { return call_method<"getTypeName", jni::ref<java::lang::String>>(); }

protected:

	SnmpCounter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_SNMPCOUNTER
