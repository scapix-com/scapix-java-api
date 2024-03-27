// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_RMI_NAMING_FWD
#define SCAPIX_JAVA_API_JAVA_RMI_NAMING_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::rmi { class Naming; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::rmi::Naming>
{
	static constexpr fixed_string class_name = "java/rmi/Naming";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_RMI_NAMING_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_RMI_NAMING)
#define SCAPIX_JAVA_API_JAVA_RMI_NAMING

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/rmi/Remote.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::rmi::Naming : public jni::object_base<"java/rmi/Naming",
	java::lang::Object>
{
public:

	static jni::ref<java::rmi::Remote> lookup(jni::ref<java::lang::String> p1) { return call_static_method<"lookup", jni::ref<java::rmi::Remote>>(p1); }
	static void bind(jni::ref<java::lang::String> p1, jni::ref<java::rmi::Remote> p2) { return call_static_method<"bind", void>(p1, p2); }
	static void unbind(jni::ref<java::lang::String> p1) { return call_static_method<"unbind", void>(p1); }
	static void rebind(jni::ref<java::lang::String> p1, jni::ref<java::rmi::Remote> p2) { return call_static_method<"rebind", void>(p1, p2); }
	static jni::ref<jni::array<java::lang::String>> list(jni::ref<java::lang::String> p1) { return call_static_method<"list", jni::ref<jni::array<java::lang::String>>>(p1); }

protected:

	Naming(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_RMI_NAMING
