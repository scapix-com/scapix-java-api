// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/nfc/tech/BasicTagTechnology.h>

#ifndef SCAPIX_JAVA_API_ANDROID_NFC_TECH_NFCBARCODE_FWD
#define SCAPIX_JAVA_API_ANDROID_NFC_TECH_NFCBARCODE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::nfc::tech { class NfcBarcode; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::nfc::tech::NfcBarcode>
{
	static constexpr fixed_string class_name = "android/nfc/tech/NfcBarcode";
	using base_classes = std::tuple<scapix::java_api::android::nfc::tech::BasicTagTechnology>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NFC_TECH_NFCBARCODE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_NFC_TECH_NFCBARCODE)
#define SCAPIX_JAVA_API_ANDROID_NFC_TECH_NFCBARCODE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/nfc/Tag.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::nfc::tech::NfcBarcode : public jni::object_base<"android/nfc/tech/NfcBarcode",
	android::nfc::tech::BasicTagTechnology>
{
public:

	static jint TYPE_KOVIO() { return get_static_field<"TYPE_KOVIO", jint>(); }
	static jint TYPE_UNKNOWN() { return get_static_field<"TYPE_UNKNOWN", jint>(); }

	static jni::ref<android::nfc::tech::NfcBarcode> get(jni::ref<android::nfc::Tag> tag) { return call_static_method<"get", jni::ref<android::nfc::tech::NfcBarcode>>(tag); }
	jint getType() { return call_method<"getType", jint>(); }
	jni::ref<jni::array<jbyte>> getBarcode() { return call_method<"getBarcode", jni::ref<jni::array<jbyte>>>(); }

protected:

	NfcBarcode(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NFC_TECH_NFCBARCODE