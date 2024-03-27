// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_FUNCTION_TOLONGFUNCTION_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_FUNCTION_TOLONGFUNCTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::function { class ToLongFunction; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::function::ToLongFunction>
{
	static constexpr fixed_string class_name = "java/util/function/ToLongFunction";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_FUNCTION_TOLONGFUNCTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_FUNCTION_TOLONGFUNCTION)
#define SCAPIX_JAVA_API_JAVA_UTIL_FUNCTION_TOLONGFUNCTION

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::function::ToLongFunction : public jni::object_base<"java/util/function/ToLongFunction",
	java::lang::Object>
{
public:

	jlong applyAsLong(jni::ref<java::lang::Object> p1) { return call_method<"applyAsLong", jlong>(p1); }

protected:

	ToLongFunction(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_FUNCTION_TOLONGFUNCTION