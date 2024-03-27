// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_TELEPHONY_GSM_SMSMESSAGE_SUBMITPDU_FWD
#define SCAPIX_JAVA_API_ANDROID_TELEPHONY_GSM_SMSMESSAGE_SUBMITPDU_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::telephony::gsm { class SmsMessage_SubmitPdu; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::telephony::gsm::SmsMessage_SubmitPdu>
{
	static constexpr fixed_string class_name = "android/telephony/gsm/SmsMessage$SubmitPdu";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELEPHONY_GSM_SMSMESSAGE_SUBMITPDU_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_TELEPHONY_GSM_SMSMESSAGE_SUBMITPDU)
#define SCAPIX_JAVA_API_ANDROID_TELEPHONY_GSM_SMSMESSAGE_SUBMITPDU

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::telephony::gsm::SmsMessage_SubmitPdu : public jni::object_base<"android/telephony/gsm/SmsMessage$SubmitPdu",
	java::lang::Object>
{
public:

	jni::ref<jni::array<jbyte>> encodedMessage() { return get_field<"encodedMessage", jni::ref<jni::array<jbyte>>>(); }
	void encodedMessage(jni::ref<jni::array<jbyte>> v) { set_field<"encodedMessage", jni::ref<jni::array<jbyte>>>(v); }
	jni::ref<jni::array<jbyte>> encodedScAddress() { return get_field<"encodedScAddress", jni::ref<jni::array<jbyte>>>(); }
	void encodedScAddress(jni::ref<jni::array<jbyte>> v) { set_field<"encodedScAddress", jni::ref<jni::array<jbyte>>>(v); }

	static jni::ref<android::telephony::gsm::SmsMessage_SubmitPdu> new_object() { return base_::new_object(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	SmsMessage_SubmitPdu(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELEPHONY_GSM_SMSMESSAGE_SUBMITPDU