// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/jmx/snmp/IPAcl/JDMNetMask.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_IPACL_JDMNETMASKV6_FWD
#define SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_IPACL_JDMNETMASKV6_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::jmx::snmp::IPAcl { class JDMNetMaskV6; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::jmx::snmp::IPAcl::JDMNetMaskV6>
{
	static constexpr fixed_string class_name = "com/sun/jmx/snmp/IPAcl/JDMNetMaskV6";
	using base_classes = std::tuple<scapix::java_api::com::sun::jmx::snmp::IPAcl::JDMNetMask>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_IPACL_JDMNETMASKV6_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_IPACL_JDMNETMASKV6)
#define SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_IPACL_JDMNETMASKV6

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/jmx/snmp/IPAcl/Parser.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::jmx::snmp::IPAcl::JDMNetMaskV6 : public jni::object_base<"com/sun/jmx/snmp/IPAcl/JDMNetMaskV6",
	com::sun::jmx::snmp::IPAcl::JDMNetMask>
{
public:

	static jni::ref<com::sun::jmx::snmp::IPAcl::JDMNetMaskV6> new_object(jint p1) { return base_::new_object(p1); }
	static jni::ref<com::sun::jmx::snmp::IPAcl::JDMNetMaskV6> new_object(jni::ref<com::sun::jmx::snmp::IPAcl::Parser> p1, jint p2) { return base_::new_object(p1, p2); }

protected:

	JDMNetMaskV6(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_IPACL_JDMNETMASKV6
