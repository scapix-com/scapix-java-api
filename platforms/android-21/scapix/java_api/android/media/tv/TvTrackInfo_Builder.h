// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_TV_TVTRACKINFO_BUILDER_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_TV_TVTRACKINFO_BUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media::tv { class TvTrackInfo_Builder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::tv::TvTrackInfo_Builder>
{
	static constexpr fixed_string class_name = "android/media/tv/TvTrackInfo$Builder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_TV_TVTRACKINFO_BUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_TV_TVTRACKINFO_BUILDER)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_TV_TVTRACKINFO_BUILDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/media/tv/TvTrackInfo.h>
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::tv::TvTrackInfo_Builder : public jni::object_base<"android/media/tv/TvTrackInfo$Builder",
	java::lang::Object>
{
public:

	static jni::ref<android::media::tv::TvTrackInfo_Builder> new_object(jint type, jni::ref<java::lang::String> id) { return base_::new_object(type, id); }
	jni::ref<android::media::tv::TvTrackInfo_Builder> setLanguage(jni::ref<java::lang::String> language) { return call_method<"setLanguage", jni::ref<android::media::tv::TvTrackInfo_Builder>>(language); }
	jni::ref<android::media::tv::TvTrackInfo_Builder> setAudioChannelCount(jint audioChannelCount) { return call_method<"setAudioChannelCount", jni::ref<android::media::tv::TvTrackInfo_Builder>>(audioChannelCount); }
	jni::ref<android::media::tv::TvTrackInfo_Builder> setAudioSampleRate(jint audioSampleRate) { return call_method<"setAudioSampleRate", jni::ref<android::media::tv::TvTrackInfo_Builder>>(audioSampleRate); }
	jni::ref<android::media::tv::TvTrackInfo_Builder> setVideoWidth(jint videoWidth) { return call_method<"setVideoWidth", jni::ref<android::media::tv::TvTrackInfo_Builder>>(videoWidth); }
	jni::ref<android::media::tv::TvTrackInfo_Builder> setVideoHeight(jint videoHeight) { return call_method<"setVideoHeight", jni::ref<android::media::tv::TvTrackInfo_Builder>>(videoHeight); }
	jni::ref<android::media::tv::TvTrackInfo_Builder> setVideoFrameRate(jfloat videoFrameRate) { return call_method<"setVideoFrameRate", jni::ref<android::media::tv::TvTrackInfo_Builder>>(videoFrameRate); }
	jni::ref<android::media::tv::TvTrackInfo_Builder> setExtra(jni::ref<android::os::Bundle> extra) { return call_method<"setExtra", jni::ref<android::media::tv::TvTrackInfo_Builder>>(extra); }
	jni::ref<android::media::tv::TvTrackInfo> build() { return call_method<"build", jni::ref<android::media::tv::TvTrackInfo>>(); }

protected:

	TvTrackInfo_Builder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_TV_TVTRACKINFO_BUILDER