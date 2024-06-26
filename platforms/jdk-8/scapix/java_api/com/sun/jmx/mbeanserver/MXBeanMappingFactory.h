// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JMX_MBEANSERVER_MXBEANMAPPINGFACTORY_FWD
#define SCAPIX_JAVA_API_COM_SUN_JMX_MBEANSERVER_MXBEANMAPPINGFACTORY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::jmx::mbeanserver { class MXBeanMappingFactory; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::jmx::mbeanserver::MXBeanMappingFactory>
{
	static constexpr fixed_string class_name = "com/sun/jmx/mbeanserver/MXBeanMappingFactory";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_MBEANSERVER_MXBEANMAPPINGFACTORY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JMX_MBEANSERVER_MXBEANMAPPINGFACTORY)
#define SCAPIX_JAVA_API_COM_SUN_JMX_MBEANSERVER_MXBEANMAPPINGFACTORY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/jmx/mbeanserver/MXBeanMapping.h>
#include <scapix/java_api/java/lang/reflect/Type.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::jmx::mbeanserver::MXBeanMappingFactory : public jni::object_base<"com/sun/jmx/mbeanserver/MXBeanMappingFactory",
	java::lang::Object>
{
public:

	static jni::ref<com::sun::jmx::mbeanserver::MXBeanMappingFactory> DEFAULT() { return get_static_field<"DEFAULT", jni::ref<com::sun::jmx::mbeanserver::MXBeanMappingFactory>>(); }

	jni::ref<com::sun::jmx::mbeanserver::MXBeanMapping> mappingForType(jni::ref<java::lang::reflect::Type> p1, jni::ref<com::sun::jmx::mbeanserver::MXBeanMappingFactory> p2) { return call_method<"mappingForType", jni::ref<com::sun::jmx::mbeanserver::MXBeanMapping>>(p1, p2); }

protected:

	MXBeanMappingFactory(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_MBEANSERVER_MXBEANMAPPINGFACTORY
