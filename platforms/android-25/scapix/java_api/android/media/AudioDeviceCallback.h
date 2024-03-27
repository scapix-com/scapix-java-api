// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIODEVICECALLBACK_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIODEVICECALLBACK_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media { class AudioDeviceCallback; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::AudioDeviceCallback>
{
	static constexpr fixed_string class_name = "android/media/AudioDeviceCallback";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIODEVICECALLBACK_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIODEVICECALLBACK)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIODEVICECALLBACK

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/media/AudioDeviceInfo.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::AudioDeviceCallback : public jni::object_base<"android/media/AudioDeviceCallback",
	java::lang::Object>
{
public:

	static jni::ref<android::media::AudioDeviceCallback> new_object() { return base_::new_object(); }
	void onAudioDevicesAdded(jni::ref<jni::array<android::media::AudioDeviceInfo>> addedDevices) { return call_method<"onAudioDevicesAdded", void>(addedDevices); }
	void onAudioDevicesRemoved(jni::ref<jni::array<android::media::AudioDeviceInfo>> removedDevices) { return call_method<"onAudioDevicesRemoved", void>(removedDevices); }

protected:

	AudioDeviceCallback(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIODEVICECALLBACK