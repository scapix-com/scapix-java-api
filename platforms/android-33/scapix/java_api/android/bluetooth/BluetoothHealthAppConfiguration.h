// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_BLUETOOTH_BLUETOOTHHEALTHAPPCONFIGURATION_FWD
#define SCAPIX_JAVA_API_ANDROID_BLUETOOTH_BLUETOOTHHEALTHAPPCONFIGURATION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::bluetooth { class BluetoothHealthAppConfiguration; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::bluetooth::BluetoothHealthAppConfiguration>
{
	static constexpr fixed_string class_name = "android/bluetooth/BluetoothHealthAppConfiguration";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_BLUETOOTH_BLUETOOTHHEALTHAPPCONFIGURATION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_BLUETOOTH_BLUETOOTHHEALTHAPPCONFIGURATION)
#define SCAPIX_JAVA_API_ANDROID_BLUETOOTH_BLUETOOTHHEALTHAPPCONFIGURATION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::bluetooth::BluetoothHealthAppConfiguration : public jni::object_base<"android/bluetooth/BluetoothHealthAppConfiguration",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }

	jint describeContents() { return call_method<"describeContents", jint>(); }
	jint getDataType() { return call_method<"getDataType", jint>(); }
	jni::ref<java::lang::String> getName() { return call_method<"getName", jni::ref<java::lang::String>>(); }
	jint getRole() { return call_method<"getRole", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> out, jint flags) { return call_method<"writeToParcel", void>(out, flags); }

protected:

	BluetoothHealthAppConfiguration(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_BLUETOOTH_BLUETOOTHHEALTHAPPCONFIGURATION
