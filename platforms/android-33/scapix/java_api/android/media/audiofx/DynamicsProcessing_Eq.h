// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/media/audiofx/DynamicsProcessing_BandStage.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOFX_DYNAMICSPROCESSING_EQ_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOFX_DYNAMICSPROCESSING_EQ_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media::audiofx { class DynamicsProcessing_Eq; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::audiofx::DynamicsProcessing_Eq>
{
	static constexpr fixed_string class_name = "android/media/audiofx/DynamicsProcessing$Eq";
	using base_classes = std::tuple<scapix::java_api::android::media::audiofx::DynamicsProcessing_BandStage>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOFX_DYNAMICSPROCESSING_EQ_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOFX_DYNAMICSPROCESSING_EQ)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOFX_DYNAMICSPROCESSING_EQ

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/media/audiofx/DynamicsProcessing_EqBand.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::audiofx::DynamicsProcessing_Eq : public jni::object_base<"android/media/audiofx/DynamicsProcessing$Eq",
	android::media::audiofx::DynamicsProcessing_BandStage>
{
public:

	static jni::ref<android::media::audiofx::DynamicsProcessing_Eq> new_object(jboolean inUse, jboolean enabled, jint bandCount) { return base_::new_object(inUse, enabled, bandCount); }
	static jni::ref<android::media::audiofx::DynamicsProcessing_Eq> new_object(jni::ref<android::media::audiofx::DynamicsProcessing_Eq> cfg) { return base_::new_object(cfg); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	void setBand(jint band, jni::ref<android::media::audiofx::DynamicsProcessing_EqBand> bandCfg) { return call_method<"setBand", void>(band, bandCfg); }
	jni::ref<android::media::audiofx::DynamicsProcessing_EqBand> getBand(jint band) { return call_method<"getBand", jni::ref<android::media::audiofx::DynamicsProcessing_EqBand>>(band); }

protected:

	DynamicsProcessing_Eq(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOFX_DYNAMICSPROCESSING_EQ
