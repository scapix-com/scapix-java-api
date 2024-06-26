// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/concurrent/CountedCompleter.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_STREAM_ABSTRACTTASK_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_ABSTRACTTASK_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::stream { class AbstractTask; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::stream::AbstractTask>
{
	static constexpr fixed_string class_name = "java/util/stream/AbstractTask";
	using base_classes = std::tuple<scapix::java_api::java::util::concurrent::CountedCompleter>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_ABSTRACTTASK_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_STREAM_ABSTRACTTASK)
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_ABSTRACTTASK

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::stream::AbstractTask : public jni::object_base<"java/util/stream/AbstractTask",
	java::util::concurrent::CountedCompleter>
{
public:

	static jint getLeafTarget() { return call_static_method<"getLeafTarget", jint>(); }
	static jlong suggestTargetSize(jlong sizeEstimate) { return call_static_method<"suggestTargetSize", jlong>(sizeEstimate); }
	jni::ref<java::lang::Object> getRawResult() { return call_method<"getRawResult", jni::ref<java::lang::Object>>(); }
	void compute() { return call_method<"compute", void>(); }
	void onCompletion(jni::ref<java::util::concurrent::CountedCompleter> caller) { return call_method<"onCompletion", void>(caller); }

protected:

	AbstractTask(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_ABSTRACTTASK
