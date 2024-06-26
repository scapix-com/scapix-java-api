// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/com/sun/jmx/mbeanserver/DynamicMBean2.h>
#include <scapix/java_api/javax/management/MBeanRegistration.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JMX_MBEANSERVER_MBEANSUPPORT_FWD
#define SCAPIX_JAVA_API_COM_SUN_JMX_MBEANSERVER_MBEANSUPPORT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::jmx::mbeanserver { class MBeanSupport; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::jmx::mbeanserver::MBeanSupport>
{
	static constexpr fixed_string class_name = "com/sun/jmx/mbeanserver/MBeanSupport";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::com::sun::jmx::mbeanserver::DynamicMBean2, scapix::java_api::javax::management::MBeanRegistration>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_MBEANSERVER_MBEANSUPPORT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JMX_MBEANSERVER_MBEANSUPPORT)
#define SCAPIX_JAVA_API_COM_SUN_JMX_MBEANSERVER_MBEANSUPPORT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Boolean.h>
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/management/Attribute.h>
#include <scapix/java_api/javax/management/AttributeList.h>
#include <scapix/java_api/javax/management/MBeanInfo.h>
#include <scapix/java_api/javax/management/MBeanServer.h>
#include <scapix/java_api/javax/management/ObjectName.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::jmx::mbeanserver::MBeanSupport : public jni::object_base<"com/sun/jmx/mbeanserver/MBeanSupport",
	java::lang::Object,
	com::sun::jmx::mbeanserver::DynamicMBean2,
	javax::management::MBeanRegistration>
{
public:

	jboolean isMXBean() { return call_method<"isMXBean", jboolean>(); }
	void register_(jni::ref<javax::management::MBeanServer> p1, jni::ref<javax::management::ObjectName> p2) { return call_method<"register", void>(p1, p2); }
	void unregister() { return call_method<"unregister", void>(); }
	jni::ref<javax::management::ObjectName> preRegister(jni::ref<javax::management::MBeanServer> p1, jni::ref<javax::management::ObjectName> p2) { return call_method<"preRegister", jni::ref<javax::management::ObjectName>>(p1, p2); }
	void preRegister2(jni::ref<javax::management::MBeanServer> p1, jni::ref<javax::management::ObjectName> p2) { return call_method<"preRegister2", void>(p1, p2); }
	void registerFailed() { return call_method<"registerFailed", void>(); }
	void postRegister(jni::ref<java::lang::Boolean> p1) { return call_method<"postRegister", void>(p1); }
	void preDeregister() { return call_method<"preDeregister", void>(); }
	void postDeregister() { return call_method<"postDeregister", void>(); }
	jni::ref<java::lang::Object> getAttribute(jni::ref<java::lang::String> p1) { return call_method<"getAttribute", jni::ref<java::lang::Object>>(p1); }
	jni::ref<javax::management::AttributeList> getAttributes(jni::ref<jni::array<java::lang::String>> p1) { return call_method<"getAttributes", jni::ref<javax::management::AttributeList>>(p1); }
	void setAttribute(jni::ref<javax::management::Attribute> p1) { return call_method<"setAttribute", void>(p1); }
	jni::ref<javax::management::AttributeList> setAttributes(jni::ref<javax::management::AttributeList> p1) { return call_method<"setAttributes", jni::ref<javax::management::AttributeList>>(p1); }
	jni::ref<java::lang::Object> invoke(jni::ref<java::lang::String> p1, jni::ref<jni::array<java::lang::Object>> p2, jni::ref<jni::array<java::lang::String>> p3) { return call_method<"invoke", jni::ref<java::lang::Object>>(p1, p2, p3); }
	jni::ref<javax::management::MBeanInfo> getMBeanInfo() { return call_method<"getMBeanInfo", jni::ref<javax::management::MBeanInfo>>(); }
	jni::ref<java::lang::String> getClassName() { return call_method<"getClassName", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::Object> getResource() { return call_method<"getResource", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::Class> getMBeanInterface() { return call_method<"getMBeanInterface", jni::ref<java::lang::Class>>(); }

protected:

	MBeanSupport(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_MBEANSERVER_MBEANSUPPORT
