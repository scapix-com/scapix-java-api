// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SOUND_MIDI_SPI_MIDIFILEREADER_FWD
#define SCAPIX_JAVA_API_JAVAX_SOUND_MIDI_SPI_MIDIFILEREADER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::sound::midi::spi { class MidiFileReader; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::sound::midi::spi::MidiFileReader>
{
	static constexpr fixed_string class_name = "javax/sound/midi/spi/MidiFileReader";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SOUND_MIDI_SPI_MIDIFILEREADER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SOUND_MIDI_SPI_MIDIFILEREADER)
#define SCAPIX_JAVA_API_JAVAX_SOUND_MIDI_SPI_MIDIFILEREADER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/File.h>
#include <scapix/java_api/java/io/InputStream.h>
#include <scapix/java_api/java/net/URL.h>
#include <scapix/java_api/javax/sound/midi/MidiFileFormat.h>
#include <scapix/java_api/javax/sound/midi/Sequence.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::sound::midi::spi::MidiFileReader : public jni::object_base<"javax/sound/midi/spi/MidiFileReader",
	java::lang::Object>
{
public:

	static jni::ref<javax::sound::midi::spi::MidiFileReader> new_object() { return base_::new_object(); }
	jni::ref<javax::sound::midi::MidiFileFormat> getMidiFileFormat(jni::ref<java::io::InputStream> p1) { return call_method<"getMidiFileFormat", jni::ref<javax::sound::midi::MidiFileFormat>>(p1); }
	jni::ref<javax::sound::midi::MidiFileFormat> getMidiFileFormat(jni::ref<java::net::URL> p1) { return call_method<"getMidiFileFormat", jni::ref<javax::sound::midi::MidiFileFormat>>(p1); }
	jni::ref<javax::sound::midi::MidiFileFormat> getMidiFileFormat(jni::ref<java::io::File> p1) { return call_method<"getMidiFileFormat", jni::ref<javax::sound::midi::MidiFileFormat>>(p1); }
	jni::ref<javax::sound::midi::Sequence> getSequence(jni::ref<java::io::InputStream> p1) { return call_method<"getSequence", jni::ref<javax::sound::midi::Sequence>>(p1); }
	jni::ref<javax::sound::midi::Sequence> getSequence(jni::ref<java::net::URL> p1) { return call_method<"getSequence", jni::ref<javax::sound::midi::Sequence>>(p1); }
	jni::ref<javax::sound::midi::Sequence> getSequence(jni::ref<java::io::File> p1) { return call_method<"getSequence", jni::ref<javax::sound::midi::Sequence>>(p1); }

protected:

	MidiFileReader(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SOUND_MIDI_SPI_MIDIFILEREADER
