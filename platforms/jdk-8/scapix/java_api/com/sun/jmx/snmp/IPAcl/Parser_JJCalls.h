// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_IPACL_PARSER_JJCALLS_FWD
#define SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_IPACL_PARSER_JJCALLS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::jmx::snmp::IPAcl { class Parser_JJCalls; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::jmx::snmp::IPAcl::Parser_JJCalls>
{
	static constexpr fixed_string class_name = "com/sun/jmx/snmp/IPAcl/Parser$JJCalls";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_IPACL_PARSER_JJCALLS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_IPACL_PARSER_JJCALLS)
#define SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_IPACL_PARSER_JJCALLS

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::jmx::snmp::IPAcl::Parser_JJCalls : public jni::object_base<"com/sun/jmx/snmp/IPAcl/Parser$JJCalls",
	java::lang::Object>
{
public:


protected:

	Parser_JJCalls(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_IPACL_PARSER_JJCALLS
