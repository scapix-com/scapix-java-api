// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_FUNCTION_INTTODOUBLEFUNCTION_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_FUNCTION_INTTODOUBLEFUNCTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::function { class IntToDoubleFunction; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::function::IntToDoubleFunction>
{
	static constexpr fixed_string class_name = "java/util/function/IntToDoubleFunction";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_FUNCTION_INTTODOUBLEFUNCTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_FUNCTION_INTTODOUBLEFUNCTION)
#define SCAPIX_JAVA_API_JAVA_UTIL_FUNCTION_INTTODOUBLEFUNCTION

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::function::IntToDoubleFunction : public jni::object_base<"java/util/function/IntToDoubleFunction",
	java::lang::Object>
{
public:

	jdouble applyAsDouble(jint p1) { return call_method<"applyAsDouble", jdouble>(p1); }

protected:

	IntToDoubleFunction(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_FUNCTION_INTTODOUBLEFUNCTION
