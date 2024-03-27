// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_TELEPHONY_SMSMANAGER_FWD
#define SCAPIX_JAVA_API_ANDROID_TELEPHONY_SMSMANAGER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::telephony { class SmsManager; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::telephony::SmsManager>
{
	static constexpr fixed_string class_name = "android/telephony/SmsManager";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELEPHONY_SMSMANAGER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_TELEPHONY_SMSMANAGER)
#define SCAPIX_JAVA_API_ANDROID_TELEPHONY_SMSMANAGER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/app/PendingIntent.h>
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/android/telephony/SmsManager_FinancialSmsCallback.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/ArrayList.h>
#include <scapix/java_api/java/util/concurrent/Executor.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::telephony::SmsManager : public jni::object_base<"android/telephony/SmsManager",
	java::lang::Object>
{
public:

	using FinancialSmsCallback = SmsManager_FinancialSmsCallback;

	static jni::ref<java::lang::String> EXTRA_MMS_DATA() { return get_static_field<"EXTRA_MMS_DATA", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_MMS_HTTP_STATUS() { return get_static_field<"EXTRA_MMS_HTTP_STATUS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> MMS_CONFIG_ALIAS_ENABLED() { return get_static_field<"MMS_CONFIG_ALIAS_ENABLED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> MMS_CONFIG_ALIAS_MAX_CHARS() { return get_static_field<"MMS_CONFIG_ALIAS_MAX_CHARS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> MMS_CONFIG_ALIAS_MIN_CHARS() { return get_static_field<"MMS_CONFIG_ALIAS_MIN_CHARS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> MMS_CONFIG_ALLOW_ATTACH_AUDIO() { return get_static_field<"MMS_CONFIG_ALLOW_ATTACH_AUDIO", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> MMS_CONFIG_APPEND_TRANSACTION_ID() { return get_static_field<"MMS_CONFIG_APPEND_TRANSACTION_ID", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> MMS_CONFIG_EMAIL_GATEWAY_NUMBER() { return get_static_field<"MMS_CONFIG_EMAIL_GATEWAY_NUMBER", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> MMS_CONFIG_GROUP_MMS_ENABLED() { return get_static_field<"MMS_CONFIG_GROUP_MMS_ENABLED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> MMS_CONFIG_HTTP_PARAMS() { return get_static_field<"MMS_CONFIG_HTTP_PARAMS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> MMS_CONFIG_HTTP_SOCKET_TIMEOUT() { return get_static_field<"MMS_CONFIG_HTTP_SOCKET_TIMEOUT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> MMS_CONFIG_MAX_IMAGE_HEIGHT() { return get_static_field<"MMS_CONFIG_MAX_IMAGE_HEIGHT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> MMS_CONFIG_MAX_IMAGE_WIDTH() { return get_static_field<"MMS_CONFIG_MAX_IMAGE_WIDTH", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> MMS_CONFIG_MAX_MESSAGE_SIZE() { return get_static_field<"MMS_CONFIG_MAX_MESSAGE_SIZE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> MMS_CONFIG_MESSAGE_TEXT_MAX_SIZE() { return get_static_field<"MMS_CONFIG_MESSAGE_TEXT_MAX_SIZE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> MMS_CONFIG_MMS_DELIVERY_REPORT_ENABLED() { return get_static_field<"MMS_CONFIG_MMS_DELIVERY_REPORT_ENABLED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> MMS_CONFIG_MMS_ENABLED() { return get_static_field<"MMS_CONFIG_MMS_ENABLED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> MMS_CONFIG_MMS_READ_REPORT_ENABLED() { return get_static_field<"MMS_CONFIG_MMS_READ_REPORT_ENABLED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> MMS_CONFIG_MULTIPART_SMS_ENABLED() { return get_static_field<"MMS_CONFIG_MULTIPART_SMS_ENABLED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> MMS_CONFIG_NAI_SUFFIX() { return get_static_field<"MMS_CONFIG_NAI_SUFFIX", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> MMS_CONFIG_NOTIFY_WAP_MMSC_ENABLED() { return get_static_field<"MMS_CONFIG_NOTIFY_WAP_MMSC_ENABLED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> MMS_CONFIG_RECIPIENT_LIMIT() { return get_static_field<"MMS_CONFIG_RECIPIENT_LIMIT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> MMS_CONFIG_SEND_MULTIPART_SMS_AS_SEPARATE_MESSAGES() { return get_static_field<"MMS_CONFIG_SEND_MULTIPART_SMS_AS_SEPARATE_MESSAGES", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> MMS_CONFIG_SHOW_CELL_BROADCAST_APP_LINKS() { return get_static_field<"MMS_CONFIG_SHOW_CELL_BROADCAST_APP_LINKS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> MMS_CONFIG_SMS_DELIVERY_REPORT_ENABLED() { return get_static_field<"MMS_CONFIG_SMS_DELIVERY_REPORT_ENABLED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> MMS_CONFIG_SMS_TO_MMS_TEXT_LENGTH_THRESHOLD() { return get_static_field<"MMS_CONFIG_SMS_TO_MMS_TEXT_LENGTH_THRESHOLD", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> MMS_CONFIG_SMS_TO_MMS_TEXT_THRESHOLD() { return get_static_field<"MMS_CONFIG_SMS_TO_MMS_TEXT_THRESHOLD", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> MMS_CONFIG_SUBJECT_MAX_LENGTH() { return get_static_field<"MMS_CONFIG_SUBJECT_MAX_LENGTH", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> MMS_CONFIG_SUPPORT_HTTP_CHARSET_HEADER() { return get_static_field<"MMS_CONFIG_SUPPORT_HTTP_CHARSET_HEADER", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> MMS_CONFIG_SUPPORT_MMS_CONTENT_DISPOSITION() { return get_static_field<"MMS_CONFIG_SUPPORT_MMS_CONTENT_DISPOSITION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> MMS_CONFIG_UA_PROF_TAG_NAME() { return get_static_field<"MMS_CONFIG_UA_PROF_TAG_NAME", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> MMS_CONFIG_UA_PROF_URL() { return get_static_field<"MMS_CONFIG_UA_PROF_URL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> MMS_CONFIG_USER_AGENT() { return get_static_field<"MMS_CONFIG_USER_AGENT", jni::ref<java::lang::String>>(); }
	static jint MMS_ERROR_CONFIGURATION_ERROR() { return get_static_field<"MMS_ERROR_CONFIGURATION_ERROR", jint>(); }
	static jint MMS_ERROR_HTTP_FAILURE() { return get_static_field<"MMS_ERROR_HTTP_FAILURE", jint>(); }
	static jint MMS_ERROR_INVALID_APN() { return get_static_field<"MMS_ERROR_INVALID_APN", jint>(); }
	static jint MMS_ERROR_IO_ERROR() { return get_static_field<"MMS_ERROR_IO_ERROR", jint>(); }
	static jint MMS_ERROR_NO_DATA_NETWORK() { return get_static_field<"MMS_ERROR_NO_DATA_NETWORK", jint>(); }
	static jint MMS_ERROR_RETRY() { return get_static_field<"MMS_ERROR_RETRY", jint>(); }
	static jint MMS_ERROR_UNABLE_CONNECT_MMS() { return get_static_field<"MMS_ERROR_UNABLE_CONNECT_MMS", jint>(); }
	static jint MMS_ERROR_UNSPECIFIED() { return get_static_field<"MMS_ERROR_UNSPECIFIED", jint>(); }
	static jint RESULT_ERROR_GENERIC_FAILURE() { return get_static_field<"RESULT_ERROR_GENERIC_FAILURE", jint>(); }
	static jint RESULT_ERROR_LIMIT_EXCEEDED() { return get_static_field<"RESULT_ERROR_LIMIT_EXCEEDED", jint>(); }
	static jint RESULT_ERROR_NO_SERVICE() { return get_static_field<"RESULT_ERROR_NO_SERVICE", jint>(); }
	static jint RESULT_ERROR_NULL_PDU() { return get_static_field<"RESULT_ERROR_NULL_PDU", jint>(); }
	static jint RESULT_ERROR_RADIO_OFF() { return get_static_field<"RESULT_ERROR_RADIO_OFF", jint>(); }
	static jint RESULT_ERROR_SHORT_CODE_NEVER_ALLOWED() { return get_static_field<"RESULT_ERROR_SHORT_CODE_NEVER_ALLOWED", jint>(); }
	static jint RESULT_ERROR_SHORT_CODE_NOT_ALLOWED() { return get_static_field<"RESULT_ERROR_SHORT_CODE_NOT_ALLOWED", jint>(); }
	static jint STATUS_ON_ICC_FREE() { return get_static_field<"STATUS_ON_ICC_FREE", jint>(); }
	static jint STATUS_ON_ICC_READ() { return get_static_field<"STATUS_ON_ICC_READ", jint>(); }
	static jint STATUS_ON_ICC_SENT() { return get_static_field<"STATUS_ON_ICC_SENT", jint>(); }
	static jint STATUS_ON_ICC_UNREAD() { return get_static_field<"STATUS_ON_ICC_UNREAD", jint>(); }
	static jint STATUS_ON_ICC_UNSENT() { return get_static_field<"STATUS_ON_ICC_UNSENT", jint>(); }

	void sendTextMessage(jni::ref<java::lang::String> destinationAddress, jni::ref<java::lang::String> scAddress, jni::ref<java::lang::String> text, jni::ref<android::app::PendingIntent> sentIntent, jni::ref<android::app::PendingIntent> deliveryIntent) { return call_method<"sendTextMessage", void>(destinationAddress, scAddress, text, sentIntent, deliveryIntent); }
	void sendTextMessageWithoutPersisting(jni::ref<java::lang::String> destinationAddress, jni::ref<java::lang::String> scAddress, jni::ref<java::lang::String> text, jni::ref<android::app::PendingIntent> sentIntent, jni::ref<android::app::PendingIntent> deliveryIntent) { return call_method<"sendTextMessageWithoutPersisting", void>(destinationAddress, scAddress, text, sentIntent, deliveryIntent); }
	void injectSmsPdu(jni::ref<jni::array<jbyte>> pdu, jni::ref<java::lang::String> format, jni::ref<android::app::PendingIntent> receivedIntent) { return call_method<"injectSmsPdu", void>(pdu, format, receivedIntent); }
	jni::ref<java::util::ArrayList> divideMessage(jni::ref<java::lang::String> text) { return call_method<"divideMessage", jni::ref<java::util::ArrayList>>(text); }
	void sendMultipartTextMessage(jni::ref<java::lang::String> destinationAddress, jni::ref<java::lang::String> scAddress, jni::ref<java::util::ArrayList> parts, jni::ref<java::util::ArrayList> sentIntents, jni::ref<java::util::ArrayList> deliveryIntents) { return call_method<"sendMultipartTextMessage", void>(destinationAddress, scAddress, parts, sentIntents, deliveryIntents); }
	void sendDataMessage(jni::ref<java::lang::String> destinationAddress, jni::ref<java::lang::String> scAddress, jshort destinationPort, jni::ref<jni::array<jbyte>> data, jni::ref<android::app::PendingIntent> sentIntent, jni::ref<android::app::PendingIntent> deliveryIntent) { return call_method<"sendDataMessage", void>(destinationAddress, scAddress, destinationPort, data, sentIntent, deliveryIntent); }
	static jni::ref<android::telephony::SmsManager> getDefault() { return call_static_method<"getDefault", jni::ref<android::telephony::SmsManager>>(); }
	static jni::ref<android::telephony::SmsManager> getSmsManagerForSubscriptionId(jint subId) { return call_static_method<"getSmsManagerForSubscriptionId", jni::ref<android::telephony::SmsManager>>(subId); }
	jint getSubscriptionId() { return call_method<"getSubscriptionId", jint>(); }
	static jint getDefaultSmsSubscriptionId() { return call_static_method<"getDefaultSmsSubscriptionId", jint>(); }
	void sendMultimediaMessage(jni::ref<android::content::Context> context, jni::ref<android::net::Uri> contentUri, jni::ref<java::lang::String> locationUrl, jni::ref<android::os::Bundle> configOverrides, jni::ref<android::app::PendingIntent> sentIntent) { return call_method<"sendMultimediaMessage", void>(context, contentUri, locationUrl, configOverrides, sentIntent); }
	void downloadMultimediaMessage(jni::ref<android::content::Context> context, jni::ref<java::lang::String> locationUrl, jni::ref<android::net::Uri> contentUri, jni::ref<android::os::Bundle> configOverrides, jni::ref<android::app::PendingIntent> downloadedIntent) { return call_method<"downloadMultimediaMessage", void>(context, locationUrl, contentUri, configOverrides, downloadedIntent); }
	jni::ref<android::os::Bundle> getCarrierConfigValues() { return call_method<"getCarrierConfigValues", jni::ref<android::os::Bundle>>(); }
	jni::ref<java::lang::String> createAppSpecificSmsToken(jni::ref<android::app::PendingIntent> intent) { return call_method<"createAppSpecificSmsToken", jni::ref<java::lang::String>>(intent); }
	void getSmsMessagesForFinancialApp(jni::ref<android::os::Bundle> params, jni::ref<java::util::concurrent::Executor> executor, jni::ref<android::telephony::SmsManager_FinancialSmsCallback> callback) { return call_method<"getSmsMessagesForFinancialApp", void>(params, executor, callback); }
	jni::ref<java::lang::String> createAppSpecificSmsTokenWithPackageInfo(jni::ref<java::lang::String> prefixes, jni::ref<android::app::PendingIntent> intent) { return call_method<"createAppSpecificSmsTokenWithPackageInfo", jni::ref<java::lang::String>>(prefixes, intent); }

protected:

	SmsManager(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELEPHONY_SMSMANAGER
