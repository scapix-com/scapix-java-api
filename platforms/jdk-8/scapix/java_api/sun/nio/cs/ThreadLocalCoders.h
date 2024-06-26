// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_NIO_CS_THREADLOCALCODERS_FWD
#define SCAPIX_JAVA_API_SUN_NIO_CS_THREADLOCALCODERS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::nio::cs { class ThreadLocalCoders; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::nio::cs::ThreadLocalCoders>
{
	static constexpr fixed_string class_name = "sun/nio/cs/ThreadLocalCoders";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_CS_THREADLOCALCODERS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_NIO_CS_THREADLOCALCODERS)
#define SCAPIX_JAVA_API_SUN_NIO_CS_THREADLOCALCODERS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/nio/charset/CharsetDecoder.h>
#include <scapix/java_api/java/nio/charset/CharsetEncoder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::nio::cs::ThreadLocalCoders : public jni::object_base<"sun/nio/cs/ThreadLocalCoders",
	java::lang::Object>
{
public:

	static jni::ref<sun::nio::cs::ThreadLocalCoders> new_object() { return base_::new_object(); }
	static jni::ref<java::nio::charset::CharsetDecoder> decoderFor(jni::ref<java::lang::Object> p1) { return call_static_method<"decoderFor", jni::ref<java::nio::charset::CharsetDecoder>>(p1); }
	static jni::ref<java::nio::charset::CharsetEncoder> encoderFor(jni::ref<java::lang::Object> p1) { return call_static_method<"encoderFor", jni::ref<java::nio::charset::CharsetEncoder>>(p1); }

protected:

	ThreadLocalCoders(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_CS_THREADLOCALCODERS
