// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_FUNCTION_TODOUBLEBIFUNCTION_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_FUNCTION_TODOUBLEBIFUNCTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::function { class ToDoubleBiFunction; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::function::ToDoubleBiFunction>
{
	static constexpr fixed_string class_name = "java/util/function/ToDoubleBiFunction";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_FUNCTION_TODOUBLEBIFUNCTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_FUNCTION_TODOUBLEBIFUNCTION)
#define SCAPIX_JAVA_API_JAVA_UTIL_FUNCTION_TODOUBLEBIFUNCTION

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::function::ToDoubleBiFunction : public jni::object_base<"java/util/function/ToDoubleBiFunction",
	java::lang::Object>
{
public:

	jdouble applyAsDouble(jni::ref<java::lang::Object> p1, jni::ref<java::lang::Object> p2) { return call_method<"applyAsDouble", jdouble>(p1, p2); }

protected:

	ToDoubleBiFunction(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_FUNCTION_TODOUBLEBIFUNCTION