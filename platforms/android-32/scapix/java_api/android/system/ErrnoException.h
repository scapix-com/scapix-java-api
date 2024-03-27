// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Exception.h>

#ifndef SCAPIX_JAVA_API_ANDROID_SYSTEM_ERRNOEXCEPTION_FWD
#define SCAPIX_JAVA_API_ANDROID_SYSTEM_ERRNOEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::system { class ErrnoException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::system::ErrnoException>
{
	static constexpr fixed_string class_name = "android/system/ErrnoException";
	using base_classes = std::tuple<scapix::java_api::java::lang::Exception>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SYSTEM_ERRNOEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_SYSTEM_ERRNOEXCEPTION)
#define SCAPIX_JAVA_API_ANDROID_SYSTEM_ERRNOEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/IOException.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Throwable.h>
#include <scapix/java_api/java/net/SocketException.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::system::ErrnoException : public jni::object_base<"android/system/ErrnoException",
	java::lang::Exception>
{
public:

	jint errno() { return get_field<"errno", jint>(); }

	static jni::ref<android::system::ErrnoException> new_object(jni::ref<java::lang::String> functionName, jint errno) { return base_::new_object(functionName, errno); }
	static jni::ref<android::system::ErrnoException> new_object(jni::ref<java::lang::String> functionName, jint errno, jni::ref<java::lang::Throwable> cause) { return base_::new_object(functionName, errno, cause); }
	jni::ref<java::lang::String> getMessage() { return call_method<"getMessage", jni::ref<java::lang::String>>(); }
	jni::ref<java::io::IOException> rethrowAsIOException() { return call_method<"rethrowAsIOException", jni::ref<java::io::IOException>>(); }
	jni::ref<java::net::SocketException> rethrowAsSocketException() { return call_method<"rethrowAsSocketException", jni::ref<java::net::SocketException>>(); }

protected:

	ErrnoException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SYSTEM_ERRNOEXCEPTION
