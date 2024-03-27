// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SOUND_MIDI_TRACK_FWD
#define SCAPIX_JAVA_API_JAVAX_SOUND_MIDI_TRACK_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::sound::midi { class Track; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::sound::midi::Track>
{
	static constexpr fixed_string class_name = "javax/sound/midi/Track";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SOUND_MIDI_TRACK_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SOUND_MIDI_TRACK)
#define SCAPIX_JAVA_API_JAVAX_SOUND_MIDI_TRACK

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/sound/midi/MidiEvent.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::sound::midi::Track : public jni::object_base<"javax/sound/midi/Track",
	java::lang::Object>
{
public:

	jboolean add(jni::ref<javax::sound::midi::MidiEvent> p1) { return call_method<"add", jboolean>(p1); }
	jboolean remove(jni::ref<javax::sound::midi::MidiEvent> p1) { return call_method<"remove", jboolean>(p1); }
	jni::ref<javax::sound::midi::MidiEvent> get(jint p1) { return call_method<"get", jni::ref<javax::sound::midi::MidiEvent>>(p1); }
	jint size() { return call_method<"size", jint>(); }
	jlong ticks() { return call_method<"ticks", jlong>(); }

protected:

	Track(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SOUND_MIDI_TRACK