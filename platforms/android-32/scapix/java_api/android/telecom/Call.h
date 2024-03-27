// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_TELECOM_CALL_FWD
#define SCAPIX_JAVA_API_ANDROID_TELECOM_CALL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::telecom { class Call; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::telecom::Call>
{
	static constexpr fixed_string class_name = "android/telecom/Call";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELECOM_CALL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_TELECOM_CALL)
#define SCAPIX_JAVA_API_ANDROID_TELECOM_CALL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/android/os/Handler.h>
#include <scapix/java_api/android/telecom/Call_Callback.h>
#include <scapix/java_api/android/telecom/Call_Details.h>
#include <scapix/java_api/android/telecom/Call_RttCall.h>
#include <scapix/java_api/android/telecom/InCallService_VideoCall.h>
#include <scapix/java_api/android/telecom/PhoneAccountHandle.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::telecom::Call : public jni::object_base<"android/telecom/Call",
	java::lang::Object>
{
public:

	using RttCall = Call_RttCall;
	using Details = Call_Details;
	using Callback = Call_Callback;

	static jni::ref<java::lang::String> AVAILABLE_PHONE_ACCOUNTS() { return get_static_field<"AVAILABLE_PHONE_ACCOUNTS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EVENT_CLEAR_DIAGNOSTIC_MESSAGE() { return get_static_field<"EVENT_CLEAR_DIAGNOSTIC_MESSAGE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EVENT_DISPLAY_DIAGNOSTIC_MESSAGE() { return get_static_field<"EVENT_DISPLAY_DIAGNOSTIC_MESSAGE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_DIAGNOSTIC_MESSAGE() { return get_static_field<"EXTRA_DIAGNOSTIC_MESSAGE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_DIAGNOSTIC_MESSAGE_ID() { return get_static_field<"EXTRA_DIAGNOSTIC_MESSAGE_ID", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_LAST_EMERGENCY_CALLBACK_TIME_MILLIS() { return get_static_field<"EXTRA_LAST_EMERGENCY_CALLBACK_TIME_MILLIS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_SILENT_RINGING_REQUESTED() { return get_static_field<"EXTRA_SILENT_RINGING_REQUESTED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_SUGGESTED_PHONE_ACCOUNTS() { return get_static_field<"EXTRA_SUGGESTED_PHONE_ACCOUNTS", jni::ref<java::lang::String>>(); }
	static jint REJECT_REASON_DECLINED() { return get_static_field<"REJECT_REASON_DECLINED", jint>(); }
	static jint REJECT_REASON_UNWANTED() { return get_static_field<"REJECT_REASON_UNWANTED", jint>(); }
	static jint STATE_ACTIVE() { return get_static_field<"STATE_ACTIVE", jint>(); }
	static jint STATE_AUDIO_PROCESSING() { return get_static_field<"STATE_AUDIO_PROCESSING", jint>(); }
	static jint STATE_CONNECTING() { return get_static_field<"STATE_CONNECTING", jint>(); }
	static jint STATE_DIALING() { return get_static_field<"STATE_DIALING", jint>(); }
	static jint STATE_DISCONNECTED() { return get_static_field<"STATE_DISCONNECTED", jint>(); }
	static jint STATE_DISCONNECTING() { return get_static_field<"STATE_DISCONNECTING", jint>(); }
	static jint STATE_HOLDING() { return get_static_field<"STATE_HOLDING", jint>(); }
	static jint STATE_NEW() { return get_static_field<"STATE_NEW", jint>(); }
	static jint STATE_PULLING_CALL() { return get_static_field<"STATE_PULLING_CALL", jint>(); }
	static jint STATE_RINGING() { return get_static_field<"STATE_RINGING", jint>(); }
	static jint STATE_SELECT_PHONE_ACCOUNT() { return get_static_field<"STATE_SELECT_PHONE_ACCOUNT", jint>(); }
	static jint STATE_SIMULATED_RINGING() { return get_static_field<"STATE_SIMULATED_RINGING", jint>(); }

	jni::ref<java::lang::String> getRemainingPostDialSequence() { return call_method<"getRemainingPostDialSequence", jni::ref<java::lang::String>>(); }
	void answer(jint videoState) { return call_method<"answer", void>(videoState); }
	void deflect(jni::ref<android::net::Uri> address) { return call_method<"deflect", void>(address); }
	void reject(jboolean rejectWithMessage, jni::ref<java::lang::String> textMessage) { return call_method<"reject", void>(rejectWithMessage, textMessage); }
	void reject(jint rejectReason) { return call_method<"reject", void>(rejectReason); }
	void disconnect() { return call_method<"disconnect", void>(); }
	void hold() { return call_method<"hold", void>(); }
	void unhold() { return call_method<"unhold", void>(); }
	void playDtmfTone(jchar digit) { return call_method<"playDtmfTone", void>(digit); }
	void stopDtmfTone() { return call_method<"stopDtmfTone", void>(); }
	void postDialContinue(jboolean proceed) { return call_method<"postDialContinue", void>(proceed); }
	void phoneAccountSelected(jni::ref<android::telecom::PhoneAccountHandle> accountHandle, jboolean setDefault) { return call_method<"phoneAccountSelected", void>(accountHandle, setDefault); }
	void conference(jni::ref<android::telecom::Call> callToConferenceWith) { return call_method<"conference", void>(callToConferenceWith); }
	void splitFromConference() { return call_method<"splitFromConference", void>(); }
	void mergeConference() { return call_method<"mergeConference", void>(); }
	void swapConference() { return call_method<"swapConference", void>(); }
	void addConferenceParticipants(jni::ref<java::util::List> participants) { return call_method<"addConferenceParticipants", void>(participants); }
	void pullExternalCall() { return call_method<"pullExternalCall", void>(); }
	void sendCallEvent(jni::ref<java::lang::String> event, jni::ref<android::os::Bundle> extras) { return call_method<"sendCallEvent", void>(event, extras); }
	void sendRttRequest() { return call_method<"sendRttRequest", void>(); }
	void respondToRttRequest(jint id, jboolean accept) { return call_method<"respondToRttRequest", void>(id, accept); }
	void handoverTo(jni::ref<android::telecom::PhoneAccountHandle> toHandle, jint videoState, jni::ref<android::os::Bundle> extras) { return call_method<"handoverTo", void>(toHandle, videoState, extras); }
	void stopRtt() { return call_method<"stopRtt", void>(); }
	void putExtras(jni::ref<android::os::Bundle> extras) { return call_method<"putExtras", void>(extras); }
	void removeExtras(jni::ref<java::util::List> keys) { return call_method<"removeExtras", void>(keys); }
	void removeExtras(jni::ref<jni::array<java::lang::String>> keys) { return call_method<"removeExtras", void>(keys); }
	jni::ref<android::telecom::Call> getParent() { return call_method<"getParent", jni::ref<android::telecom::Call>>(); }
	jni::ref<java::util::List> getChildren() { return call_method<"getChildren", jni::ref<java::util::List>>(); }
	jni::ref<java::util::List> getConferenceableCalls() { return call_method<"getConferenceableCalls", jni::ref<java::util::List>>(); }
	jint getState() { return call_method<"getState", jint>(); }
	jni::ref<android::telecom::Call> getGenericConferenceActiveChildCall() { return call_method<"getGenericConferenceActiveChildCall", jni::ref<android::telecom::Call>>(); }
	jni::ref<java::util::List> getCannedTextResponses() { return call_method<"getCannedTextResponses", jni::ref<java::util::List>>(); }
	jni::ref<android::telecom::InCallService_VideoCall> getVideoCall() { return call_method<"getVideoCall", jni::ref<android::telecom::InCallService_VideoCall>>(); }
	jni::ref<android::telecom::Call_Details> getDetails() { return call_method<"getDetails", jni::ref<android::telecom::Call_Details>>(); }
	jni::ref<android::telecom::Call_RttCall> getRttCall() { return call_method<"getRttCall", jni::ref<android::telecom::Call_RttCall>>(); }
	jboolean isRttActive() { return call_method<"isRttActive", jboolean>(); }
	void registerCallback(jni::ref<android::telecom::Call_Callback> callback) { return call_method<"registerCallback", void>(callback); }
	void registerCallback(jni::ref<android::telecom::Call_Callback> callback, jni::ref<android::os::Handler> handler) { return call_method<"registerCallback", void>(callback, handler); }
	void unregisterCallback(jni::ref<android::telecom::Call_Callback> callback) { return call_method<"unregisterCallback", void>(callback); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	Call(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELECOM_CALL
