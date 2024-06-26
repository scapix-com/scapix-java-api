// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Spliterator.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_STREAM_STREAMSPLITERATORS_DELEGATINGSPLITERATOR_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_STREAMSPLITERATORS_DELEGATINGSPLITERATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::stream { class StreamSpliterators_DelegatingSpliterator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::stream::StreamSpliterators_DelegatingSpliterator>
{
	static constexpr fixed_string class_name = "java/util/stream/StreamSpliterators$DelegatingSpliterator";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::Spliterator>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_STREAMSPLITERATORS_DELEGATINGSPLITERATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_STREAM_STREAMSPLITERATORS_DELEGATINGSPLITERATOR)
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_STREAMSPLITERATORS_DELEGATINGSPLITERATOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Comparator.h>
#include <scapix/java_api/java/util/function/Consumer.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::stream::StreamSpliterators_DelegatingSpliterator : public jni::object_base<"java/util/stream/StreamSpliterators$DelegatingSpliterator",
	java::lang::Object,
	java::util::Spliterator>
{
public:

	jni::ref<java::util::Spliterator> trySplit() { return call_method<"trySplit", jni::ref<java::util::Spliterator>>(); }
	jboolean tryAdvance(jni::ref<java::util::function::Consumer> p1) { return call_method<"tryAdvance", jboolean>(p1); }
	void forEachRemaining(jni::ref<java::util::function::Consumer> p1) { return call_method<"forEachRemaining", void>(p1); }
	jlong estimateSize() { return call_method<"estimateSize", jlong>(); }
	jint characteristics() { return call_method<"characteristics", jint>(); }
	jni::ref<java::util::Comparator> getComparator() { return call_method<"getComparator", jni::ref<java::util::Comparator>>(); }
	jlong getExactSizeIfKnown() { return call_method<"getExactSizeIfKnown", jlong>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	StreamSpliterators_DelegatingSpliterator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_STREAMSPLITERATORS_DELEGATINGSPLITERATOR
