// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/net/URLClassLoader.h>

#ifndef SCAPIX_JAVA_API_SUN_MISC_LAUNCHER_APPCLASSLOADER_FWD
#define SCAPIX_JAVA_API_SUN_MISC_LAUNCHER_APPCLASSLOADER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::misc { class Launcher_AppClassLoader; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::misc::Launcher_AppClassLoader>
{
	static constexpr fixed_string class_name = "sun/misc/Launcher$AppClassLoader";
	using base_classes = std::tuple<scapix::java_api::java::net::URLClassLoader>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MISC_LAUNCHER_APPCLASSLOADER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_MISC_LAUNCHER_APPCLASSLOADER)
#define SCAPIX_JAVA_API_SUN_MISC_LAUNCHER_APPCLASSLOADER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/ClassLoader.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::misc::Launcher_AppClassLoader : public jni::object_base<"sun/misc/Launcher$AppClassLoader",
	java::net::URLClassLoader>
{
public:

	static jni::ref<java::lang::ClassLoader> getAppClassLoader(jni::ref<java::lang::ClassLoader> p1) { return call_static_method<"getAppClassLoader", jni::ref<java::lang::ClassLoader>>(p1); }
	jni::ref<java::lang::Class> loadClass(jni::ref<java::lang::String> p1, jboolean p2) { return call_method<"loadClass", jni::ref<java::lang::Class>>(p1, p2); }

protected:

	Launcher_AppClassLoader(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MISC_LAUNCHER_APPCLASSLOADER
