// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/stream/TerminalOp.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_STREAM_MATCHOPS_MATCHOP_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_MATCHOPS_MATCHOP_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::stream { class MatchOps_MatchOp; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::stream::MatchOps_MatchOp>
{
	static constexpr fixed_string class_name = "java/util/stream/MatchOps$MatchOp";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::stream::TerminalOp>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_MATCHOPS_MATCHOP_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_STREAM_MATCHOPS_MATCHOP)
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_MATCHOPS_MATCHOP

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Boolean.h>
#include <scapix/java_api/java/util/Spliterator.h>
#include <scapix/java_api/java/util/stream/PipelineHelper.h>
#include <scapix/java_api/java/util/stream/StreamShape.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::stream::MatchOps_MatchOp : public jni::object_base<"java/util/stream/MatchOps$MatchOp",
	java::lang::Object,
	java::util::stream::TerminalOp>
{
public:

	jint getOpFlags() { return call_method<"getOpFlags", jint>(); }
	jni::ref<java::util::stream::StreamShape> inputShape() { return call_method<"inputShape", jni::ref<java::util::stream::StreamShape>>(); }
	jni::ref<java::lang::Boolean> evaluateSequential(jni::ref<java::util::stream::PipelineHelper> p1, jni::ref<java::util::Spliterator> p2) { return call_method<"evaluateSequential", jni::ref<java::lang::Boolean>>(p1, p2); }
	jni::ref<java::lang::Boolean> evaluateParallel(jni::ref<java::util::stream::PipelineHelper> p1, jni::ref<java::util::Spliterator> p2) { return call_method<"evaluateParallel", jni::ref<java::lang::Boolean>>(p1, p2); }

protected:

	MatchOps_MatchOp(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_MATCHOPS_MATCHOP