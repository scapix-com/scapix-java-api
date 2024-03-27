// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/RuntimeException.h>

#ifndef SCAPIX_JAVA_API_JAVA_IO_UNCHECKEDIOEXCEPTION_FWD
#define SCAPIX_JAVA_API_JAVA_IO_UNCHECKEDIOEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::io { class UncheckedIOException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::io::UncheckedIOException>
{
	static constexpr fixed_string class_name = "java/io/UncheckedIOException";
	using base_classes = std::tuple<scapix::java_api::java::lang::RuntimeException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_IO_UNCHECKEDIOEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_IO_UNCHECKEDIOEXCEPTION)
#define SCAPIX_JAVA_API_JAVA_IO_UNCHECKEDIOEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/IOException.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::io::UncheckedIOException : public jni::object_base<"java/io/UncheckedIOException",
	java::lang::RuntimeException>
{
public:

	static jni::ref<java::io::UncheckedIOException> new_object(jni::ref<java::lang::String> message, jni::ref<java::io::IOException> cause) { return base_::new_object(message, cause); }
	static jni::ref<java::io::UncheckedIOException> new_object(jni::ref<java::io::IOException> cause) { return base_::new_object(cause); }
	jni::ref<java::io::IOException> getCause() { return call_method<"getCause", jni::ref<java::io::IOException>>(); }

protected:

	UncheckedIOException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_IO_UNCHECKEDIOEXCEPTION