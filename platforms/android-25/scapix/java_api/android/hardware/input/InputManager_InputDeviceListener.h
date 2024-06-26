// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_HARDWARE_INPUT_INPUTMANAGER_INPUTDEVICELISTENER_FWD
#define SCAPIX_JAVA_API_ANDROID_HARDWARE_INPUT_INPUTMANAGER_INPUTDEVICELISTENER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::hardware::input { class InputManager_InputDeviceListener; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::hardware::input::InputManager_InputDeviceListener>
{
	static constexpr fixed_string class_name = "android/hardware/input/InputManager$InputDeviceListener";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HARDWARE_INPUT_INPUTMANAGER_INPUTDEVICELISTENER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_HARDWARE_INPUT_INPUTMANAGER_INPUTDEVICELISTENER)
#define SCAPIX_JAVA_API_ANDROID_HARDWARE_INPUT_INPUTMANAGER_INPUTDEVICELISTENER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::hardware::input::InputManager_InputDeviceListener : public jni::object_base<"android/hardware/input/InputManager$InputDeviceListener",
	java::lang::Object>
{
public:

	void onInputDeviceAdded(jint p1) { return call_method<"onInputDeviceAdded", void>(p1); }
	void onInputDeviceRemoved(jint p1) { return call_method<"onInputDeviceRemoved", void>(p1); }
	void onInputDeviceChanged(jint p1) { return call_method<"onInputDeviceChanged", void>(p1); }

protected:

	InputManager_InputDeviceListener(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HARDWARE_INPUT_INPUTMANAGER_INPUTDEVICELISTENER
