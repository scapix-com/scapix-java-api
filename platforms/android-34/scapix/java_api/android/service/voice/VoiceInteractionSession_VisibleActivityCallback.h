// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_SERVICE_VOICE_VOICEINTERACTIONSESSION_VISIBLEACTIVITYCALLBACK_FWD
#define SCAPIX_JAVA_API_ANDROID_SERVICE_VOICE_VOICEINTERACTIONSESSION_VISIBLEACTIVITYCALLBACK_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::service::voice { class VoiceInteractionSession_VisibleActivityCallback; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::service::voice::VoiceInteractionSession_VisibleActivityCallback>
{
	static constexpr fixed_string class_name = "android/service/voice/VoiceInteractionSession$VisibleActivityCallback";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SERVICE_VOICE_VOICEINTERACTIONSESSION_VISIBLEACTIVITYCALLBACK_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_SERVICE_VOICE_VOICEINTERACTIONSESSION_VISIBLEACTIVITYCALLBACK)
#define SCAPIX_JAVA_API_ANDROID_SERVICE_VOICE_VOICEINTERACTIONSESSION_VISIBLEACTIVITYCALLBACK

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/service/voice/VisibleActivityInfo.h>
#include <scapix/java_api/android/service/voice/VoiceInteractionSession_ActivityId.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::service::voice::VoiceInteractionSession_VisibleActivityCallback : public jni::object_base<"android/service/voice/VoiceInteractionSession$VisibleActivityCallback",
	java::lang::Object>
{
public:

	void onVisible(jni::ref<android::service::voice::VisibleActivityInfo> activityInfo) { return call_method<"onVisible", void>(activityInfo); }
	void onInvisible(jni::ref<android::service::voice::VoiceInteractionSession_ActivityId> activityId) { return call_method<"onInvisible", void>(activityId); }

protected:

	VoiceInteractionSession_VisibleActivityCallback(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SERVICE_VOICE_VOICEINTERACTIONSESSION_VISIBLEACTIVITYCALLBACK
