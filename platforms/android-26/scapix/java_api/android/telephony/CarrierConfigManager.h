// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_TELEPHONY_CARRIERCONFIGMANAGER_FWD
#define SCAPIX_JAVA_API_ANDROID_TELEPHONY_CARRIERCONFIGMANAGER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::telephony { class CarrierConfigManager; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::telephony::CarrierConfigManager>
{
	static constexpr fixed_string class_name = "android/telephony/CarrierConfigManager";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELEPHONY_CARRIERCONFIGMANAGER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_TELEPHONY_CARRIERCONFIGMANAGER)
#define SCAPIX_JAVA_API_ANDROID_TELEPHONY_CARRIERCONFIGMANAGER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/PersistableBundle.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::telephony::CarrierConfigManager : public jni::object_base<"android/telephony/CarrierConfigManager",
	java::lang::Object>
{
public:

	static jni::ref<java::lang::String> ACTION_CARRIER_CONFIG_CHANGED() { return get_static_field<"ACTION_CARRIER_CONFIG_CHANGED", jni::ref<java::lang::String>>(); }
	static jint DATA_CYCLE_THRESHOLD_DISABLED() { return get_static_field<"DATA_CYCLE_THRESHOLD_DISABLED", jint>(); }
	static jni::ref<java::lang::String> KEY_ADDITIONAL_CALL_SETTING_BOOL() { return get_static_field<"KEY_ADDITIONAL_CALL_SETTING_BOOL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_ALLOW_ADDING_APNS_BOOL() { return get_static_field<"KEY_ALLOW_ADDING_APNS_BOOL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_ALLOW_ADD_CALL_DURING_VIDEO_CALL_BOOL() { return get_static_field<"KEY_ALLOW_ADD_CALL_DURING_VIDEO_CALL_BOOL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_ALLOW_EMERGENCY_NUMBERS_IN_CALL_LOG_BOOL() { return get_static_field<"KEY_ALLOW_EMERGENCY_NUMBERS_IN_CALL_LOG_BOOL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_ALLOW_EMERGENCY_VIDEO_CALLS_BOOL() { return get_static_field<"KEY_ALLOW_EMERGENCY_VIDEO_CALLS_BOOL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_ALLOW_LOCAL_DTMF_TONES_BOOL() { return get_static_field<"KEY_ALLOW_LOCAL_DTMF_TONES_BOOL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_ALLOW_MERGE_WIFI_CALLS_WHEN_VOWIFI_OFF_BOOL() { return get_static_field<"KEY_ALLOW_MERGE_WIFI_CALLS_WHEN_VOWIFI_OFF_BOOL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_ALLOW_NON_EMERGENCY_CALLS_IN_ECM_BOOL() { return get_static_field<"KEY_ALLOW_NON_EMERGENCY_CALLS_IN_ECM_BOOL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_ALWAYS_SHOW_EMERGENCY_ALERT_ONOFF_BOOL() { return get_static_field<"KEY_ALWAYS_SHOW_EMERGENCY_ALERT_ONOFF_BOOL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_APN_EXPAND_BOOL() { return get_static_field<"KEY_APN_EXPAND_BOOL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_AUTO_RETRY_ENABLED_BOOL() { return get_static_field<"KEY_AUTO_RETRY_ENABLED_BOOL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_CALL_FORWARDING_BLOCKS_WHILE_ROAMING_STRING_ARRAY() { return get_static_field<"KEY_CALL_FORWARDING_BLOCKS_WHILE_ROAMING_STRING_ARRAY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_CARRIER_ALLOW_TURNOFF_IMS_BOOL() { return get_static_field<"KEY_CARRIER_ALLOW_TURNOFF_IMS_BOOL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_CARRIER_DATA_CALL_PERMANENT_FAILURE_STRINGS() { return get_static_field<"KEY_CARRIER_DATA_CALL_PERMANENT_FAILURE_STRINGS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_CARRIER_FORCE_DISABLE_ETWS_CMAS_TEST_BOOL() { return get_static_field<"KEY_CARRIER_FORCE_DISABLE_ETWS_CMAS_TEST_BOOL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_CARRIER_IMS_GBA_REQUIRED_BOOL() { return get_static_field<"KEY_CARRIER_IMS_GBA_REQUIRED_BOOL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_CARRIER_INSTANT_LETTERING_AVAILABLE_BOOL() { return get_static_field<"KEY_CARRIER_INSTANT_LETTERING_AVAILABLE_BOOL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_CARRIER_INSTANT_LETTERING_ENCODING_STRING() { return get_static_field<"KEY_CARRIER_INSTANT_LETTERING_ENCODING_STRING", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_CARRIER_INSTANT_LETTERING_ESCAPED_CHARS_STRING() { return get_static_field<"KEY_CARRIER_INSTANT_LETTERING_ESCAPED_CHARS_STRING", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_CARRIER_INSTANT_LETTERING_INVALID_CHARS_STRING() { return get_static_field<"KEY_CARRIER_INSTANT_LETTERING_INVALID_CHARS_STRING", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_CARRIER_INSTANT_LETTERING_LENGTH_LIMIT_INT() { return get_static_field<"KEY_CARRIER_INSTANT_LETTERING_LENGTH_LIMIT_INT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_CARRIER_SETTINGS_ENABLE_BOOL() { return get_static_field<"KEY_CARRIER_SETTINGS_ENABLE_BOOL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_CARRIER_USE_IMS_FIRST_FOR_EMERGENCY_BOOL() { return get_static_field<"KEY_CARRIER_USE_IMS_FIRST_FOR_EMERGENCY_BOOL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_CARRIER_VOLTE_AVAILABLE_BOOL() { return get_static_field<"KEY_CARRIER_VOLTE_AVAILABLE_BOOL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_CARRIER_VOLTE_PROVISIONED_BOOL() { return get_static_field<"KEY_CARRIER_VOLTE_PROVISIONED_BOOL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_CARRIER_VOLTE_PROVISIONING_REQUIRED_BOOL() { return get_static_field<"KEY_CARRIER_VOLTE_PROVISIONING_REQUIRED_BOOL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_CARRIER_VOLTE_TTY_SUPPORTED_BOOL() { return get_static_field<"KEY_CARRIER_VOLTE_TTY_SUPPORTED_BOOL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_CARRIER_VT_AVAILABLE_BOOL() { return get_static_field<"KEY_CARRIER_VT_AVAILABLE_BOOL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_CARRIER_VVM_PACKAGE_NAME_STRING() { return get_static_field<"KEY_CARRIER_VVM_PACKAGE_NAME_STRING", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_CARRIER_VVM_PACKAGE_NAME_STRING_ARRAY() { return get_static_field<"KEY_CARRIER_VVM_PACKAGE_NAME_STRING_ARRAY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_CARRIER_WFC_IMS_AVAILABLE_BOOL() { return get_static_field<"KEY_CARRIER_WFC_IMS_AVAILABLE_BOOL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_CARRIER_WFC_SUPPORTS_WIFI_ONLY_BOOL() { return get_static_field<"KEY_CARRIER_WFC_SUPPORTS_WIFI_ONLY_BOOL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_CDMA_3WAYCALL_FLASH_DELAY_INT() { return get_static_field<"KEY_CDMA_3WAYCALL_FLASH_DELAY_INT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_CDMA_DTMF_TONE_DELAY_INT() { return get_static_field<"KEY_CDMA_DTMF_TONE_DELAY_INT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_CDMA_NONROAMING_NETWORKS_STRING_ARRAY() { return get_static_field<"KEY_CDMA_NONROAMING_NETWORKS_STRING_ARRAY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_CDMA_ROAMING_NETWORKS_STRING_ARRAY() { return get_static_field<"KEY_CDMA_ROAMING_NETWORKS_STRING_ARRAY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_CI_ACTION_ON_SYS_UPDATE_BOOL() { return get_static_field<"KEY_CI_ACTION_ON_SYS_UPDATE_BOOL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_CI_ACTION_ON_SYS_UPDATE_EXTRA_STRING() { return get_static_field<"KEY_CI_ACTION_ON_SYS_UPDATE_EXTRA_STRING", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_CI_ACTION_ON_SYS_UPDATE_EXTRA_VAL_STRING() { return get_static_field<"KEY_CI_ACTION_ON_SYS_UPDATE_EXTRA_VAL_STRING", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_CI_ACTION_ON_SYS_UPDATE_INTENT_STRING() { return get_static_field<"KEY_CI_ACTION_ON_SYS_UPDATE_INTENT_STRING", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_CONFIG_IMS_PACKAGE_OVERRIDE_STRING() { return get_static_field<"KEY_CONFIG_IMS_PACKAGE_OVERRIDE_STRING", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_CSP_ENABLED_BOOL() { return get_static_field<"KEY_CSP_ENABLED_BOOL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_DATA_LIMIT_THRESHOLD_BYTES_LONG() { return get_static_field<"KEY_DATA_LIMIT_THRESHOLD_BYTES_LONG", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_DATA_WARNING_THRESHOLD_BYTES_LONG() { return get_static_field<"KEY_DATA_WARNING_THRESHOLD_BYTES_LONG", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_DEFAULT_SIM_CALL_MANAGER_STRING() { return get_static_field<"KEY_DEFAULT_SIM_CALL_MANAGER_STRING", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_DEFAULT_VM_NUMBER_STRING() { return get_static_field<"KEY_DEFAULT_VM_NUMBER_STRING", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_DIAL_STRING_REPLACE_STRING_ARRAY() { return get_static_field<"KEY_DIAL_STRING_REPLACE_STRING_ARRAY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_DISABLE_CDMA_ACTIVATION_CODE_BOOL() { return get_static_field<"KEY_DISABLE_CDMA_ACTIVATION_CODE_BOOL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_DROP_VIDEO_CALL_WHEN_ANSWERING_AUDIO_CALL_BOOL() { return get_static_field<"KEY_DROP_VIDEO_CALL_WHEN_ANSWERING_AUDIO_CALL_BOOL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_DTMF_TYPE_ENABLED_BOOL() { return get_static_field<"KEY_DTMF_TYPE_ENABLED_BOOL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_DURATION_BLOCKING_DISABLED_AFTER_EMERGENCY_INT() { return get_static_field<"KEY_DURATION_BLOCKING_DISABLED_AFTER_EMERGENCY_INT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_EDITABLE_ENHANCED_4G_LTE_BOOL() { return get_static_field<"KEY_EDITABLE_ENHANCED_4G_LTE_BOOL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_EDITABLE_VOICEMAIL_NUMBER_BOOL() { return get_static_field<"KEY_EDITABLE_VOICEMAIL_NUMBER_BOOL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_ENABLE_DIALER_KEY_VIBRATION_BOOL() { return get_static_field<"KEY_ENABLE_DIALER_KEY_VIBRATION_BOOL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_FORCE_HOME_NETWORK_BOOL() { return get_static_field<"KEY_FORCE_HOME_NETWORK_BOOL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_GSM_DTMF_TONE_DELAY_INT() { return get_static_field<"KEY_GSM_DTMF_TONE_DELAY_INT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_GSM_NONROAMING_NETWORKS_STRING_ARRAY() { return get_static_field<"KEY_GSM_NONROAMING_NETWORKS_STRING_ARRAY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_GSM_ROAMING_NETWORKS_STRING_ARRAY() { return get_static_field<"KEY_GSM_ROAMING_NETWORKS_STRING_ARRAY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_HAS_IN_CALL_NOISE_SUPPRESSION_BOOL() { return get_static_field<"KEY_HAS_IN_CALL_NOISE_SUPPRESSION_BOOL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_HIDE_CARRIER_NETWORK_SETTINGS_BOOL() { return get_static_field<"KEY_HIDE_CARRIER_NETWORK_SETTINGS_BOOL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_HIDE_ENHANCED_4G_LTE_BOOL() { return get_static_field<"KEY_HIDE_ENHANCED_4G_LTE_BOOL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_HIDE_IMS_APN_BOOL() { return get_static_field<"KEY_HIDE_IMS_APN_BOOL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_HIDE_PREFERRED_NETWORK_TYPE_BOOL() { return get_static_field<"KEY_HIDE_PREFERRED_NETWORK_TYPE_BOOL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_HIDE_SIM_LOCK_SETTINGS_BOOL() { return get_static_field<"KEY_HIDE_SIM_LOCK_SETTINGS_BOOL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_IGNORE_SIM_NETWORK_LOCKED_EVENTS_BOOL() { return get_static_field<"KEY_IGNORE_SIM_NETWORK_LOCKED_EVENTS_BOOL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_IMS_CONFERENCE_SIZE_LIMIT_INT() { return get_static_field<"KEY_IMS_CONFERENCE_SIZE_LIMIT_INT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_IMS_DTMF_TONE_DELAY_INT() { return get_static_field<"KEY_IMS_DTMF_TONE_DELAY_INT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_IS_IMS_CONFERENCE_SIZE_ENFORCED_BOOL() { return get_static_field<"KEY_IS_IMS_CONFERENCE_SIZE_ENFORCED_BOOL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_MDN_IS_ADDITIONAL_VOICEMAIL_NUMBER_BOOL() { return get_static_field<"KEY_MDN_IS_ADDITIONAL_VOICEMAIL_NUMBER_BOOL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_MMS_ALIAS_ENABLED_BOOL() { return get_static_field<"KEY_MMS_ALIAS_ENABLED_BOOL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_MMS_ALIAS_MAX_CHARS_INT() { return get_static_field<"KEY_MMS_ALIAS_MAX_CHARS_INT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_MMS_ALIAS_MIN_CHARS_INT() { return get_static_field<"KEY_MMS_ALIAS_MIN_CHARS_INT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_MMS_ALLOW_ATTACH_AUDIO_BOOL() { return get_static_field<"KEY_MMS_ALLOW_ATTACH_AUDIO_BOOL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_MMS_APPEND_TRANSACTION_ID_BOOL() { return get_static_field<"KEY_MMS_APPEND_TRANSACTION_ID_BOOL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_MMS_EMAIL_GATEWAY_NUMBER_STRING() { return get_static_field<"KEY_MMS_EMAIL_GATEWAY_NUMBER_STRING", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_MMS_GROUP_MMS_ENABLED_BOOL() { return get_static_field<"KEY_MMS_GROUP_MMS_ENABLED_BOOL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_MMS_HTTP_PARAMS_STRING() { return get_static_field<"KEY_MMS_HTTP_PARAMS_STRING", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_MMS_HTTP_SOCKET_TIMEOUT_INT() { return get_static_field<"KEY_MMS_HTTP_SOCKET_TIMEOUT_INT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_MMS_MAX_IMAGE_HEIGHT_INT() { return get_static_field<"KEY_MMS_MAX_IMAGE_HEIGHT_INT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_MMS_MAX_IMAGE_WIDTH_INT() { return get_static_field<"KEY_MMS_MAX_IMAGE_WIDTH_INT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_MMS_MAX_MESSAGE_SIZE_INT() { return get_static_field<"KEY_MMS_MAX_MESSAGE_SIZE_INT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_MMS_MESSAGE_TEXT_MAX_SIZE_INT() { return get_static_field<"KEY_MMS_MESSAGE_TEXT_MAX_SIZE_INT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_MMS_MMS_DELIVERY_REPORT_ENABLED_BOOL() { return get_static_field<"KEY_MMS_MMS_DELIVERY_REPORT_ENABLED_BOOL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_MMS_MMS_ENABLED_BOOL() { return get_static_field<"KEY_MMS_MMS_ENABLED_BOOL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_MMS_MMS_READ_REPORT_ENABLED_BOOL() { return get_static_field<"KEY_MMS_MMS_READ_REPORT_ENABLED_BOOL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_MMS_MULTIPART_SMS_ENABLED_BOOL() { return get_static_field<"KEY_MMS_MULTIPART_SMS_ENABLED_BOOL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_MMS_NAI_SUFFIX_STRING() { return get_static_field<"KEY_MMS_NAI_SUFFIX_STRING", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_MMS_NOTIFY_WAP_MMSC_ENABLED_BOOL() { return get_static_field<"KEY_MMS_NOTIFY_WAP_MMSC_ENABLED_BOOL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_MMS_RECIPIENT_LIMIT_INT() { return get_static_field<"KEY_MMS_RECIPIENT_LIMIT_INT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_MMS_SEND_MULTIPART_SMS_AS_SEPARATE_MESSAGES_BOOL() { return get_static_field<"KEY_MMS_SEND_MULTIPART_SMS_AS_SEPARATE_MESSAGES_BOOL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_MMS_SHOW_CELL_BROADCAST_APP_LINKS_BOOL() { return get_static_field<"KEY_MMS_SHOW_CELL_BROADCAST_APP_LINKS_BOOL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_MMS_SMS_DELIVERY_REPORT_ENABLED_BOOL() { return get_static_field<"KEY_MMS_SMS_DELIVERY_REPORT_ENABLED_BOOL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_MMS_SMS_TO_MMS_TEXT_LENGTH_THRESHOLD_INT() { return get_static_field<"KEY_MMS_SMS_TO_MMS_TEXT_LENGTH_THRESHOLD_INT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_MMS_SMS_TO_MMS_TEXT_THRESHOLD_INT() { return get_static_field<"KEY_MMS_SMS_TO_MMS_TEXT_THRESHOLD_INT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_MMS_SUBJECT_MAX_LENGTH_INT() { return get_static_field<"KEY_MMS_SUBJECT_MAX_LENGTH_INT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_MMS_SUPPORT_HTTP_CHARSET_HEADER_BOOL() { return get_static_field<"KEY_MMS_SUPPORT_HTTP_CHARSET_HEADER_BOOL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_MMS_SUPPORT_MMS_CONTENT_DISPOSITION_BOOL() { return get_static_field<"KEY_MMS_SUPPORT_MMS_CONTENT_DISPOSITION_BOOL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_MMS_UA_PROF_TAG_NAME_STRING() { return get_static_field<"KEY_MMS_UA_PROF_TAG_NAME_STRING", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_MMS_UA_PROF_URL_STRING() { return get_static_field<"KEY_MMS_UA_PROF_URL_STRING", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_MMS_USER_AGENT_STRING() { return get_static_field<"KEY_MMS_USER_AGENT_STRING", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_MONTHLY_DATA_CYCLE_DAY_INT() { return get_static_field<"KEY_MONTHLY_DATA_CYCLE_DAY_INT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_ONLY_SINGLE_DC_ALLOWED_INT_ARRAY() { return get_static_field<"KEY_ONLY_SINGLE_DC_ALLOWED_INT_ARRAY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_OPERATOR_SELECTION_EXPAND_BOOL() { return get_static_field<"KEY_OPERATOR_SELECTION_EXPAND_BOOL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_PREFER_2G_BOOL() { return get_static_field<"KEY_PREFER_2G_BOOL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_RCS_CONFIG_SERVER_URL_STRING() { return get_static_field<"KEY_RCS_CONFIG_SERVER_URL_STRING", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_REQUIRE_ENTITLEMENT_CHECKS_BOOL() { return get_static_field<"KEY_REQUIRE_ENTITLEMENT_CHECKS_BOOL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_RESTART_RADIO_ON_PDP_FAIL_REGULAR_DEACTIVATION_BOOL() { return get_static_field<"KEY_RESTART_RADIO_ON_PDP_FAIL_REGULAR_DEACTIVATION_BOOL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_SHOW_APN_SETTING_CDMA_BOOL() { return get_static_field<"KEY_SHOW_APN_SETTING_CDMA_BOOL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_SHOW_CDMA_CHOICES_BOOL() { return get_static_field<"KEY_SHOW_CDMA_CHOICES_BOOL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_SHOW_ICCID_IN_SIM_STATUS_BOOL() { return get_static_field<"KEY_SHOW_ICCID_IN_SIM_STATUS_BOOL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_SHOW_ONSCREEN_DIAL_BUTTON_BOOL() { return get_static_field<"KEY_SHOW_ONSCREEN_DIAL_BUTTON_BOOL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_SIMPLIFIED_NETWORK_SETTINGS_BOOL() { return get_static_field<"KEY_SIMPLIFIED_NETWORK_SETTINGS_BOOL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_SIM_NETWORK_UNLOCK_ALLOW_DISMISS_BOOL() { return get_static_field<"KEY_SIM_NETWORK_UNLOCK_ALLOW_DISMISS_BOOL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_SMS_REQUIRES_DESTINATION_NUMBER_CONVERSION_BOOL() { return get_static_field<"KEY_SMS_REQUIRES_DESTINATION_NUMBER_CONVERSION_BOOL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_SUPPORT_3GPP_CALL_FORWARDING_WHILE_ROAMING_BOOL() { return get_static_field<"KEY_SUPPORT_3GPP_CALL_FORWARDING_WHILE_ROAMING_BOOL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_SUPPORT_CONFERENCE_CALL_BOOL() { return get_static_field<"KEY_SUPPORT_CONFERENCE_CALL_BOOL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_SUPPORT_PAUSE_IMS_VIDEO_CALLS_BOOL() { return get_static_field<"KEY_SUPPORT_PAUSE_IMS_VIDEO_CALLS_BOOL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_SUPPORT_SWAP_AFTER_MERGE_BOOL() { return get_static_field<"KEY_SUPPORT_SWAP_AFTER_MERGE_BOOL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_TREAT_DOWNGRADED_VIDEO_CALLS_AS_VIDEO_CALLS_BOOL() { return get_static_field<"KEY_TREAT_DOWNGRADED_VIDEO_CALLS_AS_VIDEO_CALLS_BOOL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_USE_HFA_FOR_PROVISIONING_BOOL() { return get_static_field<"KEY_USE_HFA_FOR_PROVISIONING_BOOL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_USE_OTASP_FOR_PROVISIONING_BOOL() { return get_static_field<"KEY_USE_OTASP_FOR_PROVISIONING_BOOL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_USE_RCS_PRESENCE_BOOL() { return get_static_field<"KEY_USE_RCS_PRESENCE_BOOL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_VOICEMAIL_NOTIFICATION_PERSISTENT_BOOL() { return get_static_field<"KEY_VOICEMAIL_NOTIFICATION_PERSISTENT_BOOL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_VOICE_PRIVACY_DISABLE_UI_BOOL() { return get_static_field<"KEY_VOICE_PRIVACY_DISABLE_UI_BOOL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_VOLTE_REPLACEMENT_RAT_INT() { return get_static_field<"KEY_VOLTE_REPLACEMENT_RAT_INT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_VVM_CELLULAR_DATA_REQUIRED_BOOL() { return get_static_field<"KEY_VVM_CELLULAR_DATA_REQUIRED_BOOL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_VVM_CLIENT_PREFIX_STRING() { return get_static_field<"KEY_VVM_CLIENT_PREFIX_STRING", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_VVM_DESTINATION_NUMBER_STRING() { return get_static_field<"KEY_VVM_DESTINATION_NUMBER_STRING", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_VVM_DISABLED_CAPABILITIES_STRING_ARRAY() { return get_static_field<"KEY_VVM_DISABLED_CAPABILITIES_STRING_ARRAY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_VVM_LEGACY_MODE_ENABLED_BOOL() { return get_static_field<"KEY_VVM_LEGACY_MODE_ENABLED_BOOL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_VVM_PORT_NUMBER_INT() { return get_static_field<"KEY_VVM_PORT_NUMBER_INT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_VVM_PREFETCH_BOOL() { return get_static_field<"KEY_VVM_PREFETCH_BOOL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_VVM_SSL_ENABLED_BOOL() { return get_static_field<"KEY_VVM_SSL_ENABLED_BOOL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_VVM_TYPE_STRING() { return get_static_field<"KEY_VVM_TYPE_STRING", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_WORLD_PHONE_BOOL() { return get_static_field<"KEY_WORLD_PHONE_BOOL", jni::ref<java::lang::String>>(); }

	jni::ref<android::os::PersistableBundle> getConfigForSubId(jint subId) { return call_method<"getConfigForSubId", jni::ref<android::os::PersistableBundle>>(subId); }
	jni::ref<android::os::PersistableBundle> getConfig() { return call_method<"getConfig", jni::ref<android::os::PersistableBundle>>(); }
	void notifyConfigChangedForSubId(jint subId) { return call_method<"notifyConfigChangedForSubId", void>(subId); }

protected:

	CarrierConfigManager(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELEPHONY_CARRIERCONFIGMANAGER
