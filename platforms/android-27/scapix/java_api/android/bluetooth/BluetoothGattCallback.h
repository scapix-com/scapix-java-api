// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_BLUETOOTH_BLUETOOTHGATTCALLBACK_FWD
#define SCAPIX_JAVA_API_ANDROID_BLUETOOTH_BLUETOOTHGATTCALLBACK_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::bluetooth { class BluetoothGattCallback; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::bluetooth::BluetoothGattCallback>
{
	static constexpr fixed_string class_name = "android/bluetooth/BluetoothGattCallback";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_BLUETOOTH_BLUETOOTHGATTCALLBACK_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_BLUETOOTH_BLUETOOTHGATTCALLBACK)
#define SCAPIX_JAVA_API_ANDROID_BLUETOOTH_BLUETOOTHGATTCALLBACK

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/bluetooth/BluetoothGatt.h>
#include <scapix/java_api/android/bluetooth/BluetoothGattCharacteristic.h>
#include <scapix/java_api/android/bluetooth/BluetoothGattDescriptor.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::bluetooth::BluetoothGattCallback : public jni::object_base<"android/bluetooth/BluetoothGattCallback",
	java::lang::Object>
{
public:

	static jni::ref<android::bluetooth::BluetoothGattCallback> new_object() { return base_::new_object(); }
	void onPhyUpdate(jni::ref<android::bluetooth::BluetoothGatt> gatt, jint txPhy, jint rxPhy, jint status) { return call_method<"onPhyUpdate", void>(gatt, txPhy, rxPhy, status); }
	void onPhyRead(jni::ref<android::bluetooth::BluetoothGatt> gatt, jint txPhy, jint rxPhy, jint status) { return call_method<"onPhyRead", void>(gatt, txPhy, rxPhy, status); }
	void onConnectionStateChange(jni::ref<android::bluetooth::BluetoothGatt> gatt, jint status, jint newState) { return call_method<"onConnectionStateChange", void>(gatt, status, newState); }
	void onServicesDiscovered(jni::ref<android::bluetooth::BluetoothGatt> gatt, jint status) { return call_method<"onServicesDiscovered", void>(gatt, status); }
	void onCharacteristicRead(jni::ref<android::bluetooth::BluetoothGatt> gatt, jni::ref<android::bluetooth::BluetoothGattCharacteristic> characteristic, jint status) { return call_method<"onCharacteristicRead", void>(gatt, characteristic, status); }
	void onCharacteristicWrite(jni::ref<android::bluetooth::BluetoothGatt> gatt, jni::ref<android::bluetooth::BluetoothGattCharacteristic> characteristic, jint status) { return call_method<"onCharacteristicWrite", void>(gatt, characteristic, status); }
	void onCharacteristicChanged(jni::ref<android::bluetooth::BluetoothGatt> gatt, jni::ref<android::bluetooth::BluetoothGattCharacteristic> characteristic) { return call_method<"onCharacteristicChanged", void>(gatt, characteristic); }
	void onDescriptorRead(jni::ref<android::bluetooth::BluetoothGatt> gatt, jni::ref<android::bluetooth::BluetoothGattDescriptor> descriptor, jint status) { return call_method<"onDescriptorRead", void>(gatt, descriptor, status); }
	void onDescriptorWrite(jni::ref<android::bluetooth::BluetoothGatt> gatt, jni::ref<android::bluetooth::BluetoothGattDescriptor> descriptor, jint status) { return call_method<"onDescriptorWrite", void>(gatt, descriptor, status); }
	void onReliableWriteCompleted(jni::ref<android::bluetooth::BluetoothGatt> gatt, jint status) { return call_method<"onReliableWriteCompleted", void>(gatt, status); }
	void onReadRemoteRssi(jni::ref<android::bluetooth::BluetoothGatt> gatt, jint rssi, jint status) { return call_method<"onReadRemoteRssi", void>(gatt, rssi, status); }
	void onMtuChanged(jni::ref<android::bluetooth::BluetoothGatt> gatt, jint mtu, jint status) { return call_method<"onMtuChanged", void>(gatt, mtu, status); }

protected:

	BluetoothGattCallback(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_BLUETOOTH_BLUETOOTHGATTCALLBACK