// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/nio/cs/HKSCS_Encoder.h>

#ifndef SCAPIX_JAVA_API_SUN_NIO_CS_MS950_HKSCS_XP_ENCODER_FWD
#define SCAPIX_JAVA_API_SUN_NIO_CS_MS950_HKSCS_XP_ENCODER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::nio::cs { class MS950_HKSCS_XP_Encoder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::nio::cs::MS950_HKSCS_XP_Encoder>
{
	static constexpr fixed_string class_name = "sun/nio/cs/MS950_HKSCS_XP$Encoder";
	using base_classes = std::tuple<scapix::java_api::sun::nio::cs::HKSCS_Encoder>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_CS_MS950_HKSCS_XP_ENCODER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_NIO_CS_MS950_HKSCS_XP_ENCODER)
#define SCAPIX_JAVA_API_SUN_NIO_CS_MS950_HKSCS_XP_ENCODER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::nio::cs::MS950_HKSCS_XP_Encoder : public jni::object_base<"sun/nio/cs/MS950_HKSCS_XP$Encoder",
	sun::nio::cs::HKSCS_Encoder>
{
public:

	jint encodeSupp(jint cp) { return call_method<"encodeSupp", jint>(cp); }

protected:

	MS950_HKSCS_XP_Encoder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_CS_MS950_HKSCS_XP_ENCODER