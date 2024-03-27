// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_TIMER_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_TIMER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class Timer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::Timer>
{
	static constexpr fixed_string class_name = "java/util/Timer";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_TIMER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_TIMER)
#define SCAPIX_JAVA_API_JAVA_UTIL_TIMER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Date.h>
#include <scapix/java_api/java/util/TimerTask.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::Timer : public jni::object_base<"java/util/Timer",
	java::lang::Object>
{
public:

	static jni::ref<java::util::Timer> new_object() { return base_::new_object(); }
	static jni::ref<java::util::Timer> new_object(jboolean p1) { return base_::new_object(p1); }
	static jni::ref<java::util::Timer> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }
	static jni::ref<java::util::Timer> new_object(jni::ref<java::lang::String> p1, jboolean p2) { return base_::new_object(p1, p2); }
	void schedule(jni::ref<java::util::TimerTask> p1, jlong p2) { return call_method<"schedule", void>(p1, p2); }
	void schedule(jni::ref<java::util::TimerTask> p1, jni::ref<java::util::Date> p2) { return call_method<"schedule", void>(p1, p2); }
	void schedule(jni::ref<java::util::TimerTask> p1, jlong p2, jlong p3) { return call_method<"schedule", void>(p1, p2, p3); }
	void schedule(jni::ref<java::util::TimerTask> p1, jni::ref<java::util::Date> p2, jlong p3) { return call_method<"schedule", void>(p1, p2, p3); }
	void scheduleAtFixedRate(jni::ref<java::util::TimerTask> p1, jlong p2, jlong p3) { return call_method<"scheduleAtFixedRate", void>(p1, p2, p3); }
	void scheduleAtFixedRate(jni::ref<java::util::TimerTask> p1, jni::ref<java::util::Date> p2, jlong p3) { return call_method<"scheduleAtFixedRate", void>(p1, p2, p3); }
	void cancel() { return call_method<"cancel", void>(); }
	jint purge() { return call_method<"purge", jint>(); }

protected:

	Timer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_TIMER