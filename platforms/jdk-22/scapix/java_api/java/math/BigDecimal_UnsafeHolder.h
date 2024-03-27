// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_MATH_BIGDECIMAL_UNSAFEHOLDER_FWD
#define SCAPIX_JAVA_API_JAVA_MATH_BIGDECIMAL_UNSAFEHOLDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::math { class BigDecimal_UnsafeHolder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::math::BigDecimal_UnsafeHolder>
{
	static constexpr fixed_string class_name = "java/math/BigDecimal$UnsafeHolder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_MATH_BIGDECIMAL_UNSAFEHOLDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_MATH_BIGDECIMAL_UNSAFEHOLDER)
#define SCAPIX_JAVA_API_JAVA_MATH_BIGDECIMAL_UNSAFEHOLDER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::math::BigDecimal_UnsafeHolder : public jni::object_base<"java/math/BigDecimal$UnsafeHolder",
	java::lang::Object>
{
public:


protected:

	BigDecimal_UnsafeHolder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_MATH_BIGDECIMAL_UNSAFEHOLDER
