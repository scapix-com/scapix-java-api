// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/stream/WhileOps_UnorderedWhileSpliterator_OfRef.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_STREAM_WHILEOPS_UNORDEREDWHILESPLITERATOR_OFREF_TAKING_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_WHILEOPS_UNORDEREDWHILESPLITERATOR_OFREF_TAKING_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::stream { class WhileOps_UnorderedWhileSpliterator_OfRef_Taking; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::stream::WhileOps_UnorderedWhileSpliterator_OfRef_Taking>
{
	static constexpr fixed_string class_name = "java/util/stream/WhileOps$UnorderedWhileSpliterator$OfRef$Taking";
	using base_classes = std::tuple<scapix::java_api::java::util::stream::WhileOps_UnorderedWhileSpliterator_OfRef>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_WHILEOPS_UNORDEREDWHILESPLITERATOR_OFREF_TAKING_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_STREAM_WHILEOPS_UNORDEREDWHILESPLITERATOR_OFREF_TAKING)
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_WHILEOPS_UNORDEREDWHILESPLITERATOR_OFREF_TAKING

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/Spliterator.h>
#include <scapix/java_api/java/util/function/Consumer.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::stream::WhileOps_UnorderedWhileSpliterator_OfRef_Taking : public jni::object_base<"java/util/stream/WhileOps$UnorderedWhileSpliterator$OfRef$Taking",
	java::util::stream::WhileOps_UnorderedWhileSpliterator_OfRef>
{
public:

	jboolean tryAdvance(jni::ref<java::util::function::Consumer> action) { return call_method<"tryAdvance", jboolean>(action); }
	jni::ref<java::util::Spliterator> trySplit() { return call_method<"trySplit", jni::ref<java::util::Spliterator>>(); }

protected:

	WhileOps_UnorderedWhileSpliterator_OfRef_Taking(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_WHILEOPS_UNORDEREDWHILESPLITERATOR_OFREF_TAKING