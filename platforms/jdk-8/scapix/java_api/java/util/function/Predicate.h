// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_FUNCTION_PREDICATE_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_FUNCTION_PREDICATE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::function { class Predicate; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::function::Predicate>
{
	static constexpr fixed_string class_name = "java/util/function/Predicate";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_FUNCTION_PREDICATE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_FUNCTION_PREDICATE)
#define SCAPIX_JAVA_API_JAVA_UTIL_FUNCTION_PREDICATE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::function::Predicate : public jni::object_base<"java/util/function/Predicate",
	java::lang::Object>
{
public:

	jboolean test(jni::ref<java::lang::Object> p1) { return call_method<"test", jboolean>(p1); }
	jni::ref<java::util::function::Predicate> and_(jni::ref<java::util::function::Predicate> p1) { return call_method<"and", jni::ref<java::util::function::Predicate>>(p1); }
	jni::ref<java::util::function::Predicate> negate() { return call_method<"negate", jni::ref<java::util::function::Predicate>>(); }
	jni::ref<java::util::function::Predicate> or_(jni::ref<java::util::function::Predicate> p1) { return call_method<"or", jni::ref<java::util::function::Predicate>>(p1); }
	static jni::ref<java::util::function::Predicate> isEqual(jni::ref<java::lang::Object> p1) { return call_static_method<"isEqual", jni::ref<java::util::function::Predicate>>(p1); }

protected:

	Predicate(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_FUNCTION_PREDICATE
