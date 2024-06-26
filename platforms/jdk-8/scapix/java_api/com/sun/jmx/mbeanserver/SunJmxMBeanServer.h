// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/management/MBeanServer.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JMX_MBEANSERVER_SUNJMXMBEANSERVER_FWD
#define SCAPIX_JAVA_API_COM_SUN_JMX_MBEANSERVER_SUNJMXMBEANSERVER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::jmx::mbeanserver { class SunJmxMBeanServer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::jmx::mbeanserver::SunJmxMBeanServer>
{
	static constexpr fixed_string class_name = "com/sun/jmx/mbeanserver/SunJmxMBeanServer";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::javax::management::MBeanServer>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_MBEANSERVER_SUNJMXMBEANSERVER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JMX_MBEANSERVER_SUNJMXMBEANSERVER)
#define SCAPIX_JAVA_API_COM_SUN_JMX_MBEANSERVER_SUNJMXMBEANSERVER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/jmx/mbeanserver/MBeanInstantiator.h>
#include <scapix/java_api/javax/management/MBeanServerDelegate.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::jmx::mbeanserver::SunJmxMBeanServer : public jni::object_base<"com/sun/jmx/mbeanserver/SunJmxMBeanServer",
	java::lang::Object,
	javax::management::MBeanServer>
{
public:

	jni::ref<com::sun::jmx::mbeanserver::MBeanInstantiator> getMBeanInstantiator() { return call_method<"getMBeanInstantiator", jni::ref<com::sun::jmx::mbeanserver::MBeanInstantiator>>(); }
	jboolean interceptorsEnabled() { return call_method<"interceptorsEnabled", jboolean>(); }
	jni::ref<javax::management::MBeanServer> getMBeanServerInterceptor() { return call_method<"getMBeanServerInterceptor", jni::ref<javax::management::MBeanServer>>(); }
	void setMBeanServerInterceptor(jni::ref<javax::management::MBeanServer> p1) { return call_method<"setMBeanServerInterceptor", void>(p1); }
	jni::ref<javax::management::MBeanServerDelegate> getMBeanServerDelegate() { return call_method<"getMBeanServerDelegate", jni::ref<javax::management::MBeanServerDelegate>>(); }

protected:

	SunJmxMBeanServer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_MBEANSERVER_SUNJMXMBEANSERVER
