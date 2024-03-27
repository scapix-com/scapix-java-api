// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_AGENT_SNMPREQUESTTREE_FWD
#define SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_AGENT_SNMPREQUESTTREE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::jmx::snmp::agent { class SnmpRequestTree; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::jmx::snmp::agent::SnmpRequestTree>
{
	static constexpr fixed_string class_name = "com/sun/jmx/snmp/agent/SnmpRequestTree";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_AGENT_SNMPREQUESTTREE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_AGENT_SNMPREQUESTTREE)
#define SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_AGENT_SNMPREQUESTTREE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/jmx/snmp/SnmpOid.h>
#include <scapix/java_api/com/sun/jmx/snmp/SnmpVarBind.h>
#include <scapix/java_api/com/sun/jmx/snmp/agent/SnmpMibNode.h>
#include <scapix/java_api/com/sun/jmx/snmp/agent/SnmpRequestTree_Handler.h>
#include <scapix/java_api/java/util/Enumeration.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::jmx::snmp::agent::SnmpRequestTree : public jni::object_base<"com/sun/jmx/snmp/agent/SnmpRequestTree",
	java::lang::Object>
{
public:

	static jint mapSetException(jint p1, jint p2) { return call_static_method<"mapSetException", jint>(p1, p2); }
	static jint mapGetException(jint p1, jint p2) { return call_static_method<"mapGetException", jint>(p1, p2); }
	jni::ref<java::lang::Object> getUserData() { return call_method<"getUserData", jni::ref<java::lang::Object>>(); }
	jboolean isCreationAllowed() { return call_method<"isCreationAllowed", jboolean>(); }
	jboolean isSetRequest() { return call_method<"isSetRequest", jboolean>(); }
	jint getVersion() { return call_method<"getVersion", jint>(); }
	jint getRequestPduVersion() { return call_method<"getRequestPduVersion", jint>(); }
	jni::ref<com::sun::jmx::snmp::agent::SnmpMibNode> getMetaNode(jni::ref<com::sun::jmx::snmp::agent::SnmpRequestTree_Handler> p1) { return call_method<"getMetaNode", jni::ref<com::sun::jmx::snmp::agent::SnmpMibNode>>(p1); }
	jint getOidDepth(jni::ref<com::sun::jmx::snmp::agent::SnmpRequestTree_Handler> p1) { return call_method<"getOidDepth", jint>(p1); }
	jni::ref<java::util::Enumeration> getSubRequests(jni::ref<com::sun::jmx::snmp::agent::SnmpRequestTree_Handler> p1) { return call_method<"getSubRequests", jni::ref<java::util::Enumeration>>(p1); }
	jni::ref<java::util::Enumeration> getHandlers() { return call_method<"getHandlers", jni::ref<java::util::Enumeration>>(); }
	void add(jni::ref<com::sun::jmx::snmp::agent::SnmpMibNode> p1, jint p2, jni::ref<com::sun::jmx::snmp::SnmpVarBind> p3) { return call_method<"add", void>(p1, p2, p3); }
	void add(jni::ref<com::sun::jmx::snmp::agent::SnmpMibNode> p1, jint p2, jni::ref<com::sun::jmx::snmp::SnmpOid> p3, jni::ref<com::sun::jmx::snmp::SnmpVarBind> p4, jboolean p5) { return call_method<"add", void>(p1, p2, p3, p4, p5); }
	void add(jni::ref<com::sun::jmx::snmp::agent::SnmpMibNode> p1, jint p2, jni::ref<com::sun::jmx::snmp::SnmpOid> p3, jni::ref<com::sun::jmx::snmp::SnmpVarBind> p4, jboolean p5, jni::ref<com::sun::jmx::snmp::SnmpVarBind> p6) { return call_method<"add", void>(p1, p2, p3, p4, p5, p6); }

protected:

	SnmpRequestTree(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_AGENT_SNMPREQUESTTREE
