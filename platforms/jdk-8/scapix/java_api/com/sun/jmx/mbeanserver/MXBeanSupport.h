// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/jmx/mbeanserver/MBeanSupport.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JMX_MBEANSERVER_MXBEANSUPPORT_FWD
#define SCAPIX_JAVA_API_COM_SUN_JMX_MBEANSERVER_MXBEANSUPPORT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::jmx::mbeanserver { class MXBeanSupport; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::jmx::mbeanserver::MXBeanSupport>
{
	static constexpr fixed_string class_name = "com/sun/jmx/mbeanserver/MXBeanSupport";
	using base_classes = std::tuple<scapix::java_api::com::sun::jmx::mbeanserver::MBeanSupport>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_MBEANSERVER_MXBEANSUPPORT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JMX_MBEANSERVER_MXBEANSUPPORT)
#define SCAPIX_JAVA_API_COM_SUN_JMX_MBEANSERVER_MXBEANSUPPORT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/management/MBeanServer.h>
#include <scapix/java_api/javax/management/ObjectName.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::jmx::mbeanserver::MXBeanSupport : public jni::object_base<"com/sun/jmx/mbeanserver/MXBeanSupport",
	com::sun::jmx::mbeanserver::MBeanSupport>
{
public:

	static jni::ref<com::sun::jmx::mbeanserver::MXBeanSupport> new_object(jni::ref<java::lang::Object> p1, jni::ref<java::lang::Class> p2) { return base_::new_object(p1, p2); }
	void register_(jni::ref<javax::management::MBeanServer> p1, jni::ref<javax::management::ObjectName> p2) { return call_method<"register", void>(p1, p2); }
	void unregister() { return call_method<"unregister", void>(); }

protected:

	MXBeanSupport(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_MBEANSERVER_MXBEANSUPPORT
