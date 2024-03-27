// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_NIO_CHARSET_CHARSETENCODER_FWD
#define SCAPIX_JAVA_API_JAVA_NIO_CHARSET_CHARSETENCODER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::nio::charset { class CharsetEncoder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::nio::charset::CharsetEncoder>
{
	static constexpr fixed_string class_name = "java/nio/charset/CharsetEncoder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_CHARSET_CHARSETENCODER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_NIO_CHARSET_CHARSETENCODER)
#define SCAPIX_JAVA_API_JAVA_NIO_CHARSET_CHARSETENCODER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/nio/ByteBuffer.h>
#include <scapix/java_api/java/nio/CharBuffer.h>
#include <scapix/java_api/java/nio/charset/Charset.h>
#include <scapix/java_api/java/nio/charset/CoderResult.h>
#include <scapix/java_api/java/nio/charset/CodingErrorAction.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::nio::charset::CharsetEncoder : public jni::object_base<"java/nio/charset/CharsetEncoder",
	java::lang::Object>
{
public:

	jni::ref<java::nio::charset::Charset> charset() { return call_method<"charset", jni::ref<java::nio::charset::Charset>>(); }
	jni::ref<jni::array<jbyte>> replacement() { return call_method<"replacement", jni::ref<jni::array<jbyte>>>(); }
	jni::ref<java::nio::charset::CharsetEncoder> replaceWith(jni::ref<jni::array<jbyte>> p1) { return call_method<"replaceWith", jni::ref<java::nio::charset::CharsetEncoder>>(p1); }
	jboolean isLegalReplacement(jni::ref<jni::array<jbyte>> p1) { return call_method<"isLegalReplacement", jboolean>(p1); }
	jni::ref<java::nio::charset::CodingErrorAction> malformedInputAction() { return call_method<"malformedInputAction", jni::ref<java::nio::charset::CodingErrorAction>>(); }
	jni::ref<java::nio::charset::CharsetEncoder> onMalformedInput(jni::ref<java::nio::charset::CodingErrorAction> p1) { return call_method<"onMalformedInput", jni::ref<java::nio::charset::CharsetEncoder>>(p1); }
	jni::ref<java::nio::charset::CodingErrorAction> unmappableCharacterAction() { return call_method<"unmappableCharacterAction", jni::ref<java::nio::charset::CodingErrorAction>>(); }
	jni::ref<java::nio::charset::CharsetEncoder> onUnmappableCharacter(jni::ref<java::nio::charset::CodingErrorAction> p1) { return call_method<"onUnmappableCharacter", jni::ref<java::nio::charset::CharsetEncoder>>(p1); }
	jfloat averageBytesPerChar() { return call_method<"averageBytesPerChar", jfloat>(); }
	jfloat maxBytesPerChar() { return call_method<"maxBytesPerChar", jfloat>(); }
	jni::ref<java::nio::charset::CoderResult> encode(jni::ref<java::nio::CharBuffer> p1, jni::ref<java::nio::ByteBuffer> p2, jboolean p3) { return call_method<"encode", jni::ref<java::nio::charset::CoderResult>>(p1, p2, p3); }
	jni::ref<java::nio::charset::CoderResult> flush(jni::ref<java::nio::ByteBuffer> p1) { return call_method<"flush", jni::ref<java::nio::charset::CoderResult>>(p1); }
	jni::ref<java::nio::charset::CharsetEncoder> reset() { return call_method<"reset", jni::ref<java::nio::charset::CharsetEncoder>>(); }
	jni::ref<java::nio::ByteBuffer> encode(jni::ref<java::nio::CharBuffer> p1) { return call_method<"encode", jni::ref<java::nio::ByteBuffer>>(p1); }
	jboolean canEncode(jchar p1) { return call_method<"canEncode", jboolean>(p1); }
	jboolean canEncode(jni::ref<java::lang::CharSequence> p1) { return call_method<"canEncode", jboolean>(p1); }

protected:

	CharsetEncoder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_CHARSET_CHARSETENCODER