// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_STREAM_STREAMSPLITERATORS_SLICESPLITERATOR_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_STREAMSPLITERATORS_SLICESPLITERATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::stream { class StreamSpliterators_SliceSpliterator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::stream::StreamSpliterators_SliceSpliterator>
{
	static constexpr fixed_string class_name = "java/util/stream/StreamSpliterators$SliceSpliterator";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_STREAMSPLITERATORS_SLICESPLITERATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_STREAM_STREAMSPLITERATORS_SLICESPLITERATOR)
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_STREAMSPLITERATORS_SLICESPLITERATOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/Spliterator.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::stream::StreamSpliterators_SliceSpliterator : public jni::object_base<"java/util/stream/StreamSpliterators$SliceSpliterator",
	java::lang::Object>
{
public:

	jni::ref<java::util::Spliterator> trySplit() { return call_method<"trySplit", jni::ref<java::util::Spliterator>>(); }
	jlong estimateSize() { return call_method<"estimateSize", jlong>(); }
	jint characteristics() { return call_method<"characteristics", jint>(); }

protected:

	StreamSpliterators_SliceSpliterator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_STREAMSPLITERATORS_SLICESPLITERATOR
