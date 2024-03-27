// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/function/Function.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_MODULE_MODULELOADERMAP_MAPPER_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_MODULE_MODULELOADERMAP_MAPPER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::module { class ModuleLoaderMap_Mapper; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::module::ModuleLoaderMap_Mapper>
{
	static constexpr fixed_string class_name = "jdk/internal/module/ModuleLoaderMap$Mapper";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::function::Function>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_MODULE_MODULELOADERMAP_MAPPER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_MODULE_MODULELOADERMAP_MAPPER)
#define SCAPIX_JAVA_API_JDK_INTERNAL_MODULE_MODULELOADERMAP_MAPPER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/ClassLoader.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::module::ModuleLoaderMap_Mapper : public jni::object_base<"jdk/internal/module/ModuleLoaderMap$Mapper",
	java::lang::Object,
	java::util::function::Function>
{
public:

	jni::ref<java::lang::ClassLoader> apply(jni::ref<java::lang::String> name) { return call_method<"apply", jni::ref<java::lang::ClassLoader>>(name); }

protected:

	ModuleLoaderMap_Mapper(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_MODULE_MODULELOADERMAP_MAPPER