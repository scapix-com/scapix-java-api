// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/concurrent/CountedCompleter.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_ARRAYPREFIXHELPERS_DOUBLECUMULATETASK_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_ARRAYPREFIXHELPERS_DOUBLECUMULATETASK_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class ArrayPrefixHelpers_DoubleCumulateTask; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::ArrayPrefixHelpers_DoubleCumulateTask>
{
	static constexpr fixed_string class_name = "java/util/ArrayPrefixHelpers$DoubleCumulateTask";
	using base_classes = std::tuple<scapix::java_api::java::util::concurrent::CountedCompleter>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_ARRAYPREFIXHELPERS_DOUBLECUMULATETASK_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_ARRAYPREFIXHELPERS_DOUBLECUMULATETASK)
#define SCAPIX_JAVA_API_JAVA_UTIL_ARRAYPREFIXHELPERS_DOUBLECUMULATETASK

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/function/DoubleBinaryOperator.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::ArrayPrefixHelpers_DoubleCumulateTask : public jni::object_base<"java/util/ArrayPrefixHelpers$DoubleCumulateTask",
	java::util::concurrent::CountedCompleter>
{
public:

	static jni::ref<java::util::ArrayPrefixHelpers_DoubleCumulateTask> new_object(jni::ref<java::util::ArrayPrefixHelpers_DoubleCumulateTask> parent, jni::ref<java::util::function::DoubleBinaryOperator> function, jni::ref<jni::array<jdouble>> array, jint lo, jint hi) { return base_::new_object(parent, function, array, lo, hi); }
	void compute() { return call_method<"compute", void>(); }

protected:

	ArrayPrefixHelpers_DoubleCumulateTask(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_ARRAYPREFIXHELPERS_DOUBLECUMULATETASK