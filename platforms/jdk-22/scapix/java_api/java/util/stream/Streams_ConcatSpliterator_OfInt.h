// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/stream/Streams_ConcatSpliterator_OfPrimitive.h>
#include <scapix/java_api/java/util/Spliterator_OfInt.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_STREAM_STREAMS_CONCATSPLITERATOR_OFINT_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_STREAMS_CONCATSPLITERATOR_OFINT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::stream { class Streams_ConcatSpliterator_OfInt; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::stream::Streams_ConcatSpliterator_OfInt>
{
	static constexpr fixed_string class_name = "java/util/stream/Streams$ConcatSpliterator$OfInt";
	using base_classes = std::tuple<scapix::java_api::java::util::stream::Streams_ConcatSpliterator_OfPrimitive, scapix::java_api::java::util::Spliterator_OfInt>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_STREAMS_CONCATSPLITERATOR_OFINT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_STREAM_STREAMS_CONCATSPLITERATOR_OFINT)
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_STREAMS_CONCATSPLITERATOR_OFINT

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::stream::Streams_ConcatSpliterator_OfInt : public jni::object_base<"java/util/stream/Streams$ConcatSpliterator$OfInt",
	java::util::stream::Streams_ConcatSpliterator_OfPrimitive,
	java::util::Spliterator_OfInt>
{
public:


protected:

	Streams_ConcatSpliterator_OfInt(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_STREAMS_CONCATSPLITERATOR_OFINT