// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_TEXT_SEGMENTFINDER_FWD
#define SCAPIX_JAVA_API_ANDROID_TEXT_SEGMENTFINDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::text { class SegmentFinder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::text::SegmentFinder>
{
	static constexpr fixed_string class_name = "android/text/SegmentFinder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TEXT_SEGMENTFINDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_TEXT_SEGMENTFINDER)
#define SCAPIX_JAVA_API_ANDROID_TEXT_SEGMENTFINDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/text/SegmentFinder_PrescribedSegmentFinder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::text::SegmentFinder : public jni::object_base<"android/text/SegmentFinder",
	java::lang::Object>
{
public:

	using PrescribedSegmentFinder = SegmentFinder_PrescribedSegmentFinder;

	static jint DONE() { return get_static_field<"DONE", jint>(); }

	static jni::ref<android::text::SegmentFinder> new_object() { return base_::new_object(); }
	jint previousStartBoundary(jint p1) { return call_method<"previousStartBoundary", jint>(p1); }
	jint previousEndBoundary(jint p1) { return call_method<"previousEndBoundary", jint>(p1); }
	jint nextStartBoundary(jint p1) { return call_method<"nextStartBoundary", jint>(p1); }
	jint nextEndBoundary(jint p1) { return call_method<"nextEndBoundary", jint>(p1); }

protected:

	SegmentFinder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TEXT_SEGMENTFINDER