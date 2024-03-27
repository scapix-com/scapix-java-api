// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/com/sun/jmx/snmp/agent/SnmpTableEntryFactory.h>
#include <scapix/java_api/com/sun/jmx/snmp/agent/SnmpTableCallbackHandler.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_AGENT_SNMPTABLESUPPORT_FWD
#define SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_AGENT_SNMPTABLESUPPORT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::jmx::snmp::agent { class SnmpTableSupport; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::jmx::snmp::agent::SnmpTableSupport>
{
	static constexpr fixed_string class_name = "com/sun/jmx/snmp/agent/SnmpTableSupport";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::com::sun::jmx::snmp::agent::SnmpTableEntryFactory, scapix::java_api::com::sun::jmx::snmp::agent::SnmpTableCallbackHandler, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_AGENT_SNMPTABLESUPPORT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_AGENT_SNMPTABLESUPPORT)
#define SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_AGENT_SNMPTABLESUPPORT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/jmx/snmp/SnmpOid.h>
#include <scapix/java_api/com/sun/jmx/snmp/agent/SnmpIndex.h>
#include <scapix/java_api/com/sun/jmx/snmp/agent/SnmpMibSubRequest.h>
#include <scapix/java_api/com/sun/jmx/snmp/agent/SnmpMibTable.h>
#include <scapix/java_api/javax/management/MBeanNotificationInfo.h>
#include <scapix/java_api/javax/management/NotificationFilter.h>
#include <scapix/java_api/javax/management/NotificationListener.h>
#include <scapix/java_api/javax/management/ObjectName.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::jmx::snmp::agent::SnmpTableSupport : public jni::object_base<"com/sun/jmx/snmp/agent/SnmpTableSupport",
	java::lang::Object,
	com::sun::jmx::snmp::agent::SnmpTableEntryFactory,
	com::sun::jmx::snmp::agent::SnmpTableCallbackHandler,
	java::io::Serializable>
{
public:

	void createNewEntry(jni::ref<com::sun::jmx::snmp::agent::SnmpMibSubRequest> p1, jni::ref<com::sun::jmx::snmp::SnmpOid> p2, jint p3, jni::ref<com::sun::jmx::snmp::agent::SnmpMibTable> p4) { return call_method<"createNewEntry", void>(p1, p2, p3, p4); }
	jni::ref<java::lang::Object> getEntry(jint p1) { return call_method<"getEntry", jni::ref<java::lang::Object>>(p1); }
	jint getSize() { return call_method<"getSize", jint>(); }
	void setCreationEnabled(jboolean p1) { return call_method<"setCreationEnabled", void>(p1); }
	jboolean isCreationEnabled() { return call_method<"isCreationEnabled", jboolean>(); }
	jboolean isRegistrationRequired() { return call_method<"isRegistrationRequired", jboolean>(); }
	jni::ref<com::sun::jmx::snmp::agent::SnmpIndex> buildSnmpIndex(jni::ref<com::sun::jmx::snmp::SnmpOid> p1) { return call_method<"buildSnmpIndex", jni::ref<com::sun::jmx::snmp::agent::SnmpIndex>>(p1); }
	jni::ref<com::sun::jmx::snmp::SnmpOid> buildOidFromIndex(jni::ref<com::sun::jmx::snmp::agent::SnmpIndex> p1) { return call_method<"buildOidFromIndex", jni::ref<com::sun::jmx::snmp::SnmpOid>>(p1); }
	jni::ref<javax::management::ObjectName> buildNameFromIndex(jni::ref<com::sun::jmx::snmp::agent::SnmpIndex> p1) { return call_method<"buildNameFromIndex", jni::ref<javax::management::ObjectName>>(p1); }
	void addEntryCb(jint p1, jni::ref<com::sun::jmx::snmp::SnmpOid> p2, jni::ref<javax::management::ObjectName> p3, jni::ref<java::lang::Object> p4, jni::ref<com::sun::jmx::snmp::agent::SnmpMibTable> p5) { return call_method<"addEntryCb", void>(p1, p2, p3, p4, p5); }
	void removeEntryCb(jint p1, jni::ref<com::sun::jmx::snmp::SnmpOid> p2, jni::ref<javax::management::ObjectName> p3, jni::ref<java::lang::Object> p4, jni::ref<com::sun::jmx::snmp::agent::SnmpMibTable> p5) { return call_method<"removeEntryCb", void>(p1, p2, p3, p4, p5); }
	void addNotificationListener(jni::ref<javax::management::NotificationListener> p1, jni::ref<javax::management::NotificationFilter> p2, jni::ref<java::lang::Object> p3) { return call_method<"addNotificationListener", void>(p1, p2, p3); }
	void removeNotificationListener(jni::ref<javax::management::NotificationListener> p1) { return call_method<"removeNotificationListener", void>(p1); }
	jni::ref<jni::array<javax::management::MBeanNotificationInfo>> getNotificationInfo() { return call_method<"getNotificationInfo", jni::ref<jni::array<javax::management::MBeanNotificationInfo>>>(); }

protected:

	SnmpTableSupport(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_AGENT_SNMPTABLESUPPORT
