// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/com/sun/jmx/interceptor/MBeanServerInterceptor.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JMX_INTERCEPTOR_DEFAULTMBEANSERVERINTERCEPTOR_FWD
#define SCAPIX_JAVA_API_COM_SUN_JMX_INTERCEPTOR_DEFAULTMBEANSERVERINTERCEPTOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::jmx::interceptor { class DefaultMBeanServerInterceptor; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::jmx::interceptor::DefaultMBeanServerInterceptor>
{
	static constexpr fixed_string class_name = "com/sun/jmx/interceptor/DefaultMBeanServerInterceptor";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::com::sun::jmx::interceptor::MBeanServerInterceptor>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_INTERCEPTOR_DEFAULTMBEANSERVERINTERCEPTOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JMX_INTERCEPTOR_DEFAULTMBEANSERVERINTERCEPTOR)
#define SCAPIX_JAVA_API_COM_SUN_JMX_INTERCEPTOR_DEFAULTMBEANSERVERINTERCEPTOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/jmx/mbeanserver/MBeanInstantiator.h>
#include <scapix/java_api/com/sun/jmx/mbeanserver/Repository.h>
#include <scapix/java_api/java/io/ObjectInputStream.h>
#include <scapix/java_api/java/lang/ClassLoader.h>
#include <scapix/java_api/java/lang/Integer.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Set.h>
#include <scapix/java_api/javax/management/Attribute.h>
#include <scapix/java_api/javax/management/AttributeList.h>
#include <scapix/java_api/javax/management/MBeanInfo.h>
#include <scapix/java_api/javax/management/MBeanServer.h>
#include <scapix/java_api/javax/management/MBeanServerDelegate.h>
#include <scapix/java_api/javax/management/NotificationFilter.h>
#include <scapix/java_api/javax/management/NotificationListener.h>
#include <scapix/java_api/javax/management/ObjectInstance.h>
#include <scapix/java_api/javax/management/ObjectName.h>
#include <scapix/java_api/javax/management/QueryExp.h>
#include <scapix/java_api/javax/management/loading/ClassLoaderRepository.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::jmx::interceptor::DefaultMBeanServerInterceptor : public jni::object_base<"com/sun/jmx/interceptor/DefaultMBeanServerInterceptor",
	java::lang::Object,
	com::sun::jmx::interceptor::MBeanServerInterceptor>
{
public:

	static jni::ref<com::sun::jmx::interceptor::DefaultMBeanServerInterceptor> new_object(jni::ref<javax::management::MBeanServer> p1, jni::ref<javax::management::MBeanServerDelegate> p2, jni::ref<com::sun::jmx::mbeanserver::MBeanInstantiator> p3, jni::ref<com::sun::jmx::mbeanserver::Repository> p4) { return base_::new_object(p1, p2, p3, p4); }
	jni::ref<javax::management::ObjectInstance> createMBean(jni::ref<java::lang::String> p1, jni::ref<javax::management::ObjectName> p2) { return call_method<"createMBean", jni::ref<javax::management::ObjectInstance>>(p1, p2); }
	jni::ref<javax::management::ObjectInstance> createMBean(jni::ref<java::lang::String> p1, jni::ref<javax::management::ObjectName> p2, jni::ref<javax::management::ObjectName> p3) { return call_method<"createMBean", jni::ref<javax::management::ObjectInstance>>(p1, p2, p3); }
	jni::ref<javax::management::ObjectInstance> createMBean(jni::ref<java::lang::String> p1, jni::ref<javax::management::ObjectName> p2, jni::ref<jni::array<java::lang::Object>> p3, jni::ref<jni::array<java::lang::String>> p4) { return call_method<"createMBean", jni::ref<javax::management::ObjectInstance>>(p1, p2, p3, p4); }
	jni::ref<javax::management::ObjectInstance> createMBean(jni::ref<java::lang::String> p1, jni::ref<javax::management::ObjectName> p2, jni::ref<javax::management::ObjectName> p3, jni::ref<jni::array<java::lang::Object>> p4, jni::ref<jni::array<java::lang::String>> p5) { return call_method<"createMBean", jni::ref<javax::management::ObjectInstance>>(p1, p2, p3, p4, p5); }
	jni::ref<javax::management::ObjectInstance> registerMBean(jni::ref<java::lang::Object> p1, jni::ref<javax::management::ObjectName> p2) { return call_method<"registerMBean", jni::ref<javax::management::ObjectInstance>>(p1, p2); }
	void unregisterMBean(jni::ref<javax::management::ObjectName> p1) { return call_method<"unregisterMBean", void>(p1); }
	jni::ref<javax::management::ObjectInstance> getObjectInstance(jni::ref<javax::management::ObjectName> p1) { return call_method<"getObjectInstance", jni::ref<javax::management::ObjectInstance>>(p1); }
	jni::ref<java::util::Set> queryMBeans(jni::ref<javax::management::ObjectName> p1, jni::ref<javax::management::QueryExp> p2) { return call_method<"queryMBeans", jni::ref<java::util::Set>>(p1, p2); }
	jni::ref<java::util::Set> queryNames(jni::ref<javax::management::ObjectName> p1, jni::ref<javax::management::QueryExp> p2) { return call_method<"queryNames", jni::ref<java::util::Set>>(p1, p2); }
	jboolean isRegistered(jni::ref<javax::management::ObjectName> p1) { return call_method<"isRegistered", jboolean>(p1); }
	jni::ref<jni::array<java::lang::String>> getDomains() { return call_method<"getDomains", jni::ref<jni::array<java::lang::String>>>(); }
	jni::ref<java::lang::Integer> getMBeanCount() { return call_method<"getMBeanCount", jni::ref<java::lang::Integer>>(); }
	jni::ref<java::lang::Object> getAttribute(jni::ref<javax::management::ObjectName> p1, jni::ref<java::lang::String> p2) { return call_method<"getAttribute", jni::ref<java::lang::Object>>(p1, p2); }
	jni::ref<javax::management::AttributeList> getAttributes(jni::ref<javax::management::ObjectName> p1, jni::ref<jni::array<java::lang::String>> p2) { return call_method<"getAttributes", jni::ref<javax::management::AttributeList>>(p1, p2); }
	void setAttribute(jni::ref<javax::management::ObjectName> p1, jni::ref<javax::management::Attribute> p2) { return call_method<"setAttribute", void>(p1, p2); }
	jni::ref<javax::management::AttributeList> setAttributes(jni::ref<javax::management::ObjectName> p1, jni::ref<javax::management::AttributeList> p2) { return call_method<"setAttributes", jni::ref<javax::management::AttributeList>>(p1, p2); }
	jni::ref<java::lang::Object> invoke(jni::ref<javax::management::ObjectName> p1, jni::ref<java::lang::String> p2, jni::ref<jni::array<java::lang::Object>> p3, jni::ref<jni::array<java::lang::String>> p4) { return call_method<"invoke", jni::ref<java::lang::Object>>(p1, p2, p3, p4); }
	jni::ref<java::lang::String> getDefaultDomain() { return call_method<"getDefaultDomain", jni::ref<java::lang::String>>(); }
	void addNotificationListener(jni::ref<javax::management::ObjectName> p1, jni::ref<javax::management::NotificationListener> p2, jni::ref<javax::management::NotificationFilter> p3, jni::ref<java::lang::Object> p4) { return call_method<"addNotificationListener", void>(p1, p2, p3, p4); }
	void addNotificationListener(jni::ref<javax::management::ObjectName> p1, jni::ref<javax::management::ObjectName> p2, jni::ref<javax::management::NotificationFilter> p3, jni::ref<java::lang::Object> p4) { return call_method<"addNotificationListener", void>(p1, p2, p3, p4); }
	void removeNotificationListener(jni::ref<javax::management::ObjectName> p1, jni::ref<javax::management::NotificationListener> p2) { return call_method<"removeNotificationListener", void>(p1, p2); }
	void removeNotificationListener(jni::ref<javax::management::ObjectName> p1, jni::ref<javax::management::NotificationListener> p2, jni::ref<javax::management::NotificationFilter> p3, jni::ref<java::lang::Object> p4) { return call_method<"removeNotificationListener", void>(p1, p2, p3, p4); }
	void removeNotificationListener(jni::ref<javax::management::ObjectName> p1, jni::ref<javax::management::ObjectName> p2) { return call_method<"removeNotificationListener", void>(p1, p2); }
	void removeNotificationListener(jni::ref<javax::management::ObjectName> p1, jni::ref<javax::management::ObjectName> p2, jni::ref<javax::management::NotificationFilter> p3, jni::ref<java::lang::Object> p4) { return call_method<"removeNotificationListener", void>(p1, p2, p3, p4); }
	jni::ref<javax::management::MBeanInfo> getMBeanInfo(jni::ref<javax::management::ObjectName> p1) { return call_method<"getMBeanInfo", jni::ref<javax::management::MBeanInfo>>(p1); }
	jboolean isInstanceOf(jni::ref<javax::management::ObjectName> p1, jni::ref<java::lang::String> p2) { return call_method<"isInstanceOf", jboolean>(p1, p2); }
	jni::ref<java::lang::ClassLoader> getClassLoaderFor(jni::ref<javax::management::ObjectName> p1) { return call_method<"getClassLoaderFor", jni::ref<java::lang::ClassLoader>>(p1); }
	jni::ref<java::lang::ClassLoader> getClassLoader(jni::ref<javax::management::ObjectName> p1) { return call_method<"getClassLoader", jni::ref<java::lang::ClassLoader>>(p1); }
	jni::ref<java::lang::Object> instantiate(jni::ref<java::lang::String> p1) { return call_method<"instantiate", jni::ref<java::lang::Object>>(p1); }
	jni::ref<java::lang::Object> instantiate(jni::ref<java::lang::String> p1, jni::ref<javax::management::ObjectName> p2) { return call_method<"instantiate", jni::ref<java::lang::Object>>(p1, p2); }
	jni::ref<java::lang::Object> instantiate(jni::ref<java::lang::String> p1, jni::ref<jni::array<java::lang::Object>> p2, jni::ref<jni::array<java::lang::String>> p3) { return call_method<"instantiate", jni::ref<java::lang::Object>>(p1, p2, p3); }
	jni::ref<java::lang::Object> instantiate(jni::ref<java::lang::String> p1, jni::ref<javax::management::ObjectName> p2, jni::ref<jni::array<java::lang::Object>> p3, jni::ref<jni::array<java::lang::String>> p4) { return call_method<"instantiate", jni::ref<java::lang::Object>>(p1, p2, p3, p4); }
	jni::ref<java::io::ObjectInputStream> deserialize(jni::ref<javax::management::ObjectName> p1, jni::ref<jni::array<jbyte>> p2) { return call_method<"deserialize", jni::ref<java::io::ObjectInputStream>>(p1, p2); }
	jni::ref<java::io::ObjectInputStream> deserialize(jni::ref<java::lang::String> p1, jni::ref<jni::array<jbyte>> p2) { return call_method<"deserialize", jni::ref<java::io::ObjectInputStream>>(p1, p2); }
	jni::ref<java::io::ObjectInputStream> deserialize(jni::ref<java::lang::String> p1, jni::ref<javax::management::ObjectName> p2, jni::ref<jni::array<jbyte>> p3) { return call_method<"deserialize", jni::ref<java::io::ObjectInputStream>>(p1, p2, p3); }
	jni::ref<javax::management::loading::ClassLoaderRepository> getClassLoaderRepository() { return call_method<"getClassLoaderRepository", jni::ref<javax::management::loading::ClassLoaderRepository>>(); }

protected:

	DefaultMBeanServerInterceptor(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_INTERCEPTOR_DEFAULTMBEANSERVERINTERCEPTOR