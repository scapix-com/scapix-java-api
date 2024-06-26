// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_FUNCTION_LONGUNARYOPERATOR_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_FUNCTION_LONGUNARYOPERATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::function { class LongUnaryOperator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::function::LongUnaryOperator>
{
	static constexpr fixed_string class_name = "java/util/function/LongUnaryOperator";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_FUNCTION_LONGUNARYOPERATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_FUNCTION_LONGUNARYOPERATOR)
#define SCAPIX_JAVA_API_JAVA_UTIL_FUNCTION_LONGUNARYOPERATOR

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::function::LongUnaryOperator : public jni::object_base<"java/util/function/LongUnaryOperator",
	java::lang::Object>
{
public:

	jlong applyAsLong(jlong p1) { return call_method<"applyAsLong", jlong>(p1); }
	jni::ref<java::util::function::LongUnaryOperator> compose(jni::ref<java::util::function::LongUnaryOperator> before) { return call_method<"compose", jni::ref<java::util::function::LongUnaryOperator>>(before); }
	jni::ref<java::util::function::LongUnaryOperator> andThen(jni::ref<java::util::function::LongUnaryOperator> after) { return call_method<"andThen", jni::ref<java::util::function::LongUnaryOperator>>(after); }
	static jni::ref<java::util::function::LongUnaryOperator> identity() { return call_static_method<"identity", jni::ref<java::util::function::LongUnaryOperator>>(); }

protected:

	LongUnaryOperator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_FUNCTION_LONGUNARYOPERATOR
