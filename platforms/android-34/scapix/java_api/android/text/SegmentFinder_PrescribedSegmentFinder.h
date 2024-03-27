// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/text/SegmentFinder.h>

#ifndef SCAPIX_JAVA_API_ANDROID_TEXT_SEGMENTFINDER_PRESCRIBEDSEGMENTFINDER_FWD
#define SCAPIX_JAVA_API_ANDROID_TEXT_SEGMENTFINDER_PRESCRIBEDSEGMENTFINDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::text { class SegmentFinder_PrescribedSegmentFinder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::text::SegmentFinder_PrescribedSegmentFinder>
{
	static constexpr fixed_string class_name = "android/text/SegmentFinder$PrescribedSegmentFinder";
	using base_classes = std::tuple<scapix::java_api::android::text::SegmentFinder>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TEXT_SEGMENTFINDER_PRESCRIBEDSEGMENTFINDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_TEXT_SEGMENTFINDER_PRESCRIBEDSEGMENTFINDER)
#define SCAPIX_JAVA_API_ANDROID_TEXT_SEGMENTFINDER_PRESCRIBEDSEGMENTFINDER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::text::SegmentFinder_PrescribedSegmentFinder : public jni::object_base<"android/text/SegmentFinder$PrescribedSegmentFinder",
	android::text::SegmentFinder>
{
public:

	static jni::ref<android::text::SegmentFinder_PrescribedSegmentFinder> new_object(jni::ref<jni::array<jint>> segments) { return base_::new_object(segments); }
	jint previousStartBoundary(jint offset) { return call_method<"previousStartBoundary", jint>(offset); }
	jint previousEndBoundary(jint offset) { return call_method<"previousEndBoundary", jint>(offset); }
	jint nextStartBoundary(jint offset) { return call_method<"nextStartBoundary", jint>(offset); }
	jint nextEndBoundary(jint offset) { return call_method<"nextEndBoundary", jint>(offset); }

protected:

	SegmentFinder_PrescribedSegmentFinder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TEXT_SEGMENTFINDER_PRESCRIBEDSEGMENTFINDER
