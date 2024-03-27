// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/nio/file/FileSystemException.h>

#ifndef SCAPIX_JAVA_API_JAVA_NIO_FILE_ACCESSDENIEDEXCEPTION_FWD
#define SCAPIX_JAVA_API_JAVA_NIO_FILE_ACCESSDENIEDEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::nio::file { class AccessDeniedException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::nio::file::AccessDeniedException>
{
	static constexpr fixed_string class_name = "java/nio/file/AccessDeniedException";
	using base_classes = std::tuple<scapix::java_api::java::nio::file::FileSystemException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_FILE_ACCESSDENIEDEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_NIO_FILE_ACCESSDENIEDEXCEPTION)
#define SCAPIX_JAVA_API_JAVA_NIO_FILE_ACCESSDENIEDEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::nio::file::AccessDeniedException : public jni::object_base<"java/nio/file/AccessDeniedException",
	java::nio::file::FileSystemException>
{
public:

	static jni::ref<java::nio::file::AccessDeniedException> new_object(jni::ref<java::lang::String> file) { return base_::new_object(file); }
	static jni::ref<java::nio::file::AccessDeniedException> new_object(jni::ref<java::lang::String> file, jni::ref<java::lang::String> other, jni::ref<java::lang::String> reason) { return base_::new_object(file, other, reason); }

protected:

	AccessDeniedException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_FILE_ACCESSDENIEDEXCEPTION
