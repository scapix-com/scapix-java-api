// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_PROVIDER_TELEPHONY_SMS_INTENTS_FWD
#define SCAPIX_JAVA_API_ANDROID_PROVIDER_TELEPHONY_SMS_INTENTS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::provider { class Telephony_Sms_Intents; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::provider::Telephony_Sms_Intents>
{
	static constexpr fixed_string class_name = "android/provider/Telephony$Sms$Intents";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PROVIDER_TELEPHONY_SMS_INTENTS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_PROVIDER_TELEPHONY_SMS_INTENTS)
#define SCAPIX_JAVA_API_ANDROID_PROVIDER_TELEPHONY_SMS_INTENTS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/Intent.h>
#include <scapix/java_api/android/telephony/SmsMessage.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::provider::Telephony_Sms_Intents : public jni::object_base<"android/provider/Telephony$Sms$Intents",
	java::lang::Object>
{
public:

	static jni::ref<java::lang::String> ACTION_CHANGE_DEFAULT() { return get_static_field<"ACTION_CHANGE_DEFAULT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ACTION_DEFAULT_SMS_PACKAGE_CHANGED() { return get_static_field<"ACTION_DEFAULT_SMS_PACKAGE_CHANGED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ACTION_EXTERNAL_PROVIDER_CHANGE() { return get_static_field<"ACTION_EXTERNAL_PROVIDER_CHANGE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DATA_SMS_RECEIVED_ACTION() { return get_static_field<"DATA_SMS_RECEIVED_ACTION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_IS_DEFAULT_SMS_APP() { return get_static_field<"EXTRA_IS_DEFAULT_SMS_APP", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_PACKAGE_NAME() { return get_static_field<"EXTRA_PACKAGE_NAME", jni::ref<java::lang::String>>(); }
	static jint RESULT_SMS_DATABASE_ERROR() { return get_static_field<"RESULT_SMS_DATABASE_ERROR", jint>(); }
	static jint RESULT_SMS_DISPATCH_FAILURE() { return get_static_field<"RESULT_SMS_DISPATCH_FAILURE", jint>(); }
	static jint RESULT_SMS_DUPLICATED() { return get_static_field<"RESULT_SMS_DUPLICATED", jint>(); }
	static jint RESULT_SMS_GENERIC_ERROR() { return get_static_field<"RESULT_SMS_GENERIC_ERROR", jint>(); }
	static jint RESULT_SMS_HANDLED() { return get_static_field<"RESULT_SMS_HANDLED", jint>(); }
	static jint RESULT_SMS_INVALID_URI() { return get_static_field<"RESULT_SMS_INVALID_URI", jint>(); }
	static jint RESULT_SMS_NULL_MESSAGE() { return get_static_field<"RESULT_SMS_NULL_MESSAGE", jint>(); }
	static jint RESULT_SMS_NULL_PDU() { return get_static_field<"RESULT_SMS_NULL_PDU", jint>(); }
	static jint RESULT_SMS_OUT_OF_MEMORY() { return get_static_field<"RESULT_SMS_OUT_OF_MEMORY", jint>(); }
	static jint RESULT_SMS_RECEIVED_WHILE_ENCRYPTED() { return get_static_field<"RESULT_SMS_RECEIVED_WHILE_ENCRYPTED", jint>(); }
	static jint RESULT_SMS_UNSUPPORTED() { return get_static_field<"RESULT_SMS_UNSUPPORTED", jint>(); }
	static jni::ref<java::lang::String> SECRET_CODE_ACTION() { return get_static_field<"SECRET_CODE_ACTION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SIM_FULL_ACTION() { return get_static_field<"SIM_FULL_ACTION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SMS_CB_RECEIVED_ACTION() { return get_static_field<"SMS_CB_RECEIVED_ACTION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SMS_DELIVER_ACTION() { return get_static_field<"SMS_DELIVER_ACTION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SMS_RECEIVED_ACTION() { return get_static_field<"SMS_RECEIVED_ACTION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SMS_REJECTED_ACTION() { return get_static_field<"SMS_REJECTED_ACTION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SMS_SERVICE_CATEGORY_PROGRAM_DATA_RECEIVED_ACTION() { return get_static_field<"SMS_SERVICE_CATEGORY_PROGRAM_DATA_RECEIVED_ACTION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> WAP_PUSH_DELIVER_ACTION() { return get_static_field<"WAP_PUSH_DELIVER_ACTION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> WAP_PUSH_RECEIVED_ACTION() { return get_static_field<"WAP_PUSH_RECEIVED_ACTION", jni::ref<java::lang::String>>(); }

	static jni::ref<jni::array<android::telephony::SmsMessage>> getMessagesFromIntent(jni::ref<android::content::Intent> intent) { return call_static_method<"getMessagesFromIntent", jni::ref<jni::array<android::telephony::SmsMessage>>>(intent); }

protected:

	Telephony_Sms_Intents(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PROVIDER_TELEPHONY_SMS_INTENTS
