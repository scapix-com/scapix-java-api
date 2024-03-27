// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_VIEW_INPUTDEVICE_FWD
#define SCAPIX_JAVA_API_ANDROID_VIEW_INPUTDEVICE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::view { class InputDevice; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::view::InputDevice>
{
	static constexpr fixed_string class_name = "android/view/InputDevice";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_INPUTDEVICE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_VIEW_INPUTDEVICE)
#define SCAPIX_JAVA_API_ANDROID_VIEW_INPUTDEVICE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/android/os/Vibrator.h>
#include <scapix/java_api/android/view/InputDevice_MotionRange.h>
#include <scapix/java_api/android/view/KeyCharacterMap.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::view::InputDevice : public jni::object_base<"android/view/InputDevice",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	using MotionRange = InputDevice_MotionRange;

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }
	static jint KEYBOARD_TYPE_ALPHABETIC() { return get_static_field<"KEYBOARD_TYPE_ALPHABETIC", jint>(); }
	static jint KEYBOARD_TYPE_NONE() { return get_static_field<"KEYBOARD_TYPE_NONE", jint>(); }
	static jint KEYBOARD_TYPE_NON_ALPHABETIC() { return get_static_field<"KEYBOARD_TYPE_NON_ALPHABETIC", jint>(); }
	static jint MOTION_RANGE_ORIENTATION() { return get_static_field<"MOTION_RANGE_ORIENTATION", jint>(); }
	static jint MOTION_RANGE_PRESSURE() { return get_static_field<"MOTION_RANGE_PRESSURE", jint>(); }
	static jint MOTION_RANGE_SIZE() { return get_static_field<"MOTION_RANGE_SIZE", jint>(); }
	static jint MOTION_RANGE_TOOL_MAJOR() { return get_static_field<"MOTION_RANGE_TOOL_MAJOR", jint>(); }
	static jint MOTION_RANGE_TOOL_MINOR() { return get_static_field<"MOTION_RANGE_TOOL_MINOR", jint>(); }
	static jint MOTION_RANGE_TOUCH_MAJOR() { return get_static_field<"MOTION_RANGE_TOUCH_MAJOR", jint>(); }
	static jint MOTION_RANGE_TOUCH_MINOR() { return get_static_field<"MOTION_RANGE_TOUCH_MINOR", jint>(); }
	static jint MOTION_RANGE_X() { return get_static_field<"MOTION_RANGE_X", jint>(); }
	static jint MOTION_RANGE_Y() { return get_static_field<"MOTION_RANGE_Y", jint>(); }
	static jint SOURCE_ANY() { return get_static_field<"SOURCE_ANY", jint>(); }
	static jint SOURCE_BLUETOOTH_STYLUS() { return get_static_field<"SOURCE_BLUETOOTH_STYLUS", jint>(); }
	static jint SOURCE_CLASS_BUTTON() { return get_static_field<"SOURCE_CLASS_BUTTON", jint>(); }
	static jint SOURCE_CLASS_JOYSTICK() { return get_static_field<"SOURCE_CLASS_JOYSTICK", jint>(); }
	static jint SOURCE_CLASS_MASK() { return get_static_field<"SOURCE_CLASS_MASK", jint>(); }
	static jint SOURCE_CLASS_NONE() { return get_static_field<"SOURCE_CLASS_NONE", jint>(); }
	static jint SOURCE_CLASS_POINTER() { return get_static_field<"SOURCE_CLASS_POINTER", jint>(); }
	static jint SOURCE_CLASS_POSITION() { return get_static_field<"SOURCE_CLASS_POSITION", jint>(); }
	static jint SOURCE_CLASS_TRACKBALL() { return get_static_field<"SOURCE_CLASS_TRACKBALL", jint>(); }
	static jint SOURCE_DPAD() { return get_static_field<"SOURCE_DPAD", jint>(); }
	static jint SOURCE_GAMEPAD() { return get_static_field<"SOURCE_GAMEPAD", jint>(); }
	static jint SOURCE_HDMI() { return get_static_field<"SOURCE_HDMI", jint>(); }
	static jint SOURCE_JOYSTICK() { return get_static_field<"SOURCE_JOYSTICK", jint>(); }
	static jint SOURCE_KEYBOARD() { return get_static_field<"SOURCE_KEYBOARD", jint>(); }
	static jint SOURCE_MOUSE() { return get_static_field<"SOURCE_MOUSE", jint>(); }
	static jint SOURCE_MOUSE_RELATIVE() { return get_static_field<"SOURCE_MOUSE_RELATIVE", jint>(); }
	static jint SOURCE_ROTARY_ENCODER() { return get_static_field<"SOURCE_ROTARY_ENCODER", jint>(); }
	static jint SOURCE_STYLUS() { return get_static_field<"SOURCE_STYLUS", jint>(); }
	static jint SOURCE_TOUCHPAD() { return get_static_field<"SOURCE_TOUCHPAD", jint>(); }
	static jint SOURCE_TOUCHSCREEN() { return get_static_field<"SOURCE_TOUCHSCREEN", jint>(); }
	static jint SOURCE_TOUCH_NAVIGATION() { return get_static_field<"SOURCE_TOUCH_NAVIGATION", jint>(); }
	static jint SOURCE_TRACKBALL() { return get_static_field<"SOURCE_TRACKBALL", jint>(); }
	static jint SOURCE_UNKNOWN() { return get_static_field<"SOURCE_UNKNOWN", jint>(); }

	static jni::ref<android::view::InputDevice> getDevice(jint id) { return call_static_method<"getDevice", jni::ref<android::view::InputDevice>>(id); }
	static jni::ref<jni::array<jint>> getDeviceIds() { return call_static_method<"getDeviceIds", jni::ref<jni::array<jint>>>(); }
	jint getId() { return call_method<"getId", jint>(); }
	jint getControllerNumber() { return call_method<"getControllerNumber", jint>(); }
	jint getVendorId() { return call_method<"getVendorId", jint>(); }
	jint getProductId() { return call_method<"getProductId", jint>(); }
	jni::ref<java::lang::String> getDescriptor() { return call_method<"getDescriptor", jni::ref<java::lang::String>>(); }
	jboolean isVirtual() { return call_method<"isVirtual", jboolean>(); }
	jni::ref<java::lang::String> getName() { return call_method<"getName", jni::ref<java::lang::String>>(); }
	jint getSources() { return call_method<"getSources", jint>(); }
	jboolean supportsSource(jint source) { return call_method<"supportsSource", jboolean>(source); }
	jint getKeyboardType() { return call_method<"getKeyboardType", jint>(); }
	jni::ref<android::view::KeyCharacterMap> getKeyCharacterMap() { return call_method<"getKeyCharacterMap", jni::ref<android::view::KeyCharacterMap>>(); }
	jni::ref<jni::array<jboolean>> hasKeys(jni::ref<jni::array<jint>> keys) { return call_method<"hasKeys", jni::ref<jni::array<jboolean>>>(keys); }
	jni::ref<android::view::InputDevice_MotionRange> getMotionRange(jint axis) { return call_method<"getMotionRange", jni::ref<android::view::InputDevice_MotionRange>>(axis); }
	jni::ref<android::view::InputDevice_MotionRange> getMotionRange(jint axis, jint source) { return call_method<"getMotionRange", jni::ref<android::view::InputDevice_MotionRange>>(axis, source); }
	jni::ref<java::util::List> getMotionRanges() { return call_method<"getMotionRanges", jni::ref<java::util::List>>(); }
	jni::ref<android::os::Vibrator> getVibrator() { return call_method<"getVibrator", jni::ref<android::os::Vibrator>>(); }
	jboolean hasMicrophone() { return call_method<"hasMicrophone", jboolean>(); }
	void writeToParcel(jni::ref<android::os::Parcel> out, jint flags) { return call_method<"writeToParcel", void>(out, flags); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	InputDevice(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_INPUTDEVICE
