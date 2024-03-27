// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/jmx/mbeanserver/MXBeanMapping.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JMX_MBEANSERVER_DEFAULTMXBEANMAPPINGFACTORY_NONNULLMXBEANMAPPING_FWD
#define SCAPIX_JAVA_API_COM_SUN_JMX_MBEANSERVER_DEFAULTMXBEANMAPPINGFACTORY_NONNULLMXBEANMAPPING_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::jmx::mbeanserver { class DefaultMXBeanMappingFactory_NonNullMXBeanMapping; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::jmx::mbeanserver::DefaultMXBeanMappingFactory_NonNullMXBeanMapping>
{
	static constexpr fixed_string class_name = "com/sun/jmx/mbeanserver/DefaultMXBeanMappingFactory$NonNullMXBeanMapping";
	using base_classes = std::tuple<scapix::java_api::com::sun::jmx::mbeanserver::MXBeanMapping>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_MBEANSERVER_DEFAULTMXBEANMAPPINGFACTORY_NONNULLMXBEANMAPPING_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JMX_MBEANSERVER_DEFAULTMXBEANMAPPINGFACTORY_NONNULLMXBEANMAPPING)
#define SCAPIX_JAVA_API_COM_SUN_JMX_MBEANSERVER_DEFAULTMXBEANMAPPINGFACTORY_NONNULLMXBEANMAPPING

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::jmx::mbeanserver::DefaultMXBeanMappingFactory_NonNullMXBeanMapping : public jni::object_base<"com/sun/jmx/mbeanserver/DefaultMXBeanMappingFactory$NonNullMXBeanMapping",
	com::sun::jmx::mbeanserver::MXBeanMapping>
{
public:

	jni::ref<java::lang::Object> fromOpenValue(jni::ref<java::lang::Object> p1) { return call_method<"fromOpenValue", jni::ref<java::lang::Object>>(p1); }
	jni::ref<java::lang::Object> toOpenValue(jni::ref<java::lang::Object> p1) { return call_method<"toOpenValue", jni::ref<java::lang::Object>>(p1); }

protected:

	DefaultMXBeanMappingFactory_NonNullMXBeanMapping(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_MBEANSERVER_DEFAULTMXBEANMAPPINGFACTORY_NONNULLMXBEANMAPPING
