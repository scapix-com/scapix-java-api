// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/stream/AbstractTask.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_STREAM_WHILEOPS_DROPWHILETASK_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_WHILEOPS_DROPWHILETASK_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::stream { class WhileOps_DropWhileTask; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::stream::WhileOps_DropWhileTask>
{
	static constexpr fixed_string class_name = "java/util/stream/WhileOps$DropWhileTask";
	using base_classes = std::tuple<scapix::java_api::java::util::stream::AbstractTask>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_WHILEOPS_DROPWHILETASK_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_STREAM_WHILEOPS_DROPWHILETASK)
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_WHILEOPS_DROPWHILETASK

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/concurrent/CountedCompleter.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::stream::WhileOps_DropWhileTask : public jni::object_base<"java/util/stream/WhileOps$DropWhileTask",
	java::util::stream::AbstractTask>
{
public:

	void onCompletion(jni::ref<java::util::concurrent::CountedCompleter> caller) { return call_method<"onCompletion", void>(caller); }

protected:

	WhileOps_DropWhileTask(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_WHILEOPS_DROPWHILETASK
