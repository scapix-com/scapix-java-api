// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_FUTURE_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_FUTURE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::concurrent { class Future; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::concurrent::Future>
{
	static constexpr fixed_string class_name = "java/util/concurrent/Future";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_FUTURE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_FUTURE)
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_FUTURE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/concurrent/TimeUnit.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::concurrent::Future : public jni::object_base<"java/util/concurrent/Future",
	java::lang::Object>
{
public:

	jboolean cancel(jboolean p1) { return call_method<"cancel", jboolean>(p1); }
	jboolean isCancelled() { return call_method<"isCancelled", jboolean>(); }
	jboolean isDone() { return call_method<"isDone", jboolean>(); }
	jni::ref<java::lang::Object> get() { return call_method<"get", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::Object> get(jlong p1, jni::ref<java::util::concurrent::TimeUnit> p2) { return call_method<"get", jni::ref<java::lang::Object>>(p1, p2); }

protected:

	Future(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_FUTURE