// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOMANAGER_ONAUDIOFOCUSCHANGELISTENER_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOMANAGER_ONAUDIOFOCUSCHANGELISTENER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media { class AudioManager_OnAudioFocusChangeListener; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::AudioManager_OnAudioFocusChangeListener>
{
	static constexpr fixed_string class_name = "android/media/AudioManager$OnAudioFocusChangeListener";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOMANAGER_ONAUDIOFOCUSCHANGELISTENER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOMANAGER_ONAUDIOFOCUSCHANGELISTENER)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOMANAGER_ONAUDIOFOCUSCHANGELISTENER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::AudioManager_OnAudioFocusChangeListener : public jni::object_base<"android/media/AudioManager$OnAudioFocusChangeListener",
	java::lang::Object>
{
public:

	void onAudioFocusChange(jint p1) { return call_method<"onAudioFocusChange", void>(p1); }

protected:

	AudioManager_OnAudioFocusChangeListener(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOMANAGER_ONAUDIOFOCUSCHANGELISTENER
