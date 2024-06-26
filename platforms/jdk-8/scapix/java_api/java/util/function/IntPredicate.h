// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_FUNCTION_INTPREDICATE_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_FUNCTION_INTPREDICATE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::function { class IntPredicate; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::function::IntPredicate>
{
	static constexpr fixed_string class_name = "java/util/function/IntPredicate";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_FUNCTION_INTPREDICATE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_FUNCTION_INTPREDICATE)
#define SCAPIX_JAVA_API_JAVA_UTIL_FUNCTION_INTPREDICATE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::function::IntPredicate : public jni::object_base<"java/util/function/IntPredicate",
	java::lang::Object>
{
public:

	jboolean test(jint p1) { return call_method<"test", jboolean>(p1); }
	jni::ref<java::util::function::IntPredicate> and_(jni::ref<java::util::function::IntPredicate> p1) { return call_method<"and", jni::ref<java::util::function::IntPredicate>>(p1); }
	jni::ref<java::util::function::IntPredicate> negate() { return call_method<"negate", jni::ref<java::util::function::IntPredicate>>(); }
	jni::ref<java::util::function::IntPredicate> or_(jni::ref<java::util::function::IntPredicate> p1) { return call_method<"or", jni::ref<java::util::function::IntPredicate>>(p1); }

protected:

	IntPredicate(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_FUNCTION_INTPREDICATE
