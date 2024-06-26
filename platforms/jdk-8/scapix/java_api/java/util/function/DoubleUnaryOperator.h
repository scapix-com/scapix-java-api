// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_FUNCTION_DOUBLEUNARYOPERATOR_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_FUNCTION_DOUBLEUNARYOPERATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::function { class DoubleUnaryOperator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::function::DoubleUnaryOperator>
{
	static constexpr fixed_string class_name = "java/util/function/DoubleUnaryOperator";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_FUNCTION_DOUBLEUNARYOPERATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_FUNCTION_DOUBLEUNARYOPERATOR)
#define SCAPIX_JAVA_API_JAVA_UTIL_FUNCTION_DOUBLEUNARYOPERATOR

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::function::DoubleUnaryOperator : public jni::object_base<"java/util/function/DoubleUnaryOperator",
	java::lang::Object>
{
public:

	jdouble applyAsDouble(jdouble p1) { return call_method<"applyAsDouble", jdouble>(p1); }
	jni::ref<java::util::function::DoubleUnaryOperator> compose(jni::ref<java::util::function::DoubleUnaryOperator> p1) { return call_method<"compose", jni::ref<java::util::function::DoubleUnaryOperator>>(p1); }
	jni::ref<java::util::function::DoubleUnaryOperator> andThen(jni::ref<java::util::function::DoubleUnaryOperator> p1) { return call_method<"andThen", jni::ref<java::util::function::DoubleUnaryOperator>>(p1); }
	static jni::ref<java::util::function::DoubleUnaryOperator> identity() { return call_static_method<"identity", jni::ref<java::util::function::DoubleUnaryOperator>>(); }

protected:

	DoubleUnaryOperator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_FUNCTION_DOUBLEUNARYOPERATOR
