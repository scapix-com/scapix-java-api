// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/bluetooth/BluetoothProfile.h>

#ifndef SCAPIX_JAVA_API_ANDROID_BLUETOOTH_BLUETOOTHGATT_FWD
#define SCAPIX_JAVA_API_ANDROID_BLUETOOTH_BLUETOOTHGATT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::bluetooth { class BluetoothGatt; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::bluetooth::BluetoothGatt>
{
	static constexpr fixed_string class_name = "android/bluetooth/BluetoothGatt";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::bluetooth::BluetoothProfile>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_BLUETOOTH_BLUETOOTHGATT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_BLUETOOTH_BLUETOOTHGATT)
#define SCAPIX_JAVA_API_ANDROID_BLUETOOTH_BLUETOOTHGATT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/bluetooth/BluetoothDevice.h>
#include <scapix/java_api/android/bluetooth/BluetoothGattCharacteristic.h>
#include <scapix/java_api/android/bluetooth/BluetoothGattDescriptor.h>
#include <scapix/java_api/android/bluetooth/BluetoothGattService.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/java/util/UUID.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::bluetooth::BluetoothGatt : public jni::object_base<"android/bluetooth/BluetoothGatt",
	java::lang::Object,
	android::bluetooth::BluetoothProfile>
{
public:

	static jint CONNECTION_PRIORITY_BALANCED() { return get_static_field<"CONNECTION_PRIORITY_BALANCED", jint>(); }
	static jint CONNECTION_PRIORITY_DCK() { return get_static_field<"CONNECTION_PRIORITY_DCK", jint>(); }
	static jint CONNECTION_PRIORITY_HIGH() { return get_static_field<"CONNECTION_PRIORITY_HIGH", jint>(); }
	static jint CONNECTION_PRIORITY_LOW_POWER() { return get_static_field<"CONNECTION_PRIORITY_LOW_POWER", jint>(); }
	static jint GATT_CONNECTION_CONGESTED() { return get_static_field<"GATT_CONNECTION_CONGESTED", jint>(); }
	static jint GATT_FAILURE() { return get_static_field<"GATT_FAILURE", jint>(); }
	static jint GATT_INSUFFICIENT_AUTHENTICATION() { return get_static_field<"GATT_INSUFFICIENT_AUTHENTICATION", jint>(); }
	static jint GATT_INSUFFICIENT_AUTHORIZATION() { return get_static_field<"GATT_INSUFFICIENT_AUTHORIZATION", jint>(); }
	static jint GATT_INSUFFICIENT_ENCRYPTION() { return get_static_field<"GATT_INSUFFICIENT_ENCRYPTION", jint>(); }
	static jint GATT_INVALID_ATTRIBUTE_LENGTH() { return get_static_field<"GATT_INVALID_ATTRIBUTE_LENGTH", jint>(); }
	static jint GATT_INVALID_OFFSET() { return get_static_field<"GATT_INVALID_OFFSET", jint>(); }
	static jint GATT_READ_NOT_PERMITTED() { return get_static_field<"GATT_READ_NOT_PERMITTED", jint>(); }
	static jint GATT_REQUEST_NOT_SUPPORTED() { return get_static_field<"GATT_REQUEST_NOT_SUPPORTED", jint>(); }
	static jint GATT_SUCCESS() { return get_static_field<"GATT_SUCCESS", jint>(); }
	static jint GATT_WRITE_NOT_PERMITTED() { return get_static_field<"GATT_WRITE_NOT_PERMITTED", jint>(); }

	void close() { return call_method<"close", void>(); }
	void disconnect() { return call_method<"disconnect", void>(); }
	jboolean connect() { return call_method<"connect", jboolean>(); }
	void setPreferredPhy(jint txPhy, jint rxPhy, jint phyOptions) { return call_method<"setPreferredPhy", void>(txPhy, rxPhy, phyOptions); }
	void readPhy() { return call_method<"readPhy", void>(); }
	jni::ref<android::bluetooth::BluetoothDevice> getDevice() { return call_method<"getDevice", jni::ref<android::bluetooth::BluetoothDevice>>(); }
	jboolean discoverServices() { return call_method<"discoverServices", jboolean>(); }
	jni::ref<java::util::List> getServices() { return call_method<"getServices", jni::ref<java::util::List>>(); }
	jni::ref<android::bluetooth::BluetoothGattService> getService(jni::ref<java::util::UUID> uuid) { return call_method<"getService", jni::ref<android::bluetooth::BluetoothGattService>>(uuid); }
	jboolean readCharacteristic(jni::ref<android::bluetooth::BluetoothGattCharacteristic> characteristic) { return call_method<"readCharacteristic", jboolean>(characteristic); }
	jboolean writeCharacteristic(jni::ref<android::bluetooth::BluetoothGattCharacteristic> characteristic) { return call_method<"writeCharacteristic", jboolean>(characteristic); }
	jint writeCharacteristic(jni::ref<android::bluetooth::BluetoothGattCharacteristic> characteristic, jni::ref<jni::array<jbyte>> value, jint writeType) { return call_method<"writeCharacteristic", jint>(characteristic, value, writeType); }
	jboolean readDescriptor(jni::ref<android::bluetooth::BluetoothGattDescriptor> descriptor) { return call_method<"readDescriptor", jboolean>(descriptor); }
	jboolean writeDescriptor(jni::ref<android::bluetooth::BluetoothGattDescriptor> descriptor) { return call_method<"writeDescriptor", jboolean>(descriptor); }
	jint writeDescriptor(jni::ref<android::bluetooth::BluetoothGattDescriptor> descriptor, jni::ref<jni::array<jbyte>> value) { return call_method<"writeDescriptor", jint>(descriptor, value); }
	jboolean beginReliableWrite() { return call_method<"beginReliableWrite", jboolean>(); }
	jboolean executeReliableWrite() { return call_method<"executeReliableWrite", jboolean>(); }
	void abortReliableWrite() { return call_method<"abortReliableWrite", void>(); }
	void abortReliableWrite(jni::ref<android::bluetooth::BluetoothDevice> mDevice) { return call_method<"abortReliableWrite", void>(mDevice); }
	jboolean setCharacteristicNotification(jni::ref<android::bluetooth::BluetoothGattCharacteristic> characteristic, jboolean enable) { return call_method<"setCharacteristicNotification", jboolean>(characteristic, enable); }
	jboolean readRemoteRssi() { return call_method<"readRemoteRssi", jboolean>(); }
	jboolean requestMtu(jint mtu) { return call_method<"requestMtu", jboolean>(mtu); }
	jboolean requestConnectionPriority(jint connectionPriority) { return call_method<"requestConnectionPriority", jboolean>(connectionPriority); }
	jint getConnectionState(jni::ref<android::bluetooth::BluetoothDevice> device) { return call_method<"getConnectionState", jint>(device); }
	jni::ref<java::util::List> getConnectedDevices() { return call_method<"getConnectedDevices", jni::ref<java::util::List>>(); }
	jni::ref<java::util::List> getDevicesMatchingConnectionStates(jni::ref<jni::array<jint>> states) { return call_method<"getDevicesMatchingConnectionStates", jni::ref<java::util::List>>(states); }

protected:

	BluetoothGatt(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_BLUETOOTH_BLUETOOTHGATT
