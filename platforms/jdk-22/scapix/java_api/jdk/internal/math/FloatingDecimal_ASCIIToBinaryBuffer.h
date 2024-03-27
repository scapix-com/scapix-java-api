// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/jdk/internal/math/FloatingDecimal_ASCIIToBinaryConverter.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_MATH_FLOATINGDECIMAL_ASCIITOBINARYBUFFER_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_MATH_FLOATINGDECIMAL_ASCIITOBINARYBUFFER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::math { class FloatingDecimal_ASCIIToBinaryBuffer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::math::FloatingDecimal_ASCIIToBinaryBuffer>
{
	static constexpr fixed_string class_name = "jdk/internal/math/FloatingDecimal$ASCIIToBinaryBuffer";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::jdk::internal::math::FloatingDecimal_ASCIIToBinaryConverter>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_MATH_FLOATINGDECIMAL_ASCIITOBINARYBUFFER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_MATH_FLOATINGDECIMAL_ASCIITOBINARYBUFFER)
#define SCAPIX_JAVA_API_JDK_INTERNAL_MATH_FLOATINGDECIMAL_ASCIITOBINARYBUFFER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class jdk::internal::math::FloatingDecimal_ASCIIToBinaryBuffer : public jni::object_base<"jdk/internal/math/FloatingDecimal$ASCIIToBinaryBuffer",
	java::lang::Object,
	jdk::internal::math::FloatingDecimal_ASCIIToBinaryConverter>
{
public:

	jdouble doubleValue() { return call_method<"doubleValue", jdouble>(); }
	jfloat floatValue() { return call_method<"floatValue", jfloat>(); }

protected:

	FloatingDecimal_ASCIIToBinaryBuffer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_MATH_FLOATINGDECIMAL_ASCIITOBINARYBUFFER