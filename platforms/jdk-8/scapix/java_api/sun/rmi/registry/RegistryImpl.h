// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/rmi/server/RemoteServer.h>
#include <scapix/java_api/java/rmi/registry/Registry.h>

#ifndef SCAPIX_JAVA_API_SUN_RMI_REGISTRY_REGISTRYIMPL_FWD
#define SCAPIX_JAVA_API_SUN_RMI_REGISTRY_REGISTRYIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::rmi::registry { class RegistryImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::rmi::registry::RegistryImpl>
{
	static constexpr fixed_string class_name = "sun/rmi/registry/RegistryImpl";
	using base_classes = std::tuple<scapix::java_api::java::rmi::server::RemoteServer, scapix::java_api::java::rmi::registry::Registry>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_RMI_REGISTRY_REGISTRYIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_RMI_REGISTRY_REGISTRYIMPL)
#define SCAPIX_JAVA_API_SUN_RMI_REGISTRY_REGISTRYIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/rmi/Remote.h>
#include <scapix/java_api/java/rmi/server/ObjID.h>
#include <scapix/java_api/java/rmi/server/RMIClientSocketFactory.h>
#include <scapix/java_api/java/rmi/server/RMIServerSocketFactory.h>
#include <scapix/java_api/sun/misc/ObjectInputFilter.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::rmi::registry::RegistryImpl : public jni::object_base<"sun/rmi/registry/RegistryImpl",
	java::rmi::server::RemoteServer,
	java::rmi::registry::Registry>
{
public:

	static jni::ref<sun::rmi::registry::RegistryImpl> new_object(jint p1, jni::ref<java::rmi::server::RMIClientSocketFactory> p2, jni::ref<java::rmi::server::RMIServerSocketFactory> p3) { return base_::new_object(p1, p2, p3); }
	static jni::ref<sun::rmi::registry::RegistryImpl> new_object(jint p1, jni::ref<java::rmi::server::RMIClientSocketFactory> p2, jni::ref<java::rmi::server::RMIServerSocketFactory> p3, jni::ref<sun::misc::ObjectInputFilter> p4) { return base_::new_object(p1, p2, p3, p4); }
	static jni::ref<sun::rmi::registry::RegistryImpl> new_object(jint p1) { return base_::new_object(p1); }
	jni::ref<java::rmi::Remote> lookup(jni::ref<java::lang::String> p1) { return call_method<"lookup", jni::ref<java::rmi::Remote>>(p1); }
	void bind(jni::ref<java::lang::String> p1, jni::ref<java::rmi::Remote> p2) { return call_method<"bind", void>(p1, p2); }
	void unbind(jni::ref<java::lang::String> p1) { return call_method<"unbind", void>(p1); }
	void rebind(jni::ref<java::lang::String> p1, jni::ref<java::rmi::Remote> p2) { return call_method<"rebind", void>(p1, p2); }
	jni::ref<jni::array<java::lang::String>> list() { return call_method<"list", jni::ref<jni::array<java::lang::String>>>(); }
	static void checkAccess(jni::ref<java::lang::String> p1) { return call_static_method<"checkAccess", void>(p1); }
	static jni::ref<java::rmi::server::ObjID> getID() { return call_static_method<"getID", jni::ref<java::rmi::server::ObjID>>(); }
	static jni::ref<sun::rmi::registry::RegistryImpl> createRegistry(jint p1) { return call_static_method<"createRegistry", jni::ref<sun::rmi::registry::RegistryImpl>>(p1); }
	static void main(jni::ref<jni::array<java::lang::String>> p1) { return call_static_method<"main", void>(p1); }

protected:

	RegistryImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_RMI_REGISTRY_REGISTRYIMPL
