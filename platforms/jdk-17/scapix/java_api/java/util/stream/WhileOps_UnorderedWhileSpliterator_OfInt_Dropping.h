// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/stream/WhileOps_UnorderedWhileSpliterator_OfInt.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_STREAM_WHILEOPS_UNORDEREDWHILESPLITERATOR_OFINT_DROPPING_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_WHILEOPS_UNORDEREDWHILESPLITERATOR_OFINT_DROPPING_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::stream { class WhileOps_UnorderedWhileSpliterator_OfInt_Dropping; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::stream::WhileOps_UnorderedWhileSpliterator_OfInt_Dropping>
{
	static constexpr fixed_string class_name = "java/util/stream/WhileOps$UnorderedWhileSpliterator$OfInt$Dropping";
	using base_classes = std::tuple<scapix::java_api::java::util::stream::WhileOps_UnorderedWhileSpliterator_OfInt>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_WHILEOPS_UNORDEREDWHILESPLITERATOR_OFINT_DROPPING_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_STREAM_WHILEOPS_UNORDEREDWHILESPLITERATOR_OFINT_DROPPING)
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_WHILEOPS_UNORDEREDWHILESPLITERATOR_OFINT_DROPPING

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/function/IntConsumer.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::stream::WhileOps_UnorderedWhileSpliterator_OfInt_Dropping : public jni::object_base<"java/util/stream/WhileOps$UnorderedWhileSpliterator$OfInt$Dropping",
	java::util::stream::WhileOps_UnorderedWhileSpliterator_OfInt>
{
public:

	jboolean tryAdvance(jni::ref<java::util::function::IntConsumer> action) { return call_method<"tryAdvance", jboolean>(action); }

protected:

	WhileOps_UnorderedWhileSpliterator_OfInt_Dropping(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_WHILEOPS_UNORDEREDWHILESPLITERATOR_OFINT_DROPPING
