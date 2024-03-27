// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Spliterator_OfLong.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_STREAM_STREAMS_RANGELONGSPLITERATOR_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_STREAMS_RANGELONGSPLITERATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::stream { class Streams_RangeLongSpliterator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::stream::Streams_RangeLongSpliterator>
{
	static constexpr fixed_string class_name = "java/util/stream/Streams$RangeLongSpliterator";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::Spliterator_OfLong>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_STREAMS_RANGELONGSPLITERATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_STREAM_STREAMS_RANGELONGSPLITERATOR)
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_STREAMS_RANGELONGSPLITERATOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/Comparator.h>
#include <scapix/java_api/java/util/function/LongConsumer.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::stream::Streams_RangeLongSpliterator : public jni::object_base<"java/util/stream/Streams$RangeLongSpliterator",
	java::lang::Object,
	java::util::Spliterator_OfLong>
{
public:

	jboolean tryAdvance(jni::ref<java::util::function::LongConsumer> consumer) { return call_method<"tryAdvance", jboolean>(consumer); }
	void forEachRemaining(jni::ref<java::util::function::LongConsumer> consumer) { return call_method<"forEachRemaining", void>(consumer); }
	jlong estimateSize() { return call_method<"estimateSize", jlong>(); }
	jint characteristics() { return call_method<"characteristics", jint>(); }
	jni::ref<java::util::Comparator> getComparator() { return call_method<"getComparator", jni::ref<java::util::Comparator>>(); }
	jni::ref<java::util::Spliterator_OfLong> trySplit() { return call_method<"trySplit", jni::ref<java::util::Spliterator_OfLong>>(); }

protected:

	Streams_RangeLongSpliterator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_STREAMS_RANGELONGSPLITERATOR
