// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_TELECOM_CALL_DETAILS_FWD
#define SCAPIX_JAVA_API_ANDROID_TELECOM_CALL_DETAILS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::telecom { class Call_Details; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::telecom::Call_Details>
{
	static constexpr fixed_string class_name = "android/telecom/Call$Details";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELECOM_CALL_DETAILS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_TELECOM_CALL_DETAILS)
#define SCAPIX_JAVA_API_ANDROID_TELECOM_CALL_DETAILS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/android/telecom/DisconnectCause.h>
#include <scapix/java_api/android/telecom/GatewayInfo.h>
#include <scapix/java_api/android/telecom/PhoneAccountHandle.h>
#include <scapix/java_api/android/telecom/StatusHints.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::telecom::Call_Details : public jni::object_base<"android/telecom/Call$Details",
	java::lang::Object>
{
public:

	static jint CAPABILITY_CANNOT_DOWNGRADE_VIDEO_TO_AUDIO() { return get_static_field<"CAPABILITY_CANNOT_DOWNGRADE_VIDEO_TO_AUDIO", jint>(); }
	static jint CAPABILITY_CAN_PAUSE_VIDEO() { return get_static_field<"CAPABILITY_CAN_PAUSE_VIDEO", jint>(); }
	static jint CAPABILITY_CAN_PULL_CALL() { return get_static_field<"CAPABILITY_CAN_PULL_CALL", jint>(); }
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
	static jint PROPERTY_CONFERENCE() { return get_static_field<"PROPERTY_CONFERENCE", jint>(); }
	static jint PROPERTY_EMERGENCY_CALLBACK_MODE() { return get_static_field<"PROPERTY_EMERGENCY_CALLBACK_MODE", jint>(); }
	static jint PROPERTY_ENTERPRISE_CALL() { return get_static_field<"PROPERTY_ENTERPRISE_CALL", jint>(); }
	static jint PROPERTY_GENERIC_CONFERENCE() { return get_static_field<"PROPERTY_GENERIC_CONFERENCE", jint>(); }
	static jint PROPERTY_HAS_CDMA_VOICE_PRIVACY() { return get_static_field<"PROPERTY_HAS_CDMA_VOICE_PRIVACY", jint>(); }
	static jint PROPERTY_HIGH_DEF_AUDIO() { return get_static_field<"PROPERTY_HIGH_DEF_AUDIO", jint>(); }
	static jint PROPERTY_IS_EXTERNAL_CALL() { return get_static_field<"PROPERTY_IS_EXTERNAL_CALL", jint>(); }
	static jint PROPERTY_WIFI() { return get_static_field<"PROPERTY_WIFI", jint>(); }

	static jboolean can(jint capabilities, jint capability) { return call_static_method<"can", jboolean>(capabilities, capability); }
	jboolean can(jint capability) { return call_method<"can", jboolean>(capability); }
	static jni::ref<java::lang::String> capabilitiesToString(jint capabilities) { return call_static_method<"capabilitiesToString", jni::ref<java::lang::String>>(capabilities); }
	static jboolean hasProperty(jint properties, jint property) { return call_static_method<"hasProperty", jboolean>(properties, property); }
	jboolean hasProperty(jint property) { return call_method<"hasProperty", jboolean>(property); }
	static jni::ref<java::lang::String> propertiesToString(jint properties) { return call_static_method<"propertiesToString", jni::ref<java::lang::String>>(properties); }
	jni::ref<android::net::Uri> getHandle() { return call_method<"getHandle", jni::ref<android::net::Uri>>(); }
	jint getHandlePresentation() { return call_method<"getHandlePresentation", jint>(); }
	jni::ref<java::lang::String> getCallerDisplayName() { return call_method<"getCallerDisplayName", jni::ref<java::lang::String>>(); }
	jint getCallerDisplayNamePresentation() { return call_method<"getCallerDisplayNamePresentation", jint>(); }
	jni::ref<android::telecom::PhoneAccountHandle> getAccountHandle() { return call_method<"getAccountHandle", jni::ref<android::telecom::PhoneAccountHandle>>(); }
	jint getCallCapabilities() { return call_method<"getCallCapabilities", jint>(); }
	jint getCallProperties() { return call_method<"getCallProperties", jint>(); }
	jni::ref<android::telecom::DisconnectCause> getDisconnectCause() { return call_method<"getDisconnectCause", jni::ref<android::telecom::DisconnectCause>>(); }
	jlong getConnectTimeMillis() { return call_method<"getConnectTimeMillis", jlong>(); }
	jni::ref<android::telecom::GatewayInfo> getGatewayInfo() { return call_method<"getGatewayInfo", jni::ref<android::telecom::GatewayInfo>>(); }
	jint getVideoState() { return call_method<"getVideoState", jint>(); }
	jni::ref<android::telecom::StatusHints> getStatusHints() { return call_method<"getStatusHints", jni::ref<android::telecom::StatusHints>>(); }
	jni::ref<android::os::Bundle> getExtras() { return call_method<"getExtras", jni::ref<android::os::Bundle>>(); }
	jni::ref<android::os::Bundle> getIntentExtras() { return call_method<"getIntentExtras", jni::ref<android::os::Bundle>>(); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	Call_Details(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELECOM_CALL_DETAILS
