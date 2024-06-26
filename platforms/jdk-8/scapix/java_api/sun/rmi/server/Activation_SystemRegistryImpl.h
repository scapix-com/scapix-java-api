// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/rmi/registry/RegistryImpl.h>

#ifndef SCAPIX_JAVA_API_SUN_RMI_SERVER_ACTIVATION_SYSTEMREGISTRYIMPL_FWD
#define SCAPIX_JAVA_API_SUN_RMI_SERVER_ACTIVATION_SYSTEMREGISTRYIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::rmi::server { class Activation_SystemRegistryImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::rmi::server::Activation_SystemRegistryImpl>
{
	static constexpr fixed_string class_name = "sun/rmi/server/Activation$SystemRegistryImpl";
	using base_classes = std::tuple<scapix::java_api::sun::rmi::registry::RegistryImpl>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_RMI_SERVER_ACTIVATION_SYSTEMREGISTRYIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_RMI_SERVER_ACTIVATION_SYSTEMREGISTRYIMPL)
#define SCAPIX_JAVA_API_SUN_RMI_SERVER_ACTIVATION_SYSTEMREGISTRYIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/rmi/Remote.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::rmi::server::Activation_SystemRegistryImpl : public jni::object_base<"sun/rmi/server/Activation$SystemRegistryImpl",
	sun::rmi::registry::RegistryImpl>
{
public:

	jni::ref<java::rmi::Remote> lookup(jni::ref<java::lang::String> p1) { return call_method<"lookup", jni::ref<java::rmi::Remote>>(p1); }
	jni::ref<jni::array<java::lang::String>> list() { return call_method<"list", jni::ref<jni::array<java::lang::String>>>(); }
	void bind(jni::ref<java::lang::String> p1, jni::ref<java::rmi::Remote> p2) { return call_method<"bind", void>(p1, p2); }
	void unbind(jni::ref<java::lang::String> p1) { return call_method<"unbind", void>(p1); }
	void rebind(jni::ref<java::lang::String> p1, jni::ref<java::rmi::Remote> p2) { return call_method<"rebind", void>(p1, p2); }

protected:

	Activation_SystemRegistryImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_RMI_SERVER_ACTIVATION_SYSTEMREGISTRYIMPL
