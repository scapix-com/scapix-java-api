// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/Cloneable.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SOUND_MIDI_MIDIMESSAGE_FWD
#define SCAPIX_JAVA_API_JAVAX_SOUND_MIDI_MIDIMESSAGE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::sound::midi { class MidiMessage; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::sound::midi::MidiMessage>
{
	static constexpr fixed_string class_name = "javax/sound/midi/MidiMessage";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::Cloneable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SOUND_MIDI_MIDIMESSAGE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SOUND_MIDI_MIDIMESSAGE)
#define SCAPIX_JAVA_API_JAVAX_SOUND_MIDI_MIDIMESSAGE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::sound::midi::MidiMessage : public jni::object_base<"javax/sound/midi/MidiMessage",
	java::lang::Object,
	java::lang::Cloneable>
{
public:

	jni::ref<jni::array<jbyte>> getMessage() { return call_method<"getMessage", jni::ref<jni::array<jbyte>>>(); }
	jint getStatus() { return call_method<"getStatus", jint>(); }
	jint getLength() { return call_method<"getLength", jint>(); }
	jni::ref<java::lang::Object> clone() { return call_method<"clone", jni::ref<java::lang::Object>>(); }

protected:

	MidiMessage(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SOUND_MIDI_MIDIMESSAGE
