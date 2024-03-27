// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/io/IOException.h>

#ifndef SCAPIX_JAVA_API_JAVA_NIO_CHARSET_CHARACTERCODINGEXCEPTION_FWD
#define SCAPIX_JAVA_API_JAVA_NIO_CHARSET_CHARACTERCODINGEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::nio::charset { class CharacterCodingException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::nio::charset::CharacterCodingException>
{
	static constexpr fixed_string class_name = "java/nio/charset/CharacterCodingException";
	using base_classes = std::tuple<scapix::java_api::java::io::IOException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_CHARSET_CHARACTERCODINGEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_NIO_CHARSET_CHARACTERCODINGEXCEPTION)
#define SCAPIX_JAVA_API_JAVA_NIO_CHARSET_CHARACTERCODINGEXCEPTION

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::nio::charset::CharacterCodingException : public jni::object_base<"java/nio/charset/CharacterCodingException",
	java::io::IOException>
{
public:

	static jni::ref<java::nio::charset::CharacterCodingException> new_object() { return base_::new_object(); }

protected:

	CharacterCodingException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_CHARSET_CHARACTERCODINGEXCEPTION