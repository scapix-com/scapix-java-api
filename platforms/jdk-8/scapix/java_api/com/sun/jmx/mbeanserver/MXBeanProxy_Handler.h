// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JMX_MBEANSERVER_MXBEANPROXY_HANDLER_FWD
#define SCAPIX_JAVA_API_COM_SUN_JMX_MBEANSERVER_MXBEANPROXY_HANDLER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::jmx::mbeanserver { class MXBeanProxy_Handler; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::jmx::mbeanserver::MXBeanProxy_Handler>
{
	static constexpr fixed_string class_name = "com/sun/jmx/mbeanserver/MXBeanProxy$Handler";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_MBEANSERVER_MXBEANPROXY_HANDLER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JMX_MBEANSERVER_MXBEANPROXY_HANDLER)
#define SCAPIX_JAVA_API_COM_SUN_JMX_MBEANSERVER_MXBEANPROXY_HANDLER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::jmx::mbeanserver::MXBeanProxy_Handler : public jni::object_base<"com/sun/jmx/mbeanserver/MXBeanProxy$Handler",
	java::lang::Object>
{
public:


protected:

	MXBeanProxy_Handler(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_MBEANSERVER_MXBEANPROXY_HANDLER
