// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/module/ModuleReader.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_LOADER_LOADER_NULLMODULEREADER_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_LOADER_LOADER_NULLMODULEREADER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::loader { class Loader_NullModuleReader; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::loader::Loader_NullModuleReader>
{
	static constexpr fixed_string class_name = "jdk/internal/loader/Loader$NullModuleReader";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::module::ModuleReader>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_LOADER_LOADER_NULLMODULEREADER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_LOADER_LOADER_NULLMODULEREADER)
#define SCAPIX_JAVA_API_JDK_INTERNAL_LOADER_LOADER_NULLMODULEREADER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Optional.h>
#include <scapix/java_api/java/util/stream/Stream.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class jdk::internal::loader::Loader_NullModuleReader : public jni::object_base<"jdk/internal/loader/Loader$NullModuleReader",
	java::lang::Object,
	java::lang::module::ModuleReader>
{
public:

	jni::ref<java::util::Optional> find(jni::ref<java::lang::String> name) { return call_method<"find", jni::ref<java::util::Optional>>(name); }
	jni::ref<java::util::stream::Stream> list() { return call_method<"list", jni::ref<java::util::stream::Stream>>(); }
	void close() { return call_method<"close", void>(); }

protected:

	Loader_NullModuleReader(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_LOADER_LOADER_NULLMODULEREADER
