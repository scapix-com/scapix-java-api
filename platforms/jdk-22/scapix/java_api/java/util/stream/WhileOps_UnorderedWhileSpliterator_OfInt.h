// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/stream/WhileOps_UnorderedWhileSpliterator.h>
#include <scapix/java_api/java/util/function/IntConsumer.h>
#include <scapix/java_api/java/util/Spliterator_OfInt.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_STREAM_WHILEOPS_UNORDEREDWHILESPLITERATOR_OFINT_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_WHILEOPS_UNORDEREDWHILESPLITERATOR_OFINT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::stream { class WhileOps_UnorderedWhileSpliterator_OfInt; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::stream::WhileOps_UnorderedWhileSpliterator_OfInt>
{
	static constexpr fixed_string class_name = "java/util/stream/WhileOps$UnorderedWhileSpliterator$OfInt";
	using base_classes = std::tuple<scapix::java_api::java::util::stream::WhileOps_UnorderedWhileSpliterator, scapix::java_api::java::util::function::IntConsumer, scapix::java_api::java::util::Spliterator_OfInt>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_WHILEOPS_UNORDEREDWHILESPLITERATOR_OFINT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_STREAM_WHILEOPS_UNORDEREDWHILESPLITERATOR_OFINT)
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_WHILEOPS_UNORDEREDWHILESPLITERATOR_OFINT

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::stream::WhileOps_UnorderedWhileSpliterator_OfInt : public jni::object_base<"java/util/stream/WhileOps$UnorderedWhileSpliterator$OfInt",
	java::util::stream::WhileOps_UnorderedWhileSpliterator,
	java::util::function::IntConsumer,
	java::util::Spliterator_OfInt>
{
public:

	void accept(jint t) { return call_method<"accept", void>(t); }

protected:

	WhileOps_UnorderedWhileSpliterator_OfInt(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_WHILEOPS_UNORDEREDWHILESPLITERATOR_OFINT
