// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/security/SecureClassLoader.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_LOADER_LOADER_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_LOADER_LOADER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::loader { class Loader; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::loader::Loader>
{
	static constexpr fixed_string class_name = "jdk/internal/loader/Loader";
	using base_classes = std::tuple<scapix::java_api::java::security::SecureClassLoader>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_LOADER_LOADER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_LOADER_LOADER)
#define SCAPIX_JAVA_API_JDK_INTERNAL_LOADER_LOADER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/ClassLoader.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/module/Configuration.h>
#include <scapix/java_api/java/lang/module/ResolvedModule.h>
#include <scapix/java_api/java/net/URL.h>
#include <scapix/java_api/java/util/Collection.h>
#include <scapix/java_api/java/util/Enumeration.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/jdk/internal/loader/LoaderPool.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::loader::Loader : public jni::object_base<"jdk/internal/loader/Loader",
	java::security::SecureClassLoader>
{
public:

	static jni::ref<jdk::internal::loader::Loader> new_object(jni::ref<java::lang::module::ResolvedModule> resolvedModule, jni::ref<jdk::internal::loader::LoaderPool> pool, jni::ref<java::lang::ClassLoader> parent) { return base_::new_object(resolvedModule, pool, parent); }
	static jni::ref<jdk::internal::loader::Loader> new_object(jni::ref<java::util::Collection> modules, jni::ref<java::lang::ClassLoader> parent) { return base_::new_object(modules, parent); }
	jni::ref<jdk::internal::loader::Loader> initRemotePackageMap(jni::ref<java::lang::module::Configuration> cf, jni::ref<java::util::List> parentModuleLayers) { return call_method<"initRemotePackageMap", jni::ref<jdk::internal::loader::Loader>>(cf, parentModuleLayers); }
	jni::ref<jdk::internal::loader::LoaderPool> pool() { return call_method<"pool", jni::ref<jdk::internal::loader::LoaderPool>>(); }
	jni::ref<java::net::URL> findResource(jni::ref<java::lang::String> name) { return call_method<"findResource", jni::ref<java::net::URL>>(name); }
	jni::ref<java::util::Enumeration> findResources(jni::ref<java::lang::String> name) { return call_method<"findResources", jni::ref<java::util::Enumeration>>(name); }
	jni::ref<java::net::URL> getResource(jni::ref<java::lang::String> name) { return call_method<"getResource", jni::ref<java::net::URL>>(name); }
	jni::ref<java::util::Enumeration> getResources(jni::ref<java::lang::String> name) { return call_method<"getResources", jni::ref<java::util::Enumeration>>(name); }

protected:

	Loader(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_LOADER_LOADER
