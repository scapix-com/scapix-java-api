// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_TELEPHONY_IMS_IMSREASONINFO_FWD
#define SCAPIX_JAVA_API_ANDROID_TELEPHONY_IMS_IMSREASONINFO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::telephony::ims { class ImsReasonInfo; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::telephony::ims::ImsReasonInfo>
{
	static constexpr fixed_string class_name = "android/telephony/ims/ImsReasonInfo";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELEPHONY_IMS_IMSREASONINFO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_TELEPHONY_IMS_IMSREASONINFO)
#define SCAPIX_JAVA_API_ANDROID_TELEPHONY_IMS_IMSREASONINFO

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::telephony::ims::ImsReasonInfo : public jni::object_base<"android/telephony/ims/ImsReasonInfo",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static jint CODE_ACCESS_CLASS_BLOCKED() { return get_static_field<"CODE_ACCESS_CLASS_BLOCKED", jint>(); }
	static jint CODE_ANSWERED_ELSEWHERE() { return get_static_field<"CODE_ANSWERED_ELSEWHERE", jint>(); }
	static jint CODE_BLACKLISTED_CALL_ID() { return get_static_field<"CODE_BLACKLISTED_CALL_ID", jint>(); }
	static jint CODE_CALL_BARRED() { return get_static_field<"CODE_CALL_BARRED", jint>(); }
	static jint CODE_CALL_DROP_IWLAN_TO_LTE_UNAVAILABLE() { return get_static_field<"CODE_CALL_DROP_IWLAN_TO_LTE_UNAVAILABLE", jint>(); }
	static jint CODE_CALL_END_CAUSE_CALL_PULL() { return get_static_field<"CODE_CALL_END_CAUSE_CALL_PULL", jint>(); }
	static jint CODE_CALL_PULL_OUT_OF_SYNC() { return get_static_field<"CODE_CALL_PULL_OUT_OF_SYNC", jint>(); }
	static jint CODE_DATA_DISABLED() { return get_static_field<"CODE_DATA_DISABLED", jint>(); }
	static jint CODE_DATA_LIMIT_REACHED() { return get_static_field<"CODE_DATA_LIMIT_REACHED", jint>(); }
	static jint CODE_DIAL_MODIFIED_TO_DIAL() { return get_static_field<"CODE_DIAL_MODIFIED_TO_DIAL", jint>(); }
	static jint CODE_DIAL_MODIFIED_TO_DIAL_VIDEO() { return get_static_field<"CODE_DIAL_MODIFIED_TO_DIAL_VIDEO", jint>(); }
	static jint CODE_DIAL_MODIFIED_TO_SS() { return get_static_field<"CODE_DIAL_MODIFIED_TO_SS", jint>(); }
	static jint CODE_DIAL_MODIFIED_TO_USSD() { return get_static_field<"CODE_DIAL_MODIFIED_TO_USSD", jint>(); }
	static jint CODE_DIAL_VIDEO_MODIFIED_TO_DIAL() { return get_static_field<"CODE_DIAL_VIDEO_MODIFIED_TO_DIAL", jint>(); }
	static jint CODE_DIAL_VIDEO_MODIFIED_TO_DIAL_VIDEO() { return get_static_field<"CODE_DIAL_VIDEO_MODIFIED_TO_DIAL_VIDEO", jint>(); }
	static jint CODE_DIAL_VIDEO_MODIFIED_TO_SS() { return get_static_field<"CODE_DIAL_VIDEO_MODIFIED_TO_SS", jint>(); }
	static jint CODE_DIAL_VIDEO_MODIFIED_TO_USSD() { return get_static_field<"CODE_DIAL_VIDEO_MODIFIED_TO_USSD", jint>(); }
	static jint CODE_ECBM_NOT_SUPPORTED() { return get_static_field<"CODE_ECBM_NOT_SUPPORTED", jint>(); }
	static jint CODE_EMERGENCY_PERM_FAILURE() { return get_static_field<"CODE_EMERGENCY_PERM_FAILURE", jint>(); }
	static jint CODE_EMERGENCY_TEMP_FAILURE() { return get_static_field<"CODE_EMERGENCY_TEMP_FAILURE", jint>(); }
	static jint CODE_EPDG_TUNNEL_ESTABLISH_FAILURE() { return get_static_field<"CODE_EPDG_TUNNEL_ESTABLISH_FAILURE", jint>(); }
	static jint CODE_EPDG_TUNNEL_LOST_CONNECTION() { return get_static_field<"CODE_EPDG_TUNNEL_LOST_CONNECTION", jint>(); }
	static jint CODE_EPDG_TUNNEL_REKEY_FAILURE() { return get_static_field<"CODE_EPDG_TUNNEL_REKEY_FAILURE", jint>(); }
	static jint CODE_FDN_BLOCKED() { return get_static_field<"CODE_FDN_BLOCKED", jint>(); }
	static jint CODE_IKEV2_AUTH_FAILURE() { return get_static_field<"CODE_IKEV2_AUTH_FAILURE", jint>(); }
	static jint CODE_IMEI_NOT_ACCEPTED() { return get_static_field<"CODE_IMEI_NOT_ACCEPTED", jint>(); }
	static jint CODE_IWLAN_DPD_FAILURE() { return get_static_field<"CODE_IWLAN_DPD_FAILURE", jint>(); }
	static jint CODE_LOCAL_CALL_BUSY() { return get_static_field<"CODE_LOCAL_CALL_BUSY", jint>(); }
	static jint CODE_LOCAL_CALL_CS_RETRY_REQUIRED() { return get_static_field<"CODE_LOCAL_CALL_CS_RETRY_REQUIRED", jint>(); }
	static jint CODE_LOCAL_CALL_DECLINE() { return get_static_field<"CODE_LOCAL_CALL_DECLINE", jint>(); }
	static jint CODE_LOCAL_CALL_EXCEEDED() { return get_static_field<"CODE_LOCAL_CALL_EXCEEDED", jint>(); }
	static jint CODE_LOCAL_CALL_RESOURCE_RESERVATION_FAILED() { return get_static_field<"CODE_LOCAL_CALL_RESOURCE_RESERVATION_FAILED", jint>(); }
	static jint CODE_LOCAL_CALL_TERMINATED() { return get_static_field<"CODE_LOCAL_CALL_TERMINATED", jint>(); }
	static jint CODE_LOCAL_CALL_VCC_ON_PROGRESSING() { return get_static_field<"CODE_LOCAL_CALL_VCC_ON_PROGRESSING", jint>(); }
	static jint CODE_LOCAL_CALL_VOLTE_RETRY_REQUIRED() { return get_static_field<"CODE_LOCAL_CALL_VOLTE_RETRY_REQUIRED", jint>(); }
	static jint CODE_LOCAL_ENDED_BY_CONFERENCE_MERGE() { return get_static_field<"CODE_LOCAL_ENDED_BY_CONFERENCE_MERGE", jint>(); }
	static jint CODE_LOCAL_HO_NOT_FEASIBLE() { return get_static_field<"CODE_LOCAL_HO_NOT_FEASIBLE", jint>(); }
	static jint CODE_LOCAL_ILLEGAL_ARGUMENT() { return get_static_field<"CODE_LOCAL_ILLEGAL_ARGUMENT", jint>(); }
	static jint CODE_LOCAL_ILLEGAL_STATE() { return get_static_field<"CODE_LOCAL_ILLEGAL_STATE", jint>(); }
	static jint CODE_LOCAL_IMS_SERVICE_DOWN() { return get_static_field<"CODE_LOCAL_IMS_SERVICE_DOWN", jint>(); }
	static jint CODE_LOCAL_INTERNAL_ERROR() { return get_static_field<"CODE_LOCAL_INTERNAL_ERROR", jint>(); }
	static jint CODE_LOCAL_LOW_BATTERY() { return get_static_field<"CODE_LOCAL_LOW_BATTERY", jint>(); }
	static jint CODE_LOCAL_NETWORK_IP_CHANGED() { return get_static_field<"CODE_LOCAL_NETWORK_IP_CHANGED", jint>(); }
	static jint CODE_LOCAL_NETWORK_NO_LTE_COVERAGE() { return get_static_field<"CODE_LOCAL_NETWORK_NO_LTE_COVERAGE", jint>(); }
	static jint CODE_LOCAL_NETWORK_NO_SERVICE() { return get_static_field<"CODE_LOCAL_NETWORK_NO_SERVICE", jint>(); }
	static jint CODE_LOCAL_NETWORK_ROAMING() { return get_static_field<"CODE_LOCAL_NETWORK_ROAMING", jint>(); }
	static jint CODE_LOCAL_NOT_REGISTERED() { return get_static_field<"CODE_LOCAL_NOT_REGISTERED", jint>(); }
	static jint CODE_LOCAL_NO_PENDING_CALL() { return get_static_field<"CODE_LOCAL_NO_PENDING_CALL", jint>(); }
	static jint CODE_LOCAL_POWER_OFF() { return get_static_field<"CODE_LOCAL_POWER_OFF", jint>(); }
	static jint CODE_LOCAL_SERVICE_UNAVAILABLE() { return get_static_field<"CODE_LOCAL_SERVICE_UNAVAILABLE", jint>(); }
	static jint CODE_LOW_BATTERY() { return get_static_field<"CODE_LOW_BATTERY", jint>(); }
	static jint CODE_MAXIMUM_NUMBER_OF_CALLS_REACHED() { return get_static_field<"CODE_MAXIMUM_NUMBER_OF_CALLS_REACHED", jint>(); }
	static jint CODE_MEDIA_INIT_FAILED() { return get_static_field<"CODE_MEDIA_INIT_FAILED", jint>(); }
	static jint CODE_MEDIA_NOT_ACCEPTABLE() { return get_static_field<"CODE_MEDIA_NOT_ACCEPTABLE", jint>(); }
	static jint CODE_MEDIA_NO_DATA() { return get_static_field<"CODE_MEDIA_NO_DATA", jint>(); }
	static jint CODE_MEDIA_UNSPECIFIED() { return get_static_field<"CODE_MEDIA_UNSPECIFIED", jint>(); }
	static jint CODE_MULTIENDPOINT_NOT_SUPPORTED() { return get_static_field<"CODE_MULTIENDPOINT_NOT_SUPPORTED", jint>(); }
	static jint CODE_NETWORK_CONGESTION() { return get_static_field<"CODE_NETWORK_CONGESTION", jint>(); }
	static jint CODE_NETWORK_DETACH() { return get_static_field<"CODE_NETWORK_DETACH", jint>(); }
	static jint CODE_NETWORK_REJECT() { return get_static_field<"CODE_NETWORK_REJECT", jint>(); }
	static jint CODE_NETWORK_RESP_TIMEOUT() { return get_static_field<"CODE_NETWORK_RESP_TIMEOUT", jint>(); }
	static jint CODE_NO_CSFB_IN_CS_ROAM() { return get_static_field<"CODE_NO_CSFB_IN_CS_ROAM", jint>(); }
	static jint CODE_NO_VALID_SIM() { return get_static_field<"CODE_NO_VALID_SIM", jint>(); }
	static jint CODE_OEM_CAUSE_1() { return get_static_field<"CODE_OEM_CAUSE_1", jint>(); }
	static jint CODE_OEM_CAUSE_10() { return get_static_field<"CODE_OEM_CAUSE_10", jint>(); }
	static jint CODE_OEM_CAUSE_11() { return get_static_field<"CODE_OEM_CAUSE_11", jint>(); }
	static jint CODE_OEM_CAUSE_12() { return get_static_field<"CODE_OEM_CAUSE_12", jint>(); }
	static jint CODE_OEM_CAUSE_13() { return get_static_field<"CODE_OEM_CAUSE_13", jint>(); }
	static jint CODE_OEM_CAUSE_14() { return get_static_field<"CODE_OEM_CAUSE_14", jint>(); }
	static jint CODE_OEM_CAUSE_15() { return get_static_field<"CODE_OEM_CAUSE_15", jint>(); }
	static jint CODE_OEM_CAUSE_2() { return get_static_field<"CODE_OEM_CAUSE_2", jint>(); }
	static jint CODE_OEM_CAUSE_3() { return get_static_field<"CODE_OEM_CAUSE_3", jint>(); }
	static jint CODE_OEM_CAUSE_4() { return get_static_field<"CODE_OEM_CAUSE_4", jint>(); }
	static jint CODE_OEM_CAUSE_5() { return get_static_field<"CODE_OEM_CAUSE_5", jint>(); }
	static jint CODE_OEM_CAUSE_6() { return get_static_field<"CODE_OEM_CAUSE_6", jint>(); }
	static jint CODE_OEM_CAUSE_7() { return get_static_field<"CODE_OEM_CAUSE_7", jint>(); }
	static jint CODE_OEM_CAUSE_8() { return get_static_field<"CODE_OEM_CAUSE_8", jint>(); }
	static jint CODE_OEM_CAUSE_9() { return get_static_field<"CODE_OEM_CAUSE_9", jint>(); }
	static jint CODE_RADIO_ACCESS_FAILURE() { return get_static_field<"CODE_RADIO_ACCESS_FAILURE", jint>(); }
	static jint CODE_RADIO_INTERNAL_ERROR() { return get_static_field<"CODE_RADIO_INTERNAL_ERROR", jint>(); }
	static jint CODE_RADIO_LINK_FAILURE() { return get_static_field<"CODE_RADIO_LINK_FAILURE", jint>(); }
	static jint CODE_RADIO_LINK_LOST() { return get_static_field<"CODE_RADIO_LINK_LOST", jint>(); }
	static jint CODE_RADIO_OFF() { return get_static_field<"CODE_RADIO_OFF", jint>(); }
	static jint CODE_RADIO_RELEASE_ABNORMAL() { return get_static_field<"CODE_RADIO_RELEASE_ABNORMAL", jint>(); }
	static jint CODE_RADIO_RELEASE_NORMAL() { return get_static_field<"CODE_RADIO_RELEASE_NORMAL", jint>(); }
	static jint CODE_RADIO_SETUP_FAILURE() { return get_static_field<"CODE_RADIO_SETUP_FAILURE", jint>(); }
	static jint CODE_RADIO_UPLINK_FAILURE() { return get_static_field<"CODE_RADIO_UPLINK_FAILURE", jint>(); }
	static jint CODE_REGISTRATION_ERROR() { return get_static_field<"CODE_REGISTRATION_ERROR", jint>(); }
	static jint CODE_REJECTED_ELSEWHERE() { return get_static_field<"CODE_REJECTED_ELSEWHERE", jint>(); }
	static jint CODE_REJECT_1X_COLLISION() { return get_static_field<"CODE_REJECT_1X_COLLISION", jint>(); }
	static jint CODE_REJECT_CALL_ON_OTHER_SUB() { return get_static_field<"CODE_REJECT_CALL_ON_OTHER_SUB", jint>(); }
	static jint CODE_REJECT_CALL_TYPE_NOT_ALLOWED() { return get_static_field<"CODE_REJECT_CALL_TYPE_NOT_ALLOWED", jint>(); }
	static jint CODE_REJECT_CONFERENCE_TTY_NOT_ALLOWED() { return get_static_field<"CODE_REJECT_CONFERENCE_TTY_NOT_ALLOWED", jint>(); }
	static jint CODE_REJECT_INTERNAL_ERROR() { return get_static_field<"CODE_REJECT_INTERNAL_ERROR", jint>(); }
	static jint CODE_REJECT_MAX_CALL_LIMIT_REACHED() { return get_static_field<"CODE_REJECT_MAX_CALL_LIMIT_REACHED", jint>(); }
	static jint CODE_REJECT_ONGOING_CALL_SETUP() { return get_static_field<"CODE_REJECT_ONGOING_CALL_SETUP", jint>(); }
	static jint CODE_REJECT_ONGOING_CALL_TRANSFER() { return get_static_field<"CODE_REJECT_ONGOING_CALL_TRANSFER", jint>(); }
	static jint CODE_REJECT_ONGOING_CALL_UPGRADE() { return get_static_field<"CODE_REJECT_ONGOING_CALL_UPGRADE", jint>(); }
	static jint CODE_REJECT_ONGOING_CALL_WAITING_DISABLED() { return get_static_field<"CODE_REJECT_ONGOING_CALL_WAITING_DISABLED", jint>(); }
	static jint CODE_REJECT_ONGOING_CONFERENCE_CALL() { return get_static_field<"CODE_REJECT_ONGOING_CONFERENCE_CALL", jint>(); }
	static jint CODE_REJECT_ONGOING_CS_CALL() { return get_static_field<"CODE_REJECT_ONGOING_CS_CALL", jint>(); }
	static jint CODE_REJECT_ONGOING_E911_CALL() { return get_static_field<"CODE_REJECT_ONGOING_E911_CALL", jint>(); }
	static jint CODE_REJECT_ONGOING_ENCRYPTED_CALL() { return get_static_field<"CODE_REJECT_ONGOING_ENCRYPTED_CALL", jint>(); }
	static jint CODE_REJECT_ONGOING_HANDOVER() { return get_static_field<"CODE_REJECT_ONGOING_HANDOVER", jint>(); }
	static jint CODE_REJECT_QOS_FAILURE() { return get_static_field<"CODE_REJECT_QOS_FAILURE", jint>(); }
	static jint CODE_REJECT_SERVICE_NOT_REGISTERED() { return get_static_field<"CODE_REJECT_SERVICE_NOT_REGISTERED", jint>(); }
	static jint CODE_REJECT_UNKNOWN() { return get_static_field<"CODE_REJECT_UNKNOWN", jint>(); }
	static jint CODE_REJECT_UNSUPPORTED_SDP_HEADERS() { return get_static_field<"CODE_REJECT_UNSUPPORTED_SDP_HEADERS", jint>(); }
	static jint CODE_REJECT_UNSUPPORTED_SIP_HEADERS() { return get_static_field<"CODE_REJECT_UNSUPPORTED_SIP_HEADERS", jint>(); }
	static jint CODE_REJECT_VT_AVPF_NOT_ALLOWED() { return get_static_field<"CODE_REJECT_VT_AVPF_NOT_ALLOWED", jint>(); }
	static jint CODE_REJECT_VT_TTY_NOT_ALLOWED() { return get_static_field<"CODE_REJECT_VT_TTY_NOT_ALLOWED", jint>(); }
	static jint CODE_REMOTE_CALL_DECLINE() { return get_static_field<"CODE_REMOTE_CALL_DECLINE", jint>(); }
	static jint CODE_SESSION_MODIFICATION_FAILED() { return get_static_field<"CODE_SESSION_MODIFICATION_FAILED", jint>(); }
	static jint CODE_SIP_ALTERNATE_EMERGENCY_CALL() { return get_static_field<"CODE_SIP_ALTERNATE_EMERGENCY_CALL", jint>(); }
	static jint CODE_SIP_AMBIGUOUS() { return get_static_field<"CODE_SIP_AMBIGUOUS", jint>(); }
	static jint CODE_SIP_BAD_ADDRESS() { return get_static_field<"CODE_SIP_BAD_ADDRESS", jint>(); }
	static jint CODE_SIP_BAD_REQUEST() { return get_static_field<"CODE_SIP_BAD_REQUEST", jint>(); }
	static jint CODE_SIP_BUSY() { return get_static_field<"CODE_SIP_BUSY", jint>(); }
	static jint CODE_SIP_CALL_OR_TRANS_DOES_NOT_EXIST() { return get_static_field<"CODE_SIP_CALL_OR_TRANS_DOES_NOT_EXIST", jint>(); }
	static jint CODE_SIP_CLIENT_ERROR() { return get_static_field<"CODE_SIP_CLIENT_ERROR", jint>(); }
	static jint CODE_SIP_EXTENSION_REQUIRED() { return get_static_field<"CODE_SIP_EXTENSION_REQUIRED", jint>(); }
	static jint CODE_SIP_FORBIDDEN() { return get_static_field<"CODE_SIP_FORBIDDEN", jint>(); }
	static jint CODE_SIP_GLOBAL_ERROR() { return get_static_field<"CODE_SIP_GLOBAL_ERROR", jint>(); }
	static jint CODE_SIP_INTERVAL_TOO_BRIEF() { return get_static_field<"CODE_SIP_INTERVAL_TOO_BRIEF", jint>(); }
	static jint CODE_SIP_LOOP_DETECTED() { return get_static_field<"CODE_SIP_LOOP_DETECTED", jint>(); }
	static jint CODE_SIP_METHOD_NOT_ALLOWED() { return get_static_field<"CODE_SIP_METHOD_NOT_ALLOWED", jint>(); }
	static jint CODE_SIP_NOT_ACCEPTABLE() { return get_static_field<"CODE_SIP_NOT_ACCEPTABLE", jint>(); }
	static jint CODE_SIP_NOT_FOUND() { return get_static_field<"CODE_SIP_NOT_FOUND", jint>(); }
	static jint CODE_SIP_NOT_REACHABLE() { return get_static_field<"CODE_SIP_NOT_REACHABLE", jint>(); }
	static jint CODE_SIP_NOT_SUPPORTED() { return get_static_field<"CODE_SIP_NOT_SUPPORTED", jint>(); }
	static jint CODE_SIP_PROXY_AUTHENTICATION_REQUIRED() { return get_static_field<"CODE_SIP_PROXY_AUTHENTICATION_REQUIRED", jint>(); }
	static jint CODE_SIP_REDIRECTED() { return get_static_field<"CODE_SIP_REDIRECTED", jint>(); }
	static jint CODE_SIP_REQUEST_CANCELLED() { return get_static_field<"CODE_SIP_REQUEST_CANCELLED", jint>(); }
	static jint CODE_SIP_REQUEST_ENTITY_TOO_LARGE() { return get_static_field<"CODE_SIP_REQUEST_ENTITY_TOO_LARGE", jint>(); }
	static jint CODE_SIP_REQUEST_PENDING() { return get_static_field<"CODE_SIP_REQUEST_PENDING", jint>(); }
	static jint CODE_SIP_REQUEST_TIMEOUT() { return get_static_field<"CODE_SIP_REQUEST_TIMEOUT", jint>(); }
	static jint CODE_SIP_REQUEST_URI_TOO_LARGE() { return get_static_field<"CODE_SIP_REQUEST_URI_TOO_LARGE", jint>(); }
	static jint CODE_SIP_SERVER_ERROR() { return get_static_field<"CODE_SIP_SERVER_ERROR", jint>(); }
	static jint CODE_SIP_SERVER_INTERNAL_ERROR() { return get_static_field<"CODE_SIP_SERVER_INTERNAL_ERROR", jint>(); }
	static jint CODE_SIP_SERVER_TIMEOUT() { return get_static_field<"CODE_SIP_SERVER_TIMEOUT", jint>(); }
	static jint CODE_SIP_SERVICE_UNAVAILABLE() { return get_static_field<"CODE_SIP_SERVICE_UNAVAILABLE", jint>(); }
	static jint CODE_SIP_TEMPRARILY_UNAVAILABLE() { return get_static_field<"CODE_SIP_TEMPRARILY_UNAVAILABLE", jint>(); }
	static jint CODE_SIP_TOO_MANY_HOPS() { return get_static_field<"CODE_SIP_TOO_MANY_HOPS", jint>(); }
	static jint CODE_SIP_TRANSACTION_DOES_NOT_EXIST() { return get_static_field<"CODE_SIP_TRANSACTION_DOES_NOT_EXIST", jint>(); }
	static jint CODE_SIP_UNDECIPHERABLE() { return get_static_field<"CODE_SIP_UNDECIPHERABLE", jint>(); }
	static jint CODE_SIP_USER_MARKED_UNWANTED() { return get_static_field<"CODE_SIP_USER_MARKED_UNWANTED", jint>(); }
	static jint CODE_SIP_USER_REJECTED() { return get_static_field<"CODE_SIP_USER_REJECTED", jint>(); }
	static jint CODE_SUPP_SVC_CANCELLED() { return get_static_field<"CODE_SUPP_SVC_CANCELLED", jint>(); }
	static jint CODE_SUPP_SVC_FAILED() { return get_static_field<"CODE_SUPP_SVC_FAILED", jint>(); }
	static jint CODE_SUPP_SVC_REINVITE_COLLISION() { return get_static_field<"CODE_SUPP_SVC_REINVITE_COLLISION", jint>(); }
	static jint CODE_TIMEOUT_1XX_WAITING() { return get_static_field<"CODE_TIMEOUT_1XX_WAITING", jint>(); }
	static jint CODE_TIMEOUT_NO_ANSWER() { return get_static_field<"CODE_TIMEOUT_NO_ANSWER", jint>(); }
	static jint CODE_TIMEOUT_NO_ANSWER_CALL_UPDATE() { return get_static_field<"CODE_TIMEOUT_NO_ANSWER_CALL_UPDATE", jint>(); }
	static jint CODE_UNSPECIFIED() { return get_static_field<"CODE_UNSPECIFIED", jint>(); }
	static jint CODE_USER_CANCELLED_SESSION_MODIFICATION() { return get_static_field<"CODE_USER_CANCELLED_SESSION_MODIFICATION", jint>(); }
	static jint CODE_USER_DECLINE() { return get_static_field<"CODE_USER_DECLINE", jint>(); }
	static jint CODE_USER_IGNORE() { return get_static_field<"CODE_USER_IGNORE", jint>(); }
	static jint CODE_USER_NOANSWER() { return get_static_field<"CODE_USER_NOANSWER", jint>(); }
	static jint CODE_USER_REJECTED_SESSION_MODIFICATION() { return get_static_field<"CODE_USER_REJECTED_SESSION_MODIFICATION", jint>(); }
	static jint CODE_USER_TERMINATED() { return get_static_field<"CODE_USER_TERMINATED", jint>(); }
	static jint CODE_USER_TERMINATED_BY_REMOTE() { return get_static_field<"CODE_USER_TERMINATED_BY_REMOTE", jint>(); }
	static jint CODE_UT_CB_PASSWORD_MISMATCH() { return get_static_field<"CODE_UT_CB_PASSWORD_MISMATCH", jint>(); }
	static jint CODE_UT_NETWORK_ERROR() { return get_static_field<"CODE_UT_NETWORK_ERROR", jint>(); }
	static jint CODE_UT_NOT_SUPPORTED() { return get_static_field<"CODE_UT_NOT_SUPPORTED", jint>(); }
	static jint CODE_UT_OPERATION_NOT_ALLOWED() { return get_static_field<"CODE_UT_OPERATION_NOT_ALLOWED", jint>(); }
	static jint CODE_UT_SERVICE_UNAVAILABLE() { return get_static_field<"CODE_UT_SERVICE_UNAVAILABLE", jint>(); }
	static jint CODE_UT_SS_MODIFIED_TO_DIAL() { return get_static_field<"CODE_UT_SS_MODIFIED_TO_DIAL", jint>(); }
	static jint CODE_UT_SS_MODIFIED_TO_DIAL_VIDEO() { return get_static_field<"CODE_UT_SS_MODIFIED_TO_DIAL_VIDEO", jint>(); }
	static jint CODE_UT_SS_MODIFIED_TO_SS() { return get_static_field<"CODE_UT_SS_MODIFIED_TO_SS", jint>(); }
	static jint CODE_UT_SS_MODIFIED_TO_USSD() { return get_static_field<"CODE_UT_SS_MODIFIED_TO_USSD", jint>(); }
	static jint CODE_WIFI_LOST() { return get_static_field<"CODE_WIFI_LOST", jint>(); }
	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }
	static jint EXTRA_CODE_CALL_RETRY_BY_SETTINGS() { return get_static_field<"EXTRA_CODE_CALL_RETRY_BY_SETTINGS", jint>(); }
	static jint EXTRA_CODE_CALL_RETRY_EMERGENCY() { return get_static_field<"EXTRA_CODE_CALL_RETRY_EMERGENCY", jint>(); }
	static jint EXTRA_CODE_CALL_RETRY_NORMAL() { return get_static_field<"EXTRA_CODE_CALL_RETRY_NORMAL", jint>(); }
	static jint EXTRA_CODE_CALL_RETRY_SILENT_REDIAL() { return get_static_field<"EXTRA_CODE_CALL_RETRY_SILENT_REDIAL", jint>(); }

	static jni::ref<android::telephony::ims::ImsReasonInfo> new_object(jint code, jint extraCode, jni::ref<java::lang::String> extraMessage) { return base_::new_object(code, extraCode, extraMessage); }
	jint getCode() { return call_method<"getCode", jint>(); }
	jint getExtraCode() { return call_method<"getExtraCode", jint>(); }
	jni::ref<java::lang::String> getExtraMessage() { return call_method<"getExtraMessage", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> out, jint flags) { return call_method<"writeToParcel", void>(out, flags); }

protected:

	ImsReasonInfo(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELEPHONY_IMS_IMSREASONINFO
