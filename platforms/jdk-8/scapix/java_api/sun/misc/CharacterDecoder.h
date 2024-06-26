// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_MISC_CHARACTERDECODER_FWD
#define SCAPIX_JAVA_API_SUN_MISC_CHARACTERDECODER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::misc { class CharacterDecoder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::misc::CharacterDecoder>
{
	static constexpr fixed_string class_name = "sun/misc/CharacterDecoder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MISC_CHARACTERDECODER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_MISC_CHARACTERDECODER)
#define SCAPIX_JAVA_API_SUN_MISC_CHARACTERDECODER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/InputStream.h>
#include <scapix/java_api/java/io/OutputStream.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/nio/ByteBuffer.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::misc::CharacterDecoder : public jni::object_base<"sun/misc/CharacterDecoder",
	java::lang::Object>
{
public:

	static jni::ref<sun::misc::CharacterDecoder> new_object() { return base_::new_object(); }
	void decodeBuffer(jni::ref<java::io::InputStream> p1, jni::ref<java::io::OutputStream> p2) { return call_method<"decodeBuffer", void>(p1, p2); }
	jni::ref<jni::array<jbyte>> decodeBuffer(jni::ref<java::lang::String> p1) { return call_method<"decodeBuffer", jni::ref<jni::array<jbyte>>>(p1); }
	jni::ref<jni::array<jbyte>> decodeBuffer(jni::ref<java::io::InputStream> p1) { return call_method<"decodeBuffer", jni::ref<jni::array<jbyte>>>(p1); }
	jni::ref<java::nio::ByteBuffer> decodeBufferToByteBuffer(jni::ref<java::lang::String> p1) { return call_method<"decodeBufferToByteBuffer", jni::ref<java::nio::ByteBuffer>>(p1); }
	jni::ref<java::nio::ByteBuffer> decodeBufferToByteBuffer(jni::ref<java::io::InputStream> p1) { return call_method<"decodeBufferToByteBuffer", jni::ref<java::nio::ByteBuffer>>(p1); }

protected:

	CharacterDecoder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MISC_CHARACTERDECODER
