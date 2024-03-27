// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_NIO_CHARSET_CODERRESULT_FWD
#define SCAPIX_JAVA_API_JAVA_NIO_CHARSET_CODERRESULT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::nio::charset { class CoderResult; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::nio::charset::CoderResult>
{
	static constexpr fixed_string class_name = "java/nio/charset/CoderResult";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_CHARSET_CODERRESULT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_NIO_CHARSET_CODERRESULT)
#define SCAPIX_JAVA_API_JAVA_NIO_CHARSET_CODERRESULT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::nio::charset::CoderResult : public jni::object_base<"java/nio/charset/CoderResult",
	java::lang::Object>
{
public:

	static jni::ref<java::nio::charset::CoderResult> UNDERFLOW() { return get_static_field<"UNDERFLOW", jni::ref<java::nio::charset::CoderResult>>(); }
	static jni::ref<java::nio::charset::CoderResult> OVERFLOW() { return get_static_field<"OVERFLOW", jni::ref<java::nio::charset::CoderResult>>(); }

	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jboolean isUnderflow() { return call_method<"isUnderflow", jboolean>(); }
	jboolean isOverflow() { return call_method<"isOverflow", jboolean>(); }
	jboolean isError() { return call_method<"isError", jboolean>(); }
	jboolean isMalformed() { return call_method<"isMalformed", jboolean>(); }
	jboolean isUnmappable() { return call_method<"isUnmappable", jboolean>(); }
	jint length() { return call_method<"length", jint>(); }
	static jni::ref<java::nio::charset::CoderResult> malformedForLength(jint p1) { return call_static_method<"malformedForLength", jni::ref<java::nio::charset::CoderResult>>(p1); }
	static jni::ref<java::nio::charset::CoderResult> unmappableForLength(jint p1) { return call_static_method<"unmappableForLength", jni::ref<java::nio::charset::CoderResult>>(p1); }
	void throwException() { return call_method<"throwException", void>(); }

protected:

	CoderResult(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_CHARSET_CODERRESULT
