// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/nio/charset/CharsetEncoder.h>
#include <scapix/java_api/sun/nio/cs/ArrayEncoder.h>

#ifndef SCAPIX_JAVA_API_SUN_NIO_CS_SINGLEBYTE_ENCODER_FWD
#define SCAPIX_JAVA_API_SUN_NIO_CS_SINGLEBYTE_ENCODER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::nio::cs { class SingleByte_Encoder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::nio::cs::SingleByte_Encoder>
{
	static constexpr fixed_string class_name = "sun/nio/cs/SingleByte$Encoder";
	using base_classes = std::tuple<scapix::java_api::java::nio::charset::CharsetEncoder, scapix::java_api::sun::nio::cs::ArrayEncoder>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_CS_SINGLEBYTE_ENCODER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_NIO_CS_SINGLEBYTE_ENCODER)
#define SCAPIX_JAVA_API_SUN_NIO_CS_SINGLEBYTE_ENCODER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/nio/charset/Charset.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::nio::cs::SingleByte_Encoder : public jni::object_base<"sun/nio/cs/SingleByte$Encoder",
	java::nio::charset::CharsetEncoder,
	sun::nio::cs::ArrayEncoder>
{
public:

	static jni::ref<sun::nio::cs::SingleByte_Encoder> new_object(jni::ref<java::nio::charset::Charset> cs, jni::ref<jni::array<jchar>> c2b, jni::ref<jni::array<jchar>> c2bIndex, jboolean isASCIICompatible) { return base_::new_object(cs, c2b, c2bIndex, isASCIICompatible); }
	jboolean canEncode(jchar c) { return call_method<"canEncode", jboolean>(c); }
	jboolean isLegalReplacement(jni::ref<jni::array<jbyte>> repl) { return call_method<"isLegalReplacement", jboolean>(repl); }
	jint encode(jchar ch) { return call_method<"encode", jint>(ch); }
	jint encode(jni::ref<jni::array<jchar>> src, jint sp, jint len, jni::ref<jni::array<jbyte>> dst) { return call_method<"encode", jint>(src, sp, len, dst); }
	jint encodeFromLatin1(jni::ref<jni::array<jbyte>> src, jint sp, jint len, jni::ref<jni::array<jbyte>> dst) { return call_method<"encodeFromLatin1", jint>(src, sp, len, dst); }
	jint encodeFromUTF16(jni::ref<jni::array<jbyte>> src, jint sp, jint len, jni::ref<jni::array<jbyte>> dst) { return call_method<"encodeFromUTF16", jint>(src, sp, len, dst); }
	jboolean isASCIICompatible() { return call_method<"isASCIICompatible", jboolean>(); }

protected:

	SingleByte_Encoder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_CS_SINGLEBYTE_ENCODER
