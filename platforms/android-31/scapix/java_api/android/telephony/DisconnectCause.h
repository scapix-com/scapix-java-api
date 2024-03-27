// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_TELEPHONY_DISCONNECTCAUSE_FWD
#define SCAPIX_JAVA_API_ANDROID_TELEPHONY_DISCONNECTCAUSE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::telephony { class DisconnectCause; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::telephony::DisconnectCause>
{
	static constexpr fixed_string class_name = "android/telephony/DisconnectCause";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELEPHONY_DISCONNECTCAUSE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_TELEPHONY_DISCONNECTCAUSE)
#define SCAPIX_JAVA_API_ANDROID_TELEPHONY_DISCONNECTCAUSE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::telephony::DisconnectCause : public jni::object_base<"android/telephony/DisconnectCause",
	java::lang::Object>
{
public:

	static jint ALREADY_DIALING() { return get_static_field<"ALREADY_DIALING", jint>(); }
	static jint ANSWERED_ELSEWHERE() { return get_static_field<"ANSWERED_ELSEWHERE", jint>(); }
	static jint BUSY() { return get_static_field<"BUSY", jint>(); }
	static jint CALLING_DISABLED() { return get_static_field<"CALLING_DISABLED", jint>(); }
	static jint CALL_BARRED() { return get_static_field<"CALL_BARRED", jint>(); }
	static jint CALL_PULLED() { return get_static_field<"CALL_PULLED", jint>(); }
	static jint CANT_CALL_WHILE_RINGING() { return get_static_field<"CANT_CALL_WHILE_RINGING", jint>(); }
	static jint CDMA_ACCESS_BLOCKED() { return get_static_field<"CDMA_ACCESS_BLOCKED", jint>(); }
	static jint CDMA_ACCESS_FAILURE() { return get_static_field<"CDMA_ACCESS_FAILURE", jint>(); }
	static jint CDMA_ALREADY_ACTIVATED() { return get_static_field<"CDMA_ALREADY_ACTIVATED", jint>(); }
	static jint CDMA_DROP() { return get_static_field<"CDMA_DROP", jint>(); }
	static jint CDMA_INTERCEPT() { return get_static_field<"CDMA_INTERCEPT", jint>(); }
	static jint CDMA_LOCKED_UNTIL_POWER_CYCLE() { return get_static_field<"CDMA_LOCKED_UNTIL_POWER_CYCLE", jint>(); }
	static jint CDMA_NOT_EMERGENCY() { return get_static_field<"CDMA_NOT_EMERGENCY", jint>(); }
	static jint CDMA_PREEMPTED() { return get_static_field<"CDMA_PREEMPTED", jint>(); }
	static jint CDMA_REORDER() { return get_static_field<"CDMA_REORDER", jint>(); }
	static jint CDMA_RETRY_ORDER() { return get_static_field<"CDMA_RETRY_ORDER", jint>(); }
	static jint CDMA_SO_REJECT() { return get_static_field<"CDMA_SO_REJECT", jint>(); }
	static jint CONGESTION() { return get_static_field<"CONGESTION", jint>(); }
	static jint CS_RESTRICTED() { return get_static_field<"CS_RESTRICTED", jint>(); }
	static jint CS_RESTRICTED_EMERGENCY() { return get_static_field<"CS_RESTRICTED_EMERGENCY", jint>(); }
	static jint CS_RESTRICTED_NORMAL() { return get_static_field<"CS_RESTRICTED_NORMAL", jint>(); }
	static jint DATA_DISABLED() { return get_static_field<"DATA_DISABLED", jint>(); }
	static jint DATA_LIMIT_REACHED() { return get_static_field<"DATA_LIMIT_REACHED", jint>(); }
	static jint DIALED_CALL_FORWARDING_WHILE_ROAMING() { return get_static_field<"DIALED_CALL_FORWARDING_WHILE_ROAMING", jint>(); }
	static jint DIALED_MMI() { return get_static_field<"DIALED_MMI", jint>(); }
	static jint DIAL_LOW_BATTERY() { return get_static_field<"DIAL_LOW_BATTERY", jint>(); }
	static jint DIAL_MODIFIED_TO_DIAL() { return get_static_field<"DIAL_MODIFIED_TO_DIAL", jint>(); }
	static jint DIAL_MODIFIED_TO_DIAL_VIDEO() { return get_static_field<"DIAL_MODIFIED_TO_DIAL_VIDEO", jint>(); }
	static jint DIAL_MODIFIED_TO_SS() { return get_static_field<"DIAL_MODIFIED_TO_SS", jint>(); }
	static jint DIAL_MODIFIED_TO_USSD() { return get_static_field<"DIAL_MODIFIED_TO_USSD", jint>(); }
	static jint DIAL_VIDEO_MODIFIED_TO_DIAL() { return get_static_field<"DIAL_VIDEO_MODIFIED_TO_DIAL", jint>(); }
	static jint DIAL_VIDEO_MODIFIED_TO_DIAL_VIDEO() { return get_static_field<"DIAL_VIDEO_MODIFIED_TO_DIAL_VIDEO", jint>(); }
	static jint DIAL_VIDEO_MODIFIED_TO_SS() { return get_static_field<"DIAL_VIDEO_MODIFIED_TO_SS", jint>(); }
	static jint DIAL_VIDEO_MODIFIED_TO_USSD() { return get_static_field<"DIAL_VIDEO_MODIFIED_TO_USSD", jint>(); }
	static jint EMERGENCY_CALL_OVER_WFC_NOT_AVAILABLE() { return get_static_field<"EMERGENCY_CALL_OVER_WFC_NOT_AVAILABLE", jint>(); }
	static jint EMERGENCY_PERM_FAILURE() { return get_static_field<"EMERGENCY_PERM_FAILURE", jint>(); }
	static jint EMERGENCY_TEMP_FAILURE() { return get_static_field<"EMERGENCY_TEMP_FAILURE", jint>(); }
	static jint ERROR_UNSPECIFIED() { return get_static_field<"ERROR_UNSPECIFIED", jint>(); }
	static jint FDN_BLOCKED() { return get_static_field<"FDN_BLOCKED", jint>(); }
	static jint ICC_ERROR() { return get_static_field<"ICC_ERROR", jint>(); }
	static jint IMEI_NOT_ACCEPTED() { return get_static_field<"IMEI_NOT_ACCEPTED", jint>(); }
	static jint IMS_ACCESS_BLOCKED() { return get_static_field<"IMS_ACCESS_BLOCKED", jint>(); }
	static jint IMS_MERGED_SUCCESSFULLY() { return get_static_field<"IMS_MERGED_SUCCESSFULLY", jint>(); }
	static jint IMS_SIP_ALTERNATE_EMERGENCY_CALL() { return get_static_field<"IMS_SIP_ALTERNATE_EMERGENCY_CALL", jint>(); }
	static jint INCOMING_AUTO_REJECTED() { return get_static_field<"INCOMING_AUTO_REJECTED", jint>(); }
	static jint INCOMING_MISSED() { return get_static_field<"INCOMING_MISSED", jint>(); }
	static jint INCOMING_REJECTED() { return get_static_field<"INCOMING_REJECTED", jint>(); }
	static jint INVALID_CREDENTIALS() { return get_static_field<"INVALID_CREDENTIALS", jint>(); }
	static jint INVALID_NUMBER() { return get_static_field<"INVALID_NUMBER", jint>(); }
	static jint LIMIT_EXCEEDED() { return get_static_field<"LIMIT_EXCEEDED", jint>(); }
	static jint LOCAL() { return get_static_field<"LOCAL", jint>(); }
	static jint LOST_SIGNAL() { return get_static_field<"LOST_SIGNAL", jint>(); }
	static jint LOW_BATTERY() { return get_static_field<"LOW_BATTERY", jint>(); }
	static jint MAXIMUM_NUMBER_OF_CALLS_REACHED() { return get_static_field<"MAXIMUM_NUMBER_OF_CALLS_REACHED", jint>(); }
	static jint MEDIA_TIMEOUT() { return get_static_field<"MEDIA_TIMEOUT", jint>(); }
	static jint MMI() { return get_static_field<"MMI", jint>(); }
	static jint NORMAL() { return get_static_field<"NORMAL", jint>(); }
	static jint NORMAL_UNSPECIFIED() { return get_static_field<"NORMAL_UNSPECIFIED", jint>(); }
	static jint NOT_DISCONNECTED() { return get_static_field<"NOT_DISCONNECTED", jint>(); }
	static jint NOT_VALID() { return get_static_field<"NOT_VALID", jint>(); }
	static jint NO_PHONE_NUMBER_SUPPLIED() { return get_static_field<"NO_PHONE_NUMBER_SUPPLIED", jint>(); }
	static jint NUMBER_UNREACHABLE() { return get_static_field<"NUMBER_UNREACHABLE", jint>(); }
	static jint OTASP_PROVISIONING_IN_PROCESS() { return get_static_field<"OTASP_PROVISIONING_IN_PROCESS", jint>(); }
	static jint OUTGOING_CANCELED() { return get_static_field<"OUTGOING_CANCELED", jint>(); }
	static jint OUTGOING_EMERGENCY_CALL_PLACED() { return get_static_field<"OUTGOING_EMERGENCY_CALL_PLACED", jint>(); }
	static jint OUTGOING_FAILURE() { return get_static_field<"OUTGOING_FAILURE", jint>(); }
	static jint OUT_OF_NETWORK() { return get_static_field<"OUT_OF_NETWORK", jint>(); }
	static jint OUT_OF_SERVICE() { return get_static_field<"OUT_OF_SERVICE", jint>(); }
	static jint POWER_OFF() { return get_static_field<"POWER_OFF", jint>(); }
	static jint SERVER_ERROR() { return get_static_field<"SERVER_ERROR", jint>(); }
	static jint SERVER_UNREACHABLE() { return get_static_field<"SERVER_UNREACHABLE", jint>(); }
	static jint TIMED_OUT() { return get_static_field<"TIMED_OUT", jint>(); }
	static jint TOO_MANY_ONGOING_CALLS() { return get_static_field<"TOO_MANY_ONGOING_CALLS", jint>(); }
	static jint UNOBTAINABLE_NUMBER() { return get_static_field<"UNOBTAINABLE_NUMBER", jint>(); }
	static jint VIDEO_CALL_NOT_ALLOWED_WHILE_TTY_ENABLED() { return get_static_field<"VIDEO_CALL_NOT_ALLOWED_WHILE_TTY_ENABLED", jint>(); }
	static jint VOICEMAIL_NUMBER_MISSING() { return get_static_field<"VOICEMAIL_NUMBER_MISSING", jint>(); }
	static jint WFC_SERVICE_NOT_AVAILABLE_IN_THIS_LOCATION() { return get_static_field<"WFC_SERVICE_NOT_AVAILABLE_IN_THIS_LOCATION", jint>(); }
	static jint WIFI_LOST() { return get_static_field<"WIFI_LOST", jint>(); }


protected:

	DisconnectCause(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELEPHONY_DISCONNECTCAUSE