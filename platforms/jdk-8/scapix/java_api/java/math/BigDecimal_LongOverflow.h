// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_MATH_BIGDECIMAL_LONGOVERFLOW_FWD
#define SCAPIX_JAVA_API_JAVA_MATH_BIGDECIMAL_LONGOVERFLOW_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::math { class BigDecimal_LongOverflow; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::math::BigDecimal_LongOverflow>
{
	static constexpr fixed_string class_name = "java/math/BigDecimal$LongOverflow";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_MATH_BIGDECIMAL_LONGOVERFLOW_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_MATH_BIGDECIMAL_LONGOVERFLOW)
#define SCAPIX_JAVA_API_JAVA_MATH_BIGDECIMAL_LONGOVERFLOW

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/math/BigDecimal.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::math::BigDecimal_LongOverflow : public jni::object_base<"java/math/BigDecimal$LongOverflow",
	java::lang::Object>
{
public:

	static void check(jni::ref<java::math::BigDecimal> p1) { return call_static_method<"check", void>(p1); }

protected:

	BigDecimal_LongOverflow(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_MATH_BIGDECIMAL_LONGOVERFLOW
