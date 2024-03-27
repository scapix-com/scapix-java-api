// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Closeable.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_MODULE_MODULEPATCHER_RESOURCEFINDER_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_MODULE_MODULEPATCHER_RESOURCEFINDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::module { class ModulePatcher_ResourceFinder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::module::ModulePatcher_ResourceFinder>
{
	static constexpr fixed_string class_name = "jdk/internal/module/ModulePatcher$ResourceFinder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::io::Closeable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_MODULE_MODULEPATCHER_RESOURCEFINDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_MODULE_MODULEPATCHER_RESOURCEFINDER)
#define SCAPIX_JAVA_API_JDK_INTERNAL_MODULE_MODULEPATCHER_RESOURCEFINDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/stream/Stream.h>
#include <scapix/java_api/jdk/internal/loader/Resource.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class jdk::internal::module::ModulePatcher_ResourceFinder : public jni::object_base<"jdk/internal/module/ModulePatcher$ResourceFinder",
	java::lang::Object,
	java::io::Closeable>
{
public:

	jni::ref<jdk::internal::loader::Resource> find(jni::ref<java::lang::String> p1) { return call_method<"find", jni::ref<jdk::internal::loader::Resource>>(p1); }
	jni::ref<java::util::stream::Stream> list() { return call_method<"list", jni::ref<java::util::stream::Stream>>(); }

protected:

	ModulePatcher_ResourceFinder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_MODULE_MODULEPATCHER_RESOURCEFINDER