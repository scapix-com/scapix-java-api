// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_LOCKS_CONDITION_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_LOCKS_CONDITION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::concurrent::locks { class Condition; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::concurrent::locks::Condition>
{
	static constexpr fixed_string class_name = "java/util/concurrent/locks/Condition";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_LOCKS_CONDITION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_LOCKS_CONDITION)
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_LOCKS_CONDITION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/Date.h>
#include <scapix/java_api/java/util/concurrent/TimeUnit.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::concurrent::locks::Condition : public jni::object_base<"java/util/concurrent/locks/Condition",
	java::lang::Object>
{
public:

	void await() { return call_method<"await", void>(); }
	void awaitUninterruptibly() { return call_method<"awaitUninterruptibly", void>(); }
	jlong awaitNanos(jlong p1) { return call_method<"awaitNanos", jlong>(p1); }
	jboolean await(jlong p1, jni::ref<java::util::concurrent::TimeUnit> p2) { return call_method<"await", jboolean>(p1, p2); }
	jboolean awaitUntil(jni::ref<java::util::Date> p1) { return call_method<"awaitUntil", jboolean>(p1); }
	void signal() { return call_method<"signal", void>(); }
	void signalAll() { return call_method<"signalAll", void>(); }

protected:

	Condition(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_LOCKS_CONDITION
