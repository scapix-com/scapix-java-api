// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/sound/midi/MidiDevice.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SOUND_MIDI_SEQUENCER_FWD
#define SCAPIX_JAVA_API_JAVAX_SOUND_MIDI_SEQUENCER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::sound::midi { class Sequencer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::sound::midi::Sequencer>
{
	static constexpr fixed_string class_name = "javax/sound/midi/Sequencer";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::javax::sound::midi::MidiDevice>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SOUND_MIDI_SEQUENCER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SOUND_MIDI_SEQUENCER)
#define SCAPIX_JAVA_API_JAVAX_SOUND_MIDI_SEQUENCER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/InputStream.h>
#include <scapix/java_api/javax/sound/midi/ControllerEventListener.h>
#include <scapix/java_api/javax/sound/midi/MetaEventListener.h>
#include <scapix/java_api/javax/sound/midi/Sequence.h>
#include <scapix/java_api/javax/sound/midi/Sequencer_SyncMode.h>
#include <scapix/java_api/javax/sound/midi/Track.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::sound::midi::Sequencer : public jni::object_base<"javax/sound/midi/Sequencer",
	java::lang::Object,
	javax::sound::midi::MidiDevice>
{
public:

	using SyncMode = Sequencer_SyncMode;

	static jint LOOP_CONTINUOUSLY() { return get_static_field<"LOOP_CONTINUOUSLY", jint>(); }

	void setSequence(jni::ref<javax::sound::midi::Sequence> p1) { return call_method<"setSequence", void>(p1); }
	void setSequence(jni::ref<java::io::InputStream> p1) { return call_method<"setSequence", void>(p1); }
	jni::ref<javax::sound::midi::Sequence> getSequence() { return call_method<"getSequence", jni::ref<javax::sound::midi::Sequence>>(); }
	void start() { return call_method<"start", void>(); }
	void stop() { return call_method<"stop", void>(); }
	jboolean isRunning() { return call_method<"isRunning", jboolean>(); }
	void startRecording() { return call_method<"startRecording", void>(); }
	void stopRecording() { return call_method<"stopRecording", void>(); }
	jboolean isRecording() { return call_method<"isRecording", jboolean>(); }
	void recordEnable(jni::ref<javax::sound::midi::Track> p1, jint p2) { return call_method<"recordEnable", void>(p1, p2); }
	void recordDisable(jni::ref<javax::sound::midi::Track> p1) { return call_method<"recordDisable", void>(p1); }
	jfloat getTempoInBPM() { return call_method<"getTempoInBPM", jfloat>(); }
	void setTempoInBPM(jfloat p1) { return call_method<"setTempoInBPM", void>(p1); }
	jfloat getTempoInMPQ() { return call_method<"getTempoInMPQ", jfloat>(); }
	void setTempoInMPQ(jfloat p1) { return call_method<"setTempoInMPQ", void>(p1); }
	void setTempoFactor(jfloat p1) { return call_method<"setTempoFactor", void>(p1); }
	jfloat getTempoFactor() { return call_method<"getTempoFactor", jfloat>(); }
	jlong getTickLength() { return call_method<"getTickLength", jlong>(); }
	jlong getTickPosition() { return call_method<"getTickPosition", jlong>(); }
	void setTickPosition(jlong p1) { return call_method<"setTickPosition", void>(p1); }
	jlong getMicrosecondLength() { return call_method<"getMicrosecondLength", jlong>(); }
	jlong getMicrosecondPosition() { return call_method<"getMicrosecondPosition", jlong>(); }
	void setMicrosecondPosition(jlong p1) { return call_method<"setMicrosecondPosition", void>(p1); }
	void setMasterSyncMode(jni::ref<javax::sound::midi::Sequencer_SyncMode> p1) { return call_method<"setMasterSyncMode", void>(p1); }
	jni::ref<javax::sound::midi::Sequencer_SyncMode> getMasterSyncMode() { return call_method<"getMasterSyncMode", jni::ref<javax::sound::midi::Sequencer_SyncMode>>(); }
	jni::ref<jni::array<javax::sound::midi::Sequencer_SyncMode>> getMasterSyncModes() { return call_method<"getMasterSyncModes", jni::ref<jni::array<javax::sound::midi::Sequencer_SyncMode>>>(); }
	void setSlaveSyncMode(jni::ref<javax::sound::midi::Sequencer_SyncMode> p1) { return call_method<"setSlaveSyncMode", void>(p1); }
	jni::ref<javax::sound::midi::Sequencer_SyncMode> getSlaveSyncMode() { return call_method<"getSlaveSyncMode", jni::ref<javax::sound::midi::Sequencer_SyncMode>>(); }
	jni::ref<jni::array<javax::sound::midi::Sequencer_SyncMode>> getSlaveSyncModes() { return call_method<"getSlaveSyncModes", jni::ref<jni::array<javax::sound::midi::Sequencer_SyncMode>>>(); }
	void setTrackMute(jint p1, jboolean p2) { return call_method<"setTrackMute", void>(p1, p2); }
	jboolean getTrackMute(jint p1) { return call_method<"getTrackMute", jboolean>(p1); }
	void setTrackSolo(jint p1, jboolean p2) { return call_method<"setTrackSolo", void>(p1, p2); }
	jboolean getTrackSolo(jint p1) { return call_method<"getTrackSolo", jboolean>(p1); }
	jboolean addMetaEventListener(jni::ref<javax::sound::midi::MetaEventListener> p1) { return call_method<"addMetaEventListener", jboolean>(p1); }
	void removeMetaEventListener(jni::ref<javax::sound::midi::MetaEventListener> p1) { return call_method<"removeMetaEventListener", void>(p1); }
	jni::ref<jni::array<jint>> addControllerEventListener(jni::ref<javax::sound::midi::ControllerEventListener> p1, jni::ref<jni::array<jint>> p2) { return call_method<"addControllerEventListener", jni::ref<jni::array<jint>>>(p1, p2); }
	jni::ref<jni::array<jint>> removeControllerEventListener(jni::ref<javax::sound::midi::ControllerEventListener> p1, jni::ref<jni::array<jint>> p2) { return call_method<"removeControllerEventListener", jni::ref<jni::array<jint>>>(p1, p2); }
	void setLoopStartPoint(jlong p1) { return call_method<"setLoopStartPoint", void>(p1); }
	jlong getLoopStartPoint() { return call_method<"getLoopStartPoint", jlong>(); }
	void setLoopEndPoint(jlong p1) { return call_method<"setLoopEndPoint", void>(p1); }
	jlong getLoopEndPoint() { return call_method<"getLoopEndPoint", jlong>(); }
	void setLoopCount(jint p1) { return call_method<"setLoopCount", void>(p1); }
	jint getLoopCount() { return call_method<"getLoopCount", jint>(); }

protected:

	Sequencer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SOUND_MIDI_SEQUENCER
