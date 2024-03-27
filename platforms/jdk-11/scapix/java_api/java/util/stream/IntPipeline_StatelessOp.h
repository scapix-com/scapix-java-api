// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/stream/IntPipeline.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_STREAM_INTPIPELINE_STATELESSOP_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_INTPIPELINE_STATELESSOP_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::stream { class IntPipeline_StatelessOp; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::stream::IntPipeline_StatelessOp>
{
	static constexpr fixed_string class_name = "java/util/stream/IntPipeline$StatelessOp";
	using base_classes = std::tuple<scapix::java_api::java::util::stream::IntPipeline>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_INTPIPELINE_STATELESSOP_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_STREAM_INTPIPELINE_STATELESSOP)
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_INTPIPELINE_STATELESSOP

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::stream::IntPipeline_StatelessOp : public jni::object_base<"java/util/stream/IntPipeline$StatelessOp",
	java::util::stream::IntPipeline>
{
public:


protected:

	IntPipeline_StatelessOp(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_INTPIPELINE_STATELESSOP