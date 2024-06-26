// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_BLUETOOTH_LE_SCANRESULT_FWD
#define SCAPIX_JAVA_API_ANDROID_BLUETOOTH_LE_SCANRESULT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::bluetooth::le { class ScanResult; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::bluetooth::le::ScanResult>
{
	static constexpr fixed_string class_name = "android/bluetooth/le/ScanResult";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_BLUETOOTH_LE_SCANRESULT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_BLUETOOTH_LE_SCANRESULT)
#define SCAPIX_JAVA_API_ANDROID_BLUETOOTH_LE_SCANRESULT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/bluetooth/BluetoothDevice.h>
#include <scapix/java_api/android/bluetooth/le/ScanRecord.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::bluetooth::le::ScanResult : public jni::object_base<"android/bluetooth/le/ScanResult",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }

	static jni::ref<android::bluetooth::le::ScanResult> new_object(jni::ref<android::bluetooth::BluetoothDevice> device, jni::ref<android::bluetooth::le::ScanRecord> scanRecord, jint rssi, jlong timestampNanos) { return base_::new_object(device, scanRecord, rssi, timestampNanos); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	jni::ref<android::bluetooth::BluetoothDevice> getDevice() { return call_method<"getDevice", jni::ref<android::bluetooth::BluetoothDevice>>(); }
	jni::ref<android::bluetooth::le::ScanRecord> getScanRecord() { return call_method<"getScanRecord", jni::ref<android::bluetooth::le::ScanRecord>>(); }
	jint getRssi() { return call_method<"getRssi", jint>(); }
	jlong getTimestampNanos() { return call_method<"getTimestampNanos", jlong>(); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> obj) { return call_method<"equals", jboolean>(obj); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	ScanResult(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_BLUETOOTH_LE_SCANRESULT
