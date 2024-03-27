// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/RuntimeException.h>

#ifndef SCAPIX_JAVA_API_JAVA_NIO_FILE_FILESYSTEMNOTFOUNDEXCEPTION_FWD
#define SCAPIX_JAVA_API_JAVA_NIO_FILE_FILESYSTEMNOTFOUNDEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::nio::file { class FileSystemNotFoundException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::nio::file::FileSystemNotFoundException>
{
	static constexpr fixed_string class_name = "java/nio/file/FileSystemNotFoundException";
	using base_classes = std::tuple<scapix::java_api::java::lang::RuntimeException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_FILE_FILESYSTEMNOTFOUNDEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_NIO_FILE_FILESYSTEMNOTFOUNDEXCEPTION)
#define SCAPIX_JAVA_API_JAVA_NIO_FILE_FILESYSTEMNOTFOUNDEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::nio::file::FileSystemNotFoundException : public jni::object_base<"java/nio/file/FileSystemNotFoundException",
	java::lang::RuntimeException>
{
public:

	static jni::ref<java::nio::file::FileSystemNotFoundException> new_object() { return base_::new_object(); }
	static jni::ref<java::nio::file::FileSystemNotFoundException> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }

protected:

	FileSystemNotFoundException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_FILE_FILESYSTEMNOTFOUNDEXCEPTION
