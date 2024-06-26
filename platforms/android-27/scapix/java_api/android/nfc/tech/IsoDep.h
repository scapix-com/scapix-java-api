// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/nfc/tech/BasicTagTechnology.h>

#ifndef SCAPIX_JAVA_API_ANDROID_NFC_TECH_ISODEP_FWD
#define SCAPIX_JAVA_API_ANDROID_NFC_TECH_ISODEP_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::nfc::tech { class IsoDep; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::nfc::tech::IsoDep>
{
	static constexpr fixed_string class_name = "android/nfc/tech/IsoDep";
	using base_classes = std::tuple<scapix::java_api::android::nfc::tech::BasicTagTechnology>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NFC_TECH_ISODEP_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_NFC_TECH_ISODEP)
#define SCAPIX_JAVA_API_ANDROID_NFC_TECH_ISODEP

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/nfc/Tag.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::nfc::tech::IsoDep : public jni::object_base<"android/nfc/tech/IsoDep",
	android::nfc::tech::BasicTagTechnology>
{
public:

	static jni::ref<android::nfc::tech::IsoDep> get(jni::ref<android::nfc::Tag> tag) { return call_static_method<"get", jni::ref<android::nfc::tech::IsoDep>>(tag); }
	void setTimeout(jint timeout) { return call_method<"setTimeout", void>(timeout); }
	jint getTimeout() { return call_method<"getTimeout", jint>(); }
	jni::ref<jni::array<jbyte>> getHistoricalBytes() { return call_method<"getHistoricalBytes", jni::ref<jni::array<jbyte>>>(); }
	jni::ref<jni::array<jbyte>> getHiLayerResponse() { return call_method<"getHiLayerResponse", jni::ref<jni::array<jbyte>>>(); }
	jni::ref<jni::array<jbyte>> transceive(jni::ref<jni::array<jbyte>> data) { return call_method<"transceive", jni::ref<jni::array<jbyte>>>(data); }
	jint getMaxTransceiveLength() { return call_method<"getMaxTransceiveLength", jint>(); }
	jboolean isExtendedLengthApduSupported() { return call_method<"isExtendedLengthApduSupported", jboolean>(); }

protected:

	IsoDep(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NFC_TECH_ISODEP
