// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_COUNTDOWNLATCH_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_COUNTDOWNLATCH_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::concurrent { class CountDownLatch; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::concurrent::CountDownLatch>
{
	static constexpr fixed_string class_name = "java/util/concurrent/CountDownLatch";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_COUNTDOWNLATCH_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_COUNTDOWNLATCH)
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_COUNTDOWNLATCH

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/concurrent/TimeUnit.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::concurrent::CountDownLatch : public jni::object_base<"java/util/concurrent/CountDownLatch",
	java::lang::Object>
{
public:

	static jni::ref<java::util::concurrent::CountDownLatch> new_object(jint p1) { return base_::new_object(p1); }
	void await() { return call_method<"await", void>(); }
	jboolean await(jlong p1, jni::ref<java::util::concurrent::TimeUnit> p2) { return call_method<"await", jboolean>(p1, p2); }
	void countDown() { return call_method<"countDown", void>(); }
	jlong getCount() { return call_method<"getCount", jlong>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	CountDownLatch(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_COUNTDOWNLATCH
