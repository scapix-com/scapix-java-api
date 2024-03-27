// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIAPLAYER_ONDRMCONFIGHELPER_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIAPLAYER_ONDRMCONFIGHELPER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media { class MediaPlayer_OnDrmConfigHelper; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::MediaPlayer_OnDrmConfigHelper>
{
	static constexpr fixed_string class_name = "android/media/MediaPlayer$OnDrmConfigHelper";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIAPLAYER_ONDRMCONFIGHELPER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIAPLAYER_ONDRMCONFIGHELPER)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIAPLAYER_ONDRMCONFIGHELPER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/media/MediaPlayer.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::MediaPlayer_OnDrmConfigHelper : public jni::object_base<"android/media/MediaPlayer$OnDrmConfigHelper",
	java::lang::Object>
{
public:

	void onDrmConfig(jni::ref<android::media::MediaPlayer> p1) { return call_method<"onDrmConfig", void>(p1); }

protected:

	MediaPlayer_OnDrmConfigHelper(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIAPLAYER_ONDRMCONFIGHELPER
