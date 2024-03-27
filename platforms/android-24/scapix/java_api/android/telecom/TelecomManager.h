// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_TELECOM_TELECOMMANAGER_FWD
#define SCAPIX_JAVA_API_ANDROID_TELECOM_TELECOMMANAGER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::telecom { class TelecomManager; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::telecom::TelecomManager>
{
	static constexpr fixed_string class_name = "android/telecom/TelecomManager";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELECOM_TELECOMMANAGER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_TELECOM_TELECOMMANAGER)
#define SCAPIX_JAVA_API_ANDROID_TELECOM_TELECOMMANAGER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/Intent.h>
#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/android/telecom/PhoneAccount.h>
#include <scapix/java_api/android/telecom/PhoneAccountHandle.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::telecom::TelecomManager : public jni::object_base<"android/telecom/TelecomManager",
	java::lang::Object>
{
public:

	static jni::ref<java::lang::String> ACTION_CHANGE_DEFAULT_DIALER() { return get_static_field<"ACTION_CHANGE_DEFAULT_DIALER", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ACTION_CHANGE_PHONE_ACCOUNTS() { return get_static_field<"ACTION_CHANGE_PHONE_ACCOUNTS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ACTION_CONFIGURE_PHONE_ACCOUNT() { return get_static_field<"ACTION_CONFIGURE_PHONE_ACCOUNT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ACTION_DEFAULT_DIALER_CHANGED() { return get_static_field<"ACTION_DEFAULT_DIALER_CHANGED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ACTION_INCOMING_CALL() { return get_static_field<"ACTION_INCOMING_CALL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ACTION_SHOW_CALL_ACCESSIBILITY_SETTINGS() { return get_static_field<"ACTION_SHOW_CALL_ACCESSIBILITY_SETTINGS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ACTION_SHOW_CALL_SETTINGS() { return get_static_field<"ACTION_SHOW_CALL_SETTINGS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ACTION_SHOW_MISSED_CALLS_NOTIFICATION() { return get_static_field<"ACTION_SHOW_MISSED_CALLS_NOTIFICATION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ACTION_SHOW_RESPOND_VIA_SMS_SETTINGS() { return get_static_field<"ACTION_SHOW_RESPOND_VIA_SMS_SETTINGS", jni::ref<java::lang::String>>(); }
	static jchar DTMF_CHARACTER_PAUSE() { return get_static_field<"DTMF_CHARACTER_PAUSE", jchar>(); }
	static jchar DTMF_CHARACTER_WAIT() { return get_static_field<"DTMF_CHARACTER_WAIT", jchar>(); }
	static jni::ref<java::lang::String> EXTRA_CALL_BACK_NUMBER() { return get_static_field<"EXTRA_CALL_BACK_NUMBER", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_CALL_DISCONNECT_CAUSE() { return get_static_field<"EXTRA_CALL_DISCONNECT_CAUSE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_CALL_DISCONNECT_MESSAGE() { return get_static_field<"EXTRA_CALL_DISCONNECT_MESSAGE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_CALL_SUBJECT() { return get_static_field<"EXTRA_CALL_SUBJECT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_CHANGE_DEFAULT_DIALER_PACKAGE_NAME() { return get_static_field<"EXTRA_CHANGE_DEFAULT_DIALER_PACKAGE_NAME", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_INCOMING_CALL_ADDRESS() { return get_static_field<"EXTRA_INCOMING_CALL_ADDRESS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_INCOMING_CALL_EXTRAS() { return get_static_field<"EXTRA_INCOMING_CALL_EXTRAS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_NOTIFICATION_COUNT() { return get_static_field<"EXTRA_NOTIFICATION_COUNT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_NOTIFICATION_PHONE_NUMBER() { return get_static_field<"EXTRA_NOTIFICATION_PHONE_NUMBER", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_OUTGOING_CALL_EXTRAS() { return get_static_field<"EXTRA_OUTGOING_CALL_EXTRAS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_PHONE_ACCOUNT_HANDLE() { return get_static_field<"EXTRA_PHONE_ACCOUNT_HANDLE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_START_CALL_WITH_SPEAKERPHONE() { return get_static_field<"EXTRA_START_CALL_WITH_SPEAKERPHONE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_START_CALL_WITH_VIDEO_STATE() { return get_static_field<"EXTRA_START_CALL_WITH_VIDEO_STATE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> GATEWAY_ORIGINAL_ADDRESS() { return get_static_field<"GATEWAY_ORIGINAL_ADDRESS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> GATEWAY_PROVIDER_PACKAGE() { return get_static_field<"GATEWAY_PROVIDER_PACKAGE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> METADATA_IN_CALL_SERVICE_RINGING() { return get_static_field<"METADATA_IN_CALL_SERVICE_RINGING", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> METADATA_IN_CALL_SERVICE_UI() { return get_static_field<"METADATA_IN_CALL_SERVICE_UI", jni::ref<java::lang::String>>(); }
	static jint PRESENTATION_ALLOWED() { return get_static_field<"PRESENTATION_ALLOWED", jint>(); }
	static jint PRESENTATION_PAYPHONE() { return get_static_field<"PRESENTATION_PAYPHONE", jint>(); }
	static jint PRESENTATION_RESTRICTED() { return get_static_field<"PRESENTATION_RESTRICTED", jint>(); }
	static jint PRESENTATION_UNKNOWN() { return get_static_field<"PRESENTATION_UNKNOWN", jint>(); }

	jni::ref<android::telecom::PhoneAccountHandle> getDefaultOutgoingPhoneAccount(jni::ref<java::lang::String> uriScheme) { return call_method<"getDefaultOutgoingPhoneAccount", jni::ref<android::telecom::PhoneAccountHandle>>(uriScheme); }
	jni::ref<android::telecom::PhoneAccountHandle> getSimCallManager() { return call_method<"getSimCallManager", jni::ref<android::telecom::PhoneAccountHandle>>(); }
	jni::ref<java::util::List> getCallCapablePhoneAccounts() { return call_method<"getCallCapablePhoneAccounts", jni::ref<java::util::List>>(); }
	jni::ref<android::telecom::PhoneAccount> getPhoneAccount(jni::ref<android::telecom::PhoneAccountHandle> account) { return call_method<"getPhoneAccount", jni::ref<android::telecom::PhoneAccount>>(account); }
	void registerPhoneAccount(jni::ref<android::telecom::PhoneAccount> account) { return call_method<"registerPhoneAccount", void>(account); }
	void unregisterPhoneAccount(jni::ref<android::telecom::PhoneAccountHandle> accountHandle) { return call_method<"unregisterPhoneAccount", void>(accountHandle); }
	jni::ref<java::lang::String> getDefaultDialerPackage() { return call_method<"getDefaultDialerPackage", jni::ref<java::lang::String>>(); }
	jboolean isVoiceMailNumber(jni::ref<android::telecom::PhoneAccountHandle> accountHandle, jni::ref<java::lang::String> number) { return call_method<"isVoiceMailNumber", jboolean>(accountHandle, number); }
	jni::ref<java::lang::String> getVoiceMailNumber(jni::ref<android::telecom::PhoneAccountHandle> accountHandle) { return call_method<"getVoiceMailNumber", jni::ref<java::lang::String>>(accountHandle); }
	jni::ref<java::lang::String> getLine1Number(jni::ref<android::telecom::PhoneAccountHandle> accountHandle) { return call_method<"getLine1Number", jni::ref<java::lang::String>>(accountHandle); }
	jboolean isInCall() { return call_method<"isInCall", jboolean>(); }
	void silenceRinger() { return call_method<"silenceRinger", void>(); }
	void addNewIncomingCall(jni::ref<android::telecom::PhoneAccountHandle> phoneAccount, jni::ref<android::os::Bundle> extras) { return call_method<"addNewIncomingCall", void>(phoneAccount, extras); }
	jboolean handleMmi(jni::ref<java::lang::String> dialString) { return call_method<"handleMmi", jboolean>(dialString); }
	jboolean handleMmi(jni::ref<java::lang::String> dialString, jni::ref<android::telecom::PhoneAccountHandle> accountHandle) { return call_method<"handleMmi", jboolean>(dialString, accountHandle); }
	jni::ref<android::net::Uri> getAdnUriForPhoneAccount(jni::ref<android::telecom::PhoneAccountHandle> accountHandle) { return call_method<"getAdnUriForPhoneAccount", jni::ref<android::net::Uri>>(accountHandle); }
	void cancelMissedCallsNotification() { return call_method<"cancelMissedCallsNotification", void>(); }
	void showInCallScreen(jboolean showDialpad) { return call_method<"showInCallScreen", void>(showDialpad); }
	void placeCall(jni::ref<android::net::Uri> address, jni::ref<android::os::Bundle> extras) { return call_method<"placeCall", void>(address, extras); }
	jni::ref<android::content::Intent> createManageBlockedNumbersIntent() { return call_method<"createManageBlockedNumbersIntent", jni::ref<android::content::Intent>>(); }

protected:

	TelecomManager(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELECOM_TELECOMMANAGER
