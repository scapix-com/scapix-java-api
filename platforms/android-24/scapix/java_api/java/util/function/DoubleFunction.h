// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_FUNCTION_DOUBLEFUNCTION_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_FUNCTION_DOUBLEFUNCTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::function { class DoubleFunction; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::function::DoubleFunction>
{
	static constexpr fixed_string class_name = "java/util/function/DoubleFunction";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_FUNCTION_DOUBLEFUNCTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_FUNCTION_DOUBLEFUNCTION)
#define SCAPIX_JAVA_API_JAVA_UTIL_FUNCTION_DOUBLEFUNCTION

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::function::DoubleFunction : public jni::object_base<"java/util/function/DoubleFunction",
	java::lang::Object>
{
public:

	jni::ref<java::lang::Object> apply(jdouble p1) { return call_method<"apply", jni::ref<java::lang::Object>>(p1); }

protected:

	DoubleFunction(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_FUNCTION_DOUBLEFUNCTION
