// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_STREAM_TERMINALOP_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_TERMINALOP_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::stream { class TerminalOp; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::stream::TerminalOp>
{
	static constexpr fixed_string class_name = "java/util/stream/TerminalOp";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_TERMINALOP_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_STREAM_TERMINALOP)
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_TERMINALOP

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/Spliterator.h>
#include <scapix/java_api/java/util/stream/PipelineHelper.h>
#include <scapix/java_api/java/util/stream/StreamShape.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::stream::TerminalOp : public jni::object_base<"java/util/stream/TerminalOp",
	java::lang::Object>
{
public:

	jni::ref<java::util::stream::StreamShape> inputShape() { return call_method<"inputShape", jni::ref<java::util::stream::StreamShape>>(); }
	jint getOpFlags() { return call_method<"getOpFlags", jint>(); }
	jni::ref<java::lang::Object> evaluateParallel(jni::ref<java::util::stream::PipelineHelper> p1, jni::ref<java::util::Spliterator> p2) { return call_method<"evaluateParallel", jni::ref<java::lang::Object>>(p1, p2); }
	jni::ref<java::lang::Object> evaluateSequential(jni::ref<java::util::stream::PipelineHelper> p1, jni::ref<java::util::Spliterator> p2) { return call_method<"evaluateSequential", jni::ref<java::lang::Object>>(p1, p2); }

protected:

	TerminalOp(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_TERMINALOP
