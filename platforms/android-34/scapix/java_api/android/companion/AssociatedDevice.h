// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_COMPANION_ASSOCIATEDDEVICE_FWD
#define SCAPIX_JAVA_API_ANDROID_COMPANION_ASSOCIATEDDEVICE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::companion { class AssociatedDevice; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::companion::AssociatedDevice>
{
	static constexpr fixed_string class_name = "android/companion/AssociatedDevice";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_COMPANION_ASSOCIATEDDEVICE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_COMPANION_ASSOCIATEDDEVICE)
#define SCAPIX_JAVA_API_ANDROID_COMPANION_ASSOCIATEDDEVICE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/bluetooth/BluetoothDevice.h>
#include <scapix/java_api/android/bluetooth/le/ScanResult.h>
#include <scapix/java_api/android/net/wifi/ScanResult.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::companion::AssociatedDevice : public jni::object_base<"android/companion/AssociatedDevice",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }

	jni::ref<android::bluetooth::BluetoothDevice> getBluetoothDevice() { return call_method<"getBluetoothDevice", jni::ref<android::bluetooth::BluetoothDevice>>(); }
	jni::ref<android::bluetooth::le::ScanResult> getBleDevice() { return call_method<"getBleDevice", jni::ref<android::bluetooth::le::ScanResult>>(); }
	jni::ref<android::net::wifi::ScanResult> getWifiDevice() { return call_method<"getWifiDevice", jni::ref<android::net::wifi::ScanResult>>(); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jint hashCode() { return call_method<"hashCode", jint>(); }

protected:

	AssociatedDevice(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_COMPANION_ASSOCIATEDDEVICE
