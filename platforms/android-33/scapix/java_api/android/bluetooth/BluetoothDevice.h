// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_BLUETOOTH_BLUETOOTHDEVICE_FWD
#define SCAPIX_JAVA_API_ANDROID_BLUETOOTH_BLUETOOTHDEVICE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::bluetooth { class BluetoothDevice; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::bluetooth::BluetoothDevice>
{
	static constexpr fixed_string class_name = "android/bluetooth/BluetoothDevice";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_BLUETOOTH_BLUETOOTHDEVICE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_BLUETOOTH_BLUETOOTHDEVICE)
#define SCAPIX_JAVA_API_ANDROID_BLUETOOTH_BLUETOOTHDEVICE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/bluetooth/BluetoothClass.h>
#include <scapix/java_api/android/bluetooth/BluetoothGatt.h>
#include <scapix/java_api/android/bluetooth/BluetoothGattCallback.h>
#include <scapix/java_api/android/bluetooth/BluetoothSocket.h>
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/os/Handler.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/ParcelUuid.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/UUID.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::bluetooth::BluetoothDevice : public jni::object_base<"android/bluetooth/BluetoothDevice",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static jni::ref<java::lang::String> ACTION_ACL_CONNECTED() { return get_static_field<"ACTION_ACL_CONNECTED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ACTION_ACL_DISCONNECTED() { return get_static_field<"ACTION_ACL_DISCONNECTED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ACTION_ACL_DISCONNECT_REQUESTED() { return get_static_field<"ACTION_ACL_DISCONNECT_REQUESTED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ACTION_ALIAS_CHANGED() { return get_static_field<"ACTION_ALIAS_CHANGED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ACTION_BOND_STATE_CHANGED() { return get_static_field<"ACTION_BOND_STATE_CHANGED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ACTION_CLASS_CHANGED() { return get_static_field<"ACTION_CLASS_CHANGED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ACTION_FOUND() { return get_static_field<"ACTION_FOUND", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ACTION_NAME_CHANGED() { return get_static_field<"ACTION_NAME_CHANGED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ACTION_PAIRING_REQUEST() { return get_static_field<"ACTION_PAIRING_REQUEST", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ACTION_UUID() { return get_static_field<"ACTION_UUID", jni::ref<java::lang::String>>(); }
	static jint ADDRESS_TYPE_PUBLIC() { return get_static_field<"ADDRESS_TYPE_PUBLIC", jint>(); }
	static jint ADDRESS_TYPE_RANDOM() { return get_static_field<"ADDRESS_TYPE_RANDOM", jint>(); }
	static jint ADDRESS_TYPE_UNKNOWN() { return get_static_field<"ADDRESS_TYPE_UNKNOWN", jint>(); }
	static jint BOND_BONDED() { return get_static_field<"BOND_BONDED", jint>(); }
	static jint BOND_BONDING() { return get_static_field<"BOND_BONDING", jint>(); }
	static jint BOND_NONE() { return get_static_field<"BOND_NONE", jint>(); }
	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }
	static jint DEVICE_TYPE_CLASSIC() { return get_static_field<"DEVICE_TYPE_CLASSIC", jint>(); }
	static jint DEVICE_TYPE_DUAL() { return get_static_field<"DEVICE_TYPE_DUAL", jint>(); }
	static jint DEVICE_TYPE_LE() { return get_static_field<"DEVICE_TYPE_LE", jint>(); }
	static jint DEVICE_TYPE_UNKNOWN() { return get_static_field<"DEVICE_TYPE_UNKNOWN", jint>(); }
	static jint ERROR() { return get_static_field<"ERROR", jint>(); }
	static jni::ref<java::lang::String> EXTRA_BOND_STATE() { return get_static_field<"EXTRA_BOND_STATE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_CLASS() { return get_static_field<"EXTRA_CLASS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_DEVICE() { return get_static_field<"EXTRA_DEVICE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_IS_COORDINATED_SET_MEMBER() { return get_static_field<"EXTRA_IS_COORDINATED_SET_MEMBER", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_NAME() { return get_static_field<"EXTRA_NAME", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_PAIRING_KEY() { return get_static_field<"EXTRA_PAIRING_KEY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_PAIRING_VARIANT() { return get_static_field<"EXTRA_PAIRING_VARIANT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_PREVIOUS_BOND_STATE() { return get_static_field<"EXTRA_PREVIOUS_BOND_STATE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_RSSI() { return get_static_field<"EXTRA_RSSI", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_TRANSPORT() { return get_static_field<"EXTRA_TRANSPORT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_UUID() { return get_static_field<"EXTRA_UUID", jni::ref<java::lang::String>>(); }
	static jint PAIRING_VARIANT_PASSKEY_CONFIRMATION() { return get_static_field<"PAIRING_VARIANT_PASSKEY_CONFIRMATION", jint>(); }
	static jint PAIRING_VARIANT_PIN() { return get_static_field<"PAIRING_VARIANT_PIN", jint>(); }
	static jint PHY_LE_1M() { return get_static_field<"PHY_LE_1M", jint>(); }
	static jint PHY_LE_1M_MASK() { return get_static_field<"PHY_LE_1M_MASK", jint>(); }
	static jint PHY_LE_2M() { return get_static_field<"PHY_LE_2M", jint>(); }
	static jint PHY_LE_2M_MASK() { return get_static_field<"PHY_LE_2M_MASK", jint>(); }
	static jint PHY_LE_CODED() { return get_static_field<"PHY_LE_CODED", jint>(); }
	static jint PHY_LE_CODED_MASK() { return get_static_field<"PHY_LE_CODED_MASK", jint>(); }
	static jint PHY_OPTION_NO_PREFERRED() { return get_static_field<"PHY_OPTION_NO_PREFERRED", jint>(); }
	static jint PHY_OPTION_S2() { return get_static_field<"PHY_OPTION_S2", jint>(); }
	static jint PHY_OPTION_S8() { return get_static_field<"PHY_OPTION_S8", jint>(); }
	static jint TRANSPORT_AUTO() { return get_static_field<"TRANSPORT_AUTO", jint>(); }
	static jint TRANSPORT_BREDR() { return get_static_field<"TRANSPORT_BREDR", jint>(); }
	static jint TRANSPORT_LE() { return get_static_field<"TRANSPORT_LE", jint>(); }

	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> out, jint flags) { return call_method<"writeToParcel", void>(out, flags); }
	jni::ref<java::lang::String> getAddress() { return call_method<"getAddress", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getName() { return call_method<"getName", jni::ref<java::lang::String>>(); }
	jint getType() { return call_method<"getType", jint>(); }
	jni::ref<java::lang::String> getAlias() { return call_method<"getAlias", jni::ref<java::lang::String>>(); }
	jint setAlias(jni::ref<java::lang::String> alias) { return call_method<"setAlias", jint>(alias); }
	jboolean createBond() { return call_method<"createBond", jboolean>(); }
	jint getBondState() { return call_method<"getBondState", jint>(); }
	jni::ref<android::bluetooth::BluetoothClass> getBluetoothClass() { return call_method<"getBluetoothClass", jni::ref<android::bluetooth::BluetoothClass>>(); }
	jni::ref<jni::array<android::os::ParcelUuid>> getUuids() { return call_method<"getUuids", jni::ref<jni::array<android::os::ParcelUuid>>>(); }
	jboolean fetchUuidsWithSdp() { return call_method<"fetchUuidsWithSdp", jboolean>(); }
	jboolean setPin(jni::ref<jni::array<jbyte>> pin) { return call_method<"setPin", jboolean>(pin); }
	jboolean setPairingConfirmation(jboolean confirm) { return call_method<"setPairingConfirmation", jboolean>(confirm); }
	jni::ref<android::bluetooth::BluetoothSocket> createRfcommSocketToServiceRecord(jni::ref<java::util::UUID> uuid) { return call_method<"createRfcommSocketToServiceRecord", jni::ref<android::bluetooth::BluetoothSocket>>(uuid); }
	jni::ref<android::bluetooth::BluetoothSocket> createInsecureRfcommSocketToServiceRecord(jni::ref<java::util::UUID> uuid) { return call_method<"createInsecureRfcommSocketToServiceRecord", jni::ref<android::bluetooth::BluetoothSocket>>(uuid); }
	jni::ref<android::bluetooth::BluetoothGatt> connectGatt(jni::ref<android::content::Context> context, jboolean autoConnect, jni::ref<android::bluetooth::BluetoothGattCallback> callback) { return call_method<"connectGatt", jni::ref<android::bluetooth::BluetoothGatt>>(context, autoConnect, callback); }
	jni::ref<android::bluetooth::BluetoothGatt> connectGatt(jni::ref<android::content::Context> context, jboolean autoConnect, jni::ref<android::bluetooth::BluetoothGattCallback> callback, jint transport) { return call_method<"connectGatt", jni::ref<android::bluetooth::BluetoothGatt>>(context, autoConnect, callback, transport); }
	jni::ref<android::bluetooth::BluetoothGatt> connectGatt(jni::ref<android::content::Context> context, jboolean autoConnect, jni::ref<android::bluetooth::BluetoothGattCallback> callback, jint transport, jint phy) { return call_method<"connectGatt", jni::ref<android::bluetooth::BluetoothGatt>>(context, autoConnect, callback, transport, phy); }
	jni::ref<android::bluetooth::BluetoothGatt> connectGatt(jni::ref<android::content::Context> context, jboolean autoConnect, jni::ref<android::bluetooth::BluetoothGattCallback> callback, jint transport, jint phy, jni::ref<android::os::Handler> handler) { return call_method<"connectGatt", jni::ref<android::bluetooth::BluetoothGatt>>(context, autoConnect, callback, transport, phy, handler); }
	jni::ref<android::bluetooth::BluetoothSocket> createL2capChannel(jint psm) { return call_method<"createL2capChannel", jni::ref<android::bluetooth::BluetoothSocket>>(psm); }
	jni::ref<android::bluetooth::BluetoothSocket> createInsecureL2capChannel(jint psm) { return call_method<"createInsecureL2capChannel", jni::ref<android::bluetooth::BluetoothSocket>>(psm); }

protected:

	BluetoothDevice(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_BLUETOOTH_BLUETOOTHDEVICE
