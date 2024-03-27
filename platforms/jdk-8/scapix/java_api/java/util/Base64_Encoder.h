// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_BASE64_ENCODER_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_BASE64_ENCODER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class Base64_Encoder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::Base64_Encoder>
{
	static constexpr fixed_string class_name = "java/util/Base64$Encoder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_BASE64_ENCODER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_BASE64_ENCODER)
#define SCAPIX_JAVA_API_JAVA_UTIL_BASE64_ENCODER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/OutputStream.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/nio/ByteBuffer.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::Base64_Encoder : public jni::object_base<"java/util/Base64$Encoder",
	java::lang::Object>
{
public:

	jni::ref<jni::array<jbyte>> encode(jni::ref<jni::array<jbyte>> p1) { return call_method<"encode", jni::ref<jni::array<jbyte>>>(p1); }
	jint encode(jni::ref<jni::array<jbyte>> p1, jni::ref<jni::array<jbyte>> p2) { return call_method<"encode", jint>(p1, p2); }
	jni::ref<java::lang::String> encodeToString(jni::ref<jni::array<jbyte>> p1) { return call_method<"encodeToString", jni::ref<java::lang::String>>(p1); }
	jni::ref<java::nio::ByteBuffer> encode(jni::ref<java::nio::ByteBuffer> p1) { return call_method<"encode", jni::ref<java::nio::ByteBuffer>>(p1); }
	jni::ref<java::io::OutputStream> wrap(jni::ref<java::io::OutputStream> p1) { return call_method<"wrap", jni::ref<java::io::OutputStream>>(p1); }
	jni::ref<java::util::Base64_Encoder> withoutPadding() { return call_method<"withoutPadding", jni::ref<java::util::Base64_Encoder>>(); }

protected:

	Base64_Encoder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_BASE64_ENCODER