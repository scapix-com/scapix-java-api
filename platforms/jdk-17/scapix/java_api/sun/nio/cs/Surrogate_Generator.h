// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_NIO_CS_SURROGATE_GENERATOR_FWD
#define SCAPIX_JAVA_API_SUN_NIO_CS_SURROGATE_GENERATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::nio::cs { class Surrogate_Generator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::nio::cs::Surrogate_Generator>
{
	static constexpr fixed_string class_name = "sun/nio/cs/Surrogate$Generator";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_CS_SURROGATE_GENERATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_NIO_CS_SURROGATE_GENERATOR)
#define SCAPIX_JAVA_API_SUN_NIO_CS_SURROGATE_GENERATOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/nio/CharBuffer.h>
#include <scapix/java_api/java/nio/charset/CoderResult.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::nio::cs::Surrogate_Generator : public jni::object_base<"sun/nio/cs/Surrogate$Generator",
	java::lang::Object>
{
public:

	static jni::ref<sun::nio::cs::Surrogate_Generator> new_object() { return base_::new_object(); }
	jni::ref<java::nio::charset::CoderResult> error() { return call_method<"error", jni::ref<java::nio::charset::CoderResult>>(); }
	jint generate(jint uc, jint len, jni::ref<java::nio::CharBuffer> dst) { return call_method<"generate", jint>(uc, len, dst); }
	jint generate(jint uc, jint len, jni::ref<jni::array<jchar>> da, jint dp, jint dl) { return call_method<"generate", jint>(uc, len, da, dp, dl); }

protected:

	Surrogate_Generator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_CS_SURROGATE_GENERATOR
