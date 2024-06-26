// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/telecom/Conferenceable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_TELECOM_CONNECTION_FWD
#define SCAPIX_JAVA_API_ANDROID_TELECOM_CONNECTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::telecom { class Connection; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::telecom::Connection>
{
	static constexpr fixed_string class_name = "android/telecom/Connection";
	using base_classes = std::tuple<scapix::java_api::android::telecom::Conferenceable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELECOM_CONNECTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_TELECOM_CONNECTION)
#define SCAPIX_JAVA_API_ANDROID_TELECOM_CONNECTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/android/telecom/CallAudioState.h>
#include <scapix/java_api/android/telecom/Conference.h>
#include <scapix/java_api/android/telecom/Connection_VideoProvider.h>
#include <scapix/java_api/android/telecom/DisconnectCause.h>
#include <scapix/java_api/android/telecom/StatusHints.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::telecom::Connection : public jni::object_base<"android/telecom/Connection",
	android::telecom::Conferenceable>
{
public:

	using VideoProvider = Connection_VideoProvider;

	static jint CAPABILITY_CANNOT_DOWNGRADE_VIDEO_TO_AUDIO() { return get_static_field<"CAPABILITY_CANNOT_DOWNGRADE_VIDEO_TO_AUDIO", jint>(); }
	static jint CAPABILITY_CAN_PAUSE_VIDEO() { return get_static_field<"CAPABILITY_CAN_PAUSE_VIDEO", jint>(); }
	static jint CAPABILITY_CAN_PULL_CALL() { return get_static_field<"CAPABILITY_CAN_PULL_CALL", jint>(); }
	static jint CAPABILITY_CAN_SEND_RESPONSE_VIA_CONNECTION() { return get_static_field<"CAPABILITY_CAN_SEND_RESPONSE_VIA_CONNECTION", jint>(); }
	static jint CAPABILITY_CAN_UPGRADE_TO_VIDEO() { return get_static_field<"CAPABILITY_CAN_UPGRADE_TO_VIDEO", jint>(); }
	static jint CAPABILITY_DISCONNECT_FROM_CONFERENCE() { return get_static_field<"CAPABILITY_DISCONNECT_FROM_CONFERENCE", jint>(); }
	static jint CAPABILITY_HOLD() { return get_static_field<"CAPABILITY_HOLD", jint>(); }
	static jint CAPABILITY_MANAGE_CONFERENCE() { return get_static_field<"CAPABILITY_MANAGE_CONFERENCE", jint>(); }
	static jint CAPABILITY_MERGE_CONFERENCE() { return get_static_field<"CAPABILITY_MERGE_CONFERENCE", jint>(); }
	static jint CAPABILITY_MUTE() { return get_static_field<"CAPABILITY_MUTE", jint>(); }
	static jint CAPABILITY_RESPOND_VIA_TEXT() { return get_static_field<"CAPABILITY_RESPOND_VIA_TEXT", jint>(); }
	static jint CAPABILITY_SEPARATE_FROM_CONFERENCE() { return get_static_field<"CAPABILITY_SEPARATE_FROM_CONFERENCE", jint>(); }
	static jint CAPABILITY_SUPPORTS_VT_LOCAL_BIDIRECTIONAL() { return get_static_field<"CAPABILITY_SUPPORTS_VT_LOCAL_BIDIRECTIONAL", jint>(); }
	static jint CAPABILITY_SUPPORTS_VT_LOCAL_RX() { return get_static_field<"CAPABILITY_SUPPORTS_VT_LOCAL_RX", jint>(); }
	static jint CAPABILITY_SUPPORTS_VT_LOCAL_TX() { return get_static_field<"CAPABILITY_SUPPORTS_VT_LOCAL_TX", jint>(); }
	static jint CAPABILITY_SUPPORTS_VT_REMOTE_BIDIRECTIONAL() { return get_static_field<"CAPABILITY_SUPPORTS_VT_REMOTE_BIDIRECTIONAL", jint>(); }
	static jint CAPABILITY_SUPPORTS_VT_REMOTE_RX() { return get_static_field<"CAPABILITY_SUPPORTS_VT_REMOTE_RX", jint>(); }
	static jint CAPABILITY_SUPPORTS_VT_REMOTE_TX() { return get_static_field<"CAPABILITY_SUPPORTS_VT_REMOTE_TX", jint>(); }
	static jint CAPABILITY_SUPPORT_HOLD() { return get_static_field<"CAPABILITY_SUPPORT_HOLD", jint>(); }
	static jint CAPABILITY_SWAP_CONFERENCE() { return get_static_field<"CAPABILITY_SWAP_CONFERENCE", jint>(); }
	static jni::ref<java::lang::String> EVENT_CALL_MERGE_FAILED() { return get_static_field<"EVENT_CALL_MERGE_FAILED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EVENT_CALL_PULL_FAILED() { return get_static_field<"EVENT_CALL_PULL_FAILED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_ANSWERING_DROPS_FG_CALL() { return get_static_field<"EXTRA_ANSWERING_DROPS_FG_CALL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_CALL_SUBJECT() { return get_static_field<"EXTRA_CALL_SUBJECT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_CHILD_ADDRESS() { return get_static_field<"EXTRA_CHILD_ADDRESS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_LAST_FORWARDED_NUMBER() { return get_static_field<"EXTRA_LAST_FORWARDED_NUMBER", jni::ref<java::lang::String>>(); }
	static jint PROPERTY_HAS_CDMA_VOICE_PRIVACY() { return get_static_field<"PROPERTY_HAS_CDMA_VOICE_PRIVACY", jint>(); }
	static jint PROPERTY_IS_EXTERNAL_CALL() { return get_static_field<"PROPERTY_IS_EXTERNAL_CALL", jint>(); }
	static jint STATE_ACTIVE() { return get_static_field<"STATE_ACTIVE", jint>(); }
	static jint STATE_DIALING() { return get_static_field<"STATE_DIALING", jint>(); }
	static jint STATE_DISCONNECTED() { return get_static_field<"STATE_DISCONNECTED", jint>(); }
	static jint STATE_HOLDING() { return get_static_field<"STATE_HOLDING", jint>(); }
	static jint STATE_INITIALIZING() { return get_static_field<"STATE_INITIALIZING", jint>(); }
	static jint STATE_NEW() { return get_static_field<"STATE_NEW", jint>(); }
	static jint STATE_PULLING_CALL() { return get_static_field<"STATE_PULLING_CALL", jint>(); }
	static jint STATE_RINGING() { return get_static_field<"STATE_RINGING", jint>(); }

	static jni::ref<android::telecom::Connection> new_object() { return base_::new_object(); }
	static jni::ref<java::lang::String> capabilitiesToString(jint capabilities) { return call_static_method<"capabilitiesToString", jni::ref<java::lang::String>>(capabilities); }
	static jni::ref<java::lang::String> propertiesToString(jint properties) { return call_static_method<"propertiesToString", jni::ref<java::lang::String>>(properties); }
	jni::ref<android::net::Uri> getAddress() { return call_method<"getAddress", jni::ref<android::net::Uri>>(); }
	jint getAddressPresentation() { return call_method<"getAddressPresentation", jint>(); }
	jni::ref<java::lang::String> getCallerDisplayName() { return call_method<"getCallerDisplayName", jni::ref<java::lang::String>>(); }
	jint getCallerDisplayNamePresentation() { return call_method<"getCallerDisplayNamePresentation", jint>(); }
	jint getState() { return call_method<"getState", jint>(); }
	jni::ref<android::telecom::CallAudioState> getCallAudioState() { return call_method<"getCallAudioState", jni::ref<android::telecom::CallAudioState>>(); }
	jni::ref<android::telecom::Conference> getConference() { return call_method<"getConference", jni::ref<android::telecom::Conference>>(); }
	jboolean isRingbackRequested() { return call_method<"isRingbackRequested", jboolean>(); }
	jboolean getAudioModeIsVoip() { return call_method<"getAudioModeIsVoip", jboolean>(); }
	jni::ref<android::telecom::StatusHints> getStatusHints() { return call_method<"getStatusHints", jni::ref<android::telecom::StatusHints>>(); }
	jni::ref<android::os::Bundle> getExtras() { return call_method<"getExtras", jni::ref<android::os::Bundle>>(); }
	jni::ref<android::telecom::DisconnectCause> getDisconnectCause() { return call_method<"getDisconnectCause", jni::ref<android::telecom::DisconnectCause>>(); }
	static jni::ref<java::lang::String> stateToString(jint state) { return call_static_method<"stateToString", jni::ref<java::lang::String>>(state); }
	jint getConnectionCapabilities() { return call_method<"getConnectionCapabilities", jint>(); }
	jint getConnectionProperties() { return call_method<"getConnectionProperties", jint>(); }
	void setAddress(jni::ref<android::net::Uri> address, jint presentation) { return call_method<"setAddress", void>(address, presentation); }
	void setCallerDisplayName(jni::ref<java::lang::String> callerDisplayName, jint presentation) { return call_method<"setCallerDisplayName", void>(callerDisplayName, presentation); }
	void setVideoState(jint videoState) { return call_method<"setVideoState", void>(videoState); }
	void setActive() { return call_method<"setActive", void>(); }
	void setRinging() { return call_method<"setRinging", void>(); }
	void setInitializing() { return call_method<"setInitializing", void>(); }
	void setInitialized() { return call_method<"setInitialized", void>(); }
	void setDialing() { return call_method<"setDialing", void>(); }
	void setPulling() { return call_method<"setPulling", void>(); }
	void setOnHold() { return call_method<"setOnHold", void>(); }
	void setVideoProvider(jni::ref<android::telecom::Connection_VideoProvider> videoProvider) { return call_method<"setVideoProvider", void>(videoProvider); }
	jni::ref<android::telecom::Connection_VideoProvider> getVideoProvider() { return call_method<"getVideoProvider", jni::ref<android::telecom::Connection_VideoProvider>>(); }
	void setDisconnected(jni::ref<android::telecom::DisconnectCause> disconnectCause) { return call_method<"setDisconnected", void>(disconnectCause); }
	void setPostDialWait(jni::ref<java::lang::String> remaining) { return call_method<"setPostDialWait", void>(remaining); }
	void setNextPostDialChar(jchar nextChar) { return call_method<"setNextPostDialChar", void>(nextChar); }
	void setRingbackRequested(jboolean ringback) { return call_method<"setRingbackRequested", void>(ringback); }
	void setConnectionCapabilities(jint connectionCapabilities) { return call_method<"setConnectionCapabilities", void>(connectionCapabilities); }
	void setConnectionProperties(jint connectionProperties) { return call_method<"setConnectionProperties", void>(connectionProperties); }
	void destroy() { return call_method<"destroy", void>(); }
	void setAudioModeIsVoip(jboolean isVoip) { return call_method<"setAudioModeIsVoip", void>(isVoip); }
	void setStatusHints(jni::ref<android::telecom::StatusHints> statusHints) { return call_method<"setStatusHints", void>(statusHints); }
	void setConferenceableConnections(jni::ref<java::util::List> conferenceableConnections) { return call_method<"setConferenceableConnections", void>(conferenceableConnections); }
	void setConferenceables(jni::ref<java::util::List> conferenceables) { return call_method<"setConferenceables", void>(conferenceables); }
	jni::ref<java::util::List> getConferenceables() { return call_method<"getConferenceables", jni::ref<java::util::List>>(); }
	void setExtras(jni::ref<android::os::Bundle> extras) { return call_method<"setExtras", void>(extras); }
	void putExtras(jni::ref<android::os::Bundle> extras) { return call_method<"putExtras", void>(extras); }
	void removeExtras(jni::ref<java::util::List> keys) { return call_method<"removeExtras", void>(keys); }
	void removeExtras(jni::ref<jni::array<java::lang::String>> keys) { return call_method<"removeExtras", void>(keys); }
	void onCallAudioStateChanged(jni::ref<android::telecom::CallAudioState> state) { return call_method<"onCallAudioStateChanged", void>(state); }
	void onStateChanged(jint state) { return call_method<"onStateChanged", void>(state); }
	void onPlayDtmfTone(jchar c) { return call_method<"onPlayDtmfTone", void>(c); }
	void onStopDtmfTone() { return call_method<"onStopDtmfTone", void>(); }
	void onDisconnect() { return call_method<"onDisconnect", void>(); }
	void onSeparate() { return call_method<"onSeparate", void>(); }
	void onAbort() { return call_method<"onAbort", void>(); }
	void onHold() { return call_method<"onHold", void>(); }
	void onUnhold() { return call_method<"onUnhold", void>(); }
	void onAnswer(jint videoState) { return call_method<"onAnswer", void>(videoState); }
	void onAnswer() { return call_method<"onAnswer", void>(); }
	void onReject() { return call_method<"onReject", void>(); }
	void onReject(jni::ref<java::lang::String> replyMessage) { return call_method<"onReject", void>(replyMessage); }
	void onPostDialContinue(jboolean proceed) { return call_method<"onPostDialContinue", void>(proceed); }
	void onPullExternalCall() { return call_method<"onPullExternalCall", void>(); }
	void onCallEvent(jni::ref<java::lang::String> event, jni::ref<android::os::Bundle> extras) { return call_method<"onCallEvent", void>(event, extras); }
	void onExtrasChanged(jni::ref<android::os::Bundle> extras) { return call_method<"onExtrasChanged", void>(extras); }
	static jni::ref<android::telecom::Connection> createFailedConnection(jni::ref<android::telecom::DisconnectCause> disconnectCause) { return call_static_method<"createFailedConnection", jni::ref<android::telecom::Connection>>(disconnectCause); }
	static jni::ref<android::telecom::Connection> createCanceledConnection() { return call_static_method<"createCanceledConnection", jni::ref<android::telecom::Connection>>(); }
	void sendConnectionEvent(jni::ref<java::lang::String> event, jni::ref<android::os::Bundle> extras) { return call_method<"sendConnectionEvent", void>(event, extras); }

protected:

	Connection(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELECOM_CONNECTION
