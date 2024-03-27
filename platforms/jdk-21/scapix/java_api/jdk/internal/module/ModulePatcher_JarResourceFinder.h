// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/jdk/internal/module/ModulePatcher_ResourceFinder.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_MODULE_MODULEPATCHER_JARRESOURCEFINDER_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_MODULE_MODULEPATCHER_JARRESOURCEFINDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::module { class ModulePatcher_JarResourceFinder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::module::ModulePatcher_JarResourceFinder>
{
	static constexpr fixed_string class_name = "jdk/internal/module/ModulePatcher$JarResourceFinder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::jdk::internal::module::ModulePatcher_ResourceFinder>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_MODULE_MODULEPATCHER_JARRESOURCEFINDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_MODULE_MODULEPATCHER_JARRESOURCEFINDER)
#define SCAPIX_JAVA_API_JDK_INTERNAL_MODULE_MODULEPATCHER_JARRESOURCEFINDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/stream/Stream.h>
#include <scapix/java_api/jdk/internal/loader/Resource.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class jdk::internal::module::ModulePatcher_JarResourceFinder : public jni::object_base<"jdk/internal/module/ModulePatcher$JarResourceFinder",
	java::lang::Object,
	jdk::internal::module::ModulePatcher_ResourceFinder>
{
public:

	void close() { return call_method<"close", void>(); }
	jni::ref<jdk::internal::loader::Resource> find(jni::ref<java::lang::String> name) { return call_method<"find", jni::ref<jdk::internal::loader::Resource>>(name); }
	jni::ref<java::util::stream::Stream> list() { return call_method<"list", jni::ref<java::util::stream::Stream>>(); }

protected:

	ModulePatcher_JarResourceFinder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_MODULE_MODULEPATCHER_JARRESOURCEFINDER