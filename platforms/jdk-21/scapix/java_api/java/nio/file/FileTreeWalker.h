// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Closeable.h>

#ifndef SCAPIX_JAVA_API_JAVA_NIO_FILE_FILETREEWALKER_FWD
#define SCAPIX_JAVA_API_JAVA_NIO_FILE_FILETREEWALKER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::nio::file { class FileTreeWalker; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::nio::file::FileTreeWalker>
{
	static constexpr fixed_string class_name = "java/nio/file/FileTreeWalker";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::io::Closeable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_FILE_FILETREEWALKER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_NIO_FILE_FILETREEWALKER)
#define SCAPIX_JAVA_API_JAVA_NIO_FILE_FILETREEWALKER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::nio::file::FileTreeWalker : public jni::object_base<"java/nio/file/FileTreeWalker",
	java::lang::Object,
	java::io::Closeable>
{
public:

	void close() { return call_method<"close", void>(); }

protected:

	FileTreeWalker(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_FILE_FILETREEWALKER
