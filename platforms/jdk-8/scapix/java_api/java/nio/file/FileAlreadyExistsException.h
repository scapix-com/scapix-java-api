// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/nio/file/FileSystemException.h>

#ifndef SCAPIX_JAVA_API_JAVA_NIO_FILE_FILEALREADYEXISTSEXCEPTION_FWD
#define SCAPIX_JAVA_API_JAVA_NIO_FILE_FILEALREADYEXISTSEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::nio::file { class FileAlreadyExistsException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::nio::file::FileAlreadyExistsException>
{
	static constexpr fixed_string class_name = "java/nio/file/FileAlreadyExistsException";
	using base_classes = std::tuple<scapix::java_api::java::nio::file::FileSystemException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_FILE_FILEALREADYEXISTSEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_NIO_FILE_FILEALREADYEXISTSEXCEPTION)
#define SCAPIX_JAVA_API_JAVA_NIO_FILE_FILEALREADYEXISTSEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::nio::file::FileAlreadyExistsException : public jni::object_base<"java/nio/file/FileAlreadyExistsException",
	java::nio::file::FileSystemException>
{
public:

	static jni::ref<java::nio::file::FileAlreadyExistsException> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }
	static jni::ref<java::nio::file::FileAlreadyExistsException> new_object(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::String> p3) { return base_::new_object(p1, p2, p3); }

protected:

	FileAlreadyExistsException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_FILE_FILEALREADYEXISTSEXCEPTION
