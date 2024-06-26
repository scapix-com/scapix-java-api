// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/rmi/Remote.h>

#ifndef SCAPIX_JAVA_API_JAVA_RMI_REGISTRY_REGISTRY_FWD
#define SCAPIX_JAVA_API_JAVA_RMI_REGISTRY_REGISTRY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::rmi::registry { class Registry; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::rmi::registry::Registry>
{
	static constexpr fixed_string class_name = "java/rmi/registry/Registry";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::rmi::Remote>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_RMI_REGISTRY_REGISTRY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_RMI_REGISTRY_REGISTRY)
#define SCAPIX_JAVA_API_JAVA_RMI_REGISTRY_REGISTRY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::rmi::registry::Registry : public jni::object_base<"java/rmi/registry/Registry",
	java::lang::Object,
	java::rmi::Remote>
{
public:

	static jint REGISTRY_PORT() { return get_static_field<"REGISTRY_PORT", jint>(); }

	jni::ref<java::rmi::Remote> lookup(jni::ref<java::lang::String> p1) { return call_method<"lookup", jni::ref<java::rmi::Remote>>(p1); }
	void bind(jni::ref<java::lang::String> p1, jni::ref<java::rmi::Remote> p2) { return call_method<"bind", void>(p1, p2); }
	void unbind(jni::ref<java::lang::String> p1) { return call_method<"unbind", void>(p1); }
	void rebind(jni::ref<java::lang::String> p1, jni::ref<java::rmi::Remote> p2) { return call_method<"rebind", void>(p1, p2); }
	jni::ref<jni::array<java::lang::String>> list() { return call_method<"list", jni::ref<jni::array<java::lang::String>>>(); }

protected:

	Registry(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_RMI_REGISTRY_REGISTRY
