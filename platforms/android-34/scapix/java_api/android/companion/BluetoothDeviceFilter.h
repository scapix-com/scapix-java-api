// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/companion/DeviceFilter.h>

#ifndef SCAPIX_JAVA_API_ANDROID_COMPANION_BLUETOOTHDEVICEFILTER_FWD
#define SCAPIX_JAVA_API_ANDROID_COMPANION_BLUETOOTHDEVICEFILTER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::companion { class BluetoothDeviceFilter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::companion::BluetoothDeviceFilter>
{
	static constexpr fixed_string class_name = "android/companion/BluetoothDeviceFilter";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::companion::DeviceFilter>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_COMPANION_BLUETOOTHDEVICEFILTER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_COMPANION_BLUETOOTHDEVICEFILTER)
#define SCAPIX_JAVA_API_ANDROID_COMPANION_BLUETOOTHDEVICEFILTER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/android/companion/BluetoothDeviceFilter_Builder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::companion::BluetoothDeviceFilter : public jni::object_base<"android/companion/BluetoothDeviceFilter",
	java::lang::Object,
	android::companion::DeviceFilter>
{
public:

	using Builder = BluetoothDeviceFilter_Builder;

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }

	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jint describeContents() { return call_method<"describeContents", jint>(); }

protected:

	BluetoothDeviceFilter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_COMPANION_BLUETOOTHDEVICEFILTER