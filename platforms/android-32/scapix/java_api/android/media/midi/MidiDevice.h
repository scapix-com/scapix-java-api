// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Closeable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_MIDI_MIDIDEVICE_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_MIDI_MIDIDEVICE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media::midi { class MidiDevice; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::midi::MidiDevice>
{
	static constexpr fixed_string class_name = "android/media/midi/MidiDevice";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::io::Closeable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_MIDI_MIDIDEVICE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_MIDI_MIDIDEVICE)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_MIDI_MIDIDEVICE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/media/midi/MidiDevice_MidiConnection.h>
#include <scapix/java_api/android/media/midi/MidiDeviceInfo.h>
#include <scapix/java_api/android/media/midi/MidiInputPort.h>
#include <scapix/java_api/android/media/midi/MidiOutputPort.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::midi::MidiDevice : public jni::object_base<"android/media/midi/MidiDevice",
	java::lang::Object,
	java::io::Closeable>
{
public:

	using MidiConnection = MidiDevice_MidiConnection;

	jni::ref<android::media::midi::MidiDeviceInfo> getInfo() { return call_method<"getInfo", jni::ref<android::media::midi::MidiDeviceInfo>>(); }
	jni::ref<android::media::midi::MidiInputPort> openInputPort(jint portNumber) { return call_method<"openInputPort", jni::ref<android::media::midi::MidiInputPort>>(portNumber); }
	jni::ref<android::media::midi::MidiOutputPort> openOutputPort(jint portNumber) { return call_method<"openOutputPort", jni::ref<android::media::midi::MidiOutputPort>>(portNumber); }
	jni::ref<android::media::midi::MidiDevice_MidiConnection> connectPorts(jni::ref<android::media::midi::MidiInputPort> inputPort, jint outputPortNumber) { return call_method<"connectPorts", jni::ref<android::media::midi::MidiDevice_MidiConnection>>(inputPort, outputPortNumber); }
	void close() { return call_method<"close", void>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	MidiDevice(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_MIDI_MIDIDEVICE
