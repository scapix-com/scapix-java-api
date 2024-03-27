// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/security/SecureClassLoader.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_LOADER_BUILTINCLASSLOADER_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_LOADER_BUILTINCLASSLOADER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::loader { class BuiltinClassLoader; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::loader::BuiltinClassLoader>
{
	static constexpr fixed_string class_name = "jdk/internal/loader/BuiltinClassLoader";
	using base_classes = std::tuple<scapix::java_api::java::security::SecureClassLoader>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_LOADER_BUILTINCLASSLOADER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_LOADER_BUILTINCLASSLOADER)
#define SCAPIX_JAVA_API_JDK_INTERNAL_LOADER_BUILTINCLASSLOADER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/InputStream.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/module/ModuleReference.h>
#include <scapix/java_api/java/net/URL.h>
#include <scapix/java_api/java/util/Enumeration.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::loader::BuiltinClassLoader : public jni::object_base<"jdk/internal/loader/BuiltinClassLoader",
	java::security::SecureClassLoader>
{
public:

	void loadModule(jni::ref<java::lang::module::ModuleReference> mref) { return call_method<"loadModule", void>(mref); }
	jni::ref<java::net::URL> findResource(jni::ref<java::lang::String> mn, jni::ref<java::lang::String> name) { return call_method<"findResource", jni::ref<java::net::URL>>(mn, name); }
	jni::ref<java::io::InputStream> findResourceAsStream(jni::ref<java::lang::String> mn, jni::ref<java::lang::String> name) { return call_method<"findResourceAsStream", jni::ref<java::io::InputStream>>(mn, name); }
	jni::ref<java::net::URL> findResource(jni::ref<java::lang::String> name) { return call_method<"findResource", jni::ref<java::net::URL>>(name); }
	jni::ref<java::util::Enumeration> findResources(jni::ref<java::lang::String> name) { return call_method<"findResources", jni::ref<java::util::Enumeration>>(name); }

protected:

	BuiltinClassLoader(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_LOADER_BUILTINCLASSLOADER