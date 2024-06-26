// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/stream/StreamSpliterators_ArrayBuffer_OfPrimitive.h>
#include <scapix/java_api/java/util/function/LongConsumer.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_STREAM_STREAMSPLITERATORS_ARRAYBUFFER_OFLONG_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_STREAMSPLITERATORS_ARRAYBUFFER_OFLONG_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::stream { class StreamSpliterators_ArrayBuffer_OfLong; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::stream::StreamSpliterators_ArrayBuffer_OfLong>
{
	static constexpr fixed_string class_name = "java/util/stream/StreamSpliterators$ArrayBuffer$OfLong";
	using base_classes = std::tuple<scapix::java_api::java::util::stream::StreamSpliterators_ArrayBuffer_OfPrimitive, scapix::java_api::java::util::function::LongConsumer>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_STREAMSPLITERATORS_ARRAYBUFFER_OFLONG_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_STREAM_STREAMSPLITERATORS_ARRAYBUFFER_OFLONG)
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_STREAMSPLITERATORS_ARRAYBUFFER_OFLONG

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::stream::StreamSpliterators_ArrayBuffer_OfLong : public jni::object_base<"java/util/stream/StreamSpliterators$ArrayBuffer$OfLong",
	java::util::stream::StreamSpliterators_ArrayBuffer_OfPrimitive,
	java::util::function::LongConsumer>
{
public:

	void accept(jlong p1) { return call_method<"accept", void>(p1); }
	void forEach(jni::ref<java::util::function::LongConsumer> p1, jlong p2) { return call_method<"forEach", void>(p1, p2); }

protected:

	StreamSpliterators_ArrayBuffer_OfLong(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_STREAMSPLITERATORS_ARRAYBUFFER_OFLONG
