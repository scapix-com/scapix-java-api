// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/jmx/mbeanserver/MXBeanProxy_Handler.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JMX_MBEANSERVER_MXBEANPROXY_INVOKEHANDLER_FWD
#define SCAPIX_JAVA_API_COM_SUN_JMX_MBEANSERVER_MXBEANPROXY_INVOKEHANDLER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::jmx::mbeanserver { class MXBeanProxy_InvokeHandler; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::jmx::mbeanserver::MXBeanProxy_InvokeHandler>
{
	static constexpr fixed_string class_name = "com/sun/jmx/mbeanserver/MXBeanProxy$InvokeHandler";
	using base_classes = std::tuple<scapix::java_api::com::sun::jmx::mbeanserver::MXBeanProxy_Handler>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_MBEANSERVER_MXBEANPROXY_INVOKEHANDLER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JMX_MBEANSERVER_MXBEANPROXY_INVOKEHANDLER)
#define SCAPIX_JAVA_API_COM_SUN_JMX_MBEANSERVER_MXBEANPROXY_INVOKEHANDLER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::jmx::mbeanserver::MXBeanProxy_InvokeHandler : public jni::object_base<"com/sun/jmx/mbeanserver/MXBeanProxy$InvokeHandler",
	com::sun::jmx::mbeanserver::MXBeanProxy_Handler>
{
public:


protected:

	MXBeanProxy_InvokeHandler(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_MBEANSERVER_MXBEANPROXY_INVOKEHANDLER
