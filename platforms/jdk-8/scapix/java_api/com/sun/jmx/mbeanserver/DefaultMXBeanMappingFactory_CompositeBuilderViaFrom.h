// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/jmx/mbeanserver/DefaultMXBeanMappingFactory_CompositeBuilder.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JMX_MBEANSERVER_DEFAULTMXBEANMAPPINGFACTORY_COMPOSITEBUILDERVIAFROM_FWD
#define SCAPIX_JAVA_API_COM_SUN_JMX_MBEANSERVER_DEFAULTMXBEANMAPPINGFACTORY_COMPOSITEBUILDERVIAFROM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::jmx::mbeanserver { class DefaultMXBeanMappingFactory_CompositeBuilderViaFrom; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::jmx::mbeanserver::DefaultMXBeanMappingFactory_CompositeBuilderViaFrom>
{
	static constexpr fixed_string class_name = "com/sun/jmx/mbeanserver/DefaultMXBeanMappingFactory$CompositeBuilderViaFrom";
	using base_classes = std::tuple<scapix::java_api::com::sun::jmx::mbeanserver::DefaultMXBeanMappingFactory_CompositeBuilder>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_MBEANSERVER_DEFAULTMXBEANMAPPINGFACTORY_COMPOSITEBUILDERVIAFROM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JMX_MBEANSERVER_DEFAULTMXBEANMAPPINGFACTORY_COMPOSITEBUILDERVIAFROM)
#define SCAPIX_JAVA_API_COM_SUN_JMX_MBEANSERVER_DEFAULTMXBEANMAPPINGFACTORY_COMPOSITEBUILDERVIAFROM

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::jmx::mbeanserver::DefaultMXBeanMappingFactory_CompositeBuilderViaFrom : public jni::object_base<"com/sun/jmx/mbeanserver/DefaultMXBeanMappingFactory$CompositeBuilderViaFrom",
	com::sun::jmx::mbeanserver::DefaultMXBeanMappingFactory_CompositeBuilder>
{
public:


protected:

	DefaultMXBeanMappingFactory_CompositeBuilderViaFrom(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_MBEANSERVER_DEFAULTMXBEANMAPPINGFACTORY_COMPOSITEBUILDERVIAFROM