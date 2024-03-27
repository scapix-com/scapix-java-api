// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_BLUETOOTH_BLUETOOTHCLASS_DEVICE_MAJOR_FWD
#define SCAPIX_JAVA_API_ANDROID_BLUETOOTH_BLUETOOTHCLASS_DEVICE_MAJOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::bluetooth { class BluetoothClass_Device_Major; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::bluetooth::BluetoothClass_Device_Major>
{
	static constexpr fixed_string class_name = "android/bluetooth/BluetoothClass$Device$Major";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_BLUETOOTH_BLUETOOTHCLASS_DEVICE_MAJOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_BLUETOOTH_BLUETOOTHCLASS_DEVICE_MAJOR)
#define SCAPIX_JAVA_API_ANDROID_BLUETOOTH_BLUETOOTHCLASS_DEVICE_MAJOR

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::bluetooth::BluetoothClass_Device_Major : public jni::object_base<"android/bluetooth/BluetoothClass$Device$Major",
	java::lang::Object>
{
public:

	static jint AUDIO_VIDEO() { return get_static_field<"AUDIO_VIDEO", jint>(); }
	static jint COMPUTER() { return get_static_field<"COMPUTER", jint>(); }
	static jint HEALTH() { return get_static_field<"HEALTH", jint>(); }
	static jint IMAGING() { return get_static_field<"IMAGING", jint>(); }
	static jint MISC() { return get_static_field<"MISC", jint>(); }
	static jint NETWORKING() { return get_static_field<"NETWORKING", jint>(); }
	static jint PERIPHERAL() { return get_static_field<"PERIPHERAL", jint>(); }
	static jint PHONE() { return get_static_field<"PHONE", jint>(); }
	static jint TOY() { return get_static_field<"TOY", jint>(); }
	static jint UNCATEGORIZED() { return get_static_field<"UNCATEGORIZED", jint>(); }
	static jint WEARABLE() { return get_static_field<"WEARABLE", jint>(); }

	static jni::ref<android::bluetooth::BluetoothClass_Device_Major> new_object() { return base_::new_object(); }

protected:

	BluetoothClass_Device_Major(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_BLUETOOTH_BLUETOOTHCLASS_DEVICE_MAJOR