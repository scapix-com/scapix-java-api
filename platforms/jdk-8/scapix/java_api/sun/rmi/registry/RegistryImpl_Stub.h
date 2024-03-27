// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/rmi/server/RemoteStub.h>
#include <scapix/java_api/java/rmi/registry/Registry.h>
#include <scapix/java_api/java/rmi/Remote.h>

#ifndef SCAPIX_JAVA_API_SUN_RMI_REGISTRY_REGISTRYIMPL_STUB_FWD
#define SCAPIX_JAVA_API_SUN_RMI_REGISTRY_REGISTRYIMPL_STUB_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::rmi::registry { class RegistryImpl_Stub; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::rmi::registry::RegistryImpl_Stub>
{
	static constexpr fixed_string class_name = "sun/rmi/registry/RegistryImpl_Stub";
	using base_classes = std::tuple<scapix::java_api::java::rmi::server::RemoteStub, scapix::java_api::java::rmi::registry::Registry, scapix::java_api::java::rmi::Remote>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_RMI_REGISTRY_REGISTRYIMPL_STUB_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_RMI_REGISTRY_REGISTRYIMPL_STUB)
#define SCAPIX_JAVA_API_SUN_RMI_REGISTRY_REGISTRYIMPL_STUB

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/rmi/server/RemoteRef.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::rmi::registry::RegistryImpl_Stub : public jni::object_base<"sun/rmi/registry/RegistryImpl_Stub",
	java::rmi::server::RemoteStub,
	java::rmi::registry::Registry,
	java::rmi::Remote>
{
public:

	static jni::ref<sun::rmi::registry::RegistryImpl_Stub> new_object() { return base_::new_object(); }
	static jni::ref<sun::rmi::registry::RegistryImpl_Stub> new_object(jni::ref<java::rmi::server::RemoteRef> p1) { return base_::new_object(p1); }
	void bind(jni::ref<java::lang::String> p1, jni::ref<java::rmi::Remote> p2) { return call_method<"bind", void>(p1, p2); }
	jni::ref<jni::array<java::lang::String>> list() { return call_method<"list", jni::ref<jni::array<java::lang::String>>>(); }
	jni::ref<java::rmi::Remote> lookup(jni::ref<java::lang::String> p1) { return call_method<"lookup", jni::ref<java::rmi::Remote>>(p1); }
	void rebind(jni::ref<java::lang::String> p1, jni::ref<java::rmi::Remote> p2) { return call_method<"rebind", void>(p1, p2); }
	void unbind(jni::ref<java::lang::String> p1) { return call_method<"unbind", void>(p1); }

protected:

	RegistryImpl_Stub(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_RMI_REGISTRY_REGISTRYIMPL_STUB
