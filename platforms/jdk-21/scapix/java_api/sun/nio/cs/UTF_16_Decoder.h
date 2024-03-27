// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/nio/cs/UnicodeDecoder.h>

#ifndef SCAPIX_JAVA_API_SUN_NIO_CS_UTF_16_DECODER_FWD
#define SCAPIX_JAVA_API_SUN_NIO_CS_UTF_16_DECODER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::nio::cs { class UTF_16_Decoder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::nio::cs::UTF_16_Decoder>
{
	static constexpr fixed_string class_name = "sun/nio/cs/UTF_16$Decoder";
	using base_classes = std::tuple<scapix::java_api::sun::nio::cs::UnicodeDecoder>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_CS_UTF_16_DECODER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_NIO_CS_UTF_16_DECODER)
#define SCAPIX_JAVA_API_SUN_NIO_CS_UTF_16_DECODER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/nio/charset/Charset.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::nio::cs::UTF_16_Decoder : public jni::object_base<"sun/nio/cs/UTF_16$Decoder",
	sun::nio::cs::UnicodeDecoder>
{
public:

	static jni::ref<sun::nio::cs::UTF_16_Decoder> new_object(jni::ref<java::nio::charset::Charset> cs) { return base_::new_object(cs); }

protected:

	UTF_16_Decoder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_CS_UTF_16_DECODER
