// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_MIDI_MIDIMANAGER_ONDEVICEOPENEDLISTENER_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_MIDI_MIDIMANAGER_ONDEVICEOPENEDLISTENER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media::midi { class MidiManager_OnDeviceOpenedListener; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::midi::MidiManager_OnDeviceOpenedListener>
{
	static constexpr fixed_string class_name = "android/media/midi/MidiManager$OnDeviceOpenedListener";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_MIDI_MIDIMANAGER_ONDEVICEOPENEDLISTENER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_MIDI_MIDIMANAGER_ONDEVICEOPENEDLISTENER)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_MIDI_MIDIMANAGER_ONDEVICEOPENEDLISTENER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/media/midi/MidiDevice.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::midi::MidiManager_OnDeviceOpenedListener : public jni::object_base<"android/media/midi/MidiManager$OnDeviceOpenedListener",
	java::lang::Object>
{
public:

	void onDeviceOpened(jni::ref<android::media::midi::MidiDevice> p1) { return call_method<"onDeviceOpened", void>(p1); }

protected:

	MidiManager_OnDeviceOpenedListener(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_MIDI_MIDIMANAGER_ONDEVICEOPENEDLISTENER
