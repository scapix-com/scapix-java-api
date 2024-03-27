// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/nio/charset/CharsetDecoder.h>

#ifndef SCAPIX_JAVA_API_SUN_NIO_CS_UTF_32CODER_DECODER_FWD
#define SCAPIX_JAVA_API_SUN_NIO_CS_UTF_32CODER_DECODER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::nio::cs { class UTF_32Coder_Decoder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::nio::cs::UTF_32Coder_Decoder>
{
	static constexpr fixed_string class_name = "sun/nio/cs/UTF_32Coder$Decoder";
	using base_classes = std::tuple<scapix::java_api::java::nio::charset::CharsetDecoder>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_CS_UTF_32CODER_DECODER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_NIO_CS_UTF_32CODER_DECODER)
#define SCAPIX_JAVA_API_SUN_NIO_CS_UTF_32CODER_DECODER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::nio::cs::UTF_32Coder_Decoder : public jni::object_base<"sun/nio/cs/UTF_32Coder$Decoder",
	java::nio::charset::CharsetDecoder>
{
public:


protected:

	UTF_32Coder_Decoder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_CS_UTF_32CODER_DECODER
