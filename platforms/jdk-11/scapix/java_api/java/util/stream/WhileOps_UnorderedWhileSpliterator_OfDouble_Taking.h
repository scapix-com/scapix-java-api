// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/stream/WhileOps_UnorderedWhileSpliterator_OfDouble.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_STREAM_WHILEOPS_UNORDEREDWHILESPLITERATOR_OFDOUBLE_TAKING_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_WHILEOPS_UNORDEREDWHILESPLITERATOR_OFDOUBLE_TAKING_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::stream { class WhileOps_UnorderedWhileSpliterator_OfDouble_Taking; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::stream::WhileOps_UnorderedWhileSpliterator_OfDouble_Taking>
{
	static constexpr fixed_string class_name = "java/util/stream/WhileOps$UnorderedWhileSpliterator$OfDouble$Taking";
	using base_classes = std::tuple<scapix::java_api::java::util::stream::WhileOps_UnorderedWhileSpliterator_OfDouble>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_WHILEOPS_UNORDEREDWHILESPLITERATOR_OFDOUBLE_TAKING_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_STREAM_WHILEOPS_UNORDEREDWHILESPLITERATOR_OFDOUBLE_TAKING)
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_WHILEOPS_UNORDEREDWHILESPLITERATOR_OFDOUBLE_TAKING

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/Spliterator_OfDouble.h>
#include <scapix/java_api/java/util/function/DoubleConsumer.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::stream::WhileOps_UnorderedWhileSpliterator_OfDouble_Taking : public jni::object_base<"java/util/stream/WhileOps$UnorderedWhileSpliterator$OfDouble$Taking",
	java::util::stream::WhileOps_UnorderedWhileSpliterator_OfDouble>
{
public:

	jboolean tryAdvance(jni::ref<java::util::function::DoubleConsumer> action) { return call_method<"tryAdvance", jboolean>(action); }
	jni::ref<java::util::Spliterator_OfDouble> trySplit() { return call_method<"trySplit", jni::ref<java::util::Spliterator_OfDouble>>(); }

protected:

	WhileOps_UnorderedWhileSpliterator_OfDouble_Taking(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_WHILEOPS_UNORDEREDWHILESPLITERATOR_OFDOUBLE_TAKING