// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_BLUETOOTH_BLUETOOTHCLASS_DEVICE_FWD
#define SCAPIX_JAVA_API_ANDROID_BLUETOOTH_BLUETOOTHCLASS_DEVICE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::bluetooth { class BluetoothClass_Device; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::bluetooth::BluetoothClass_Device>
{
	static constexpr fixed_string class_name = "android/bluetooth/BluetoothClass$Device";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_BLUETOOTH_BLUETOOTHCLASS_DEVICE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_BLUETOOTH_BLUETOOTHCLASS_DEVICE)
#define SCAPIX_JAVA_API_ANDROID_BLUETOOTH_BLUETOOTHCLASS_DEVICE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/bluetooth/BluetoothClass_Device_Major.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::bluetooth::BluetoothClass_Device : public jni::object_base<"android/bluetooth/BluetoothClass$Device",
	java::lang::Object>
{
public:

	using Major = BluetoothClass_Device_Major;

	static jint AUDIO_VIDEO_CAMCORDER() { return get_static_field<"AUDIO_VIDEO_CAMCORDER", jint>(); }
	static jint AUDIO_VIDEO_CAR_AUDIO() { return get_static_field<"AUDIO_VIDEO_CAR_AUDIO", jint>(); }
	static jint AUDIO_VIDEO_HANDSFREE() { return get_static_field<"AUDIO_VIDEO_HANDSFREE", jint>(); }
	static jint AUDIO_VIDEO_HEADPHONES() { return get_static_field<"AUDIO_VIDEO_HEADPHONES", jint>(); }
	static jint AUDIO_VIDEO_HIFI_AUDIO() { return get_static_field<"AUDIO_VIDEO_HIFI_AUDIO", jint>(); }
	static jint AUDIO_VIDEO_LOUDSPEAKER() { return get_static_field<"AUDIO_VIDEO_LOUDSPEAKER", jint>(); }
	static jint AUDIO_VIDEO_MICROPHONE() { return get_static_field<"AUDIO_VIDEO_MICROPHONE", jint>(); }
	static jint AUDIO_VIDEO_PORTABLE_AUDIO() { return get_static_field<"AUDIO_VIDEO_PORTABLE_AUDIO", jint>(); }
	static jint AUDIO_VIDEO_SET_TOP_BOX() { return get_static_field<"AUDIO_VIDEO_SET_TOP_BOX", jint>(); }
	static jint AUDIO_VIDEO_UNCATEGORIZED() { return get_static_field<"AUDIO_VIDEO_UNCATEGORIZED", jint>(); }
	static jint AUDIO_VIDEO_VCR() { return get_static_field<"AUDIO_VIDEO_VCR", jint>(); }
	static jint AUDIO_VIDEO_VIDEO_CAMERA() { return get_static_field<"AUDIO_VIDEO_VIDEO_CAMERA", jint>(); }
	static jint AUDIO_VIDEO_VIDEO_CONFERENCING() { return get_static_field<"AUDIO_VIDEO_VIDEO_CONFERENCING", jint>(); }
	static jint AUDIO_VIDEO_VIDEO_DISPLAY_AND_LOUDSPEAKER() { return get_static_field<"AUDIO_VIDEO_VIDEO_DISPLAY_AND_LOUDSPEAKER", jint>(); }
	static jint AUDIO_VIDEO_VIDEO_GAMING_TOY() { return get_static_field<"AUDIO_VIDEO_VIDEO_GAMING_TOY", jint>(); }
	static jint AUDIO_VIDEO_VIDEO_MONITOR() { return get_static_field<"AUDIO_VIDEO_VIDEO_MONITOR", jint>(); }
	static jint AUDIO_VIDEO_WEARABLE_HEADSET() { return get_static_field<"AUDIO_VIDEO_WEARABLE_HEADSET", jint>(); }
	static jint COMPUTER_DESKTOP() { return get_static_field<"COMPUTER_DESKTOP", jint>(); }
	static jint COMPUTER_HANDHELD_PC_PDA() { return get_static_field<"COMPUTER_HANDHELD_PC_PDA", jint>(); }
	static jint COMPUTER_LAPTOP() { return get_static_field<"COMPUTER_LAPTOP", jint>(); }
	static jint COMPUTER_PALM_SIZE_PC_PDA() { return get_static_field<"COMPUTER_PALM_SIZE_PC_PDA", jint>(); }
	static jint COMPUTER_SERVER() { return get_static_field<"COMPUTER_SERVER", jint>(); }
	static jint COMPUTER_UNCATEGORIZED() { return get_static_field<"COMPUTER_UNCATEGORIZED", jint>(); }
	static jint COMPUTER_WEARABLE() { return get_static_field<"COMPUTER_WEARABLE", jint>(); }
	static jint HEALTH_BLOOD_PRESSURE() { return get_static_field<"HEALTH_BLOOD_PRESSURE", jint>(); }
	static jint HEALTH_DATA_DISPLAY() { return get_static_field<"HEALTH_DATA_DISPLAY", jint>(); }
	static jint HEALTH_GLUCOSE() { return get_static_field<"HEALTH_GLUCOSE", jint>(); }
	static jint HEALTH_PULSE_OXIMETER() { return get_static_field<"HEALTH_PULSE_OXIMETER", jint>(); }
	static jint HEALTH_PULSE_RATE() { return get_static_field<"HEALTH_PULSE_RATE", jint>(); }
	static jint HEALTH_THERMOMETER() { return get_static_field<"HEALTH_THERMOMETER", jint>(); }
	static jint HEALTH_UNCATEGORIZED() { return get_static_field<"HEALTH_UNCATEGORIZED", jint>(); }
	static jint HEALTH_WEIGHING() { return get_static_field<"HEALTH_WEIGHING", jint>(); }
	static jint PERIPHERAL_KEYBOARD() { return get_static_field<"PERIPHERAL_KEYBOARD", jint>(); }
	static jint PERIPHERAL_KEYBOARD_POINTING() { return get_static_field<"PERIPHERAL_KEYBOARD_POINTING", jint>(); }
	static jint PERIPHERAL_NON_KEYBOARD_NON_POINTING() { return get_static_field<"PERIPHERAL_NON_KEYBOARD_NON_POINTING", jint>(); }
	static jint PERIPHERAL_POINTING() { return get_static_field<"PERIPHERAL_POINTING", jint>(); }
	static jint PHONE_CELLULAR() { return get_static_field<"PHONE_CELLULAR", jint>(); }
	static jint PHONE_CORDLESS() { return get_static_field<"PHONE_CORDLESS", jint>(); }
	static jint PHONE_ISDN() { return get_static_field<"PHONE_ISDN", jint>(); }
	static jint PHONE_MODEM_OR_GATEWAY() { return get_static_field<"PHONE_MODEM_OR_GATEWAY", jint>(); }
	static jint PHONE_SMART() { return get_static_field<"PHONE_SMART", jint>(); }
	static jint PHONE_UNCATEGORIZED() { return get_static_field<"PHONE_UNCATEGORIZED", jint>(); }
	static jint TOY_CONTROLLER() { return get_static_field<"TOY_CONTROLLER", jint>(); }
	static jint TOY_DOLL_ACTION_FIGURE() { return get_static_field<"TOY_DOLL_ACTION_FIGURE", jint>(); }
	static jint TOY_GAME() { return get_static_field<"TOY_GAME", jint>(); }
	static jint TOY_ROBOT() { return get_static_field<"TOY_ROBOT", jint>(); }
	static jint TOY_UNCATEGORIZED() { return get_static_field<"TOY_UNCATEGORIZED", jint>(); }
	static jint TOY_VEHICLE() { return get_static_field<"TOY_VEHICLE", jint>(); }
	static jint WEARABLE_GLASSES() { return get_static_field<"WEARABLE_GLASSES", jint>(); }
	static jint WEARABLE_HELMET() { return get_static_field<"WEARABLE_HELMET", jint>(); }
	static jint WEARABLE_JACKET() { return get_static_field<"WEARABLE_JACKET", jint>(); }
	static jint WEARABLE_PAGER() { return get_static_field<"WEARABLE_PAGER", jint>(); }
	static jint WEARABLE_UNCATEGORIZED() { return get_static_field<"WEARABLE_UNCATEGORIZED", jint>(); }
	static jint WEARABLE_WRIST_WATCH() { return get_static_field<"WEARABLE_WRIST_WATCH", jint>(); }

	static jni::ref<android::bluetooth::BluetoothClass_Device> new_object() { return base_::new_object(); }

protected:

	BluetoothClass_Device(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_BLUETOOTH_BLUETOOTHCLASS_DEVICE
