// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JMX_MBEANSERVER_INTROSPECTOR_BEANSHELPER_FWD
#define SCAPIX_JAVA_API_COM_SUN_JMX_MBEANSERVER_INTROSPECTOR_BEANSHELPER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::jmx::mbeanserver { class Introspector_BeansHelper; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::jmx::mbeanserver::Introspector_BeansHelper>
{
	static constexpr fixed_string class_name = "com/sun/jmx/mbeanserver/Introspector$BeansHelper";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_MBEANSERVER_INTROSPECTOR_BEANSHELPER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JMX_MBEANSERVER_INTROSPECTOR_BEANSHELPER)
#define SCAPIX_JAVA_API_COM_SUN_JMX_MBEANSERVER_INTROSPECTOR_BEANSHELPER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::jmx::mbeanserver::Introspector_BeansHelper : public jni::object_base<"com/sun/jmx/mbeanserver/Introspector$BeansHelper",
	java::lang::Object>
{
public:


protected:

	Introspector_BeansHelper(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_MBEANSERVER_INTROSPECTOR_BEANSHELPER
