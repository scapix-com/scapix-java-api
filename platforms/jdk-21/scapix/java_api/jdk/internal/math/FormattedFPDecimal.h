// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_MATH_FORMATTEDFPDECIMAL_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_MATH_FORMATTEDFPDECIMAL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::math { class FormattedFPDecimal; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::math::FormattedFPDecimal>
{
	static constexpr fixed_string class_name = "jdk/internal/math/FormattedFPDecimal";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_MATH_FORMATTEDFPDECIMAL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_MATH_FORMATTEDFPDECIMAL)
#define SCAPIX_JAVA_API_JDK_INTERNAL_MATH_FORMATTEDFPDECIMAL

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::math::FormattedFPDecimal : public jni::object_base<"jdk/internal/math/FormattedFPDecimal",
	java::lang::Object>
{
public:

	static jchar SCIENTIFIC() { return get_static_field<"SCIENTIFIC", jchar>(); }
	static jchar PLAIN() { return get_static_field<"PLAIN", jchar>(); }
	static jchar GENERAL() { return get_static_field<"GENERAL", jchar>(); }

	static jni::ref<jdk::internal::math::FormattedFPDecimal> valueOf(jdouble v, jint p2, jchar prec) { return call_static_method<"valueOf", jni::ref<jdk::internal::math::FormattedFPDecimal>>(v, p2, prec); }
	void set(jlong f, jint p2, jint e) { return call_method<"set", void>(f, p2, e); }
	jni::ref<jni::array<jchar>> getExponent() { return call_method<"getExponent", jni::ref<jni::array<jchar>>>(); }
	jni::ref<jni::array<jchar>> getMantissa() { return call_method<"getMantissa", jni::ref<jni::array<jchar>>>(); }
	jint getExponentRounded() { return call_method<"getExponentRounded", jint>(); }

protected:

	FormattedFPDecimal(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_MATH_FORMATTEDFPDECIMAL
