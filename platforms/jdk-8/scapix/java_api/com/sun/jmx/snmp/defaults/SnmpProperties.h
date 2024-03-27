// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_DEFAULTS_SNMPPROPERTIES_FWD
#define SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_DEFAULTS_SNMPPROPERTIES_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::jmx::snmp::defaults { class SnmpProperties; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::jmx::snmp::defaults::SnmpProperties>
{
	static constexpr fixed_string class_name = "com/sun/jmx/snmp/defaults/SnmpProperties";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_DEFAULTS_SNMPPROPERTIES_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_DEFAULTS_SNMPPROPERTIES)
#define SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_DEFAULTS_SNMPPROPERTIES

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::jmx::snmp::defaults::SnmpProperties : public jni::object_base<"com/sun/jmx/snmp/defaults/SnmpProperties",
	java::lang::Object>
{
public:

	static jni::ref<java::lang::String> MLET_LIB_DIR() { return get_static_field<"MLET_LIB_DIR", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ACL_FILE() { return get_static_field<"ACL_FILE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SECURITY_FILE() { return get_static_field<"SECURITY_FILE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> UACL_FILE() { return get_static_field<"UACL_FILE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> MIB_CORE_FILE() { return get_static_field<"MIB_CORE_FILE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> JMX_SPEC_NAME() { return get_static_field<"JMX_SPEC_NAME", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> JMX_SPEC_VERSION() { return get_static_field<"JMX_SPEC_VERSION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> JMX_SPEC_VENDOR() { return get_static_field<"JMX_SPEC_VENDOR", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> JMX_IMPL_NAME() { return get_static_field<"JMX_IMPL_NAME", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> JMX_IMPL_VENDOR() { return get_static_field<"JMX_IMPL_VENDOR", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> JMX_IMPL_VERSION() { return get_static_field<"JMX_IMPL_VERSION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SSL_CIPHER_SUITE() { return get_static_field<"SSL_CIPHER_SUITE", jni::ref<java::lang::String>>(); }

	static void load(jni::ref<java::lang::String> p1) { return call_static_method<"load", void>(p1); }

protected:

	SnmpProperties(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_DEFAULTS_SNMPPROPERTIES