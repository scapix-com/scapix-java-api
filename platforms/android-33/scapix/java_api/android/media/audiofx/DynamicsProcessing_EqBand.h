// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/media/audiofx/DynamicsProcessing_BandBase.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOFX_DYNAMICSPROCESSING_EQBAND_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOFX_DYNAMICSPROCESSING_EQBAND_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media::audiofx { class DynamicsProcessing_EqBand; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::audiofx::DynamicsProcessing_EqBand>
{
	static constexpr fixed_string class_name = "android/media/audiofx/DynamicsProcessing$EqBand";
	using base_classes = std::tuple<scapix::java_api::android::media::audiofx::DynamicsProcessing_BandBase>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOFX_DYNAMICSPROCESSING_EQBAND_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOFX_DYNAMICSPROCESSING_EQBAND)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOFX_DYNAMICSPROCESSING_EQBAND

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::audiofx::DynamicsProcessing_EqBand : public jni::object_base<"android/media/audiofx/DynamicsProcessing$EqBand",
	android::media::audiofx::DynamicsProcessing_BandBase>
{
public:

	static jni::ref<android::media::audiofx::DynamicsProcessing_EqBand> new_object(jboolean enabled, jfloat cutoffFrequency, jfloat gain) { return base_::new_object(enabled, cutoffFrequency, gain); }
	static jni::ref<android::media::audiofx::DynamicsProcessing_EqBand> new_object(jni::ref<android::media::audiofx::DynamicsProcessing_EqBand> cfg) { return base_::new_object(cfg); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jfloat getGain() { return call_method<"getGain", jfloat>(); }
	void setGain(jfloat gain) { return call_method<"setGain", void>(gain); }

protected:

	DynamicsProcessing_EqBand(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOFX_DYNAMICSPROCESSING_EQBAND
