// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_IPACL_NODE_FWD
#define SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_IPACL_NODE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::jmx::snmp::IPAcl { class Node; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::jmx::snmp::IPAcl::Node>
{
	static constexpr fixed_string class_name = "com/sun/jmx/snmp/IPAcl/Node";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_IPACL_NODE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_IPACL_NODE)
#define SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_IPACL_NODE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::jmx::snmp::IPAcl::Node : public jni::object_base<"com/sun/jmx/snmp/IPAcl/Node",
	java::lang::Object>
{
public:

	void jjtOpen() { return call_method<"jjtOpen", void>(); }
	void jjtClose() { return call_method<"jjtClose", void>(); }
	void jjtSetParent(jni::ref<com::sun::jmx::snmp::IPAcl::Node> p1) { return call_method<"jjtSetParent", void>(p1); }
	jni::ref<com::sun::jmx::snmp::IPAcl::Node> jjtGetParent() { return call_method<"jjtGetParent", jni::ref<com::sun::jmx::snmp::IPAcl::Node>>(); }
	void jjtAddChild(jni::ref<com::sun::jmx::snmp::IPAcl::Node> p1, jint p2) { return call_method<"jjtAddChild", void>(p1, p2); }
	jni::ref<com::sun::jmx::snmp::IPAcl::Node> jjtGetChild(jint p1) { return call_method<"jjtGetChild", jni::ref<com::sun::jmx::snmp::IPAcl::Node>>(p1); }
	jint jjtGetNumChildren() { return call_method<"jjtGetNumChildren", jint>(); }

protected:

	Node(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_IPACL_NODE