// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_BLUETOOTH_BLUETOOTHCLASS_FWD
#define SCAPIX_JAVA_API_ANDROID_BLUETOOTH_BLUETOOTHCLASS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::bluetooth { class BluetoothClass; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::bluetooth::BluetoothClass>
{
	static constexpr fixed_string class_name = "android/bluetooth/BluetoothClass";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_BLUETOOTH_BLUETOOTHCLASS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_BLUETOOTH_BLUETOOTHCLASS)
#define SCAPIX_JAVA_API_ANDROID_BLUETOOTH_BLUETOOTHCLASS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/android/bluetooth/BluetoothClass_Service.h>
#include <scapix/java_api/android/bluetooth/BluetoothClass_Device.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::bluetooth::BluetoothClass : public jni::object_base<"android/bluetooth/BluetoothClass",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	using Service = BluetoothClass_Service;
	using Device = BluetoothClass_Device;

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }

	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> out, jint flags) { return call_method<"writeToParcel", void>(out, flags); }
	jboolean hasService(jint service) { return call_method<"hasService", jboolean>(service); }
	jint getMajorDeviceClass() { return call_method<"getMajorDeviceClass", jint>(); }
	jint getDeviceClass() { return call_method<"getDeviceClass", jint>(); }

protected:

	BluetoothClass(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_BLUETOOTH_BLUETOOTHCLASS
