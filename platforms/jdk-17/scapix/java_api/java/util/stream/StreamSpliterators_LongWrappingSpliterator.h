// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/stream/StreamSpliterators_AbstractWrappingSpliterator.h>
#include <scapix/java_api/java/util/Spliterator_OfLong.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_STREAM_STREAMSPLITERATORS_LONGWRAPPINGSPLITERATOR_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_STREAMSPLITERATORS_LONGWRAPPINGSPLITERATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::stream { class StreamSpliterators_LongWrappingSpliterator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::stream::StreamSpliterators_LongWrappingSpliterator>
{
	static constexpr fixed_string class_name = "java/util/stream/StreamSpliterators$LongWrappingSpliterator";
	using base_classes = std::tuple<scapix::java_api::java::util::stream::StreamSpliterators_AbstractWrappingSpliterator, scapix::java_api::java::util::Spliterator_OfLong>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_STREAMSPLITERATORS_LONGWRAPPINGSPLITERATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_STREAM_STREAMSPLITERATORS_LONGWRAPPINGSPLITERATOR)
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_STREAMSPLITERATORS_LONGWRAPPINGSPLITERATOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/function/LongConsumer.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::stream::StreamSpliterators_LongWrappingSpliterator : public jni::object_base<"java/util/stream/StreamSpliterators$LongWrappingSpliterator",
	java::util::stream::StreamSpliterators_AbstractWrappingSpliterator,
	java::util::Spliterator_OfLong>
{
public:

	jni::ref<java::util::Spliterator_OfLong> trySplit() { return call_method<"trySplit", jni::ref<java::util::Spliterator_OfLong>>(); }
	jboolean tryAdvance(jni::ref<java::util::function::LongConsumer> consumer) { return call_method<"tryAdvance", jboolean>(consumer); }
	void forEachRemaining(jni::ref<java::util::function::LongConsumer> consumer) { return call_method<"forEachRemaining", void>(consumer); }

protected:

	StreamSpliterators_LongWrappingSpliterator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_STREAMSPLITERATORS_LONGWRAPPINGSPLITERATOR
