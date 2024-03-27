// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/nfc/tech/BasicTagTechnology.h>

#ifndef SCAPIX_JAVA_API_ANDROID_NFC_TECH_NFCV_FWD
#define SCAPIX_JAVA_API_ANDROID_NFC_TECH_NFCV_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::nfc::tech { class NfcV; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::nfc::tech::NfcV>
{
	static constexpr fixed_string class_name = "android/nfc/tech/NfcV";
	using base_classes = std::tuple<scapix::java_api::android::nfc::tech::BasicTagTechnology>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NFC_TECH_NFCV_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_NFC_TECH_NFCV)
#define SCAPIX_JAVA_API_ANDROID_NFC_TECH_NFCV

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/nfc/Tag.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::nfc::tech::NfcV : public jni::object_base<"android/nfc/tech/NfcV",
	android::nfc::tech::BasicTagTechnology>
{
public:

	static jni::ref<android::nfc::tech::NfcV> get(jni::ref<android::nfc::Tag> tag) { return call_static_method<"get", jni::ref<android::nfc::tech::NfcV>>(tag); }
	jbyte getResponseFlags() { return call_method<"getResponseFlags", jbyte>(); }
	jbyte getDsfId() { return call_method<"getDsfId", jbyte>(); }
	jni::ref<jni::array<jbyte>> transceive(jni::ref<jni::array<jbyte>> data) { return call_method<"transceive", jni::ref<jni::array<jbyte>>>(data); }
	jint getMaxTransceiveLength() { return call_method<"getMaxTransceiveLength", jint>(); }

protected:

	NfcV(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NFC_TECH_NFCV