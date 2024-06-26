// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/stream/ReferencePipeline.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_STREAM_REFERENCEPIPELINE_STATEFULOP_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_REFERENCEPIPELINE_STATEFULOP_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::stream { class ReferencePipeline_StatefulOp; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::stream::ReferencePipeline_StatefulOp>
{
	static constexpr fixed_string class_name = "java/util/stream/ReferencePipeline$StatefulOp";
	using base_classes = std::tuple<scapix::java_api::java::util::stream::ReferencePipeline>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_REFERENCEPIPELINE_STATEFULOP_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_STREAM_REFERENCEPIPELINE_STATEFULOP)
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_REFERENCEPIPELINE_STATEFULOP

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::stream::ReferencePipeline_StatefulOp : public jni::object_base<"java/util/stream/ReferencePipeline$StatefulOp",
	java::util::stream::ReferencePipeline>
{
public:


protected:

	ReferencePipeline_StatefulOp(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_REFERENCEPIPELINE_STATEFULOP
