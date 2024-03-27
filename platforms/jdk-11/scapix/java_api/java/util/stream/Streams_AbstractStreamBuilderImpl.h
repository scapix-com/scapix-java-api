// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Spliterator.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_STREAM_STREAMS_ABSTRACTSTREAMBUILDERIMPL_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_STREAMS_ABSTRACTSTREAMBUILDERIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::stream { class Streams_AbstractStreamBuilderImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::stream::Streams_AbstractStreamBuilderImpl>
{
	static constexpr fixed_string class_name = "java/util/stream/Streams$AbstractStreamBuilderImpl";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::Spliterator>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_STREAMS_ABSTRACTSTREAMBUILDERIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_STREAM_STREAMS_ABSTRACTSTREAMBUILDERIMPL)
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_STREAMS_ABSTRACTSTREAMBUILDERIMPL

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::stream::Streams_AbstractStreamBuilderImpl : public jni::object_base<"java/util/stream/Streams$AbstractStreamBuilderImpl",
	java::lang::Object,
	java::util::Spliterator>
{
public:

	jni::ref<java::util::Spliterator> trySplit() { return call_method<"trySplit", jni::ref<java::util::Spliterator>>(); }
	jlong estimateSize() { return call_method<"estimateSize", jlong>(); }
	jint characteristics() { return call_method<"characteristics", jint>(); }

protected:

	Streams_AbstractStreamBuilderImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_STREAMS_ABSTRACTSTREAMBUILDERIMPL
