// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/stream/Streams_ConcatSpliterator.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_STREAM_STREAMS_CONCATSPLITERATOR_OFREF_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_STREAMS_CONCATSPLITERATOR_OFREF_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::stream { class Streams_ConcatSpliterator_OfRef; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::stream::Streams_ConcatSpliterator_OfRef>
{
	static constexpr fixed_string class_name = "java/util/stream/Streams$ConcatSpliterator$OfRef";
	using base_classes = std::tuple<scapix::java_api::java::util::stream::Streams_ConcatSpliterator>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_STREAMS_CONCATSPLITERATOR_OFREF_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_STREAM_STREAMS_CONCATSPLITERATOR_OFREF)
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_STREAMS_CONCATSPLITERATOR_OFREF

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::stream::Streams_ConcatSpliterator_OfRef : public jni::object_base<"java/util/stream/Streams$ConcatSpliterator$OfRef",
	java::util::stream::Streams_ConcatSpliterator>
{
public:


protected:

	Streams_ConcatSpliterator_OfRef(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_STREAMS_CONCATSPLITERATOR_OFREF
