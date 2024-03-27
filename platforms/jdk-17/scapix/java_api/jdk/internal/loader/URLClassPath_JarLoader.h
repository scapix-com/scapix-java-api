// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/jdk/internal/loader/URLClassPath_Loader.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_LOADER_URLCLASSPATH_JARLOADER_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_LOADER_URLCLASSPATH_JARLOADER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::loader { class URLClassPath_JarLoader; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::loader::URLClassPath_JarLoader>
{
	static constexpr fixed_string class_name = "jdk/internal/loader/URLClassPath$JarLoader";
	using base_classes = std::tuple<scapix::java_api::jdk::internal::loader::URLClassPath_Loader>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_LOADER_URLCLASSPATH_JARLOADER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_LOADER_URLCLASSPATH_JARLOADER)
#define SCAPIX_JAVA_API_JDK_INTERNAL_LOADER_URLCLASSPATH_JARLOADER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class jdk::internal::loader::URLClassPath_JarLoader : public jni::object_base<"jdk/internal/loader/URLClassPath$JarLoader",
	jdk::internal::loader::URLClassPath_Loader>
{
public:

	void close() { return call_method<"close", void>(); }

protected:

	URLClassPath_JarLoader(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_LOADER_URLCLASSPATH_JARLOADER
