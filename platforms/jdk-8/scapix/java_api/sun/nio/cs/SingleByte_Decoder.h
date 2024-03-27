// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/nio/charset/CharsetDecoder.h>
#include <scapix/java_api/sun/nio/cs/ArrayDecoder.h>

#ifndef SCAPIX_JAVA_API_SUN_NIO_CS_SINGLEBYTE_DECODER_FWD
#define SCAPIX_JAVA_API_SUN_NIO_CS_SINGLEBYTE_DECODER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::nio::cs { class SingleByte_Decoder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::nio::cs::SingleByte_Decoder>
{
	static constexpr fixed_string class_name = "sun/nio/cs/SingleByte$Decoder";
	using base_classes = std::tuple<scapix::java_api::java::nio::charset::CharsetDecoder, scapix::java_api::sun::nio::cs::ArrayDecoder>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_CS_SINGLEBYTE_DECODER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_NIO_CS_SINGLEBYTE_DECODER)
#define SCAPIX_JAVA_API_SUN_NIO_CS_SINGLEBYTE_DECODER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/nio/charset/Charset.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::nio::cs::SingleByte_Decoder : public jni::object_base<"sun/nio/cs/SingleByte$Decoder",
	java::nio::charset::CharsetDecoder,
	sun::nio::cs::ArrayDecoder>
{
public:

	static jni::ref<sun::nio::cs::SingleByte_Decoder> new_object(jni::ref<java::nio::charset::Charset> p1, jni::ref<jni::array<jchar>> p2) { return base_::new_object(p1, p2); }
	jchar decode(jint p1) { return call_method<"decode", jchar>(p1); }
	jint decode(jni::ref<jni::array<jbyte>> p1, jint p2, jint p3, jni::ref<jni::array<jchar>> p4) { return call_method<"decode", jint>(p1, p2, p3, p4); }

protected:

	SingleByte_Decoder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_CS_SINGLEBYTE_DECODER