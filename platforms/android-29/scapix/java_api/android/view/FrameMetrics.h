// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_VIEW_FRAMEMETRICS_FWD
#define SCAPIX_JAVA_API_ANDROID_VIEW_FRAMEMETRICS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::view { class FrameMetrics; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::view::FrameMetrics>
{
	static constexpr fixed_string class_name = "android/view/FrameMetrics";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_FRAMEMETRICS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_VIEW_FRAMEMETRICS)
#define SCAPIX_JAVA_API_ANDROID_VIEW_FRAMEMETRICS

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::view::FrameMetrics : public jni::object_base<"android/view/FrameMetrics",
	java::lang::Object>
{
public:

	static jint ANIMATION_DURATION() { return get_static_field<"ANIMATION_DURATION", jint>(); }
	static jint COMMAND_ISSUE_DURATION() { return get_static_field<"COMMAND_ISSUE_DURATION", jint>(); }
	static jint DRAW_DURATION() { return get_static_field<"DRAW_DURATION", jint>(); }
	static jint FIRST_DRAW_FRAME() { return get_static_field<"FIRST_DRAW_FRAME", jint>(); }
	static jint INPUT_HANDLING_DURATION() { return get_static_field<"INPUT_HANDLING_DURATION", jint>(); }
	static jint INTENDED_VSYNC_TIMESTAMP() { return get_static_field<"INTENDED_VSYNC_TIMESTAMP", jint>(); }
	static jint LAYOUT_MEASURE_DURATION() { return get_static_field<"LAYOUT_MEASURE_DURATION", jint>(); }
	static jint SWAP_BUFFERS_DURATION() { return get_static_field<"SWAP_BUFFERS_DURATION", jint>(); }
	static jint SYNC_DURATION() { return get_static_field<"SYNC_DURATION", jint>(); }
	static jint TOTAL_DURATION() { return get_static_field<"TOTAL_DURATION", jint>(); }
	static jint UNKNOWN_DELAY_DURATION() { return get_static_field<"UNKNOWN_DELAY_DURATION", jint>(); }
	static jint VSYNC_TIMESTAMP() { return get_static_field<"VSYNC_TIMESTAMP", jint>(); }

	static jni::ref<android::view::FrameMetrics> new_object(jni::ref<android::view::FrameMetrics> other) { return base_::new_object(other); }
	jlong getMetric(jint id) { return call_method<"getMetric", jlong>(id); }

protected:

	FrameMetrics(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_FRAMEMETRICS