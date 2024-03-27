// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Exception.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_SNMPUNKNOWNSUBSYSTEMEXCEPTION_FWD
#define SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_SNMPUNKNOWNSUBSYSTEMEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::jmx::snmp { class SnmpUnknownSubSystemException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::jmx::snmp::SnmpUnknownSubSystemException>
{
	static constexpr fixed_string class_name = "com/sun/jmx/snmp/SnmpUnknownSubSystemException";
	using base_classes = std::tuple<scapix::java_api::java::lang::Exception>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_SNMPUNKNOWNSUBSYSTEMEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_SNMPUNKNOWNSUBSYSTEMEXCEPTION)
#define SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_SNMPUNKNOWNSUBSYSTEMEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::jmx::snmp::SnmpUnknownSubSystemException : public jni::object_base<"com/sun/jmx/snmp/SnmpUnknownSubSystemException",
	java::lang::Exception>
{
public:

	static jni::ref<com::sun::jmx::snmp::SnmpUnknownSubSystemException> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }

protected:

	SnmpUnknownSubSystemException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_SNMPUNKNOWNSUBSYSTEMEXCEPTION
