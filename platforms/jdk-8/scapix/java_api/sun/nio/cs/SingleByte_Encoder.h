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

	static jni::ref<sun::nio::cs::SingleByte_Encoder> new_object(jni::ref<java::nio::charset::Charset> p1, jni::ref<jni::array<jchar>> p2, jni::ref<jni::array<jchar>> p3) { return base_::new_object(p1, p2, p3); }
	jboolean canEncode(jchar p1) { return call_method<"canEncode", jboolean>(p1); }
	jboolean isLegalReplacement(jni::ref<jni::array<jbyte>> p1) { return call_method<"isLegalReplacement", jboolean>(p1); }
	jint encode(jchar p1) { return call_method<"encode", jint>(p1); }
	jint encode(jni::ref<jni::array<jchar>> p1, jint p2, jint p3, jni::ref<jni::array<jbyte>> p4) { return call_method<"encode", jint>(p1, p2, p3, p4); }

protected:

	SingleByte_Encoder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_CS_SINGLEBYTE_ENCODER