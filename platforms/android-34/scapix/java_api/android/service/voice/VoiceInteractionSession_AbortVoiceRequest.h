// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/service/voice/VoiceInteractionSession_Request.h>

#ifndef SCAPIX_JAVA_API_ANDROID_SERVICE_VOICE_VOICEINTERACTIONSESSION_ABORTVOICEREQUEST_FWD
#define SCAPIX_JAVA_API_ANDROID_SERVICE_VOICE_VOICEINTERACTIONSESSION_ABORTVOICEREQUEST_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::service::voice { class VoiceInteractionSession_AbortVoiceRequest; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::service::voice::VoiceInteractionSession_AbortVoiceRequest>
{
	static constexpr fixed_string class_name = "android/service/voice/VoiceInteractionSession$AbortVoiceRequest";
	using base_classes = std::tuple<scapix::java_api::android::service::voice::VoiceInteractionSession_Request>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SERVICE_VOICE_VOICEINTERACTIONSESSION_ABORTVOICEREQUEST_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_SERVICE_VOICE_VOICEINTERACTIONSESSION_ABORTVOICEREQUEST)
#define SCAPIX_JAVA_API_ANDROID_SERVICE_VOICE_VOICEINTERACTIONSESSION_ABORTVOICEREQUEST

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/app/VoiceInteractor_Prompt.h>
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::service::voice::VoiceInteractionSession_AbortVoiceRequest : public jni::object_base<"android/service/voice/VoiceInteractionSession$AbortVoiceRequest",
	android::service::voice::VoiceInteractionSession_Request>
{
public:

	jni::ref<android::app::VoiceInteractor_Prompt> getVoicePrompt() { return call_method<"getVoicePrompt", jni::ref<android::app::VoiceInteractor_Prompt>>(); }
	jni::ref<java::lang::CharSequence> getMessage() { return call_method<"getMessage", jni::ref<java::lang::CharSequence>>(); }
	void sendAbortResult(jni::ref<android::os::Bundle> result) { return call_method<"sendAbortResult", void>(result); }

protected:

	VoiceInteractionSession_AbortVoiceRequest(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SERVICE_VOICE_VOICEINTERACTIONSESSION_ABORTVOICEREQUEST
