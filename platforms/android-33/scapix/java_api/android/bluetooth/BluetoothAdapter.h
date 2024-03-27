// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_BLUETOOTH_BLUETOOTHADAPTER_FWD
#define SCAPIX_JAVA_API_ANDROID_BLUETOOTH_BLUETOOTHADAPTER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::bluetooth { class BluetoothAdapter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::bluetooth::BluetoothAdapter>
{
	static constexpr fixed_string class_name = "android/bluetooth/BluetoothAdapter";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_BLUETOOTH_BLUETOOTHADAPTER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_BLUETOOTH_BLUETOOTHADAPTER)
#define SCAPIX_JAVA_API_ANDROID_BLUETOOTH_BLUETOOTHADAPTER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/bluetooth/BluetoothAdapter_LeScanCallback.h>
#include <scapix/java_api/android/bluetooth/BluetoothDevice.h>
#include <scapix/java_api/android/bluetooth/BluetoothProfile.h>
#include <scapix/java_api/android/bluetooth/BluetoothProfile_ServiceListener.h>
#include <scapix/java_api/android/bluetooth/BluetoothServerSocket.h>
#include <scapix/java_api/android/bluetooth/le/BluetoothLeAdvertiser.h>
#include <scapix/java_api/android/bluetooth/le/BluetoothLeScanner.h>
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/time/Duration.h>
#include <scapix/java_api/java/util/Set.h>
#include <scapix/java_api/java/util/UUID.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::bluetooth::BluetoothAdapter : public jni::object_base<"android/bluetooth/BluetoothAdapter",
	java::lang::Object>
{
public:

	using LeScanCallback = BluetoothAdapter_LeScanCallback;

	static jni::ref<java::lang::String> ACTION_CONNECTION_STATE_CHANGED() { return get_static_field<"ACTION_CONNECTION_STATE_CHANGED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ACTION_DISCOVERY_FINISHED() { return get_static_field<"ACTION_DISCOVERY_FINISHED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ACTION_DISCOVERY_STARTED() { return get_static_field<"ACTION_DISCOVERY_STARTED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ACTION_LOCAL_NAME_CHANGED() { return get_static_field<"ACTION_LOCAL_NAME_CHANGED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ACTION_REQUEST_DISCOVERABLE() { return get_static_field<"ACTION_REQUEST_DISCOVERABLE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ACTION_REQUEST_ENABLE() { return get_static_field<"ACTION_REQUEST_ENABLE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ACTION_SCAN_MODE_CHANGED() { return get_static_field<"ACTION_SCAN_MODE_CHANGED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ACTION_STATE_CHANGED() { return get_static_field<"ACTION_STATE_CHANGED", jni::ref<java::lang::String>>(); }
	static jint ERROR() { return get_static_field<"ERROR", jint>(); }
	static jni::ref<java::lang::String> EXTRA_CONNECTION_STATE() { return get_static_field<"EXTRA_CONNECTION_STATE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_DISCOVERABLE_DURATION() { return get_static_field<"EXTRA_DISCOVERABLE_DURATION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_LOCAL_NAME() { return get_static_field<"EXTRA_LOCAL_NAME", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_PREVIOUS_CONNECTION_STATE() { return get_static_field<"EXTRA_PREVIOUS_CONNECTION_STATE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_PREVIOUS_SCAN_MODE() { return get_static_field<"EXTRA_PREVIOUS_SCAN_MODE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_PREVIOUS_STATE() { return get_static_field<"EXTRA_PREVIOUS_STATE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_SCAN_MODE() { return get_static_field<"EXTRA_SCAN_MODE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_STATE() { return get_static_field<"EXTRA_STATE", jni::ref<java::lang::String>>(); }
	static jint SCAN_MODE_CONNECTABLE() { return get_static_field<"SCAN_MODE_CONNECTABLE", jint>(); }
	static jint SCAN_MODE_CONNECTABLE_DISCOVERABLE() { return get_static_field<"SCAN_MODE_CONNECTABLE_DISCOVERABLE", jint>(); }
	static jint SCAN_MODE_NONE() { return get_static_field<"SCAN_MODE_NONE", jint>(); }
	static jint STATE_CONNECTED() { return get_static_field<"STATE_CONNECTED", jint>(); }
	static jint STATE_CONNECTING() { return get_static_field<"STATE_CONNECTING", jint>(); }
	static jint STATE_DISCONNECTED() { return get_static_field<"STATE_DISCONNECTED", jint>(); }
	static jint STATE_DISCONNECTING() { return get_static_field<"STATE_DISCONNECTING", jint>(); }
	static jint STATE_OFF() { return get_static_field<"STATE_OFF", jint>(); }
	static jint STATE_ON() { return get_static_field<"STATE_ON", jint>(); }
	static jint STATE_TURNING_OFF() { return get_static_field<"STATE_TURNING_OFF", jint>(); }
	static jint STATE_TURNING_ON() { return get_static_field<"STATE_TURNING_ON", jint>(); }

	static jni::ref<android::bluetooth::BluetoothAdapter> getDefaultAdapter() { return call_static_method<"getDefaultAdapter", jni::ref<android::bluetooth::BluetoothAdapter>>(); }
	jni::ref<android::bluetooth::BluetoothDevice> getRemoteDevice(jni::ref<java::lang::String> address) { return call_method<"getRemoteDevice", jni::ref<android::bluetooth::BluetoothDevice>>(address); }
	jni::ref<android::bluetooth::BluetoothDevice> getRemoteLeDevice(jni::ref<java::lang::String> address, jint addressType) { return call_method<"getRemoteLeDevice", jni::ref<android::bluetooth::BluetoothDevice>>(address, addressType); }
	jni::ref<android::bluetooth::BluetoothDevice> getRemoteDevice(jni::ref<jni::array<jbyte>> address) { return call_method<"getRemoteDevice", jni::ref<android::bluetooth::BluetoothDevice>>(address); }
	jni::ref<android::bluetooth::le::BluetoothLeAdvertiser> getBluetoothLeAdvertiser() { return call_method<"getBluetoothLeAdvertiser", jni::ref<android::bluetooth::le::BluetoothLeAdvertiser>>(); }
	jni::ref<android::bluetooth::le::BluetoothLeScanner> getBluetoothLeScanner() { return call_method<"getBluetoothLeScanner", jni::ref<android::bluetooth::le::BluetoothLeScanner>>(); }
	jboolean isEnabled() { return call_method<"isEnabled", jboolean>(); }
	jint getState() { return call_method<"getState", jint>(); }
	jboolean enable() { return call_method<"enable", jboolean>(); }
	jboolean disable() { return call_method<"disable", jboolean>(); }
	jni::ref<java::lang::String> getAddress() { return call_method<"getAddress", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getName() { return call_method<"getName", jni::ref<java::lang::String>>(); }
	jboolean setName(jni::ref<java::lang::String> name) { return call_method<"setName", jboolean>(name); }
	jint getScanMode() { return call_method<"getScanMode", jint>(); }
	jni::ref<java::time::Duration> getDiscoverableTimeout() { return call_method<"getDiscoverableTimeout", jni::ref<java::time::Duration>>(); }
	jboolean startDiscovery() { return call_method<"startDiscovery", jboolean>(); }
	jboolean cancelDiscovery() { return call_method<"cancelDiscovery", jboolean>(); }
	jboolean isDiscovering() { return call_method<"isDiscovering", jboolean>(); }
	jboolean isMultipleAdvertisementSupported() { return call_method<"isMultipleAdvertisementSupported", jboolean>(); }
	jboolean isOffloadedFilteringSupported() { return call_method<"isOffloadedFilteringSupported", jboolean>(); }
	jboolean isOffloadedScanBatchingSupported() { return call_method<"isOffloadedScanBatchingSupported", jboolean>(); }
	jboolean isLe2MPhySupported() { return call_method<"isLe2MPhySupported", jboolean>(); }
	jboolean isLeCodedPhySupported() { return call_method<"isLeCodedPhySupported", jboolean>(); }
	jboolean isLeExtendedAdvertisingSupported() { return call_method<"isLeExtendedAdvertisingSupported", jboolean>(); }
	jboolean isLePeriodicAdvertisingSupported() { return call_method<"isLePeriodicAdvertisingSupported", jboolean>(); }
	jint isLeAudioSupported() { return call_method<"isLeAudioSupported", jint>(); }
	jint isLeAudioBroadcastSourceSupported() { return call_method<"isLeAudioBroadcastSourceSupported", jint>(); }
	jint isLeAudioBroadcastAssistantSupported() { return call_method<"isLeAudioBroadcastAssistantSupported", jint>(); }
	jint getLeMaximumAdvertisingDataLength() { return call_method<"getLeMaximumAdvertisingDataLength", jint>(); }
	jint getMaxConnectedAudioDevices() { return call_method<"getMaxConnectedAudioDevices", jint>(); }
	jni::ref<java::util::Set> getBondedDevices() { return call_method<"getBondedDevices", jni::ref<java::util::Set>>(); }
	jint getProfileConnectionState(jint profile) { return call_method<"getProfileConnectionState", jint>(profile); }
	jni::ref<android::bluetooth::BluetoothServerSocket> listenUsingRfcommWithServiceRecord(jni::ref<java::lang::String> name, jni::ref<java::util::UUID> uuid) { return call_method<"listenUsingRfcommWithServiceRecord", jni::ref<android::bluetooth::BluetoothServerSocket>>(name, uuid); }
	jni::ref<android::bluetooth::BluetoothServerSocket> listenUsingInsecureRfcommWithServiceRecord(jni::ref<java::lang::String> name, jni::ref<java::util::UUID> uuid) { return call_method<"listenUsingInsecureRfcommWithServiceRecord", jni::ref<android::bluetooth::BluetoothServerSocket>>(name, uuid); }
	jboolean getProfileProxy(jni::ref<android::content::Context> context, jni::ref<android::bluetooth::BluetoothProfile_ServiceListener> listener, jint profile) { return call_method<"getProfileProxy", jboolean>(context, listener, profile); }
	void closeProfileProxy(jint profile, jni::ref<android::bluetooth::BluetoothProfile> proxy) { return call_method<"closeProfileProxy", void>(profile, proxy); }
	static jboolean checkBluetoothAddress(jni::ref<java::lang::String> address) { return call_static_method<"checkBluetoothAddress", jboolean>(address); }
	jboolean startLeScan(jni::ref<android::bluetooth::BluetoothAdapter_LeScanCallback> callback) { return call_method<"startLeScan", jboolean>(callback); }
	jboolean startLeScan(jni::ref<jni::array<java::util::UUID>> serviceUuids, jni::ref<android::bluetooth::BluetoothAdapter_LeScanCallback> callback) { return call_method<"startLeScan", jboolean>(serviceUuids, callback); }
	void stopLeScan(jni::ref<android::bluetooth::BluetoothAdapter_LeScanCallback> callback) { return call_method<"stopLeScan", void>(callback); }
	jni::ref<android::bluetooth::BluetoothServerSocket> listenUsingL2capChannel() { return call_method<"listenUsingL2capChannel", jni::ref<android::bluetooth::BluetoothServerSocket>>(); }
	jni::ref<android::bluetooth::BluetoothServerSocket> listenUsingInsecureL2capChannel() { return call_method<"listenUsingInsecureL2capChannel", jni::ref<android::bluetooth::BluetoothServerSocket>>(); }

protected:

	BluetoothAdapter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_BLUETOOTH_BLUETOOTHADAPTER
