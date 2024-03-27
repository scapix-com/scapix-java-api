// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_RMI_SERVER_LOADERHANDLER_FWD
#define SCAPIX_JAVA_API_JAVA_RMI_SERVER_LOADERHANDLER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::rmi::server { class LoaderHandler; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::rmi::server::LoaderHandler>
{
	static constexpr fixed_string class_name = "java/rmi/server/LoaderHandler";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_RMI_SERVER_LOADERHANDLER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_RMI_SERVER_LOADERHANDLER)
#define SCAPIX_JAVA_API_JAVA_RMI_SERVER_LOADERHANDLER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/ClassLoader.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/net/URL.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::rmi::server::LoaderHandler : public jni::object_base<"java/rmi/server/LoaderHandler",
	java::lang::Object>
{
public:

	static jni::ref<java::lang::String> packagePrefix() { return get_static_field<"packagePrefix", jni::ref<java::lang::String>>(); }

	jni::ref<java::lang::Class> loadClass(jni::ref<java::lang::String> p1) { return call_method<"loadClass", jni::ref<java::lang::Class>>(p1); }
	jni::ref<java::lang::Class> loadClass(jni::ref<java::net::URL> p1, jni::ref<java::lang::String> p2) { return call_method<"loadClass", jni::ref<java::lang::Class>>(p1, p2); }
	jni::ref<java::lang::Object> getSecurityContext(jni::ref<java::lang::ClassLoader> p1) { return call_method<"getSecurityContext", jni::ref<java::lang::Object>>(p1); }

protected:

	LoaderHandler(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_RMI_SERVER_LOADERHANDLER
