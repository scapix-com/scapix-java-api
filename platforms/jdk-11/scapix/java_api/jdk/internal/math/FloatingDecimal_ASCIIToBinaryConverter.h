// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_MATH_FLOATINGDECIMAL_ASCIITOBINARYCONVERTER_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_MATH_FLOATINGDECIMAL_ASCIITOBINARYCONVERTER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::math { class FloatingDecimal_ASCIIToBinaryConverter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::math::FloatingDecimal_ASCIIToBinaryConverter>
{
	static constexpr fixed_string class_name = "jdk/internal/math/FloatingDecimal$ASCIIToBinaryConverter";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_MATH_FLOATINGDECIMAL_ASCIITOBINARYCONVERTER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_MATH_FLOATINGDECIMAL_ASCIITOBINARYCONVERTER)
#define SCAPIX_JAVA_API_JDK_INTERNAL_MATH_FLOATINGDECIMAL_ASCIITOBINARYCONVERTER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class jdk::internal::math::FloatingDecimal_ASCIIToBinaryConverter : public jni::object_base<"jdk/internal/math/FloatingDecimal$ASCIIToBinaryConverter",
	java::lang::Object>
{
public:

	jdouble doubleValue() { return call_method<"doubleValue", jdouble>(); }
	jfloat floatValue() { return call_method<"floatValue", jfloat>(); }

protected:

	FloatingDecimal_ASCIIToBinaryConverter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_MATH_FLOATINGDECIMAL_ASCIITOBINARYCONVERTER
