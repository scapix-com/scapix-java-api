// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_STREAM_PIPELINEHELPER_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_PIPELINEHELPER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::stream { class PipelineHelper; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::stream::PipelineHelper>
{
	static constexpr fixed_string class_name = "java/util/stream/PipelineHelper";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_PIPELINEHELPER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_STREAM_PIPELINEHELPER)
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_PIPELINEHELPER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::stream::PipelineHelper : public jni::object_base<"java/util/stream/PipelineHelper",
	java::lang::Object>
{
public:


protected:

	PipelineHelper(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_PIPELINEHELPER
