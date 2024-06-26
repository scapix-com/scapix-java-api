// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/nfc/tech/TagTechnology.h>

#ifndef SCAPIX_JAVA_API_ANDROID_NFC_TECH_NFCF_FWD
#define SCAPIX_JAVA_API_ANDROID_NFC_TECH_NFCF_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::nfc::tech { class NfcF; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::nfc::tech::NfcF>
{
	static constexpr fixed_string class_name = "android/nfc/tech/NfcF";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::nfc::tech::TagTechnology>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NFC_TECH_NFCF_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_NFC_TECH_NFCF)
#define SCAPIX_JAVA_API_ANDROID_NFC_TECH_NFCF

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/nfc/Tag.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::nfc::tech::NfcF : public jni::object_base<"android/nfc/tech/NfcF",
	java::lang::Object,
	android::nfc::tech::TagTechnology>
{
public:

	static jni::ref<android::nfc::tech::NfcF> get(jni::ref<android::nfc::Tag> tag) { return call_static_method<"get", jni::ref<android::nfc::tech::NfcF>>(tag); }
	jni::ref<jni::array<jbyte>> getSystemCode() { return call_method<"getSystemCode", jni::ref<jni::array<jbyte>>>(); }
	jni::ref<jni::array<jbyte>> getManufacturer() { return call_method<"getManufacturer", jni::ref<jni::array<jbyte>>>(); }
	jni::ref<jni::array<jbyte>> transceive(jni::ref<jni::array<jbyte>> data) { return call_method<"transceive", jni::ref<jni::array<jbyte>>>(data); }
	jint getMaxTransceiveLength() { return call_method<"getMaxTransceiveLength", jint>(); }
	void setTimeout(jint timeout) { return call_method<"setTimeout", void>(timeout); }
	jint getTimeout() { return call_method<"getTimeout", jint>(); }
	jboolean isConnected() { return call_method<"isConnected", jboolean>(); }
	jni::ref<android::nfc::Tag> getTag() { return call_method<"getTag", jni::ref<android::nfc::Tag>>(); }
	void close() { return call_method<"close", void>(); }
	void connect() { return call_method<"connect", void>(); }

protected:

	NfcF(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NFC_TECH_NFCF
