// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/jmx/remote/security/MBeanServerAccessController.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JMX_REMOTE_SECURITY_MBEANSERVERFILEACCESSCONTROLLER_FWD
#define SCAPIX_JAVA_API_COM_SUN_JMX_REMOTE_SECURITY_MBEANSERVERFILEACCESSCONTROLLER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::jmx::remote::security { class MBeanServerFileAccessController; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::jmx::remote::security::MBeanServerFileAccessController>
{
	static constexpr fixed_string class_name = "com/sun/jmx/remote/security/MBeanServerFileAccessController";
	using base_classes = std::tuple<scapix::java_api::com::sun::jmx::remote::security::MBeanServerAccessController>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_REMOTE_SECURITY_MBEANSERVERFILEACCESSCONTROLLER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JMX_REMOTE_SECURITY_MBEANSERVERFILEACCESSCONTROLLER)
#define SCAPIX_JAVA_API_COM_SUN_JMX_REMOTE_SECURITY_MBEANSERVERFILEACCESSCONTROLLER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Properties.h>
#include <scapix/java_api/javax/management/MBeanServer.h>
#include <scapix/java_api/javax/management/ObjectName.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::jmx::remote::security::MBeanServerFileAccessController : public jni::object_base<"com/sun/jmx/remote/security/MBeanServerFileAccessController",
	com::sun::jmx::remote::security::MBeanServerAccessController>
{
public:

	static jni::ref<com::sun::jmx::remote::security::MBeanServerFileAccessController> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }
	static jni::ref<com::sun::jmx::remote::security::MBeanServerFileAccessController> new_object(jni::ref<java::lang::String> p1, jni::ref<javax::management::MBeanServer> p2) { return base_::new_object(p1, p2); }
	static jni::ref<com::sun::jmx::remote::security::MBeanServerFileAccessController> new_object(jni::ref<java::util::Properties> p1) { return base_::new_object(p1); }
	static jni::ref<com::sun::jmx::remote::security::MBeanServerFileAccessController> new_object(jni::ref<java::util::Properties> p1, jni::ref<javax::management::MBeanServer> p2) { return base_::new_object(p1, p2); }
	void checkRead() { return call_method<"checkRead", void>(); }
	void checkWrite() { return call_method<"checkWrite", void>(); }
	void checkCreate(jni::ref<java::lang::String> p1) { return call_method<"checkCreate", void>(p1); }
	void checkUnregister(jni::ref<javax::management::ObjectName> p1) { return call_method<"checkUnregister", void>(p1); }
	void refresh() { return call_method<"refresh", void>(); }

protected:

	MBeanServerFileAccessController(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_REMOTE_SECURITY_MBEANSERVERFILEACCESSCONTROLLER
