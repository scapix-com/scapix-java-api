// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/management/DynamicMBean.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JMX_MBEANSERVER_DYNAMICMBEAN2_FWD
#define SCAPIX_JAVA_API_COM_SUN_JMX_MBEANSERVER_DYNAMICMBEAN2_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::jmx::mbeanserver { class DynamicMBean2; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::jmx::mbeanserver::DynamicMBean2>
{
	static constexpr fixed_string class_name = "com/sun/jmx/mbeanserver/DynamicMBean2";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::javax::management::DynamicMBean>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_MBEANSERVER_DYNAMICMBEAN2_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JMX_MBEANSERVER_DYNAMICMBEAN2)
#define SCAPIX_JAVA_API_COM_SUN_JMX_MBEANSERVER_DYNAMICMBEAN2

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/management/MBeanServer.h>
#include <scapix/java_api/javax/management/ObjectName.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::jmx::mbeanserver::DynamicMBean2 : public jni::object_base<"com/sun/jmx/mbeanserver/DynamicMBean2",
	java::lang::Object,
	javax::management::DynamicMBean>
{
public:

	jni::ref<java::lang::Object> getResource() { return call_method<"getResource", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::String> getClassName() { return call_method<"getClassName", jni::ref<java::lang::String>>(); }
	void preRegister2(jni::ref<javax::management::MBeanServer> p1, jni::ref<javax::management::ObjectName> p2) { return call_method<"preRegister2", void>(p1, p2); }
	void registerFailed() { return call_method<"registerFailed", void>(); }

protected:

	DynamicMBean2(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_MBEANSERVER_DYNAMICMBEAN2
