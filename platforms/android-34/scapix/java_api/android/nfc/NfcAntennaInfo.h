// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_NFC_NFCANTENNAINFO_FWD
#define SCAPIX_JAVA_API_ANDROID_NFC_NFCANTENNAINFO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::nfc { class NfcAntennaInfo; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::nfc::NfcAntennaInfo>
{
	static constexpr fixed_string class_name = "android/nfc/NfcAntennaInfo";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NFC_NFCANTENNAINFO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_NFC_NFCANTENNAINFO)
#define SCAPIX_JAVA_API_ANDROID_NFC_NFCANTENNAINFO

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::nfc::NfcAntennaInfo : public jni::object_base<"android/nfc/NfcAntennaInfo",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }

	static jni::ref<android::nfc::NfcAntennaInfo> new_object(jint deviceWidth, jint deviceHeight, jboolean deviceFoldable, jni::ref<java::util::List> availableNfcAntennas) { return base_::new_object(deviceWidth, deviceHeight, deviceFoldable, availableNfcAntennas); }
	jint getDeviceWidth() { return call_method<"getDeviceWidth", jint>(); }
	jint getDeviceHeight() { return call_method<"getDeviceHeight", jint>(); }
	jboolean isDeviceFoldable() { return call_method<"isDeviceFoldable", jboolean>(); }
	jni::ref<java::util::List> getAvailableNfcAntennas() { return call_method<"getAvailableNfcAntennas", jni::ref<java::util::List>>(); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }

protected:

	NfcAntennaInfo(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NFC_NFCANTENNAINFO
