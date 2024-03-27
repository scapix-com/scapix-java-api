// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/stream/LongPipeline_StatefulOp.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_STREAM_SORTEDOPS_OFLONG_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_SORTEDOPS_OFLONG_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::stream { class SortedOps_OfLong; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::stream::SortedOps_OfLong>
{
	static constexpr fixed_string class_name = "java/util/stream/SortedOps$OfLong";
	using base_classes = std::tuple<scapix::java_api::java::util::stream::LongPipeline_StatefulOp>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_SORTEDOPS_OFLONG_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_STREAM_SORTEDOPS_OFLONG)
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_SORTEDOPS_OFLONG

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/Spliterator.h>
#include <scapix/java_api/java/util/function/IntFunction.h>
#include <scapix/java_api/java/util/stream/Node.h>
#include <scapix/java_api/java/util/stream/PipelineHelper.h>
#include <scapix/java_api/java/util/stream/Sink.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::stream::SortedOps_OfLong : public jni::object_base<"java/util/stream/SortedOps$OfLong",
	java::util::stream::LongPipeline_StatefulOp>
{
public:

	jni::ref<java::util::stream::Sink> opWrapSink(jint p1, jni::ref<java::util::stream::Sink> p2) { return call_method<"opWrapSink", jni::ref<java::util::stream::Sink>>(p1, p2); }
	jni::ref<java::util::stream::Node> opEvaluateParallel(jni::ref<java::util::stream::PipelineHelper> p1, jni::ref<java::util::Spliterator> p2, jni::ref<java::util::function::IntFunction> p3) { return call_method<"opEvaluateParallel", jni::ref<java::util::stream::Node>>(p1, p2, p3); }

protected:

	SortedOps_OfLong(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_SORTEDOPS_OFLONG
