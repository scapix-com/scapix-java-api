// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_BLUETOOTH_BLUETOOTHPROFILE_FWD
#define SCAPIX_JAVA_API_ANDROID_BLUETOOTH_BLUETOOTHPROFILE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::bluetooth { class BluetoothProfile; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::bluetooth::BluetoothProfile>
{
	static constexpr fixed_string class_name = "android/bluetooth/BluetoothProfile";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_BLUETOOTH_BLUETOOTHPROFILE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_BLUETOOTH_BLUETOOTHPROFILE)
#define SCAPIX_JAVA_API_ANDROID_BLUETOOTH_BLUETOOTHPROFILE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/bluetooth/BluetoothDevice.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/android/bluetooth/BluetoothProfile_ServiceListener.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::bluetooth::BluetoothProfile : public jni::object_base<"android/bluetooth/BluetoothProfile",
	java::lang::Object>
{
public:

	using ServiceListener = BluetoothProfile_ServiceListener;

	static jint A2DP() { return get_static_field<"A2DP", jint>(); }
	static jni::ref<java::lang::String> EXTRA_PREVIOUS_STATE() { return get_static_field<"EXTRA_PREVIOUS_STATE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_STATE() { return get_static_field<"EXTRA_STATE", jni::ref<java::lang::String>>(); }
	static jint GATT() { return get_static_field<"GATT", jint>(); }
	static jint GATT_SERVER() { return get_static_field<"GATT_SERVER", jint>(); }
	static jint HEADSET() { return get_static_field<"HEADSET", jint>(); }
	static jint HEALTH() { return get_static_field<"HEALTH", jint>(); }
	static jint HID_DEVICE() { return get_static_field<"HID_DEVICE", jint>(); }
	static jint SAP() { return get_static_field<"SAP", jint>(); }
	static jint STATE_CONNECTED() { return get_static_field<"STATE_CONNECTED", jint>(); }
	static jint STATE_CONNECTING() { return get_static_field<"STATE_CONNECTING", jint>(); }
	static jint STATE_DISCONNECTED() { return get_static_field<"STATE_DISCONNECTED", jint>(); }
	static jint STATE_DISCONNECTING() { return get_static_field<"STATE_DISCONNECTING", jint>(); }

	jni::ref<java::util::List> getConnectedDevices() { return call_method<"getConnectedDevices", jni::ref<java::util::List>>(); }
	jni::ref<java::util::List> getDevicesMatchingConnectionStates(jni::ref<jni::array<jint>> p1) { return call_method<"getDevicesMatchingConnectionStates", jni::ref<java::util::List>>(p1); }
	jint getConnectionState(jni::ref<android::bluetooth::BluetoothDevice> p1) { return call_method<"getConnectionState", jint>(p1); }

protected:

	BluetoothProfile(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_BLUETOOTH_BLUETOOTHPROFILE