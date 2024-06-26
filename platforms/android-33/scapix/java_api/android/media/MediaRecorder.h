// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/media/AudioRouting.h>
#include <scapix/java_api/android/media/AudioRecordingMonitor.h>
#include <scapix/java_api/android/media/MicrophoneDirection.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIARECORDER_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIARECORDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media { class MediaRecorder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::MediaRecorder>
{
	static constexpr fixed_string class_name = "android/media/MediaRecorder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::media::AudioRouting, scapix::java_api::android::media::AudioRecordingMonitor, scapix::java_api::android::media::MicrophoneDirection>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIARECORDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIARECORDER)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIARECORDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/hardware/Camera.h>
#include <scapix/java_api/android/media/AudioDeviceInfo.h>
#include <scapix/java_api/android/media/AudioManager_AudioRecordingCallback.h>
#include <scapix/java_api/android/media/AudioRecordingConfiguration.h>
#include <scapix/java_api/android/media/AudioRouting_OnRoutingChangedListener.h>
#include <scapix/java_api/android/media/CamcorderProfile.h>
#include <scapix/java_api/android/media/EncoderProfiles_AudioProfile.h>
#include <scapix/java_api/android/media/EncoderProfiles_VideoProfile.h>
#include <scapix/java_api/android/media/MediaRecorder_OnErrorListener.h>
#include <scapix/java_api/android/media/MediaRecorder_OnInfoListener.h>
#include <scapix/java_api/android/media/metrics/LogSessionId.h>
#include <scapix/java_api/android/os/Handler.h>
#include <scapix/java_api/android/os/PersistableBundle.h>
#include <scapix/java_api/android/view/Surface.h>
#include <scapix/java_api/java/io/File.h>
#include <scapix/java_api/java/io/FileDescriptor.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/java/util/concurrent/Executor.h>
#include <scapix/java_api/android/media/MediaRecorder_VideoSource.h>
#include <scapix/java_api/android/media/MediaRecorder_VideoEncoder.h>
#include <scapix/java_api/android/media/MediaRecorder_OutputFormat.h>
#include <scapix/java_api/android/media/MediaRecorder_MetricsConstants.h>
#include <scapix/java_api/android/media/MediaRecorder_AudioSource.h>
#include <scapix/java_api/android/media/MediaRecorder_AudioEncoder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::MediaRecorder : public jni::object_base<"android/media/MediaRecorder",
	java::lang::Object,
	android::media::AudioRouting,
	android::media::AudioRecordingMonitor,
	android::media::MicrophoneDirection>
{
public:

	using VideoSource = MediaRecorder_VideoSource;
	using VideoEncoder = MediaRecorder_VideoEncoder;
	using OutputFormat = MediaRecorder_OutputFormat;
	using OnInfoListener = MediaRecorder_OnInfoListener;
	using OnErrorListener = MediaRecorder_OnErrorListener;
	using MetricsConstants = MediaRecorder_MetricsConstants;
	using AudioSource = MediaRecorder_AudioSource;
	using AudioEncoder = MediaRecorder_AudioEncoder;

	static jint MEDIA_ERROR_SERVER_DIED() { return get_static_field<"MEDIA_ERROR_SERVER_DIED", jint>(); }
	static jint MEDIA_RECORDER_ERROR_UNKNOWN() { return get_static_field<"MEDIA_RECORDER_ERROR_UNKNOWN", jint>(); }
	static jint MEDIA_RECORDER_INFO_MAX_DURATION_REACHED() { return get_static_field<"MEDIA_RECORDER_INFO_MAX_DURATION_REACHED", jint>(); }
	static jint MEDIA_RECORDER_INFO_MAX_FILESIZE_APPROACHING() { return get_static_field<"MEDIA_RECORDER_INFO_MAX_FILESIZE_APPROACHING", jint>(); }
	static jint MEDIA_RECORDER_INFO_MAX_FILESIZE_REACHED() { return get_static_field<"MEDIA_RECORDER_INFO_MAX_FILESIZE_REACHED", jint>(); }
	static jint MEDIA_RECORDER_INFO_NEXT_OUTPUT_FILE_STARTED() { return get_static_field<"MEDIA_RECORDER_INFO_NEXT_OUTPUT_FILE_STARTED", jint>(); }
	static jint MEDIA_RECORDER_INFO_UNKNOWN() { return get_static_field<"MEDIA_RECORDER_INFO_UNKNOWN", jint>(); }

	static jni::ref<android::media::MediaRecorder> new_object() { return base_::new_object(); }
	static jni::ref<android::media::MediaRecorder> new_object(jni::ref<android::content::Context> context) { return base_::new_object(context); }
	void setLogSessionId(jni::ref<android::media::metrics::LogSessionId> id) { return call_method<"setLogSessionId", void>(id); }
	jni::ref<android::media::metrics::LogSessionId> getLogSessionId() { return call_method<"getLogSessionId", jni::ref<android::media::metrics::LogSessionId>>(); }
	void setCamera(jni::ref<android::hardware::Camera> p1) { return call_method<"setCamera", void>(p1); }
	jni::ref<android::view::Surface> getSurface() { return call_method<"getSurface", jni::ref<android::view::Surface>>(); }
	void setInputSurface(jni::ref<android::view::Surface> surface) { return call_method<"setInputSurface", void>(surface); }
	void setPreviewDisplay(jni::ref<android::view::Surface> sv) { return call_method<"setPreviewDisplay", void>(sv); }
	void setAudioSource(jint p1) { return call_method<"setAudioSource", void>(p1); }
	static jint getAudioSourceMax() { return call_static_method<"getAudioSourceMax", jint>(); }
	void setPrivacySensitive(jboolean p1) { return call_method<"setPrivacySensitive", void>(p1); }
	jboolean isPrivacySensitive() { return call_method<"isPrivacySensitive", jboolean>(); }
	void setVideoSource(jint p1) { return call_method<"setVideoSource", void>(p1); }
	void setProfile(jni::ref<android::media::CamcorderProfile> profile) { return call_method<"setProfile", void>(profile); }
	void setAudioProfile(jni::ref<android::media::EncoderProfiles_AudioProfile> profile) { return call_method<"setAudioProfile", void>(profile); }
	void setVideoProfile(jni::ref<android::media::EncoderProfiles_VideoProfile> profile) { return call_method<"setVideoProfile", void>(profile); }
	void setCaptureRate(jdouble fps) { return call_method<"setCaptureRate", void>(fps); }
	void setOrientationHint(jint degrees) { return call_method<"setOrientationHint", void>(degrees); }
	void setLocation(jfloat latitude, jfloat longitude) { return call_method<"setLocation", void>(latitude, longitude); }
	void setOutputFormat(jint p1) { return call_method<"setOutputFormat", void>(p1); }
	void setVideoSize(jint p1, jint p2) { return call_method<"setVideoSize", void>(p1, p2); }
	void setVideoFrameRate(jint p1) { return call_method<"setVideoFrameRate", void>(p1); }
	void setMaxDuration(jint p1) { return call_method<"setMaxDuration", void>(p1); }
	void setMaxFileSize(jlong p1) { return call_method<"setMaxFileSize", void>(p1); }
	void setAudioEncoder(jint p1) { return call_method<"setAudioEncoder", void>(p1); }
	void setVideoEncoder(jint p1) { return call_method<"setVideoEncoder", void>(p1); }
	void setAudioSamplingRate(jint samplingRate) { return call_method<"setAudioSamplingRate", void>(samplingRate); }
	void setAudioChannels(jint numChannels) { return call_method<"setAudioChannels", void>(numChannels); }
	void setAudioEncodingBitRate(jint bitRate) { return call_method<"setAudioEncodingBitRate", void>(bitRate); }
	void setVideoEncodingBitRate(jint bitRate) { return call_method<"setVideoEncodingBitRate", void>(bitRate); }
	void setVideoEncodingProfileLevel(jint profile, jint level) { return call_method<"setVideoEncodingProfileLevel", void>(profile, level); }
	void setOutputFile(jni::ref<java::io::FileDescriptor> fd) { return call_method<"setOutputFile", void>(fd); }
	void setOutputFile(jni::ref<java::io::File> file) { return call_method<"setOutputFile", void>(file); }
	void setNextOutputFile(jni::ref<java::io::FileDescriptor> fd) { return call_method<"setNextOutputFile", void>(fd); }
	void setOutputFile(jni::ref<java::lang::String> path) { return call_method<"setOutputFile", void>(path); }
	void setNextOutputFile(jni::ref<java::io::File> file) { return call_method<"setNextOutputFile", void>(file); }
	void prepare() { return call_method<"prepare", void>(); }
	void start() { return call_method<"start", void>(); }
	void stop() { return call_method<"stop", void>(); }
	void pause() { return call_method<"pause", void>(); }
	void resume() { return call_method<"resume", void>(); }
	void reset() { return call_method<"reset", void>(); }
	jint getMaxAmplitude() { return call_method<"getMaxAmplitude", jint>(); }
	void setOnErrorListener(jni::ref<android::media::MediaRecorder_OnErrorListener> l) { return call_method<"setOnErrorListener", void>(l); }
	void setOnInfoListener(jni::ref<android::media::MediaRecorder_OnInfoListener> listener) { return call_method<"setOnInfoListener", void>(listener); }
	jboolean setPreferredDevice(jni::ref<android::media::AudioDeviceInfo> deviceInfo) { return call_method<"setPreferredDevice", jboolean>(deviceInfo); }
	jni::ref<android::media::AudioDeviceInfo> getPreferredDevice() { return call_method<"getPreferredDevice", jni::ref<android::media::AudioDeviceInfo>>(); }
	jni::ref<android::media::AudioDeviceInfo> getRoutedDevice() { return call_method<"getRoutedDevice", jni::ref<android::media::AudioDeviceInfo>>(); }
	void addOnRoutingChangedListener(jni::ref<android::media::AudioRouting_OnRoutingChangedListener> listener, jni::ref<android::os::Handler> handler) { return call_method<"addOnRoutingChangedListener", void>(listener, handler); }
	void removeOnRoutingChangedListener(jni::ref<android::media::AudioRouting_OnRoutingChangedListener> listener) { return call_method<"removeOnRoutingChangedListener", void>(listener); }
	jni::ref<java::util::List> getActiveMicrophones() { return call_method<"getActiveMicrophones", jni::ref<java::util::List>>(); }
	jboolean setPreferredMicrophoneDirection(jint direction) { return call_method<"setPreferredMicrophoneDirection", jboolean>(direction); }
	jboolean setPreferredMicrophoneFieldDimension(jfloat zoom) { return call_method<"setPreferredMicrophoneFieldDimension", jboolean>(zoom); }
	void registerAudioRecordingCallback(jni::ref<java::util::concurrent::Executor> executor, jni::ref<android::media::AudioManager_AudioRecordingCallback> cb) { return call_method<"registerAudioRecordingCallback", void>(executor, cb); }
	void unregisterAudioRecordingCallback(jni::ref<android::media::AudioManager_AudioRecordingCallback> cb) { return call_method<"unregisterAudioRecordingCallback", void>(cb); }
	jni::ref<android::media::AudioRecordingConfiguration> getActiveRecordingConfiguration() { return call_method<"getActiveRecordingConfiguration", jni::ref<android::media::AudioRecordingConfiguration>>(); }
	void release() { return call_method<"release", void>(); }
	jni::ref<android::os::PersistableBundle> getMetrics() { return call_method<"getMetrics", jni::ref<android::os::PersistableBundle>>(); }

protected:

	MediaRecorder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIARECORDER
