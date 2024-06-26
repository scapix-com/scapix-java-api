// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/bluetooth/BluetoothProfile.h>

#ifndef SCAPIX_JAVA_API_ANDROID_BLUETOOTH_BLUETOOTHGATTSERVER_FWD
#define SCAPIX_JAVA_API_ANDROID_BLUETOOTH_BLUETOOTHGATTSERVER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::bluetooth { class BluetoothGattServer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::bluetooth::BluetoothGattServer>
{
	static constexpr fixed_string class_name = "android/bluetooth/BluetoothGattServer";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::bluetooth::BluetoothProfile>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_BLUETOOTH_BLUETOOTHGATTSERVER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_BLUETOOTH_BLUETOOTHGATTSERVER)
#define SCAPIX_JAVA_API_ANDROID_BLUETOOTH_BLUETOOTHGATTSERVER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/bluetooth/BluetoothDevice.h>
#include <scapix/java_api/android/bluetooth/BluetoothGattCharacteristic.h>
#include <scapix/java_api/android/bluetooth/BluetoothGattService.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/java/util/UUID.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::bluetooth::BluetoothGattServer : public jni::object_base<"android/bluetooth/BluetoothGattServer",
	java::lang::Object,
	android::bluetooth::BluetoothProfile>
{
public:

	void close() { return call_method<"close", void>(); }
	jboolean connect(jni::ref<android::bluetooth::BluetoothDevice> device, jboolean autoConnect) { return call_method<"connect", jboolean>(device, autoConnect); }
	void cancelConnection(jni::ref<android::bluetooth::BluetoothDevice> device) { return call_method<"cancelConnection", void>(device); }
	jboolean sendResponse(jni::ref<android::bluetooth::BluetoothDevice> device, jint requestId, jint status, jint offset, jni::ref<jni::array<jbyte>> value) { return call_method<"sendResponse", jboolean>(device, requestId, status, offset, value); }
	jboolean notifyCharacteristicChanged(jni::ref<android::bluetooth::BluetoothDevice> device, jni::ref<android::bluetooth::BluetoothGattCharacteristic> characteristic, jboolean confirm) { return call_method<"notifyCharacteristicChanged", jboolean>(device, characteristic, confirm); }
	jboolean addService(jni::ref<android::bluetooth::BluetoothGattService> service) { return call_method<"addService", jboolean>(service); }
	jboolean removeService(jni::ref<android::bluetooth::BluetoothGattService> service) { return call_method<"removeService", jboolean>(service); }
	void clearServices() { return call_method<"clearServices", void>(); }
	jni::ref<java::util::List> getServices() { return call_method<"getServices", jni::ref<java::util::List>>(); }
	jni::ref<android::bluetooth::BluetoothGattService> getService(jni::ref<java::util::UUID> uuid) { return call_method<"getService", jni::ref<android::bluetooth::BluetoothGattService>>(uuid); }
	jint getConnectionState(jni::ref<android::bluetooth::BluetoothDevice> device) { return call_method<"getConnectionState", jint>(device); }
	jni::ref<java::util::List> getConnectedDevices() { return call_method<"getConnectedDevices", jni::ref<java::util::List>>(); }
	jni::ref<java::util::List> getDevicesMatchingConnectionStates(jni::ref<jni::array<jint>> states) { return call_method<"getDevicesMatchingConnectionStates", jni::ref<java::util::List>>(states); }

protected:

	BluetoothGattServer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_BLUETOOTH_BLUETOOTHGATTSERVER
