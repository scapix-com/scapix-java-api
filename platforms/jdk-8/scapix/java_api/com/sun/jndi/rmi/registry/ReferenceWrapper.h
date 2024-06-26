// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/rmi/server/UnicastRemoteObject.h>
#include <scapix/java_api/com/sun/jndi/rmi/registry/RemoteReference.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JNDI_RMI_REGISTRY_REFERENCEWRAPPER_FWD
#define SCAPIX_JAVA_API_COM_SUN_JNDI_RMI_REGISTRY_REFERENCEWRAPPER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::jndi::rmi::registry { class ReferenceWrapper; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::jndi::rmi::registry::ReferenceWrapper>
{
	static constexpr fixed_string class_name = "com/sun/jndi/rmi/registry/ReferenceWrapper";
	using base_classes = std::tuple<scapix::java_api::java::rmi::server::UnicastRemoteObject, scapix::java_api::com::sun::jndi::rmi::registry::RemoteReference>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JNDI_RMI_REGISTRY_REFERENCEWRAPPER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JNDI_RMI_REGISTRY_REFERENCEWRAPPER)
#define SCAPIX_JAVA_API_COM_SUN_JNDI_RMI_REGISTRY_REFERENCEWRAPPER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/naming/Reference.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::jndi::rmi::registry::ReferenceWrapper : public jni::object_base<"com/sun/jndi/rmi/registry/ReferenceWrapper",
	java::rmi::server::UnicastRemoteObject,
	com::sun::jndi::rmi::registry::RemoteReference>
{
public:

	static jni::ref<com::sun::jndi::rmi::registry::ReferenceWrapper> new_object(jni::ref<javax::naming::Reference> p1) { return base_::new_object(p1); }
	jni::ref<javax::naming::Reference> getReference() { return call_method<"getReference", jni::ref<javax::naming::Reference>>(); }

protected:

	ReferenceWrapper(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JNDI_RMI_REGISTRY_REFERENCEWRAPPER
