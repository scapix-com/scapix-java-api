// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_NIO_CHARSET_STANDARDCHARSETS_FWD
#define SCAPIX_JAVA_API_JAVA_NIO_CHARSET_STANDARDCHARSETS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::nio::charset { class StandardCharsets; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::nio::charset::StandardCharsets>
{
	static constexpr fixed_string class_name = "java/nio/charset/StandardCharsets";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_CHARSET_STANDARDCHARSETS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_NIO_CHARSET_STANDARDCHARSETS)
#define SCAPIX_JAVA_API_JAVA_NIO_CHARSET_STANDARDCHARSETS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/nio/charset/Charset.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::nio::charset::StandardCharsets : public jni::object_base<"java/nio/charset/StandardCharsets",
	java::lang::Object>
{
public:

	static jni::ref<java::nio::charset::Charset> ISO_8859_1() { return get_static_field<"ISO_8859_1", jni::ref<java::nio::charset::Charset>>(); }
	static jni::ref<java::nio::charset::Charset> US_ASCII() { return get_static_field<"US_ASCII", jni::ref<java::nio::charset::Charset>>(); }
	static jni::ref<java::nio::charset::Charset> UTF_16() { return get_static_field<"UTF_16", jni::ref<java::nio::charset::Charset>>(); }
	static jni::ref<java::nio::charset::Charset> UTF_16BE() { return get_static_field<"UTF_16BE", jni::ref<java::nio::charset::Charset>>(); }
	static jni::ref<java::nio::charset::Charset> UTF_16LE() { return get_static_field<"UTF_16LE", jni::ref<java::nio::charset::Charset>>(); }
	static jni::ref<java::nio::charset::Charset> UTF_8() { return get_static_field<"UTF_8", jni::ref<java::nio::charset::Charset>>(); }


protected:

	StandardCharsets(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_CHARSET_STANDARDCHARSETS