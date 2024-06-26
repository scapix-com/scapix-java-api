// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/stream/DoublePipeline_StatefulOp.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_STREAM_SORTEDOPS_OFDOUBLE_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_SORTEDOPS_OFDOUBLE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::stream { class SortedOps_OfDouble; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::stream::SortedOps_OfDouble>
{
	static constexpr fixed_string class_name = "java/util/stream/SortedOps$OfDouble";
	using base_classes = std::tuple<scapix::java_api::java::util::stream::DoublePipeline_StatefulOp>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_SORTEDOPS_OFDOUBLE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_STREAM_SORTEDOPS_OFDOUBLE)
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_SORTEDOPS_OFDOUBLE

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
class java::util::stream::SortedOps_OfDouble : public jni::object_base<"java/util/stream/SortedOps$OfDouble",
	java::util::stream::DoublePipeline_StatefulOp>
{
public:

	jni::ref<java::util::stream::Sink> opWrapSink(jint flags, jni::ref<java::util::stream::Sink> sink) { return call_method<"opWrapSink", jni::ref<java::util::stream::Sink>>(flags, sink); }
	jni::ref<java::util::stream::Node> opEvaluateParallel(jni::ref<java::util::stream::PipelineHelper> helper, jni::ref<java::util::Spliterator> spliterator, jni::ref<java::util::function::IntFunction> generator) { return call_method<"opEvaluateParallel", jni::ref<java::util::stream::Node>>(helper, spliterator, generator); }

protected:

	SortedOps_OfDouble(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_SORTEDOPS_OFDOUBLE
