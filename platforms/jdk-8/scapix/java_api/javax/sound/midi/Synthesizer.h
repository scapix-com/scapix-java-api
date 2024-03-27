// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/sound/midi/MidiDevice.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SOUND_MIDI_SYNTHESIZER_FWD
#define SCAPIX_JAVA_API_JAVAX_SOUND_MIDI_SYNTHESIZER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::sound::midi { class Synthesizer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::sound::midi::Synthesizer>
{
	static constexpr fixed_string class_name = "javax/sound/midi/Synthesizer";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::javax::sound::midi::MidiDevice>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SOUND_MIDI_SYNTHESIZER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SOUND_MIDI_SYNTHESIZER)
#define SCAPIX_JAVA_API_JAVAX_SOUND_MIDI_SYNTHESIZER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/sound/midi/Instrument.h>
#include <scapix/java_api/javax/sound/midi/MidiChannel.h>
#include <scapix/java_api/javax/sound/midi/Patch.h>
#include <scapix/java_api/javax/sound/midi/Soundbank.h>
#include <scapix/java_api/javax/sound/midi/VoiceStatus.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::sound::midi::Synthesizer : public jni::object_base<"javax/sound/midi/Synthesizer",
	java::lang::Object,
	javax::sound::midi::MidiDevice>
{
public:

	jint getMaxPolyphony() { return call_method<"getMaxPolyphony", jint>(); }
	jlong getLatency() { return call_method<"getLatency", jlong>(); }
	jni::ref<jni::array<javax::sound::midi::MidiChannel>> getChannels() { return call_method<"getChannels", jni::ref<jni::array<javax::sound::midi::MidiChannel>>>(); }
	jni::ref<jni::array<javax::sound::midi::VoiceStatus>> getVoiceStatus() { return call_method<"getVoiceStatus", jni::ref<jni::array<javax::sound::midi::VoiceStatus>>>(); }
	jboolean isSoundbankSupported(jni::ref<javax::sound::midi::Soundbank> p1) { return call_method<"isSoundbankSupported", jboolean>(p1); }
	jboolean loadInstrument(jni::ref<javax::sound::midi::Instrument> p1) { return call_method<"loadInstrument", jboolean>(p1); }
	void unloadInstrument(jni::ref<javax::sound::midi::Instrument> p1) { return call_method<"unloadInstrument", void>(p1); }
	jboolean remapInstrument(jni::ref<javax::sound::midi::Instrument> p1, jni::ref<javax::sound::midi::Instrument> p2) { return call_method<"remapInstrument", jboolean>(p1, p2); }
	jni::ref<javax::sound::midi::Soundbank> getDefaultSoundbank() { return call_method<"getDefaultSoundbank", jni::ref<javax::sound::midi::Soundbank>>(); }
	jni::ref<jni::array<javax::sound::midi::Instrument>> getAvailableInstruments() { return call_method<"getAvailableInstruments", jni::ref<jni::array<javax::sound::midi::Instrument>>>(); }
	jni::ref<jni::array<javax::sound::midi::Instrument>> getLoadedInstruments() { return call_method<"getLoadedInstruments", jni::ref<jni::array<javax::sound::midi::Instrument>>>(); }
	jboolean loadAllInstruments(jni::ref<javax::sound::midi::Soundbank> p1) { return call_method<"loadAllInstruments", jboolean>(p1); }
	void unloadAllInstruments(jni::ref<javax::sound::midi::Soundbank> p1) { return call_method<"unloadAllInstruments", void>(p1); }
	jboolean loadInstruments(jni::ref<javax::sound::midi::Soundbank> p1, jni::ref<jni::array<javax::sound::midi::Patch>> p2) { return call_method<"loadInstruments", jboolean>(p1, p2); }
	void unloadInstruments(jni::ref<javax::sound::midi::Soundbank> p1, jni::ref<jni::array<javax::sound::midi::Patch>> p2) { return call_method<"unloadInstruments", void>(p1, p2); }

protected:

	Synthesizer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SOUND_MIDI_SYNTHESIZER