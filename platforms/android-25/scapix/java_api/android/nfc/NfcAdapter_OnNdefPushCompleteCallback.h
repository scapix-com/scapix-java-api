// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_NFC_NFCADAPTER_ONNDEFPUSHCOMPLETECALLBACK_FWD
#define SCAPIX_JAVA_API_ANDROID_NFC_NFCADAPTER_ONNDEFPUSHCOMPLETECALLBACK_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::nfc { class NfcAdapter_OnNdefPushCompleteCallback; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::nfc::NfcAdapter_OnNdefPushCompleteCallback>
{
	static constexpr fixed_string class_name = "android/nfc/NfcAdapter$OnNdefPushCompleteCallback";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NFC_NFCADAPTER_ONNDEFPUSHCOMPLETECALLBACK_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_NFC_NFCADAPTER_ONNDEFPUSHCOMPLETECALLBACK)
#define SCAPIX_JAVA_API_ANDROID_NFC_NFCADAPTER_ONNDEFPUSHCOMPLETECALLBACK

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/nfc/NfcEvent.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::nfc::NfcAdapter_OnNdefPushCompleteCallback : public jni::object_base<"android/nfc/NfcAdapter$OnNdefPushCompleteCallback",
	java::lang::Object>
{
public:

	void onNdefPushComplete(jni::ref<android::nfc::NfcEvent> p1) { return call_method<"onNdefPushComplete", void>(p1); }

protected:

	NfcAdapter_OnNdefPushCompleteCallback(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NFC_NFCADAPTER_ONNDEFPUSHCOMPLETECALLBACK
