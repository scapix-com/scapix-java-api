// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_IO_DEFAULTFILESYSTEM_FWD
#define SCAPIX_JAVA_API_JAVA_IO_DEFAULTFILESYSTEM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::io { class DefaultFileSystem; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::io::DefaultFileSystem>
{
	static constexpr fixed_string class_name = "java/io/DefaultFileSystem";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_IO_DEFAULTFILESYSTEM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_IO_DEFAULTFILESYSTEM)
#define SCAPIX_JAVA_API_JAVA_IO_DEFAULTFILESYSTEM

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/FileSystem.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::io::DefaultFileSystem : public jni::object_base<"java/io/DefaultFileSystem",
	java::lang::Object>
{
public:

	static jni::ref<java::io::FileSystem> getFileSystem() { return call_static_method<"getFileSystem", jni::ref<java::io::FileSystem>>(); }

protected:

	DefaultFileSystem(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_IO_DEFAULTFILESYSTEM
