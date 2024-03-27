// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/app/VoiceInteractor_Request.h>

#ifndef SCAPIX_JAVA_API_ANDROID_APP_VOICEINTERACTOR_ABORTVOICEREQUEST_FWD
#define SCAPIX_JAVA_API_ANDROID_APP_VOICEINTERACTOR_ABORTVOICEREQUEST_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::app { class VoiceInteractor_AbortVoiceRequest; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::app::VoiceInteractor_AbortVoiceRequest>
{
	static constexpr fixed_string class_name = "android/app/VoiceInteractor$AbortVoiceRequest";
	using base_classes = std::tuple<scapix::java_api::android::app::VoiceInteractor_Request>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_VOICEINTERACTOR_ABORTVOICEREQUEST_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_APP_VOICEINTERACTOR_ABORTVOICEREQUEST)
#define SCAPIX_JAVA_API_ANDROID_APP_VOICEINTERACTOR_ABORTVOICEREQUEST

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/app/VoiceInteractor_Prompt.h>
#include <scapix/java_api/android/os/Bundle.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::app::VoiceInteractor_AbortVoiceRequest : public jni::object_base<"android/app/VoiceInteractor$AbortVoiceRequest",
	android::app::VoiceInteractor_Request>
{
public:

	static jni::ref<android::app::VoiceInteractor_AbortVoiceRequest> new_object(jni::ref<android::app::VoiceInteractor_Prompt> prompt, jni::ref<android::os::Bundle> extras) { return base_::new_object(prompt, extras); }
	void onAbortResult(jni::ref<android::os::Bundle> result) { return call_method<"onAbortResult", void>(result); }

protected:

	VoiceInteractor_AbortVoiceRequest(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_VOICEINTERACTOR_ABORTVOICEREQUEST
