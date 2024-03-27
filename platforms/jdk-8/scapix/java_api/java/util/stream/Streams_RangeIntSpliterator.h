// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Spliterator_OfInt.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_STREAM_STREAMS_RANGEINTSPLITERATOR_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_STREAMS_RANGEINTSPLITERATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::stream { class Streams_RangeIntSpliterator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::stream::Streams_RangeIntSpliterator>
{
	static constexpr fixed_string class_name = "java/util/stream/Streams$RangeIntSpliterator";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::Spliterator_OfInt>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_STREAMS_RANGEINTSPLITERATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_STREAM_STREAMS_RANGEINTSPLITERATOR)
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_STREAMS_RANGEINTSPLITERATOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/Comparator.h>
#include <scapix/java_api/java/util/function/IntConsumer.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::stream::Streams_RangeIntSpliterator : public jni::object_base<"java/util/stream/Streams$RangeIntSpliterator",
	java::lang::Object,
	java::util::Spliterator_OfInt>
{
public:

	jboolean tryAdvance(jni::ref<java::util::function::IntConsumer> p1) { return call_method<"tryAdvance", jboolean>(p1); }
	void forEachRemaining(jni::ref<java::util::function::IntConsumer> p1) { return call_method<"forEachRemaining", void>(p1); }
	jlong estimateSize() { return call_method<"estimateSize", jlong>(); }
	jint characteristics() { return call_method<"characteristics", jint>(); }
	jni::ref<java::util::Comparator> getComparator() { return call_method<"getComparator", jni::ref<java::util::Comparator>>(); }
	jni::ref<java::util::Spliterator_OfInt> trySplit() { return call_method<"trySplit", jni::ref<java::util::Spliterator_OfInt>>(); }

protected:

	Streams_RangeIntSpliterator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_STREAMS_RANGEINTSPLITERATOR