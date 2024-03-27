// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/media/AudioRouting.h>
#include <scapix/java_api/android/media/VolumeAutomation.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOTRACK_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOTRACK_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media { class AudioTrack; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::AudioTrack>
{
	static constexpr fixed_string class_name = "android/media/AudioTrack";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::media::AudioRouting, scapix::java_api::android::media::VolumeAutomation>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOTRACK_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOTRACK)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOTRACK

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/media/AudioAttributes.h>
#include <scapix/java_api/android/media/AudioDeviceInfo.h>
#include <scapix/java_api/android/media/AudioFormat.h>
#include <scapix/java_api/android/media/AudioPresentation.h>
#include <scapix/java_api/android/media/AudioRouting_OnRoutingChangedListener.h>
#include <scapix/java_api/android/media/AudioTimestamp.h>
#include <scapix/java_api/android/media/AudioTrack_OnCodecFormatChangedListener.h>
#include <scapix/java_api/android/media/AudioTrack_OnPlaybackPositionUpdateListener.h>
#include <scapix/java_api/android/media/AudioTrack_OnRoutingChangedListener.h>
#include <scapix/java_api/android/media/AudioTrack_StreamEventCallback.h>
#include <scapix/java_api/android/media/PlaybackParams.h>
#include <scapix/java_api/android/media/VolumeShaper.h>
#include <scapix/java_api/android/media/VolumeShaper_Configuration.h>
#include <scapix/java_api/android/media/metrics/LogSessionId.h>
#include <scapix/java_api/android/os/Handler.h>
#include <scapix/java_api/android/os/PersistableBundle.h>
#include <scapix/java_api/java/nio/ByteBuffer.h>
#include <scapix/java_api/java/util/concurrent/Executor.h>
#include <scapix/java_api/android/media/AudioTrack_MetricsConstants.h>
#include <scapix/java_api/android/media/AudioTrack_Builder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::AudioTrack : public jni::object_base<"android/media/AudioTrack",
	java::lang::Object,
	android::media::AudioRouting,
	android::media::VolumeAutomation>
{
public:

	using StreamEventCallback = AudioTrack_StreamEventCallback;
	using OnRoutingChangedListener = AudioTrack_OnRoutingChangedListener;
	using OnPlaybackPositionUpdateListener = AudioTrack_OnPlaybackPositionUpdateListener;
	using OnCodecFormatChangedListener = AudioTrack_OnCodecFormatChangedListener;
	using MetricsConstants = AudioTrack_MetricsConstants;
	using Builder = AudioTrack_Builder;

	static jint DUAL_MONO_MODE_LL() { return get_static_field<"DUAL_MONO_MODE_LL", jint>(); }
	static jint DUAL_MONO_MODE_LR() { return get_static_field<"DUAL_MONO_MODE_LR", jint>(); }
	static jint DUAL_MONO_MODE_OFF() { return get_static_field<"DUAL_MONO_MODE_OFF", jint>(); }
	static jint DUAL_MONO_MODE_RR() { return get_static_field<"DUAL_MONO_MODE_RR", jint>(); }
	static jint ENCAPSULATION_METADATA_TYPE_DVB_AD_DESCRIPTOR() { return get_static_field<"ENCAPSULATION_METADATA_TYPE_DVB_AD_DESCRIPTOR", jint>(); }
	static jint ENCAPSULATION_METADATA_TYPE_FRAMEWORK_TUNER() { return get_static_field<"ENCAPSULATION_METADATA_TYPE_FRAMEWORK_TUNER", jint>(); }
	static jint ENCAPSULATION_MODE_ELEMENTARY_STREAM() { return get_static_field<"ENCAPSULATION_MODE_ELEMENTARY_STREAM", jint>(); }
	static jint ENCAPSULATION_MODE_NONE() { return get_static_field<"ENCAPSULATION_MODE_NONE", jint>(); }
	static jint ERROR() { return get_static_field<"ERROR", jint>(); }
	static jint ERROR_BAD_VALUE() { return get_static_field<"ERROR_BAD_VALUE", jint>(); }
	static jint ERROR_DEAD_OBJECT() { return get_static_field<"ERROR_DEAD_OBJECT", jint>(); }
	static jint ERROR_INVALID_OPERATION() { return get_static_field<"ERROR_INVALID_OPERATION", jint>(); }
	static jint MODE_STATIC() { return get_static_field<"MODE_STATIC", jint>(); }
	static jint MODE_STREAM() { return get_static_field<"MODE_STREAM", jint>(); }
	static jint PERFORMANCE_MODE_LOW_LATENCY() { return get_static_field<"PERFORMANCE_MODE_LOW_LATENCY", jint>(); }
	static jint PERFORMANCE_MODE_NONE() { return get_static_field<"PERFORMANCE_MODE_NONE", jint>(); }
	static jint PERFORMANCE_MODE_POWER_SAVING() { return get_static_field<"PERFORMANCE_MODE_POWER_SAVING", jint>(); }
	static jint PLAYSTATE_PAUSED() { return get_static_field<"PLAYSTATE_PAUSED", jint>(); }
	static jint PLAYSTATE_PLAYING() { return get_static_field<"PLAYSTATE_PLAYING", jint>(); }
	static jint PLAYSTATE_STOPPED() { return get_static_field<"PLAYSTATE_STOPPED", jint>(); }
	static jint STATE_INITIALIZED() { return get_static_field<"STATE_INITIALIZED", jint>(); }
	static jint STATE_NO_STATIC_DATA() { return get_static_field<"STATE_NO_STATIC_DATA", jint>(); }
	static jint STATE_UNINITIALIZED() { return get_static_field<"STATE_UNINITIALIZED", jint>(); }
	static jint SUCCESS() { return get_static_field<"SUCCESS", jint>(); }
	static jint WRITE_BLOCKING() { return get_static_field<"WRITE_BLOCKING", jint>(); }
	static jint WRITE_NON_BLOCKING() { return get_static_field<"WRITE_NON_BLOCKING", jint>(); }

	static jni::ref<android::media::AudioTrack> new_object(jint streamType, jint sampleRateInHz, jint channelConfig, jint audioFormat, jint bufferSizeInBytes, jint mode) { return base_::new_object(streamType, sampleRateInHz, channelConfig, audioFormat, bufferSizeInBytes, mode); }
	static jni::ref<android::media::AudioTrack> new_object(jint streamType, jint sampleRateInHz, jint channelConfig, jint audioFormat, jint bufferSizeInBytes, jint mode, jint sessionId) { return base_::new_object(streamType, sampleRateInHz, channelConfig, audioFormat, bufferSizeInBytes, mode, sessionId); }
	static jni::ref<android::media::AudioTrack> new_object(jni::ref<android::media::AudioAttributes> attributes, jni::ref<android::media::AudioFormat> format, jint bufferSizeInBytes, jint mode, jint sessionId) { return base_::new_object(attributes, format, bufferSizeInBytes, mode, sessionId); }
	void setOffloadDelayPadding(jint delayInFrames, jint paddingInFrames) { return call_method<"setOffloadDelayPadding", void>(delayInFrames, paddingInFrames); }
	jint getOffloadDelay() { return call_method<"getOffloadDelay", jint>(); }
	jint getOffloadPadding() { return call_method<"getOffloadPadding", jint>(); }
	void setOffloadEndOfStream() { return call_method<"setOffloadEndOfStream", void>(); }
	jboolean isOffloadedPlayback() { return call_method<"isOffloadedPlayback", jboolean>(); }
	static jboolean isDirectPlaybackSupported(jni::ref<android::media::AudioFormat> format, jni::ref<android::media::AudioAttributes> attributes) { return call_static_method<"isDirectPlaybackSupported", jboolean>(format, attributes); }
	jboolean setAudioDescriptionMixLeveldB(jfloat level) { return call_method<"setAudioDescriptionMixLeveldB", jboolean>(level); }
	jfloat getAudioDescriptionMixLeveldB() { return call_method<"getAudioDescriptionMixLeveldB", jfloat>(); }
	jboolean setDualMonoMode(jint dualMonoMode) { return call_method<"setDualMonoMode", jboolean>(dualMonoMode); }
	jint getDualMonoMode() { return call_method<"getDualMonoMode", jint>(); }
	void release() { return call_method<"release", void>(); }
	static jfloat getMinVolume() { return call_static_method<"getMinVolume", jfloat>(); }
	static jfloat getMaxVolume() { return call_static_method<"getMaxVolume", jfloat>(); }
	jint getSampleRate() { return call_method<"getSampleRate", jint>(); }
	jint getPlaybackRate() { return call_method<"getPlaybackRate", jint>(); }
	jni::ref<android::media::PlaybackParams> getPlaybackParams() { return call_method<"getPlaybackParams", jni::ref<android::media::PlaybackParams>>(); }
	jni::ref<android::media::AudioAttributes> getAudioAttributes() { return call_method<"getAudioAttributes", jni::ref<android::media::AudioAttributes>>(); }
	jint getAudioFormat() { return call_method<"getAudioFormat", jint>(); }
	jint getStreamType() { return call_method<"getStreamType", jint>(); }
	jint getChannelConfiguration() { return call_method<"getChannelConfiguration", jint>(); }
	jni::ref<android::media::AudioFormat> getFormat() { return call_method<"getFormat", jni::ref<android::media::AudioFormat>>(); }
	jint getChannelCount() { return call_method<"getChannelCount", jint>(); }
	jint getState() { return call_method<"getState", jint>(); }
	jint getPlayState() { return call_method<"getPlayState", jint>(); }
	jint getBufferSizeInFrames() { return call_method<"getBufferSizeInFrames", jint>(); }
	jint setBufferSizeInFrames(jint bufferSizeInFrames) { return call_method<"setBufferSizeInFrames", jint>(bufferSizeInFrames); }
	jint getBufferCapacityInFrames() { return call_method<"getBufferCapacityInFrames", jint>(); }
	jint setStartThresholdInFrames(jint startThresholdInFrames) { return call_method<"setStartThresholdInFrames", jint>(startThresholdInFrames); }
	jint getStartThresholdInFrames() { return call_method<"getStartThresholdInFrames", jint>(); }
	jint getNotificationMarkerPosition() { return call_method<"getNotificationMarkerPosition", jint>(); }
	jint getPositionNotificationPeriod() { return call_method<"getPositionNotificationPeriod", jint>(); }
	jint getPlaybackHeadPosition() { return call_method<"getPlaybackHeadPosition", jint>(); }
	jint getUnderrunCount() { return call_method<"getUnderrunCount", jint>(); }
	jint getPerformanceMode() { return call_method<"getPerformanceMode", jint>(); }
	static jint getNativeOutputSampleRate(jint streamType) { return call_static_method<"getNativeOutputSampleRate", jint>(streamType); }
	static jint getMinBufferSize(jint sampleRateInHz, jint channelConfig, jint audioFormat) { return call_static_method<"getMinBufferSize", jint>(sampleRateInHz, channelConfig, audioFormat); }
	jint getAudioSessionId() { return call_method<"getAudioSessionId", jint>(); }
	jboolean getTimestamp(jni::ref<android::media::AudioTimestamp> timestamp) { return call_method<"getTimestamp", jboolean>(timestamp); }
	jni::ref<android::os::PersistableBundle> getMetrics() { return call_method<"getMetrics", jni::ref<android::os::PersistableBundle>>(); }
	void setPlaybackPositionUpdateListener(jni::ref<android::media::AudioTrack_OnPlaybackPositionUpdateListener> listener) { return call_method<"setPlaybackPositionUpdateListener", void>(listener); }
	void setPlaybackPositionUpdateListener(jni::ref<android::media::AudioTrack_OnPlaybackPositionUpdateListener> listener, jni::ref<android::os::Handler> handler) { return call_method<"setPlaybackPositionUpdateListener", void>(listener, handler); }
	jint setStereoVolume(jfloat leftGain, jfloat rightGain) { return call_method<"setStereoVolume", jint>(leftGain, rightGain); }
	jint setVolume(jfloat gain) { return call_method<"setVolume", jint>(gain); }
	jni::ref<android::media::VolumeShaper> createVolumeShaper(jni::ref<android::media::VolumeShaper_Configuration> configuration) { return call_method<"createVolumeShaper", jni::ref<android::media::VolumeShaper>>(configuration); }
	jint setPlaybackRate(jint sampleRateInHz) { return call_method<"setPlaybackRate", jint>(sampleRateInHz); }
	void setPlaybackParams(jni::ref<android::media::PlaybackParams> params) { return call_method<"setPlaybackParams", void>(params); }
	jint setNotificationMarkerPosition(jint markerInFrames) { return call_method<"setNotificationMarkerPosition", jint>(markerInFrames); }
	jint setPositionNotificationPeriod(jint periodInFrames) { return call_method<"setPositionNotificationPeriod", jint>(periodInFrames); }
	jint setPlaybackHeadPosition(jint positionInFrames) { return call_method<"setPlaybackHeadPosition", jint>(positionInFrames); }
	jint setLoopPoints(jint startInFrames, jint endInFrames, jint loopCount) { return call_method<"setLoopPoints", jint>(startInFrames, endInFrames, loopCount); }
	jint setPresentation(jni::ref<android::media::AudioPresentation> presentation) { return call_method<"setPresentation", jint>(presentation); }
	void play() { return call_method<"play", void>(); }
	void stop() { return call_method<"stop", void>(); }
	void pause() { return call_method<"pause", void>(); }
	void flush() { return call_method<"flush", void>(); }
	jint write(jni::ref<jni::array<jbyte>> audioData, jint offsetInBytes, jint sizeInBytes) { return call_method<"write", jint>(audioData, offsetInBytes, sizeInBytes); }
	jint write(jni::ref<jni::array<jbyte>> audioData, jint offsetInBytes, jint sizeInBytes, jint writeMode) { return call_method<"write", jint>(audioData, offsetInBytes, sizeInBytes, writeMode); }
	jint write(jni::ref<jni::array<jshort>> audioData, jint offsetInShorts, jint sizeInShorts) { return call_method<"write", jint>(audioData, offsetInShorts, sizeInShorts); }
	jint write(jni::ref<jni::array<jshort>> audioData, jint offsetInShorts, jint sizeInShorts, jint writeMode) { return call_method<"write", jint>(audioData, offsetInShorts, sizeInShorts, writeMode); }
	jint write(jni::ref<jni::array<jfloat>> audioData, jint offsetInFloats, jint sizeInFloats, jint writeMode) { return call_method<"write", jint>(audioData, offsetInFloats, sizeInFloats, writeMode); }
	jint write(jni::ref<java::nio::ByteBuffer> audioData, jint sizeInBytes, jint writeMode) { return call_method<"write", jint>(audioData, sizeInBytes, writeMode); }
	jint write(jni::ref<java::nio::ByteBuffer> audioData, jint sizeInBytes, jint writeMode, jlong timestamp) { return call_method<"write", jint>(audioData, sizeInBytes, writeMode, timestamp); }
	jint reloadStaticData() { return call_method<"reloadStaticData", jint>(); }
	jint attachAuxEffect(jint effectId) { return call_method<"attachAuxEffect", jint>(effectId); }
	jint setAuxEffectSendLevel(jfloat level) { return call_method<"setAuxEffectSendLevel", jint>(level); }
	jboolean setPreferredDevice(jni::ref<android::media::AudioDeviceInfo> deviceInfo) { return call_method<"setPreferredDevice", jboolean>(deviceInfo); }
	jni::ref<android::media::AudioDeviceInfo> getPreferredDevice() { return call_method<"getPreferredDevice", jni::ref<android::media::AudioDeviceInfo>>(); }
	jni::ref<android::media::AudioDeviceInfo> getRoutedDevice() { return call_method<"getRoutedDevice", jni::ref<android::media::AudioDeviceInfo>>(); }
	void addOnRoutingChangedListener(jni::ref<android::media::AudioRouting_OnRoutingChangedListener> listener, jni::ref<android::os::Handler> handler) { return call_method<"addOnRoutingChangedListener", void>(listener, handler); }
	void removeOnRoutingChangedListener(jni::ref<android::media::AudioRouting_OnRoutingChangedListener> listener) { return call_method<"removeOnRoutingChangedListener", void>(listener); }
	void addOnRoutingChangedListener(jni::ref<android::media::AudioTrack_OnRoutingChangedListener> listener, jni::ref<android::os::Handler> handler) { return call_method<"addOnRoutingChangedListener", void>(listener, handler); }
	void removeOnRoutingChangedListener(jni::ref<android::media::AudioTrack_OnRoutingChangedListener> listener) { return call_method<"removeOnRoutingChangedListener", void>(listener); }
	void addOnCodecFormatChangedListener(jni::ref<java::util::concurrent::Executor> executor, jni::ref<android::media::AudioTrack_OnCodecFormatChangedListener> listener) { return call_method<"addOnCodecFormatChangedListener", void>(executor, listener); }
	void removeOnCodecFormatChangedListener(jni::ref<android::media::AudioTrack_OnCodecFormatChangedListener> listener) { return call_method<"removeOnCodecFormatChangedListener", void>(listener); }
	void registerStreamEventCallback(jni::ref<java::util::concurrent::Executor> executor, jni::ref<android::media::AudioTrack_StreamEventCallback> eventCallback) { return call_method<"registerStreamEventCallback", void>(executor, eventCallback); }
	void unregisterStreamEventCallback(jni::ref<android::media::AudioTrack_StreamEventCallback> eventCallback) { return call_method<"unregisterStreamEventCallback", void>(eventCallback); }
	void setLogSessionId(jni::ref<android::media::metrics::LogSessionId> logSessionId) { return call_method<"setLogSessionId", void>(logSessionId); }
	jni::ref<android::media::metrics::LogSessionId> getLogSessionId() { return call_method<"getLogSessionId", jni::ref<android::media::metrics::LogSessionId>>(); }

protected:

	AudioTrack(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOTRACK
