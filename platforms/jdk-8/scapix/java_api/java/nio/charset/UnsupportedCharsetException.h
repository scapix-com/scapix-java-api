// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/IllegalArgumentException.h>

#ifndef SCAPIX_JAVA_API_JAVA_NIO_CHARSET_UNSUPPORTEDCHARSETEXCEPTION_FWD
#define SCAPIX_JAVA_API_JAVA_NIO_CHARSET_UNSUPPORTEDCHARSETEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::nio::charset { class UnsupportedCharsetException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::nio::charset::UnsupportedCharsetException>
{
	static constexpr fixed_string class_name = "java/nio/charset/UnsupportedCharsetException";
	using base_classes = std::tuple<scapix::java_api::java::lang::IllegalArgumentException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_CHARSET_UNSUPPORTEDCHARSETEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_NIO_CHARSET_UNSUPPORTEDCHARSETEXCEPTION)
#define SCAPIX_JAVA_API_JAVA_NIO_CHARSET_UNSUPPORTEDCHARSETEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::nio::charset::UnsupportedCharsetException : public jni::object_base<"java/nio/charset/UnsupportedCharsetException",
	java::lang::IllegalArgumentException>
{
public:

	static jni::ref<java::nio::charset::UnsupportedCharsetException> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }
	jni::ref<java::lang::String> getCharsetName() { return call_method<"getCharsetName", jni::ref<java::lang::String>>(); }

protected:

	UnsupportedCharsetException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_CHARSET_UNSUPPORTEDCHARSETEXCEPTION
