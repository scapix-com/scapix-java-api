// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/media/audiofx/AudioEffect.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOFX_AUTOMATICGAINCONTROL_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOFX_AUTOMATICGAINCONTROL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media::audiofx { class AutomaticGainControl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::audiofx::AutomaticGainControl>
{
	static constexpr fixed_string class_name = "android/media/audiofx/AutomaticGainControl";
	using base_classes = std::tuple<scapix::java_api::android::media::audiofx::AudioEffect>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOFX_AUTOMATICGAINCONTROL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOFX_AUTOMATICGAINCONTROL)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOFX_AUTOMATICGAINCONTROL

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::audiofx::AutomaticGainControl : public jni::object_base<"android/media/audiofx/AutomaticGainControl",
	android::media::audiofx::AudioEffect>
{
public:

	static jboolean isAvailable() { return call_static_method<"isAvailable", jboolean>(); }
	static jni::ref<android::media::audiofx::AutomaticGainControl> create(jint audioSession) { return call_static_method<"create", jni::ref<android::media::audiofx::AutomaticGainControl>>(audioSession); }

protected:

	AutomaticGainControl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOFX_AUTOMATICGAINCONTROL
