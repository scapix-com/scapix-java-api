// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/media/MediaRouter_RouteInfo.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIAROUTER_USERROUTEINFO_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIAROUTER_USERROUTEINFO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media { class MediaRouter_UserRouteInfo; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::MediaRouter_UserRouteInfo>
{
	static constexpr fixed_string class_name = "android/media/MediaRouter$UserRouteInfo";
	using base_classes = std::tuple<scapix::java_api::android::media::MediaRouter_RouteInfo>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIAROUTER_USERROUTEINFO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIAROUTER_USERROUTEINFO)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIAROUTER_USERROUTEINFO

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/graphics/drawable/Drawable.h>
#include <scapix/java_api/android/media/MediaRouter_VolumeCallback.h>
#include <scapix/java_api/android/media/RemoteControlClient.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::MediaRouter_UserRouteInfo : public jni::object_base<"android/media/MediaRouter$UserRouteInfo",
	android::media::MediaRouter_RouteInfo>
{
public:

	void setName(jni::ref<java::lang::CharSequence> name) { return call_method<"setName", void>(name); }
	void setName(jint resId) { return call_method<"setName", void>(resId); }
	void setDescription(jni::ref<java::lang::CharSequence> description) { return call_method<"setDescription", void>(description); }
	void setStatus(jni::ref<java::lang::CharSequence> status) { return call_method<"setStatus", void>(status); }
	void setRemoteControlClient(jni::ref<android::media::RemoteControlClient> rcc) { return call_method<"setRemoteControlClient", void>(rcc); }
	jni::ref<android::media::RemoteControlClient> getRemoteControlClient() { return call_method<"getRemoteControlClient", jni::ref<android::media::RemoteControlClient>>(); }
	void setIconDrawable(jni::ref<android::graphics::drawable::Drawable> icon) { return call_method<"setIconDrawable", void>(icon); }
	void setIconResource(jint resId) { return call_method<"setIconResource", void>(resId); }
	void setVolumeCallback(jni::ref<android::media::MediaRouter_VolumeCallback> vcb) { return call_method<"setVolumeCallback", void>(vcb); }
	void setPlaybackType(jint type) { return call_method<"setPlaybackType", void>(type); }
	void setVolumeHandling(jint volumeHandling) { return call_method<"setVolumeHandling", void>(volumeHandling); }
	void setVolume(jint volume) { return call_method<"setVolume", void>(volume); }
	void requestSetVolume(jint volume) { return call_method<"requestSetVolume", void>(volume); }
	void requestUpdateVolume(jint direction) { return call_method<"requestUpdateVolume", void>(direction); }
	void setVolumeMax(jint volumeMax) { return call_method<"setVolumeMax", void>(volumeMax); }
	void setPlaybackStream(jint stream) { return call_method<"setPlaybackStream", void>(stream); }

protected:

	MediaRouter_UserRouteInfo(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIAROUTER_USERROUTEINFO
