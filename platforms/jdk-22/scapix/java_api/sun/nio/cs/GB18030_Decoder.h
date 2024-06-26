// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/nio/charset/CharsetDecoder.h>

#ifndef SCAPIX_JAVA_API_SUN_NIO_CS_GB18030_DECODER_FWD
#define SCAPIX_JAVA_API_SUN_NIO_CS_GB18030_DECODER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::nio::cs { class GB18030_Decoder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::nio::cs::GB18030_Decoder>
{
	static constexpr fixed_string class_name = "sun/nio/cs/GB18030$Decoder";
	using base_classes = std::tuple<scapix::java_api::java::nio::charset::CharsetDecoder>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_CS_GB18030_DECODER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_NIO_CS_GB18030_DECODER)
#define SCAPIX_JAVA_API_SUN_NIO_CS_GB18030_DECODER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::nio::cs::GB18030_Decoder : public jni::object_base<"sun/nio/cs/GB18030$Decoder",
	java::nio::charset::CharsetDecoder>
{
public:


protected:

	GB18030_Decoder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_CS_GB18030_DECODER
