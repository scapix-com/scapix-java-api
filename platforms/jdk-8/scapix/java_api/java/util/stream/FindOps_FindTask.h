// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/stream/AbstractShortCircuitTask.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_STREAM_FINDOPS_FINDTASK_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_FINDOPS_FINDTASK_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::stream { class FindOps_FindTask; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::stream::FindOps_FindTask>
{
	static constexpr fixed_string class_name = "java/util/stream/FindOps$FindTask";
	using base_classes = std::tuple<scapix::java_api::java::util::stream::AbstractShortCircuitTask>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_FINDOPS_FINDTASK_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_STREAM_FINDOPS_FINDTASK)
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_FINDOPS_FINDTASK

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/concurrent/CountedCompleter.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::stream::FindOps_FindTask : public jni::object_base<"java/util/stream/FindOps$FindTask",
	java::util::stream::AbstractShortCircuitTask>
{
public:

	void onCompletion(jni::ref<java::util::concurrent::CountedCompleter> p1) { return call_method<"onCompletion", void>(p1); }

protected:

	FindOps_FindTask(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_FINDOPS_FINDTASK
