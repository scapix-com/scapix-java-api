// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/bluetooth/BluetoothProfile.h>

#ifndef SCAPIX_JAVA_API_ANDROID_BLUETOOTH_BLUETOOTHHIDDEVICE_FWD
#define SCAPIX_JAVA_API_ANDROID_BLUETOOTH_BLUETOOTHHIDDEVICE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::bluetooth { class BluetoothHidDevice; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::bluetooth::BluetoothHidDevice>
{
	static constexpr fixed_string class_name = "android/bluetooth/BluetoothHidDevice";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::bluetooth::BluetoothProfile>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_BLUETOOTH_BLUETOOTHHIDDEVICE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_BLUETOOTH_BLUETOOTHHIDDEVICE)
#define SCAPIX_JAVA_API_ANDROID_BLUETOOTH_BLUETOOTHHIDDEVICE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/bluetooth/BluetoothDevice.h>
#include <scapix/java_api/android/bluetooth/BluetoothHidDevice_Callback.h>
#include <scapix/java_api/android/bluetooth/BluetoothHidDeviceAppQosSettings.h>
#include <scapix/java_api/android/bluetooth/BluetoothHidDeviceAppSdpSettings.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/java/util/concurrent/Executor.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::bluetooth::BluetoothHidDevice : public jni::object_base<"android/bluetooth/BluetoothHidDevice",
	java::lang::Object,
	android::bluetooth::BluetoothProfile>
{
public:

	using Callback = BluetoothHidDevice_Callback;

	static jni::ref<java::lang::String> ACTION_CONNECTION_STATE_CHANGED() { return get_static_field<"ACTION_CONNECTION_STATE_CHANGED", jni::ref<java::lang::String>>(); }
	static jbyte ERROR_RSP_INVALID_PARAM() { return get_static_field<"ERROR_RSP_INVALID_PARAM", jbyte>(); }
	static jbyte ERROR_RSP_INVALID_RPT_ID() { return get_static_field<"ERROR_RSP_INVALID_RPT_ID", jbyte>(); }
	static jbyte ERROR_RSP_NOT_READY() { return get_static_field<"ERROR_RSP_NOT_READY", jbyte>(); }
	static jbyte ERROR_RSP_SUCCESS() { return get_static_field<"ERROR_RSP_SUCCESS", jbyte>(); }
	static jbyte ERROR_RSP_UNKNOWN() { return get_static_field<"ERROR_RSP_UNKNOWN", jbyte>(); }
	static jbyte ERROR_RSP_UNSUPPORTED_REQ() { return get_static_field<"ERROR_RSP_UNSUPPORTED_REQ", jbyte>(); }
	static jbyte PROTOCOL_BOOT_MODE() { return get_static_field<"PROTOCOL_BOOT_MODE", jbyte>(); }
	static jbyte PROTOCOL_REPORT_MODE() { return get_static_field<"PROTOCOL_REPORT_MODE", jbyte>(); }
	static jbyte REPORT_TYPE_FEATURE() { return get_static_field<"REPORT_TYPE_FEATURE", jbyte>(); }
	static jbyte REPORT_TYPE_INPUT() { return get_static_field<"REPORT_TYPE_INPUT", jbyte>(); }
	static jbyte REPORT_TYPE_OUTPUT() { return get_static_field<"REPORT_TYPE_OUTPUT", jbyte>(); }
	static jbyte SUBCLASS1_COMBO() { return get_static_field<"SUBCLASS1_COMBO", jbyte>(); }
	static jbyte SUBCLASS1_KEYBOARD() { return get_static_field<"SUBCLASS1_KEYBOARD", jbyte>(); }
	static jbyte SUBCLASS1_MOUSE() { return get_static_field<"SUBCLASS1_MOUSE", jbyte>(); }
	static jbyte SUBCLASS1_NONE() { return get_static_field<"SUBCLASS1_NONE", jbyte>(); }
	static jbyte SUBCLASS2_CARD_READER() { return get_static_field<"SUBCLASS2_CARD_READER", jbyte>(); }
	static jbyte SUBCLASS2_DIGITIZER_TABLET() { return get_static_field<"SUBCLASS2_DIGITIZER_TABLET", jbyte>(); }
	static jbyte SUBCLASS2_GAMEPAD() { return get_static_field<"SUBCLASS2_GAMEPAD", jbyte>(); }
	static jbyte SUBCLASS2_JOYSTICK() { return get_static_field<"SUBCLASS2_JOYSTICK", jbyte>(); }
	static jbyte SUBCLASS2_REMOTE_CONTROL() { return get_static_field<"SUBCLASS2_REMOTE_CONTROL", jbyte>(); }
	static jbyte SUBCLASS2_SENSING_DEVICE() { return get_static_field<"SUBCLASS2_SENSING_DEVICE", jbyte>(); }
	static jbyte SUBCLASS2_UNCATEGORIZED() { return get_static_field<"SUBCLASS2_UNCATEGORIZED", jbyte>(); }

	jni::ref<java::util::List> getConnectedDevices() { return call_method<"getConnectedDevices", jni::ref<java::util::List>>(); }
	jni::ref<java::util::List> getDevicesMatchingConnectionStates(jni::ref<jni::array<jint>> states) { return call_method<"getDevicesMatchingConnectionStates", jni::ref<java::util::List>>(states); }
	jint getConnectionState(jni::ref<android::bluetooth::BluetoothDevice> device) { return call_method<"getConnectionState", jint>(device); }
	jboolean registerApp(jni::ref<android::bluetooth::BluetoothHidDeviceAppSdpSettings> sdp, jni::ref<android::bluetooth::BluetoothHidDeviceAppQosSettings> inQos, jni::ref<android::bluetooth::BluetoothHidDeviceAppQosSettings> outQos, jni::ref<java::util::concurrent::Executor> executor, jni::ref<android::bluetooth::BluetoothHidDevice_Callback> callback) { return call_method<"registerApp", jboolean>(sdp, inQos, outQos, executor, callback); }
	jboolean unregisterApp() { return call_method<"unregisterApp", jboolean>(); }
	jboolean sendReport(jni::ref<android::bluetooth::BluetoothDevice> device, jint id, jni::ref<jni::array<jbyte>> data) { return call_method<"sendReport", jboolean>(device, id, data); }
	jboolean replyReport(jni::ref<android::bluetooth::BluetoothDevice> device, jbyte type, jbyte id, jni::ref<jni::array<jbyte>> data) { return call_method<"replyReport", jboolean>(device, type, id, data); }
	jboolean reportError(jni::ref<android::bluetooth::BluetoothDevice> device, jbyte error) { return call_method<"reportError", jboolean>(device, error); }
	jboolean connect(jni::ref<android::bluetooth::BluetoothDevice> device) { return call_method<"connect", jboolean>(device); }
	jboolean disconnect(jni::ref<android::bluetooth::BluetoothDevice> device) { return call_method<"disconnect", jboolean>(device); }

protected:

	BluetoothHidDevice(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_BLUETOOTH_BLUETOOTHHIDDEVICE
