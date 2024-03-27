// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_NIO_FILE_FILESYSTEMS_FWD
#define SCAPIX_JAVA_API_JAVA_NIO_FILE_FILESYSTEMS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::nio::file { class FileSystems; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::nio::file::FileSystems>
{
	static constexpr fixed_string class_name = "java/nio/file/FileSystems";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_FILE_FILESYSTEMS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_NIO_FILE_FILESYSTEMS)
#define SCAPIX_JAVA_API_JAVA_NIO_FILE_FILESYSTEMS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/ClassLoader.h>
#include <scapix/java_api/java/net/URI.h>
#include <scapix/java_api/java/nio/file/FileSystem.h>
#include <scapix/java_api/java/nio/file/Path.h>
#include <scapix/java_api/java/util/Map.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::nio::file::FileSystems : public jni::object_base<"java/nio/file/FileSystems",
	java::lang::Object>
{
public:

	static jni::ref<java::nio::file::FileSystem> getDefault() { return call_static_method<"getDefault", jni::ref<java::nio::file::FileSystem>>(); }
	static jni::ref<java::nio::file::FileSystem> getFileSystem(jni::ref<java::net::URI> p1) { return call_static_method<"getFileSystem", jni::ref<java::nio::file::FileSystem>>(p1); }
	static jni::ref<java::nio::file::FileSystem> newFileSystem(jni::ref<java::net::URI> p1, jni::ref<java::util::Map> p2) { return call_static_method<"newFileSystem", jni::ref<java::nio::file::FileSystem>>(p1, p2); }
	static jni::ref<java::nio::file::FileSystem> newFileSystem(jni::ref<java::net::URI> p1, jni::ref<java::util::Map> p2, jni::ref<java::lang::ClassLoader> p3) { return call_static_method<"newFileSystem", jni::ref<java::nio::file::FileSystem>>(p1, p2, p3); }
	static jni::ref<java::nio::file::FileSystem> newFileSystem(jni::ref<java::nio::file::Path> p1, jni::ref<java::lang::ClassLoader> p2) { return call_static_method<"newFileSystem", jni::ref<java::nio::file::FileSystem>>(p1, p2); }

protected:

	FileSystems(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_FILE_FILESYSTEMS
