// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/io/IOException.h>

#ifndef SCAPIX_JAVA_API_JAVA_NIO_CHANNELS_FILELOCKINTERRUPTIONEXCEPTION_FWD
#define SCAPIX_JAVA_API_JAVA_NIO_CHANNELS_FILELOCKINTERRUPTIONEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::nio::channels { class FileLockInterruptionException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::nio::channels::FileLockInterruptionException>
{
	static constexpr fixed_string class_name = "java/nio/channels/FileLockInterruptionException";
	using base_classes = std::tuple<scapix::java_api::java::io::IOException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_CHANNELS_FILELOCKINTERRUPTIONEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_NIO_CHANNELS_FILELOCKINTERRUPTIONEXCEPTION)
#define SCAPIX_JAVA_API_JAVA_NIO_CHANNELS_FILELOCKINTERRUPTIONEXCEPTION

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::nio::channels::FileLockInterruptionException : public jni::object_base<"java/nio/channels/FileLockInterruptionException",
	java::io::IOException>
{
public:

	static jni::ref<java::nio::channels::FileLockInterruptionException> new_object() { return base_::new_object(); }

protected:

	FileLockInterruptionException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_CHANNELS_FILELOCKINTERRUPTIONEXCEPTION
