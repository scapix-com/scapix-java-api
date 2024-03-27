// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOFX_DYNAMICSPROCESSING_CONFIG_BUILDER_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOFX_DYNAMICSPROCESSING_CONFIG_BUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media::audiofx { class DynamicsProcessing_Config_Builder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::audiofx::DynamicsProcessing_Config_Builder>
{
	static constexpr fixed_string class_name = "android/media/audiofx/DynamicsProcessing$Config$Builder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOFX_DYNAMICSPROCESSING_CONFIG_BUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOFX_DYNAMICSPROCESSING_CONFIG_BUILDER)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOFX_DYNAMICSPROCESSING_CONFIG_BUILDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/media/audiofx/DynamicsProcessing_Channel.h>
#include <scapix/java_api/android/media/audiofx/DynamicsProcessing_Config.h>
#include <scapix/java_api/android/media/audiofx/DynamicsProcessing_Eq.h>
#include <scapix/java_api/android/media/audiofx/DynamicsProcessing_Limiter.h>
#include <scapix/java_api/android/media/audiofx/DynamicsProcessing_Mbc.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::audiofx::DynamicsProcessing_Config_Builder : public jni::object_base<"android/media/audiofx/DynamicsProcessing$Config$Builder",
	java::lang::Object>
{
public:

	static jni::ref<android::media::audiofx::DynamicsProcessing_Config_Builder> new_object(jint variant, jint channelCount, jboolean preEqInUse, jint preEqBandCount, jboolean mbcInUse, jint mbcBandCount, jboolean postEqInUse, jint postEqBandCount, jboolean limiterInUse) { return base_::new_object(variant, channelCount, preEqInUse, preEqBandCount, mbcInUse, mbcBandCount, postEqInUse, postEqBandCount, limiterInUse); }
	jni::ref<android::media::audiofx::DynamicsProcessing_Config_Builder> setPreferredFrameDuration(jfloat frameDuration) { return call_method<"setPreferredFrameDuration", jni::ref<android::media::audiofx::DynamicsProcessing_Config_Builder>>(frameDuration); }
	jni::ref<android::media::audiofx::DynamicsProcessing_Config_Builder> setInputGainByChannelIndex(jint channelIndex, jfloat inputGain) { return call_method<"setInputGainByChannelIndex", jni::ref<android::media::audiofx::DynamicsProcessing_Config_Builder>>(channelIndex, inputGain); }
	jni::ref<android::media::audiofx::DynamicsProcessing_Config_Builder> setInputGainAllChannelsTo(jfloat inputGain) { return call_method<"setInputGainAllChannelsTo", jni::ref<android::media::audiofx::DynamicsProcessing_Config_Builder>>(inputGain); }
	jni::ref<android::media::audiofx::DynamicsProcessing_Config_Builder> setChannelTo(jint channelIndex, jni::ref<android::media::audiofx::DynamicsProcessing_Channel> channel) { return call_method<"setChannelTo", jni::ref<android::media::audiofx::DynamicsProcessing_Config_Builder>>(channelIndex, channel); }
	jni::ref<android::media::audiofx::DynamicsProcessing_Config_Builder> setAllChannelsTo(jni::ref<android::media::audiofx::DynamicsProcessing_Channel> channel) { return call_method<"setAllChannelsTo", jni::ref<android::media::audiofx::DynamicsProcessing_Config_Builder>>(channel); }
	jni::ref<android::media::audiofx::DynamicsProcessing_Config_Builder> setPreEqByChannelIndex(jint channelIndex, jni::ref<android::media::audiofx::DynamicsProcessing_Eq> preEq) { return call_method<"setPreEqByChannelIndex", jni::ref<android::media::audiofx::DynamicsProcessing_Config_Builder>>(channelIndex, preEq); }
	jni::ref<android::media::audiofx::DynamicsProcessing_Config_Builder> setPreEqAllChannelsTo(jni::ref<android::media::audiofx::DynamicsProcessing_Eq> preEq) { return call_method<"setPreEqAllChannelsTo", jni::ref<android::media::audiofx::DynamicsProcessing_Config_Builder>>(preEq); }
	jni::ref<android::media::audiofx::DynamicsProcessing_Config_Builder> setMbcByChannelIndex(jint channelIndex, jni::ref<android::media::audiofx::DynamicsProcessing_Mbc> mbc) { return call_method<"setMbcByChannelIndex", jni::ref<android::media::audiofx::DynamicsProcessing_Config_Builder>>(channelIndex, mbc); }
	jni::ref<android::media::audiofx::DynamicsProcessing_Config_Builder> setMbcAllChannelsTo(jni::ref<android::media::audiofx::DynamicsProcessing_Mbc> mbc) { return call_method<"setMbcAllChannelsTo", jni::ref<android::media::audiofx::DynamicsProcessing_Config_Builder>>(mbc); }
	jni::ref<android::media::audiofx::DynamicsProcessing_Config_Builder> setPostEqByChannelIndex(jint channelIndex, jni::ref<android::media::audiofx::DynamicsProcessing_Eq> postEq) { return call_method<"setPostEqByChannelIndex", jni::ref<android::media::audiofx::DynamicsProcessing_Config_Builder>>(channelIndex, postEq); }
	jni::ref<android::media::audiofx::DynamicsProcessing_Config_Builder> setPostEqAllChannelsTo(jni::ref<android::media::audiofx::DynamicsProcessing_Eq> postEq) { return call_method<"setPostEqAllChannelsTo", jni::ref<android::media::audiofx::DynamicsProcessing_Config_Builder>>(postEq); }
	jni::ref<android::media::audiofx::DynamicsProcessing_Config_Builder> setLimiterByChannelIndex(jint channelIndex, jni::ref<android::media::audiofx::DynamicsProcessing_Limiter> limiter) { return call_method<"setLimiterByChannelIndex", jni::ref<android::media::audiofx::DynamicsProcessing_Config_Builder>>(channelIndex, limiter); }
	jni::ref<android::media::audiofx::DynamicsProcessing_Config_Builder> setLimiterAllChannelsTo(jni::ref<android::media::audiofx::DynamicsProcessing_Limiter> limiter) { return call_method<"setLimiterAllChannelsTo", jni::ref<android::media::audiofx::DynamicsProcessing_Config_Builder>>(limiter); }
	jni::ref<android::media::audiofx::DynamicsProcessing_Config> build() { return call_method<"build", jni::ref<android::media::audiofx::DynamicsProcessing_Config>>(); }

protected:

	DynamicsProcessing_Config_Builder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOFX_DYNAMICSPROCESSING_CONFIG_BUILDER