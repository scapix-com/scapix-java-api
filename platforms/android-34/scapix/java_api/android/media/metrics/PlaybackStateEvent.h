// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/media/metrics/Event.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_METRICS_PLAYBACKSTATEEVENT_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_METRICS_PLAYBACKSTATEEVENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media::metrics { class PlaybackStateEvent; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::metrics::PlaybackStateEvent>
{
	static constexpr fixed_string class_name = "android/media/metrics/PlaybackStateEvent";
	using base_classes = std::tuple<scapix::java_api::android::media::metrics::Event, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_METRICS_PLAYBACKSTATEEVENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_METRICS_PLAYBACKSTATEEVENT)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_METRICS_PLAYBACKSTATEEVENT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/media/metrics/PlaybackStateEvent_Builder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::metrics::PlaybackStateEvent : public jni::object_base<"android/media/metrics/PlaybackStateEvent",
	android::media::metrics::Event,
	android::os::Parcelable>
{
public:

	using Builder = PlaybackStateEvent_Builder;

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }
	static jint STATE_ABANDONED() { return get_static_field<"STATE_ABANDONED", jint>(); }
	static jint STATE_BUFFERING() { return get_static_field<"STATE_BUFFERING", jint>(); }
	static jint STATE_ENDED() { return get_static_field<"STATE_ENDED", jint>(); }
	static jint STATE_FAILED() { return get_static_field<"STATE_FAILED", jint>(); }
	static jint STATE_INTERRUPTED_BY_AD() { return get_static_field<"STATE_INTERRUPTED_BY_AD", jint>(); }
	static jint STATE_JOINING_BACKGROUND() { return get_static_field<"STATE_JOINING_BACKGROUND", jint>(); }
	static jint STATE_JOINING_FOREGROUND() { return get_static_field<"STATE_JOINING_FOREGROUND", jint>(); }
	static jint STATE_NOT_STARTED() { return get_static_field<"STATE_NOT_STARTED", jint>(); }
	static jint STATE_PAUSED() { return get_static_field<"STATE_PAUSED", jint>(); }
	static jint STATE_PAUSED_BUFFERING() { return get_static_field<"STATE_PAUSED_BUFFERING", jint>(); }
	static jint STATE_PLAYING() { return get_static_field<"STATE_PLAYING", jint>(); }
	static jint STATE_SEEKING() { return get_static_field<"STATE_SEEKING", jint>(); }
	static jint STATE_STOPPED() { return get_static_field<"STATE_STOPPED", jint>(); }
	static jint STATE_SUPPRESSED() { return get_static_field<"STATE_SUPPRESSED", jint>(); }
	static jint STATE_SUPPRESSED_BUFFERING() { return get_static_field<"STATE_SUPPRESSED_BUFFERING", jint>(); }

	jint getState() { return call_method<"getState", jint>(); }
	jlong getTimeSinceCreatedMillis() { return call_method<"getTimeSinceCreatedMillis", jlong>(); }
	jni::ref<android::os::Bundle> getMetricsBundle() { return call_method<"getMetricsBundle", jni::ref<android::os::Bundle>>(); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }
	jint describeContents() { return call_method<"describeContents", jint>(); }

protected:

	PlaybackStateEvent(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_METRICS_PLAYBACKSTATEEVENT