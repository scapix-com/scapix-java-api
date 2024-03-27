// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_MODULE_RESOURCES_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_MODULE_RESOURCES_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::module { class Resources; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::module::Resources>
{
	static constexpr fixed_string class_name = "jdk/internal/module/Resources";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_MODULE_RESOURCES_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_MODULE_RESOURCES)
#define SCAPIX_JAVA_API_JDK_INTERNAL_MODULE_RESOURCES

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/nio/file/Path.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::module::Resources : public jni::object_base<"jdk/internal/module/Resources",
	java::lang::Object>
{
public:

	static jboolean canEncapsulate(jni::ref<java::lang::String> name) { return call_static_method<"canEncapsulate", jboolean>(name); }
	static jni::ref<java::lang::String> toPackageName(jni::ref<java::lang::String> name) { return call_static_method<"toPackageName", jni::ref<java::lang::String>>(name); }
	static jni::ref<java::lang::String> toResourceName(jni::ref<java::nio::file::Path> dir, jni::ref<java::nio::file::Path> file) { return call_static_method<"toResourceName", jni::ref<java::lang::String>>(dir, file); }
	static jni::ref<java::nio::file::Path> toFilePath(jni::ref<java::nio::file::Path> dir, jni::ref<java::lang::String> name) { return call_static_method<"toFilePath", jni::ref<java::nio::file::Path>>(dir, name); }

protected:

	Resources(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_MODULE_RESOURCES
