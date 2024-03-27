// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/nio/cs/UnicodeEncoder.h>

#ifndef SCAPIX_JAVA_API_SUN_NIO_CS_UTF_16LE_BOM_ENCODER_FWD
#define SCAPIX_JAVA_API_SUN_NIO_CS_UTF_16LE_BOM_ENCODER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::nio::cs { class UTF_16LE_BOM_Encoder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::nio::cs::UTF_16LE_BOM_Encoder>
{
	static constexpr fixed_string class_name = "sun/nio/cs/UTF_16LE_BOM$Encoder";
	using base_classes = std::tuple<scapix::java_api::sun::nio::cs::UnicodeEncoder>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_CS_UTF_16LE_BOM_ENCODER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_NIO_CS_UTF_16LE_BOM_ENCODER)
#define SCAPIX_JAVA_API_SUN_NIO_CS_UTF_16LE_BOM_ENCODER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/nio/charset/Charset.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::nio::cs::UTF_16LE_BOM_Encoder : public jni::object_base<"sun/nio/cs/UTF_16LE_BOM$Encoder",
	sun::nio::cs::UnicodeEncoder>
{
public:

	static jni::ref<sun::nio::cs::UTF_16LE_BOM_Encoder> new_object(jni::ref<java::nio::charset::Charset> p1) { return base_::new_object(p1); }

protected:

	UTF_16LE_BOM_Encoder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_CS_UTF_16LE_BOM_ENCODER
