// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/naming/spi/ObjectFactory.h>
#include <scapix/java_api/javax/naming/spi/InitialContextFactory.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JNDI_RMI_REGISTRY_REGISTRYCONTEXTFACTORY_FWD
#define SCAPIX_JAVA_API_COM_SUN_JNDI_RMI_REGISTRY_REGISTRYCONTEXTFACTORY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::jndi::rmi::registry { class RegistryContextFactory; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::jndi::rmi::registry::RegistryContextFactory>
{
	static constexpr fixed_string class_name = "com/sun/jndi/rmi/registry/RegistryContextFactory";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::javax::naming::spi::ObjectFactory, scapix::java_api::javax::naming::spi::InitialContextFactory>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JNDI_RMI_REGISTRY_REGISTRYCONTEXTFACTORY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JNDI_RMI_REGISTRY_REGISTRYCONTEXTFACTORY)
#define SCAPIX_JAVA_API_COM_SUN_JNDI_RMI_REGISTRY_REGISTRYCONTEXTFACTORY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Hashtable.h>
#include <scapix/java_api/javax/naming/Context.h>
#include <scapix/java_api/javax/naming/Name.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::jndi::rmi::registry::RegistryContextFactory : public jni::object_base<"com/sun/jndi/rmi/registry/RegistryContextFactory",
	java::lang::Object,
	javax::naming::spi::ObjectFactory,
	javax::naming::spi::InitialContextFactory>
{
public:

	static jni::ref<java::lang::String> ADDRESS_TYPE() { return get_static_field<"ADDRESS_TYPE", jni::ref<java::lang::String>>(); }

	static jni::ref<com::sun::jndi::rmi::registry::RegistryContextFactory> new_object() { return base_::new_object(); }
	jni::ref<javax::naming::Context> getInitialContext(jni::ref<java::util::Hashtable> p1) { return call_method<"getInitialContext", jni::ref<javax::naming::Context>>(p1); }
	jni::ref<java::lang::Object> getObjectInstance(jni::ref<java::lang::Object> p1, jni::ref<javax::naming::Name> p2, jni::ref<javax::naming::Context> p3, jni::ref<java::util::Hashtable> p4) { return call_method<"getObjectInstance", jni::ref<java::lang::Object>>(p1, p2, p3, p4); }

protected:

	RegistryContextFactory(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JNDI_RMI_REGISTRY_REGISTRYCONTEXTFACTORY
