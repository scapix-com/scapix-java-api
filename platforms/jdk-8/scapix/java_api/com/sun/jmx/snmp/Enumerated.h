// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_ENUMERATED_FWD
#define SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_ENUMERATED_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::jmx::snmp { class Enumerated; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::jmx::snmp::Enumerated>
{
	static constexpr fixed_string class_name = "com/sun/jmx/snmp/Enumerated";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_ENUMERATED_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_ENUMERATED)
#define SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_ENUMERATED

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Integer.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Enumeration.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::jmx::snmp::Enumerated : public jni::object_base<"com/sun/jmx/snmp/Enumerated",
	java::lang::Object,
	java::io::Serializable>
{
public:

	static jni::ref<com::sun::jmx::snmp::Enumerated> new_object() { return base_::new_object(); }
	static jni::ref<com::sun::jmx::snmp::Enumerated> new_object(jint p1) { return base_::new_object(p1); }
	static jni::ref<com::sun::jmx::snmp::Enumerated> new_object(jni::ref<java::lang::Integer> p1) { return base_::new_object(p1); }
	static jni::ref<com::sun::jmx::snmp::Enumerated> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }
	jint intValue() { return call_method<"intValue", jint>(); }
	jni::ref<java::util::Enumeration> valueIndexes() { return call_method<"valueIndexes", jni::ref<java::util::Enumeration>>(); }
	jni::ref<java::util::Enumeration> valueStrings() { return call_method<"valueStrings", jni::ref<java::util::Enumeration>>(); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	Enumerated(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_ENUMERATED
