// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/text/SegmentFinder.h>

#ifndef SCAPIX_JAVA_API_ANDROID_TEXT_GRAPHEMECLUSTERSEGMENTFINDER_FWD
#define SCAPIX_JAVA_API_ANDROID_TEXT_GRAPHEMECLUSTERSEGMENTFINDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::text { class GraphemeClusterSegmentFinder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::text::GraphemeClusterSegmentFinder>
{
	static constexpr fixed_string class_name = "android/text/GraphemeClusterSegmentFinder";
	using base_classes = std::tuple<scapix::java_api::android::text::SegmentFinder>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TEXT_GRAPHEMECLUSTERSEGMENTFINDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_TEXT_GRAPHEMECLUSTERSEGMENTFINDER)
#define SCAPIX_JAVA_API_ANDROID_TEXT_GRAPHEMECLUSTERSEGMENTFINDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/text/TextPaint.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::text::GraphemeClusterSegmentFinder : public jni::object_base<"android/text/GraphemeClusterSegmentFinder",
	android::text::SegmentFinder>
{
public:

	static jni::ref<android::text::GraphemeClusterSegmentFinder> new_object(jni::ref<java::lang::CharSequence> text, jni::ref<android::text::TextPaint> textPaint) { return base_::new_object(text, textPaint); }
	jint previousStartBoundary(jint offset) { return call_method<"previousStartBoundary", jint>(offset); }
	jint previousEndBoundary(jint offset) { return call_method<"previousEndBoundary", jint>(offset); }
	jint nextStartBoundary(jint offset) { return call_method<"nextStartBoundary", jint>(offset); }
	jint nextEndBoundary(jint offset) { return call_method<"nextEndBoundary", jint>(offset); }

protected:

	GraphemeClusterSegmentFinder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TEXT_GRAPHEMECLUSTERSEGMENTFINDER
