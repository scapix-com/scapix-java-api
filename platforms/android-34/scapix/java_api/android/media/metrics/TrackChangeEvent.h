// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/media/metrics/Event.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_METRICS_TRACKCHANGEEVENT_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_METRICS_TRACKCHANGEEVENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media::metrics { class TrackChangeEvent; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::metrics::TrackChangeEvent>
{
	static constexpr fixed_string class_name = "android/media/metrics/TrackChangeEvent";
	using base_classes = std::tuple<scapix::java_api::android::media::metrics::Event, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_METRICS_TRACKCHANGEEVENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_METRICS_TRACKCHANGEEVENT)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_METRICS_TRACKCHANGEEVENT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/android/media/metrics/TrackChangeEvent_Builder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::metrics::TrackChangeEvent : public jni::object_base<"android/media/metrics/TrackChangeEvent",
	android::media::metrics::Event,
	android::os::Parcelable>
{
public:

	using Builder = TrackChangeEvent_Builder;

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }
	static jint TRACK_CHANGE_REASON_ADAPTIVE() { return get_static_field<"TRACK_CHANGE_REASON_ADAPTIVE", jint>(); }
	static jint TRACK_CHANGE_REASON_INITIAL() { return get_static_field<"TRACK_CHANGE_REASON_INITIAL", jint>(); }
	static jint TRACK_CHANGE_REASON_MANUAL() { return get_static_field<"TRACK_CHANGE_REASON_MANUAL", jint>(); }
	static jint TRACK_CHANGE_REASON_OTHER() { return get_static_field<"TRACK_CHANGE_REASON_OTHER", jint>(); }
	static jint TRACK_CHANGE_REASON_UNKNOWN() { return get_static_field<"TRACK_CHANGE_REASON_UNKNOWN", jint>(); }
	static jint TRACK_STATE_OFF() { return get_static_field<"TRACK_STATE_OFF", jint>(); }
	static jint TRACK_STATE_ON() { return get_static_field<"TRACK_STATE_ON", jint>(); }
	static jint TRACK_TYPE_AUDIO() { return get_static_field<"TRACK_TYPE_AUDIO", jint>(); }
	static jint TRACK_TYPE_TEXT() { return get_static_field<"TRACK_TYPE_TEXT", jint>(); }
	static jint TRACK_TYPE_VIDEO() { return get_static_field<"TRACK_TYPE_VIDEO", jint>(); }

	jint getTrackState() { return call_method<"getTrackState", jint>(); }
	jint getTrackChangeReason() { return call_method<"getTrackChangeReason", jint>(); }
	jni::ref<java::lang::String> getContainerMimeType() { return call_method<"getContainerMimeType", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getSampleMimeType() { return call_method<"getSampleMimeType", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getCodecName() { return call_method<"getCodecName", jni::ref<java::lang::String>>(); }
	jint getBitrate() { return call_method<"getBitrate", jint>(); }
	jlong getTimeSinceCreatedMillis() { return call_method<"getTimeSinceCreatedMillis", jlong>(); }
	jint getTrackType() { return call_method<"getTrackType", jint>(); }
	jni::ref<java::lang::String> getLanguage() { return call_method<"getLanguage", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getLanguageRegion() { return call_method<"getLanguageRegion", jni::ref<java::lang::String>>(); }
	jint getChannelCount() { return call_method<"getChannelCount", jint>(); }
	jint getAudioSampleRate() { return call_method<"getAudioSampleRate", jint>(); }
	jint getWidth() { return call_method<"getWidth", jint>(); }
	jint getHeight() { return call_method<"getHeight", jint>(); }
	jfloat getVideoFrameRate() { return call_method<"getVideoFrameRate", jfloat>(); }
	jni::ref<android::os::Bundle> getMetricsBundle() { return call_method<"getMetricsBundle", jni::ref<android::os::Bundle>>(); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jint hashCode() { return call_method<"hashCode", jint>(); }

protected:

	TrackChangeEvent(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_METRICS_TRACKCHANGEEVENT