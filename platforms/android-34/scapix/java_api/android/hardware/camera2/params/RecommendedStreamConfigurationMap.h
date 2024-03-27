// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA2_PARAMS_RECOMMENDEDSTREAMCONFIGURATIONMAP_FWD
#define SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA2_PARAMS_RECOMMENDEDSTREAMCONFIGURATIONMAP_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::hardware::camera2::params { class RecommendedStreamConfigurationMap; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::hardware::camera2::params::RecommendedStreamConfigurationMap>
{
	static constexpr fixed_string class_name = "android/hardware/camera2/params/RecommendedStreamConfigurationMap";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA2_PARAMS_RECOMMENDEDSTREAMCONFIGURATIONMAP_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA2_PARAMS_RECOMMENDEDSTREAMCONFIGURATIONMAP)
#define SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA2_PARAMS_RECOMMENDEDSTREAMCONFIGURATIONMAP

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/util/Range.h>
#include <scapix/java_api/android/util/Size.h>
#include <scapix/java_api/android/view/Surface.h>
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/util/Set.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::hardware::camera2::params::RecommendedStreamConfigurationMap : public jni::object_base<"android/hardware/camera2/params/RecommendedStreamConfigurationMap",
	java::lang::Object>
{
public:

	static jint USECASE_10BIT_OUTPUT() { return get_static_field<"USECASE_10BIT_OUTPUT", jint>(); }
	static jint USECASE_LOW_LATENCY_SNAPSHOT() { return get_static_field<"USECASE_LOW_LATENCY_SNAPSHOT", jint>(); }
	static jint USECASE_PREVIEW() { return get_static_field<"USECASE_PREVIEW", jint>(); }
	static jint USECASE_RAW() { return get_static_field<"USECASE_RAW", jint>(); }
	static jint USECASE_RECORD() { return get_static_field<"USECASE_RECORD", jint>(); }
	static jint USECASE_SNAPSHOT() { return get_static_field<"USECASE_SNAPSHOT", jint>(); }
	static jint USECASE_VIDEO_SNAPSHOT() { return get_static_field<"USECASE_VIDEO_SNAPSHOT", jint>(); }
	static jint USECASE_ZSL() { return get_static_field<"USECASE_ZSL", jint>(); }

	jint getRecommendedUseCase() { return call_method<"getRecommendedUseCase", jint>(); }
	jni::ref<java::util::Set> getOutputFormats() { return call_method<"getOutputFormats", jni::ref<java::util::Set>>(); }
	jni::ref<java::util::Set> getValidOutputFormatsForInput(jint inputFormat) { return call_method<"getValidOutputFormatsForInput", jni::ref<java::util::Set>>(inputFormat); }
	jni::ref<java::util::Set> getInputFormats() { return call_method<"getInputFormats", jni::ref<java::util::Set>>(); }
	jni::ref<java::util::Set> getInputSizes(jint format) { return call_method<"getInputSizes", jni::ref<java::util::Set>>(format); }
	jboolean isOutputSupportedFor(jint format) { return call_method<"isOutputSupportedFor", jboolean>(format); }
	jni::ref<java::util::Set> getOutputSizes(jint format) { return call_method<"getOutputSizes", jni::ref<java::util::Set>>(format); }
	jni::ref<java::util::Set> getHighSpeedVideoSizes() { return call_method<"getHighSpeedVideoSizes", jni::ref<java::util::Set>>(); }
	jni::ref<java::util::Set> getHighSpeedVideoFpsRangesFor(jni::ref<android::util::Size> size) { return call_method<"getHighSpeedVideoFpsRangesFor", jni::ref<java::util::Set>>(size); }
	jni::ref<java::util::Set> getHighSpeedVideoFpsRanges() { return call_method<"getHighSpeedVideoFpsRanges", jni::ref<java::util::Set>>(); }
	jni::ref<java::util::Set> getHighSpeedVideoSizesFor(jni::ref<android::util::Range> fpsRange) { return call_method<"getHighSpeedVideoSizesFor", jni::ref<java::util::Set>>(fpsRange); }
	jni::ref<java::util::Set> getHighResolutionOutputSizes(jint format) { return call_method<"getHighResolutionOutputSizes", jni::ref<java::util::Set>>(format); }
	jlong getOutputMinFrameDuration(jint format, jni::ref<android::util::Size> size) { return call_method<"getOutputMinFrameDuration", jlong>(format, size); }
	jlong getOutputStallDuration(jint format, jni::ref<android::util::Size> size) { return call_method<"getOutputStallDuration", jlong>(format, size); }
	jni::ref<java::util::Set> getOutputSizes(jni::ref<java::lang::Class> klass) { return call_method<"getOutputSizes", jni::ref<java::util::Set>>(klass); }
	jlong getOutputMinFrameDuration(jni::ref<java::lang::Class> klass, jni::ref<android::util::Size> size) { return call_method<"getOutputMinFrameDuration", jlong>(klass, size); }
	jlong getOutputStallDuration(jni::ref<java::lang::Class> klass, jni::ref<android::util::Size> size) { return call_method<"getOutputStallDuration", jlong>(klass, size); }
	jboolean isOutputSupportedFor(jni::ref<android::view::Surface> surface) { return call_method<"isOutputSupportedFor", jboolean>(surface); }

protected:

	RecommendedStreamConfigurationMap(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA2_PARAMS_RECOMMENDEDSTREAMCONFIGURATIONMAP
