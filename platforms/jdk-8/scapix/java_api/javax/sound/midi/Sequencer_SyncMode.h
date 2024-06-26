// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SOUND_MIDI_SEQUENCER_SYNCMODE_FWD
#define SCAPIX_JAVA_API_JAVAX_SOUND_MIDI_SEQUENCER_SYNCMODE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::sound::midi { class Sequencer_SyncMode; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::sound::midi::Sequencer_SyncMode>
{
	static constexpr fixed_string class_name = "javax/sound/midi/Sequencer$SyncMode";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SOUND_MIDI_SEQUENCER_SYNCMODE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SOUND_MIDI_SEQUENCER_SYNCMODE)
#define SCAPIX_JAVA_API_JAVAX_SOUND_MIDI_SEQUENCER_SYNCMODE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::sound::midi::Sequencer_SyncMode : public jni::object_base<"javax/sound/midi/Sequencer$SyncMode",
	java::lang::Object>
{
public:

	static jni::ref<javax::sound::midi::Sequencer_SyncMode> INTERNAL_CLOCK() { return get_static_field<"INTERNAL_CLOCK", jni::ref<javax::sound::midi::Sequencer_SyncMode>>(); }
	static jni::ref<javax::sound::midi::Sequencer_SyncMode> MIDI_SYNC() { return get_static_field<"MIDI_SYNC", jni::ref<javax::sound::midi::Sequencer_SyncMode>>(); }
	static jni::ref<javax::sound::midi::Sequencer_SyncMode> MIDI_TIME_CODE() { return get_static_field<"MIDI_TIME_CODE", jni::ref<javax::sound::midi::Sequencer_SyncMode>>(); }
	static jni::ref<javax::sound::midi::Sequencer_SyncMode> NO_SYNC() { return get_static_field<"NO_SYNC", jni::ref<javax::sound::midi::Sequencer_SyncMode>>(); }

	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	Sequencer_SyncMode(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SOUND_MIDI_SEQUENCER_SYNCMODE
