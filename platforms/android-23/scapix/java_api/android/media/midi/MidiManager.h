// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_MIDI_MIDIMANAGER_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_MIDI_MIDIMANAGER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media::midi { class MidiManager; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::midi::MidiManager>
{
	static constexpr fixed_string class_name = "android/media/midi/MidiManager";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_MIDI_MIDIMANAGER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_MIDI_MIDIMANAGER)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_MIDI_MIDIMANAGER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/bluetooth/BluetoothDevice.h>
#include <scapix/java_api/android/media/midi/MidiDeviceInfo.h>
#include <scapix/java_api/android/media/midi/MidiManager_DeviceCallback.h>
#include <scapix/java_api/android/media/midi/MidiManager_OnDeviceOpenedListener.h>
#include <scapix/java_api/android/os/Handler.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::midi::MidiManager : public jni::object_base<"android/media/midi/MidiManager",
	java::lang::Object>
{
public:

	using OnDeviceOpenedListener = MidiManager_OnDeviceOpenedListener;
	using DeviceCallback = MidiManager_DeviceCallback;

	void registerDeviceCallback(jni::ref<android::media::midi::MidiManager_DeviceCallback> callback, jni::ref<android::os::Handler> handler) { return call_method<"registerDeviceCallback", void>(callback, handler); }
	void unregisterDeviceCallback(jni::ref<android::media::midi::MidiManager_DeviceCallback> callback) { return call_method<"unregisterDeviceCallback", void>(callback); }
	jni::ref<jni::array<android::media::midi::MidiDeviceInfo>> getDevices() { return call_method<"getDevices", jni::ref<jni::array<android::media::midi::MidiDeviceInfo>>>(); }
	void openDevice(jni::ref<android::media::midi::MidiDeviceInfo> deviceInfo, jni::ref<android::media::midi::MidiManager_OnDeviceOpenedListener> listener, jni::ref<android::os::Handler> handler) { return call_method<"openDevice", void>(deviceInfo, listener, handler); }
	void openBluetoothDevice(jni::ref<android::bluetooth::BluetoothDevice> bluetoothDevice, jni::ref<android::media::midi::MidiManager_OnDeviceOpenedListener> listener, jni::ref<android::os::Handler> handler) { return call_method<"openBluetoothDevice", void>(bluetoothDevice, listener, handler); }

protected:

	MidiManager(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_MIDI_MIDIMANAGER