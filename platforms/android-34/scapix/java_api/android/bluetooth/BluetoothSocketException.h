// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/io/IOException.h>

#ifndef SCAPIX_JAVA_API_ANDROID_BLUETOOTH_BLUETOOTHSOCKETEXCEPTION_FWD
#define SCAPIX_JAVA_API_ANDROID_BLUETOOTH_BLUETOOTHSOCKETEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::bluetooth { class BluetoothSocketException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::bluetooth::BluetoothSocketException>
{
	static constexpr fixed_string class_name = "android/bluetooth/BluetoothSocketException";
	using base_classes = std::tuple<scapix::java_api::java::io::IOException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_BLUETOOTH_BLUETOOTHSOCKETEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_BLUETOOTH_BLUETOOTHSOCKETEXCEPTION)
#define SCAPIX_JAVA_API_ANDROID_BLUETOOTH_BLUETOOTHSOCKETEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::bluetooth::BluetoothSocketException : public jni::object_base<"android/bluetooth/BluetoothSocketException",
	java::io::IOException>
{
public:

	static jint BLUETOOTH_OFF_FAILURE() { return get_static_field<"BLUETOOTH_OFF_FAILURE", jint>(); }
	static jint L2CAP_ACL_FAILURE() { return get_static_field<"L2CAP_ACL_FAILURE", jint>(); }
	static jint L2CAP_CLIENT_SECURITY_FAILURE() { return get_static_field<"L2CAP_CLIENT_SECURITY_FAILURE", jint>(); }
	static jint L2CAP_INSUFFICIENT_AUTHENTICATION() { return get_static_field<"L2CAP_INSUFFICIENT_AUTHENTICATION", jint>(); }
	static jint L2CAP_INSUFFICIENT_AUTHORIZATION() { return get_static_field<"L2CAP_INSUFFICIENT_AUTHORIZATION", jint>(); }
	static jint L2CAP_INSUFFICIENT_ENCRYPTION() { return get_static_field<"L2CAP_INSUFFICIENT_ENCRYPTION", jint>(); }
	static jint L2CAP_INSUFFICIENT_ENCRYPT_KEY_SIZE() { return get_static_field<"L2CAP_INSUFFICIENT_ENCRYPT_KEY_SIZE", jint>(); }
	static jint L2CAP_INVALID_PARAMETERS() { return get_static_field<"L2CAP_INVALID_PARAMETERS", jint>(); }
	static jint L2CAP_INVALID_SOURCE_CID() { return get_static_field<"L2CAP_INVALID_SOURCE_CID", jint>(); }
	static jint L2CAP_NO_PSM_AVAILABLE() { return get_static_field<"L2CAP_NO_PSM_AVAILABLE", jint>(); }
	static jint L2CAP_NO_RESOURCES() { return get_static_field<"L2CAP_NO_RESOURCES", jint>(); }
	static jint L2CAP_SOURCE_CID_ALREADY_ALLOCATED() { return get_static_field<"L2CAP_SOURCE_CID_ALREADY_ALLOCATED", jint>(); }
	static jint L2CAP_TIMEOUT() { return get_static_field<"L2CAP_TIMEOUT", jint>(); }
	static jint L2CAP_UNACCEPTABLE_PARAMETERS() { return get_static_field<"L2CAP_UNACCEPTABLE_PARAMETERS", jint>(); }
	static jint L2CAP_UNKNOWN() { return get_static_field<"L2CAP_UNKNOWN", jint>(); }
	static jint NULL_DEVICE() { return get_static_field<"NULL_DEVICE", jint>(); }
	static jint RPC_FAILURE() { return get_static_field<"RPC_FAILURE", jint>(); }
	static jint SOCKET_CLOSED() { return get_static_field<"SOCKET_CLOSED", jint>(); }
	static jint SOCKET_CONNECTION_FAILURE() { return get_static_field<"SOCKET_CONNECTION_FAILURE", jint>(); }
	static jint SOCKET_MANAGER_FAILURE() { return get_static_field<"SOCKET_MANAGER_FAILURE", jint>(); }
	static jint UNSPECIFIED() { return get_static_field<"UNSPECIFIED", jint>(); }

	static jni::ref<android::bluetooth::BluetoothSocketException> new_object(jint code, jni::ref<java::lang::String> msg) { return base_::new_object(code, msg); }
	static jni::ref<android::bluetooth::BluetoothSocketException> new_object(jint code) { return base_::new_object(code); }
	jint getErrorCode() { return call_method<"getErrorCode", jint>(); }

protected:

	BluetoothSocketException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_BLUETOOTH_BLUETOOTHSOCKETEXCEPTION