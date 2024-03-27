// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/concurrent/CountedCompleter.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_ARRAYPREFIXHELPERS_LONGCUMULATETASK_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_ARRAYPREFIXHELPERS_LONGCUMULATETASK_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class ArrayPrefixHelpers_LongCumulateTask; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::ArrayPrefixHelpers_LongCumulateTask>
{
	static constexpr fixed_string class_name = "java/util/ArrayPrefixHelpers$LongCumulateTask";
	using base_classes = std::tuple<scapix::java_api::java::util::concurrent::CountedCompleter>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_ARRAYPREFIXHELPERS_LONGCUMULATETASK_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_ARRAYPREFIXHELPERS_LONGCUMULATETASK)
#define SCAPIX_JAVA_API_JAVA_UTIL_ARRAYPREFIXHELPERS_LONGCUMULATETASK

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/function/LongBinaryOperator.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::ArrayPrefixHelpers_LongCumulateTask : public jni::object_base<"java/util/ArrayPrefixHelpers$LongCumulateTask",
	java::util::concurrent::CountedCompleter>
{
public:

	static jni::ref<java::util::ArrayPrefixHelpers_LongCumulateTask> new_object(jni::ref<java::util::ArrayPrefixHelpers_LongCumulateTask> p1, jni::ref<java::util::function::LongBinaryOperator> p2, jni::ref<jni::array<jlong>> p3, jint p4, jint p5) { return base_::new_object(p1, p2, p3, p4, p5); }
	void compute() { return call_method<"compute", void>(); }

protected:

	ArrayPrefixHelpers_LongCumulateTask(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_ARRAYPREFIXHELPERS_LONGCUMULATETASK
