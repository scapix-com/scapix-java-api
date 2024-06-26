// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_FUNCTION_DOUBLEPREDICATE_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_FUNCTION_DOUBLEPREDICATE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::function { class DoublePredicate; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::function::DoublePredicate>
{
	static constexpr fixed_string class_name = "java/util/function/DoublePredicate";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_FUNCTION_DOUBLEPREDICATE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_FUNCTION_DOUBLEPREDICATE)
#define SCAPIX_JAVA_API_JAVA_UTIL_FUNCTION_DOUBLEPREDICATE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::function::DoublePredicate : public jni::object_base<"java/util/function/DoublePredicate",
	java::lang::Object>
{
public:

	jboolean test(jdouble p1) { return call_method<"test", jboolean>(p1); }
	jni::ref<java::util::function::DoublePredicate> and_(jni::ref<java::util::function::DoublePredicate> p1) { return call_method<"and", jni::ref<java::util::function::DoublePredicate>>(p1); }
	jni::ref<java::util::function::DoublePredicate> negate() { return call_method<"negate", jni::ref<java::util::function::DoublePredicate>>(); }
	jni::ref<java::util::function::DoublePredicate> or_(jni::ref<java::util::function::DoublePredicate> p1) { return call_method<"or", jni::ref<java::util::function::DoublePredicate>>(p1); }

protected:

	DoublePredicate(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_FUNCTION_DOUBLEPREDICATE
