// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/stream/StreamSpliterators_DelegatingSpliterator_OfPrimitive.h>
#include <scapix/java_api/java/util/Spliterator_OfDouble.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_STREAM_STREAMSPLITERATORS_DELEGATINGSPLITERATOR_OFDOUBLE_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_STREAMSPLITERATORS_DELEGATINGSPLITERATOR_OFDOUBLE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::stream { class StreamSpliterators_DelegatingSpliterator_OfDouble; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::stream::StreamSpliterators_DelegatingSpliterator_OfDouble>
{
	static constexpr fixed_string class_name = "java/util/stream/StreamSpliterators$DelegatingSpliterator$OfDouble";
	using base_classes = std::tuple<scapix::java_api::java::util::stream::StreamSpliterators_DelegatingSpliterator_OfPrimitive, scapix::java_api::java::util::Spliterator_OfDouble>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_STREAMSPLITERATORS_DELEGATINGSPLITERATOR_OFDOUBLE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_STREAM_STREAMSPLITERATORS_DELEGATINGSPLITERATOR_OFDOUBLE)
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_STREAMSPLITERATORS_DELEGATINGSPLITERATOR_OFDOUBLE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::stream::StreamSpliterators_DelegatingSpliterator_OfDouble : public jni::object_base<"java/util/stream/StreamSpliterators$DelegatingSpliterator$OfDouble",
	java::util::stream::StreamSpliterators_DelegatingSpliterator_OfPrimitive,
	java::util::Spliterator_OfDouble>
{
public:


protected:

	StreamSpliterators_DelegatingSpliterator_OfDouble(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_STREAMSPLITERATORS_DELEGATINGSPLITERATOR_OFDOUBLE