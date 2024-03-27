// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/IllegalStateException.h>

#ifndef SCAPIX_JAVA_API_JAVA_NIO_FILE_CLOSEDFILESYSTEMEXCEPTION_FWD
#define SCAPIX_JAVA_API_JAVA_NIO_FILE_CLOSEDFILESYSTEMEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::nio::file { class ClosedFileSystemException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::nio::file::ClosedFileSystemException>
{
	static constexpr fixed_string class_name = "java/nio/file/ClosedFileSystemException";
	using base_classes = std::tuple<scapix::java_api::java::lang::IllegalStateException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_FILE_CLOSEDFILESYSTEMEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_NIO_FILE_CLOSEDFILESYSTEMEXCEPTION)
#define SCAPIX_JAVA_API_JAVA_NIO_FILE_CLOSEDFILESYSTEMEXCEPTION

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::nio::file::ClosedFileSystemException : public jni::object_base<"java/nio/file/ClosedFileSystemException",
	java::lang::IllegalStateException>
{
public:

	static jni::ref<java::nio::file::ClosedFileSystemException> new_object() { return base_::new_object(); }

protected:

	ClosedFileSystemException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_FILE_CLOSEDFILESYSTEMEXCEPTION
