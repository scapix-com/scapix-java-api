// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_NIO_CS_DELEGATABLEDECODER_FWD
#define SCAPIX_JAVA_API_SUN_NIO_CS_DELEGATABLEDECODER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::nio::cs { class DelegatableDecoder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::nio::cs::DelegatableDecoder>
{
	static constexpr fixed_string class_name = "sun/nio/cs/DelegatableDecoder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_CS_DELEGATABLEDECODER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_NIO_CS_DELEGATABLEDECODER)
#define SCAPIX_JAVA_API_SUN_NIO_CS_DELEGATABLEDECODER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/nio/ByteBuffer.h>
#include <scapix/java_api/java/nio/CharBuffer.h>
#include <scapix/java_api/java/nio/charset/CoderResult.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::nio::cs::DelegatableDecoder : public jni::object_base<"sun/nio/cs/DelegatableDecoder",
	java::lang::Object>
{
public:

	jni::ref<java::nio::charset::CoderResult> decodeLoop(jni::ref<java::nio::ByteBuffer> p1, jni::ref<java::nio::CharBuffer> p2) { return call_method<"decodeLoop", jni::ref<java::nio::charset::CoderResult>>(p1, p2); }
	void implReset() { return call_method<"implReset", void>(); }
	jni::ref<java::nio::charset::CoderResult> implFlush(jni::ref<java::nio::CharBuffer> p1) { return call_method<"implFlush", jni::ref<java::nio::charset::CoderResult>>(p1); }

protected:

	DelegatableDecoder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_CS_DELEGATABLEDECODER
