// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/media/sound/AbstractMidiDevice.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_MIDIOUTDEVICE_FWD
#define SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_MIDIOUTDEVICE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::media::sound { class MidiOutDevice; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::media::sound::MidiOutDevice>
{
	static constexpr fixed_string class_name = "com/sun/media/sound/MidiOutDevice";
	using base_classes = std::tuple<scapix::java_api::com::sun::media::sound::AbstractMidiDevice>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_MIDIOUTDEVICE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_MIDIOUTDEVICE)
#define SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_MIDIOUTDEVICE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::media::sound::MidiOutDevice : public jni::object_base<"com/sun/media/sound/MidiOutDevice",
	com::sun::media::sound::AbstractMidiDevice>
{
public:

	jlong getMicrosecondPosition() { return call_method<"getMicrosecondPosition", jlong>(); }

protected:

	MidiOutDevice(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_MIDIOUTDEVICE
