// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/nio/cs/DoubleByte_Encoder.h>

#ifndef SCAPIX_JAVA_API_SUN_NIO_CS_DOUBLEBYTE_ENCODER_DBCSONLY_FWD
#define SCAPIX_JAVA_API_SUN_NIO_CS_DOUBLEBYTE_ENCODER_DBCSONLY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::nio::cs { class DoubleByte_Encoder_DBCSONLY; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::nio::cs::DoubleByte_Encoder_DBCSONLY>
{
	static constexpr fixed_string class_name = "sun/nio/cs/DoubleByte$Encoder_DBCSONLY";
	using base_classes = std::tuple<scapix::java_api::sun::nio::cs::DoubleByte_Encoder>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_CS_DOUBLEBYTE_ENCODER_DBCSONLY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_NIO_CS_DOUBLEBYTE_ENCODER_DBCSONLY)
#define SCAPIX_JAVA_API_SUN_NIO_CS_DOUBLEBYTE_ENCODER_DBCSONLY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/nio/charset/Charset.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::nio::cs::DoubleByte_Encoder_DBCSONLY : public jni::object_base<"sun/nio/cs/DoubleByte$Encoder_DBCSONLY",
	sun::nio::cs::DoubleByte_Encoder>
{
public:

	static jni::ref<sun::nio::cs::DoubleByte_Encoder_DBCSONLY> new_object(jni::ref<java::nio::charset::Charset> cs, jni::ref<jni::array<jbyte>> repl, jni::ref<jni::array<jchar>> c2b, jni::ref<jni::array<jchar>> c2bIndex, jboolean isASCIICompatible) { return base_::new_object(cs, repl, c2b, c2bIndex, isASCIICompatible); }
	jint encodeChar(jchar ch) { return call_method<"encodeChar", jint>(ch); }

protected:

	DoubleByte_Encoder_DBCSONLY(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_CS_DOUBLEBYTE_ENCODER_DBCSONLY
