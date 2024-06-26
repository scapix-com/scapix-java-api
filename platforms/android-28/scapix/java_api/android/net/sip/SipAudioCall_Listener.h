// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_NET_SIP_SIPAUDIOCALL_LISTENER_FWD
#define SCAPIX_JAVA_API_ANDROID_NET_SIP_SIPAUDIOCALL_LISTENER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::net::sip { class SipAudioCall_Listener; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::net::sip::SipAudioCall_Listener>
{
	static constexpr fixed_string class_name = "android/net/sip/SipAudioCall$Listener";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_SIP_SIPAUDIOCALL_LISTENER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_NET_SIP_SIPAUDIOCALL_LISTENER)
#define SCAPIX_JAVA_API_ANDROID_NET_SIP_SIPAUDIOCALL_LISTENER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/net/sip/SipAudioCall.h>
#include <scapix/java_api/android/net/sip/SipProfile.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::net::sip::SipAudioCall_Listener : public jni::object_base<"android/net/sip/SipAudioCall$Listener",
	java::lang::Object>
{
public:

	static jni::ref<android::net::sip::SipAudioCall_Listener> new_object() { return base_::new_object(); }
	void onReadyToCall(jni::ref<android::net::sip::SipAudioCall> call) { return call_method<"onReadyToCall", void>(call); }
	void onCalling(jni::ref<android::net::sip::SipAudioCall> call) { return call_method<"onCalling", void>(call); }
	void onRinging(jni::ref<android::net::sip::SipAudioCall> call, jni::ref<android::net::sip::SipProfile> caller) { return call_method<"onRinging", void>(call, caller); }
	void onRingingBack(jni::ref<android::net::sip::SipAudioCall> call) { return call_method<"onRingingBack", void>(call); }
	void onCallEstablished(jni::ref<android::net::sip::SipAudioCall> call) { return call_method<"onCallEstablished", void>(call); }
	void onCallEnded(jni::ref<android::net::sip::SipAudioCall> call) { return call_method<"onCallEnded", void>(call); }
	void onCallBusy(jni::ref<android::net::sip::SipAudioCall> call) { return call_method<"onCallBusy", void>(call); }
	void onCallHeld(jni::ref<android::net::sip::SipAudioCall> call) { return call_method<"onCallHeld", void>(call); }
	void onError(jni::ref<android::net::sip::SipAudioCall> call, jint errorCode, jni::ref<java::lang::String> errorMessage) { return call_method<"onError", void>(call, errorCode, errorMessage); }
	void onChanged(jni::ref<android::net::sip::SipAudioCall> call) { return call_method<"onChanged", void>(call); }

protected:

	SipAudioCall_Listener(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_SIP_SIPAUDIOCALL_LISTENER
