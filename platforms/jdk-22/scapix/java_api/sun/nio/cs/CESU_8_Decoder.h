// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/nio/charset/CharsetDecoder.h>
#include <scapix/java_api/sun/nio/cs/ArrayDecoder.h>

#ifndef SCAPIX_JAVA_API_SUN_NIO_CS_CESU_8_DECODER_FWD
#define SCAPIX_JAVA_API_SUN_NIO_CS_CESU_8_DECODER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::nio::cs { class CESU_8_Decoder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::nio::cs::CESU_8_Decoder>
{
	static constexpr fixed_string class_name = "sun/nio/cs/CESU_8$Decoder";
	using base_classes = std::tuple<scapix::java_api::java::nio::charset::CharsetDecoder, scapix::java_api::sun::nio::cs::ArrayDecoder>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_CS_CESU_8_DECODER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_NIO_CS_CESU_8_DECODER)
#define SCAPIX_JAVA_API_SUN_NIO_CS_CESU_8_DECODER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::nio::cs::CESU_8_Decoder : public jni::object_base<"sun/nio/cs/CESU_8$Decoder",
	java::nio::charset::CharsetDecoder,
	sun::nio::cs::ArrayDecoder>
{
public:

	jint decode(jni::ref<jni::array<jbyte>> sa, jint sp, jint len, jni::ref<jni::array<jchar>> da) { return call_method<"decode", jint>(sa, sp, len, da); }

protected:

	CESU_8_Decoder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_CS_CESU_8_DECODER
