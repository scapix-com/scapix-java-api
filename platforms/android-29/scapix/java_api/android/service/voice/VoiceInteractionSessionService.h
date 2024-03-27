// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/app/Service.h>

#ifndef SCAPIX_JAVA_API_ANDROID_SERVICE_VOICE_VOICEINTERACTIONSESSIONSERVICE_FWD
#define SCAPIX_JAVA_API_ANDROID_SERVICE_VOICE_VOICEINTERACTIONSESSIONSERVICE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::service::voice { class VoiceInteractionSessionService; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::service::voice::VoiceInteractionSessionService>
{
	static constexpr fixed_string class_name = "android/service/voice/VoiceInteractionSessionService";
	using base_classes = std::tuple<scapix::java_api::android::app::Service>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SERVICE_VOICE_VOICEINTERACTIONSESSIONSERVICE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_SERVICE_VOICE_VOICEINTERACTIONSESSIONSERVICE)
#define SCAPIX_JAVA_API_ANDROID_SERVICE_VOICE_VOICEINTERACTIONSESSIONSERVICE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/Intent.h>
#include <scapix/java_api/android/content/res/Configuration.h>
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/android/os/IBinder.h>
#include <scapix/java_api/android/service/voice/VoiceInteractionSession.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::service::voice::VoiceInteractionSessionService : public jni::object_base<"android/service/voice/VoiceInteractionSessionService",
	android::app::Service>
{
public:

	static jni::ref<android::service::voice::VoiceInteractionSessionService> new_object() { return base_::new_object(); }
	void onCreate() { return call_method<"onCreate", void>(); }
	jni::ref<android::service::voice::VoiceInteractionSession> onNewSession(jni::ref<android::os::Bundle> p1) { return call_method<"onNewSession", jni::ref<android::service::voice::VoiceInteractionSession>>(p1); }
	jni::ref<android::os::IBinder> onBind(jni::ref<android::content::Intent> intent) { return call_method<"onBind", jni::ref<android::os::IBinder>>(intent); }
	void onConfigurationChanged(jni::ref<android::content::res::Configuration> newConfig) { return call_method<"onConfigurationChanged", void>(newConfig); }
	void onLowMemory() { return call_method<"onLowMemory", void>(); }
	void onTrimMemory(jint level) { return call_method<"onTrimMemory", void>(level); }

protected:

	VoiceInteractionSessionService(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SERVICE_VOICE_VOICEINTERACTIONSESSIONSERVICE
