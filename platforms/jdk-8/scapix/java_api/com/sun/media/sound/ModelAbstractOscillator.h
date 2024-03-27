// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/com/sun/media/sound/ModelOscillator.h>
#include <scapix/java_api/com/sun/media/sound/ModelOscillatorStream.h>
#include <scapix/java_api/javax/sound/midi/Soundbank.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_MODELABSTRACTOSCILLATOR_FWD
#define SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_MODELABSTRACTOSCILLATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::media::sound { class ModelAbstractOscillator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::media::sound::ModelAbstractOscillator>
{
	static constexpr fixed_string class_name = "com/sun/media/sound/ModelAbstractOscillator";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::com::sun::media::sound::ModelOscillator, scapix::java_api::com::sun::media::sound::ModelOscillatorStream, scapix::java_api::javax::sound::midi::Soundbank>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_MODELABSTRACTOSCILLATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_MODELABSTRACTOSCILLATOR)
#define SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_MODELABSTRACTOSCILLATOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/media/sound/ModelInstrument.h>
#include <scapix/java_api/com/sun/media/sound/ModelPerformer.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/sound/midi/Instrument.h>
#include <scapix/java_api/javax/sound/midi/MidiChannel.h>
#include <scapix/java_api/javax/sound/midi/Patch.h>
#include <scapix/java_api/javax/sound/midi/SoundbankResource.h>
#include <scapix/java_api/javax/sound/midi/VoiceStatus.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::media::sound::ModelAbstractOscillator : public jni::object_base<"com/sun/media/sound/ModelAbstractOscillator",
	java::lang::Object,
	com::sun::media::sound::ModelOscillator,
	com::sun::media::sound::ModelOscillatorStream,
	javax::sound::midi::Soundbank>
{
public:

	static jni::ref<com::sun::media::sound::ModelAbstractOscillator> new_object() { return base_::new_object(); }
	void init() { return call_method<"init", void>(); }
	void close() { return call_method<"close", void>(); }
	void noteOff(jint p1) { return call_method<"noteOff", void>(p1); }
	void noteOn(jni::ref<javax::sound::midi::MidiChannel> p1, jni::ref<javax::sound::midi::VoiceStatus> p2, jint p3, jint p4) { return call_method<"noteOn", void>(p1, p2, p3, p4); }
	jint read(jni::ref<jni::array<jni::array<jfloat>>> p1, jint p2, jint p3) { return call_method<"read", jint>(p1, p2, p3); }
	jni::ref<javax::sound::midi::MidiChannel> getChannel() { return call_method<"getChannel", jni::ref<javax::sound::midi::MidiChannel>>(); }
	jni::ref<javax::sound::midi::VoiceStatus> getVoice() { return call_method<"getVoice", jni::ref<javax::sound::midi::VoiceStatus>>(); }
	jint getNoteNumber() { return call_method<"getNoteNumber", jint>(); }
	jint getVelocity() { return call_method<"getVelocity", jint>(); }
	jboolean isOn() { return call_method<"isOn", jboolean>(); }
	void setPitch(jfloat p1) { return call_method<"setPitch", void>(p1); }
	jfloat getPitch() { return call_method<"getPitch", jfloat>(); }
	void setSampleRate(jfloat p1) { return call_method<"setSampleRate", void>(p1); }
	jfloat getSampleRate() { return call_method<"getSampleRate", jfloat>(); }
	jfloat getAttenuation() { return call_method<"getAttenuation", jfloat>(); }
	jint getChannels() { return call_method<"getChannels", jint>(); }
	jni::ref<java::lang::String> getName() { return call_method<"getName", jni::ref<java::lang::String>>(); }
	jni::ref<javax::sound::midi::Patch> getPatch() { return call_method<"getPatch", jni::ref<javax::sound::midi::Patch>>(); }
	jni::ref<com::sun::media::sound::ModelOscillatorStream> open(jfloat p1) { return call_method<"open", jni::ref<com::sun::media::sound::ModelOscillatorStream>>(p1); }
	jni::ref<com::sun::media::sound::ModelPerformer> getPerformer() { return call_method<"getPerformer", jni::ref<com::sun::media::sound::ModelPerformer>>(); }
	jni::ref<com::sun::media::sound::ModelInstrument> getInstrument() { return call_method<"getInstrument", jni::ref<com::sun::media::sound::ModelInstrument>>(); }
	jni::ref<javax::sound::midi::Soundbank> getSoundBank() { return call_method<"getSoundBank", jni::ref<javax::sound::midi::Soundbank>>(); }
	jni::ref<java::lang::String> getDescription() { return call_method<"getDescription", jni::ref<java::lang::String>>(); }
	jni::ref<javax::sound::midi::Instrument> getInstrument(jni::ref<javax::sound::midi::Patch> p1) { return call_method<"getInstrument", jni::ref<javax::sound::midi::Instrument>>(p1); }
	jni::ref<jni::array<javax::sound::midi::Instrument>> getInstruments() { return call_method<"getInstruments", jni::ref<jni::array<javax::sound::midi::Instrument>>>(); }
	jni::ref<jni::array<javax::sound::midi::SoundbankResource>> getResources() { return call_method<"getResources", jni::ref<jni::array<javax::sound::midi::SoundbankResource>>>(); }
	jni::ref<java::lang::String> getVendor() { return call_method<"getVendor", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getVersion() { return call_method<"getVersion", jni::ref<java::lang::String>>(); }

protected:

	ModelAbstractOscillator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_MODELABSTRACTOSCILLATOR