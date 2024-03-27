// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/media/audiofx/AudioEffect.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOFX_VIRTUALIZER_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOFX_VIRTUALIZER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media::audiofx { class Virtualizer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::audiofx::Virtualizer>
{
	static constexpr fixed_string class_name = "android/media/audiofx/Virtualizer";
	using base_classes = std::tuple<scapix::java_api::android::media::audiofx::AudioEffect>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOFX_VIRTUALIZER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOFX_VIRTUALIZER)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOFX_VIRTUALIZER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/media/audiofx/Virtualizer_OnParameterChangeListener.h>
#include <scapix/java_api/android/media/audiofx/Virtualizer_Settings.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::audiofx::Virtualizer : public jni::object_base<"android/media/audiofx/Virtualizer",
	android::media::audiofx::AudioEffect>
{
public:

	using Settings = Virtualizer_Settings;
	using OnParameterChangeListener = Virtualizer_OnParameterChangeListener;

	static jint PARAM_STRENGTH() { return get_static_field<"PARAM_STRENGTH", jint>(); }
	static jint PARAM_STRENGTH_SUPPORTED() { return get_static_field<"PARAM_STRENGTH_SUPPORTED", jint>(); }
	static jint VIRTUALIZATION_MODE_AUTO() { return get_static_field<"VIRTUALIZATION_MODE_AUTO", jint>(); }
	static jint VIRTUALIZATION_MODE_BINAURAL() { return get_static_field<"VIRTUALIZATION_MODE_BINAURAL", jint>(); }
	static jint VIRTUALIZATION_MODE_OFF() { return get_static_field<"VIRTUALIZATION_MODE_OFF", jint>(); }
	static jint VIRTUALIZATION_MODE_TRANSAURAL() { return get_static_field<"VIRTUALIZATION_MODE_TRANSAURAL", jint>(); }

	static jni::ref<android::media::audiofx::Virtualizer> new_object(jint priority, jint audioSession) { return base_::new_object(priority, audioSession); }
	jboolean getStrengthSupported() { return call_method<"getStrengthSupported", jboolean>(); }
	void setStrength(jshort strength) { return call_method<"setStrength", void>(strength); }
	jshort getRoundedStrength() { return call_method<"getRoundedStrength", jshort>(); }
	jboolean canVirtualize(jint inputChannelMask, jint virtualizationMode) { return call_method<"canVirtualize", jboolean>(inputChannelMask, virtualizationMode); }
	jboolean getSpeakerAngles(jint inputChannelMask, jint virtualizationMode, jni::ref<jni::array<jint>> angles) { return call_method<"getSpeakerAngles", jboolean>(inputChannelMask, virtualizationMode, angles); }
	jboolean forceVirtualizationMode(jint virtualizationMode) { return call_method<"forceVirtualizationMode", jboolean>(virtualizationMode); }
	jint getVirtualizationMode() { return call_method<"getVirtualizationMode", jint>(); }
	void setParameterListener(jni::ref<android::media::audiofx::Virtualizer_OnParameterChangeListener> listener) { return call_method<"setParameterListener", void>(listener); }
	jni::ref<android::media::audiofx::Virtualizer_Settings> getProperties() { return call_method<"getProperties", jni::ref<android::media::audiofx::Virtualizer_Settings>>(); }
	void setProperties(jni::ref<android::media::audiofx::Virtualizer_Settings> settings) { return call_method<"setProperties", void>(settings); }

protected:

	Virtualizer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOFX_VIRTUALIZER