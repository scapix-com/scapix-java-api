// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/stream/AbstractShortCircuitTask.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_STREAM_WHILEOPS_TAKEWHILETASK_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_WHILEOPS_TAKEWHILETASK_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::stream { class WhileOps_TakeWhileTask; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::stream::WhileOps_TakeWhileTask>
{
	static constexpr fixed_string class_name = "java/util/stream/WhileOps$TakeWhileTask";
	using base_classes = std::tuple<scapix::java_api::java::util::stream::AbstractShortCircuitTask>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_WHILEOPS_TAKEWHILETASK_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_STREAM_WHILEOPS_TAKEWHILETASK)
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_WHILEOPS_TAKEWHILETASK

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/concurrent/CountedCompleter.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::stream::WhileOps_TakeWhileTask : public jni::object_base<"java/util/stream/WhileOps$TakeWhileTask",
	java::util::stream::AbstractShortCircuitTask>
{
public:

	void onCompletion(jni::ref<java::util::concurrent::CountedCompleter> caller) { return call_method<"onCompletion", void>(caller); }

protected:

	WhileOps_TakeWhileTask(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_WHILEOPS_TAKEWHILETASK
