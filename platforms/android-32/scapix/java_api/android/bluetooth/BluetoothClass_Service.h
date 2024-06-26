// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_BLUETOOTH_BLUETOOTHCLASS_SERVICE_FWD
#define SCAPIX_JAVA_API_ANDROID_BLUETOOTH_BLUETOOTHCLASS_SERVICE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::bluetooth { class BluetoothClass_Service; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::bluetooth::BluetoothClass_Service>
{
	static constexpr fixed_string class_name = "android/bluetooth/BluetoothClass$Service";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_BLUETOOTH_BLUETOOTHCLASS_SERVICE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_BLUETOOTH_BLUETOOTHCLASS_SERVICE)
#define SCAPIX_JAVA_API_ANDROID_BLUETOOTH_BLUETOOTHCLASS_SERVICE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::bluetooth::BluetoothClass_Service : public jni::object_base<"android/bluetooth/BluetoothClass$Service",
	java::lang::Object>
{
public:

	static jint AUDIO() { return get_static_field<"AUDIO", jint>(); }
	static jint CAPTURE() { return get_static_field<"CAPTURE", jint>(); }
	static jint INFORMATION() { return get_static_field<"INFORMATION", jint>(); }
	static jint LIMITED_DISCOVERABILITY() { return get_static_field<"LIMITED_DISCOVERABILITY", jint>(); }
	static jint NETWORKING() { return get_static_field<"NETWORKING", jint>(); }
	static jint OBJECT_TRANSFER() { return get_static_field<"OBJECT_TRANSFER", jint>(); }
	static jint POSITIONING() { return get_static_field<"POSITIONING", jint>(); }
	static jint RENDER() { return get_static_field<"RENDER", jint>(); }
	static jint TELEPHONY() { return get_static_field<"TELEPHONY", jint>(); }

	static jni::ref<android::bluetooth::BluetoothClass_Service> new_object() { return base_::new_object(); }

protected:

	BluetoothClass_Service(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_BLUETOOTH_BLUETOOTHCLASS_SERVICE
