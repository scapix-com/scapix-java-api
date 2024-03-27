// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_BASE64_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_BASE64_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class Base64; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::Base64>
{
	static constexpr fixed_string class_name = "java/util/Base64";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_BASE64_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_BASE64)
#define SCAPIX_JAVA_API_JAVA_UTIL_BASE64

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/Base64_Decoder.h>
#include <scapix/java_api/java/util/Base64_Encoder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::Base64 : public jni::object_base<"java/util/Base64",
	java::lang::Object>
{
public:

	using Encoder = Base64_Encoder;
	using Decoder = Base64_Decoder;

	static jni::ref<java::util::Base64_Encoder> getEncoder() { return call_static_method<"getEncoder", jni::ref<java::util::Base64_Encoder>>(); }
	static jni::ref<java::util::Base64_Encoder> getUrlEncoder() { return call_static_method<"getUrlEncoder", jni::ref<java::util::Base64_Encoder>>(); }
	static jni::ref<java::util::Base64_Encoder> getMimeEncoder() { return call_static_method<"getMimeEncoder", jni::ref<java::util::Base64_Encoder>>(); }
	static jni::ref<java::util::Base64_Encoder> getMimeEncoder(jint p1, jni::ref<jni::array<jbyte>> p2) { return call_static_method<"getMimeEncoder", jni::ref<java::util::Base64_Encoder>>(p1, p2); }
	static jni::ref<java::util::Base64_Decoder> getDecoder() { return call_static_method<"getDecoder", jni::ref<java::util::Base64_Decoder>>(); }
	static jni::ref<java::util::Base64_Decoder> getUrlDecoder() { return call_static_method<"getUrlDecoder", jni::ref<java::util::Base64_Decoder>>(); }
	static jni::ref<java::util::Base64_Decoder> getMimeDecoder() { return call_static_method<"getMimeDecoder", jni::ref<java::util::Base64_Decoder>>(); }

protected:

	Base64(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_BASE64
