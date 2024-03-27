// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/stream/StreamSpliterators_SliceSpliterator.h>
#include <scapix/java_api/java/util/Spliterator_OfPrimitive.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_STREAM_STREAMSPLITERATORS_SLICESPLITERATOR_OFPRIMITIVE_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_STREAMSPLITERATORS_SLICESPLITERATOR_OFPRIMITIVE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::stream { class StreamSpliterators_SliceSpliterator_OfPrimitive; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::stream::StreamSpliterators_SliceSpliterator_OfPrimitive>
{
	static constexpr fixed_string class_name = "java/util/stream/StreamSpliterators$SliceSpliterator$OfPrimitive";
	using base_classes = std::tuple<scapix::java_api::java::util::stream::StreamSpliterators_SliceSpliterator, scapix::java_api::java::util::Spliterator_OfPrimitive>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_STREAMSPLITERATORS_SLICESPLITERATOR_OFPRIMITIVE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_STREAM_STREAMSPLITERATORS_SLICESPLITERATOR_OFPRIMITIVE)
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_STREAMSPLITERATORS_SLICESPLITERATOR_OFPRIMITIVE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::stream::StreamSpliterators_SliceSpliterator_OfPrimitive : public jni::object_base<"java/util/stream/StreamSpliterators$SliceSpliterator$OfPrimitive",
	java::util::stream::StreamSpliterators_SliceSpliterator,
	java::util::Spliterator_OfPrimitive>
{
public:

	jboolean tryAdvance(jni::ref<java::lang::Object> action) { return call_method<"tryAdvance", jboolean>(action); }
	void forEachRemaining(jni::ref<java::lang::Object> action) { return call_method<"forEachRemaining", void>(action); }

protected:

	StreamSpliterators_SliceSpliterator_OfPrimitive(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_STREAMSPLITERATORS_SLICESPLITERATOR_OFPRIMITIVE
