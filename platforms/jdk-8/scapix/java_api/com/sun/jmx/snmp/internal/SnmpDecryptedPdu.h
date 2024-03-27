// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_INTERNAL_SNMPDECRYPTEDPDU_FWD
#define SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_INTERNAL_SNMPDECRYPTEDPDU_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::jmx::snmp::internal { class SnmpDecryptedPdu; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::jmx::snmp::internal::SnmpDecryptedPdu>
{
	static constexpr fixed_string class_name = "com/sun/jmx/snmp/internal/SnmpDecryptedPdu";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_INTERNAL_SNMPDECRYPTEDPDU_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_INTERNAL_SNMPDECRYPTEDPDU)
#define SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_INTERNAL_SNMPDECRYPTEDPDU

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::jmx::snmp::internal::SnmpDecryptedPdu : public jni::object_base<"com/sun/jmx/snmp/internal/SnmpDecryptedPdu",
	java::lang::Object>
{
public:

	jni::ref<jni::array<jbyte>> data() { return get_field<"data", jni::ref<jni::array<jbyte>>>(); }
	void data(jni::ref<jni::array<jbyte>> v) { set_field<"data", jni::ref<jni::array<jbyte>>>(v); }
	jint dataLength() { return get_field<"dataLength", jint>(); }
	void dataLength(jint v) { set_field<"dataLength", jint>(v); }
	jni::ref<jni::array<jbyte>> contextName() { return get_field<"contextName", jni::ref<jni::array<jbyte>>>(); }
	void contextName(jni::ref<jni::array<jbyte>> v) { set_field<"contextName", jni::ref<jni::array<jbyte>>>(v); }
	jni::ref<jni::array<jbyte>> contextEngineId() { return get_field<"contextEngineId", jni::ref<jni::array<jbyte>>>(); }
	void contextEngineId(jni::ref<jni::array<jbyte>> v) { set_field<"contextEngineId", jni::ref<jni::array<jbyte>>>(v); }

	static jni::ref<com::sun::jmx::snmp::internal::SnmpDecryptedPdu> new_object() { return base_::new_object(); }

protected:

	SnmpDecryptedPdu(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_INTERNAL_SNMPDECRYPTEDPDU