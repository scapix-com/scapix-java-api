// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOFX_VISUALIZER_MEASUREMENTPEAKRMS_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOFX_VISUALIZER_MEASUREMENTPEAKRMS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media::audiofx { class Visualizer_MeasurementPeakRms; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::audiofx::Visualizer_MeasurementPeakRms>
{
	static constexpr fixed_string class_name = "android/media/audiofx/Visualizer$MeasurementPeakRms";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOFX_VISUALIZER_MEASUREMENTPEAKRMS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOFX_VISUALIZER_MEASUREMENTPEAKRMS)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOFX_VISUALIZER_MEASUREMENTPEAKRMS

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::audiofx::Visualizer_MeasurementPeakRms : public jni::object_base<"android/media/audiofx/Visualizer$MeasurementPeakRms",
	java::lang::Object>
{
public:

	jint mPeak() { return get_field<"mPeak", jint>(); }
	void mPeak(jint v) { set_field<"mPeak", jint>(v); }
	jint mRms() { return get_field<"mRms", jint>(); }
	void mRms(jint v) { set_field<"mRms", jint>(v); }

	static jni::ref<android::media::audiofx::Visualizer_MeasurementPeakRms> new_object() { return base_::new_object(); }

protected:

	Visualizer_MeasurementPeakRms(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOFX_VISUALIZER_MEASUREMENTPEAKRMS
