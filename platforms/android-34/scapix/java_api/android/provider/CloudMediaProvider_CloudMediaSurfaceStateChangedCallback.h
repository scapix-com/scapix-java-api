// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_PROVIDER_CLOUDMEDIAPROVIDER_CLOUDMEDIASURFACESTATECHANGEDCALLBACK_FWD
#define SCAPIX_JAVA_API_ANDROID_PROVIDER_CLOUDMEDIAPROVIDER_CLOUDMEDIASURFACESTATECHANGEDCALLBACK_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::provider { class CloudMediaProvider_CloudMediaSurfaceStateChangedCallback; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::provider::CloudMediaProvider_CloudMediaSurfaceStateChangedCallback>
{
	static constexpr fixed_string class_name = "android/provider/CloudMediaProvider$CloudMediaSurfaceStateChangedCallback";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PROVIDER_CLOUDMEDIAPROVIDER_CLOUDMEDIASURFACESTATECHANGEDCALLBACK_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_PROVIDER_CLOUDMEDIAPROVIDER_CLOUDMEDIASURFACESTATECHANGEDCALLBACK)
#define SCAPIX_JAVA_API_ANDROID_PROVIDER_CLOUDMEDIAPROVIDER_CLOUDMEDIASURFACESTATECHANGEDCALLBACK

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Bundle.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::provider::CloudMediaProvider_CloudMediaSurfaceStateChangedCallback : public jni::object_base<"android/provider/CloudMediaProvider$CloudMediaSurfaceStateChangedCallback",
	java::lang::Object>
{
public:

	static jint PLAYBACK_STATE_BUFFERING() { return get_static_field<"PLAYBACK_STATE_BUFFERING", jint>(); }
	static jint PLAYBACK_STATE_COMPLETED() { return get_static_field<"PLAYBACK_STATE_COMPLETED", jint>(); }
	static jint PLAYBACK_STATE_ERROR_PERMANENT_FAILURE() { return get_static_field<"PLAYBACK_STATE_ERROR_PERMANENT_FAILURE", jint>(); }
	static jint PLAYBACK_STATE_ERROR_RETRIABLE_FAILURE() { return get_static_field<"PLAYBACK_STATE_ERROR_RETRIABLE_FAILURE", jint>(); }
	static jint PLAYBACK_STATE_MEDIA_SIZE_CHANGED() { return get_static_field<"PLAYBACK_STATE_MEDIA_SIZE_CHANGED", jint>(); }
	static jint PLAYBACK_STATE_PAUSED() { return get_static_field<"PLAYBACK_STATE_PAUSED", jint>(); }
	static jint PLAYBACK_STATE_READY() { return get_static_field<"PLAYBACK_STATE_READY", jint>(); }
	static jint PLAYBACK_STATE_STARTED() { return get_static_field<"PLAYBACK_STATE_STARTED", jint>(); }

	void setPlaybackState(jint surfaceId, jint playbackState, jni::ref<android::os::Bundle> playbackStateInfo) { return call_method<"setPlaybackState", void>(surfaceId, playbackState, playbackStateInfo); }

protected:

	CloudMediaProvider_CloudMediaSurfaceStateChangedCallback(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PROVIDER_CLOUDMEDIAPROVIDER_CLOUDMEDIASURFACESTATECHANGEDCALLBACK
