// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_FUNCTION_LONGTODOUBLEFUNCTION_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_FUNCTION_LONGTODOUBLEFUNCTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::function { class LongToDoubleFunction; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::function::LongToDoubleFunction>
{
	static constexpr fixed_string class_name = "java/util/function/LongToDoubleFunction";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_FUNCTION_LONGTODOUBLEFUNCTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_FUNCTION_LONGTODOUBLEFUNCTION)
#define SCAPIX_JAVA_API_JAVA_UTIL_FUNCTION_LONGTODOUBLEFUNCTION

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::function::LongToDoubleFunction : public jni::object_base<"java/util/function/LongToDoubleFunction",
	java::lang::Object>
{
public:

	jdouble applyAsDouble(jlong p1) { return call_method<"applyAsDouble", jdouble>(p1); }

protected:

	LongToDoubleFunction(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_FUNCTION_LONGTODOUBLEFUNCTION
