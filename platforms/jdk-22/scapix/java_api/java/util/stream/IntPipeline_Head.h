// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/stream/IntPipeline.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_STREAM_INTPIPELINE_HEAD_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_INTPIPELINE_HEAD_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::stream { class IntPipeline_Head; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::stream::IntPipeline_Head>
{
	static constexpr fixed_string class_name = "java/util/stream/IntPipeline$Head";
	using base_classes = std::tuple<scapix::java_api::java::util::stream::IntPipeline>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_INTPIPELINE_HEAD_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_STREAM_INTPIPELINE_HEAD)
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_INTPIPELINE_HEAD

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/function/IntConsumer.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::stream::IntPipeline_Head : public jni::object_base<"java/util/stream/IntPipeline$Head",
	java::util::stream::IntPipeline>
{
public:

	void forEach(jni::ref<java::util::function::IntConsumer> action) { return call_method<"forEach", void>(action); }
	void forEachOrdered(jni::ref<java::util::function::IntConsumer> action) { return call_method<"forEachOrdered", void>(action); }

protected:

	IntPipeline_Head(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_INTPIPELINE_HEAD
