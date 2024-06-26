// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_NFC_NDEFRECORD_FWD
#define SCAPIX_JAVA_API_ANDROID_NFC_NDEFRECORD_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::nfc { class NdefRecord; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::nfc::NdefRecord>
{
	static constexpr fixed_string class_name = "android/nfc/NdefRecord";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NFC_NDEFRECORD_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_NFC_NDEFRECORD)
#define SCAPIX_JAVA_API_ANDROID_NFC_NDEFRECORD

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::nfc::NdefRecord : public jni::object_base<"android/nfc/NdefRecord",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }
	static jni::ref<jni::array<jbyte>> RTD_ALTERNATIVE_CARRIER() { return get_static_field<"RTD_ALTERNATIVE_CARRIER", jni::ref<jni::array<jbyte>>>(); }
	static jni::ref<jni::array<jbyte>> RTD_HANDOVER_CARRIER() { return get_static_field<"RTD_HANDOVER_CARRIER", jni::ref<jni::array<jbyte>>>(); }
	static jni::ref<jni::array<jbyte>> RTD_HANDOVER_REQUEST() { return get_static_field<"RTD_HANDOVER_REQUEST", jni::ref<jni::array<jbyte>>>(); }
	static jni::ref<jni::array<jbyte>> RTD_HANDOVER_SELECT() { return get_static_field<"RTD_HANDOVER_SELECT", jni::ref<jni::array<jbyte>>>(); }
	static jni::ref<jni::array<jbyte>> RTD_SMART_POSTER() { return get_static_field<"RTD_SMART_POSTER", jni::ref<jni::array<jbyte>>>(); }
	static jni::ref<jni::array<jbyte>> RTD_TEXT() { return get_static_field<"RTD_TEXT", jni::ref<jni::array<jbyte>>>(); }
	static jni::ref<jni::array<jbyte>> RTD_URI() { return get_static_field<"RTD_URI", jni::ref<jni::array<jbyte>>>(); }
	static jshort TNF_ABSOLUTE_URI() { return get_static_field<"TNF_ABSOLUTE_URI", jshort>(); }
	static jshort TNF_EMPTY() { return get_static_field<"TNF_EMPTY", jshort>(); }
	static jshort TNF_EXTERNAL_TYPE() { return get_static_field<"TNF_EXTERNAL_TYPE", jshort>(); }
	static jshort TNF_MIME_MEDIA() { return get_static_field<"TNF_MIME_MEDIA", jshort>(); }
	static jshort TNF_UNCHANGED() { return get_static_field<"TNF_UNCHANGED", jshort>(); }
	static jshort TNF_UNKNOWN() { return get_static_field<"TNF_UNKNOWN", jshort>(); }
	static jshort TNF_WELL_KNOWN() { return get_static_field<"TNF_WELL_KNOWN", jshort>(); }

	static jni::ref<android::nfc::NdefRecord> new_object(jshort tnf, jni::ref<jni::array<jbyte>> type, jni::ref<jni::array<jbyte>> id, jni::ref<jni::array<jbyte>> payload) { return base_::new_object(tnf, type, id, payload); }
	static jni::ref<android::nfc::NdefRecord> new_object(jni::ref<jni::array<jbyte>> data) { return base_::new_object(data); }
	static jni::ref<android::nfc::NdefRecord> createApplicationRecord(jni::ref<java::lang::String> packageName) { return call_static_method<"createApplicationRecord", jni::ref<android::nfc::NdefRecord>>(packageName); }
	static jni::ref<android::nfc::NdefRecord> createUri(jni::ref<android::net::Uri> uri) { return call_static_method<"createUri", jni::ref<android::nfc::NdefRecord>>(uri); }
	static jni::ref<android::nfc::NdefRecord> createUri(jni::ref<java::lang::String> uriString) { return call_static_method<"createUri", jni::ref<android::nfc::NdefRecord>>(uriString); }
	static jni::ref<android::nfc::NdefRecord> createMime(jni::ref<java::lang::String> mimeType, jni::ref<jni::array<jbyte>> mimeData) { return call_static_method<"createMime", jni::ref<android::nfc::NdefRecord>>(mimeType, mimeData); }
	static jni::ref<android::nfc::NdefRecord> createExternal(jni::ref<java::lang::String> domain, jni::ref<java::lang::String> type, jni::ref<jni::array<jbyte>> data) { return call_static_method<"createExternal", jni::ref<android::nfc::NdefRecord>>(domain, type, data); }
	static jni::ref<android::nfc::NdefRecord> createTextRecord(jni::ref<java::lang::String> languageCode, jni::ref<java::lang::String> text) { return call_static_method<"createTextRecord", jni::ref<android::nfc::NdefRecord>>(languageCode, text); }
	jshort getTnf() { return call_method<"getTnf", jshort>(); }
	jni::ref<jni::array<jbyte>> getType() { return call_method<"getType", jni::ref<jni::array<jbyte>>>(); }
	jni::ref<jni::array<jbyte>> getId() { return call_method<"getId", jni::ref<jni::array<jbyte>>>(); }
	jni::ref<jni::array<jbyte>> getPayload() { return call_method<"getPayload", jni::ref<jni::array<jbyte>>>(); }
	jni::ref<jni::array<jbyte>> toByteArray() { return call_method<"toByteArray", jni::ref<jni::array<jbyte>>>(); }
	jni::ref<java::lang::String> toMimeType() { return call_method<"toMimeType", jni::ref<java::lang::String>>(); }
	jni::ref<android::net::Uri> toUri() { return call_method<"toUri", jni::ref<android::net::Uri>>(); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> obj) { return call_method<"equals", jboolean>(obj); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	NdefRecord(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NFC_NDEFRECORD
