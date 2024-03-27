// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/nfc/tech/BasicTagTechnology.h>

#ifndef SCAPIX_JAVA_API_ANDROID_NFC_TECH_NFCB_FWD
#define SCAPIX_JAVA_API_ANDROID_NFC_TECH_NFCB_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::nfc::tech { class NfcB; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::nfc::tech::NfcB>
{
	static constexpr fixed_string class_name = "android/nfc/tech/NfcB";
	using base_classes = std::tuple<scapix::java_api::android::nfc::tech::BasicTagTechnology>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NFC_TECH_NFCB_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_NFC_TECH_NFCB)
#define SCAPIX_JAVA_API_ANDROID_NFC_TECH_NFCB

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/nfc/Tag.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::nfc::tech::NfcB : public jni::object_base<"android/nfc/tech/NfcB",
	android::nfc::tech::BasicTagTechnology>
{
public:

	static jni::ref<android::nfc::tech::NfcB> get(jni::ref<android::nfc::Tag> tag) { return call_static_method<"get", jni::ref<android::nfc::tech::NfcB>>(tag); }
	jni::ref<jni::array<jbyte>> getApplicationData() { return call_method<"getApplicationData", jni::ref<jni::array<jbyte>>>(); }
	jni::ref<jni::array<jbyte>> getProtocolInfo() { return call_method<"getProtocolInfo", jni::ref<jni::array<jbyte>>>(); }
	jni::ref<jni::array<jbyte>> transceive(jni::ref<jni::array<jbyte>> data) { return call_method<"transceive", jni::ref<jni::array<jbyte>>>(data); }
	jint getMaxTransceiveLength() { return call_method<"getMaxTransceiveLength", jint>(); }

protected:

	NfcB(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NFC_TECH_NFCB
