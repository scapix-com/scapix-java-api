// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/sound/midi/Instrument.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_MODELINSTRUMENT_FWD
#define SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_MODELINSTRUMENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::media::sound { class ModelInstrument; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::media::sound::ModelInstrument>
{
	static constexpr fixed_string class_name = "com/sun/media/sound/ModelInstrument";
	using base_classes = std::tuple<scapix::java_api::javax::sound::midi::Instrument>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_MODELINSTRUMENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_MODELINSTRUMENT)
#define SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_MODELINSTRUMENT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/media/sound/ModelChannelMixer.h>
#include <scapix/java_api/com/sun/media/sound/ModelDirectedPlayer.h>
#include <scapix/java_api/com/sun/media/sound/ModelDirector.h>
#include <scapix/java_api/com/sun/media/sound/ModelPerformer.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/sound/midi/MidiChannel.h>
#include <scapix/java_api/javax/sound/midi/Patch.h>
#include <scapix/java_api/javax/sound/sampled/AudioFormat.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::media::sound::ModelInstrument : public jni::object_base<"com/sun/media/sound/ModelInstrument",
	javax::sound::midi::Instrument>
{
public:

	jni::ref<com::sun::media::sound::ModelDirector> getDirector(jni::ref<jni::array<com::sun::media::sound::ModelPerformer>> p1, jni::ref<javax::sound::midi::MidiChannel> p2, jni::ref<com::sun::media::sound::ModelDirectedPlayer> p3) { return call_method<"getDirector", jni::ref<com::sun::media::sound::ModelDirector>>(p1, p2, p3); }
	jni::ref<jni::array<com::sun::media::sound::ModelPerformer>> getPerformers() { return call_method<"getPerformers", jni::ref<jni::array<com::sun::media::sound::ModelPerformer>>>(); }
	jni::ref<com::sun::media::sound::ModelChannelMixer> getChannelMixer(jni::ref<javax::sound::midi::MidiChannel> p1, jni::ref<javax::sound::sampled::AudioFormat> p2) { return call_method<"getChannelMixer", jni::ref<com::sun::media::sound::ModelChannelMixer>>(p1, p2); }
	jni::ref<javax::sound::midi::Patch> getPatchAlias() { return call_method<"getPatchAlias", jni::ref<javax::sound::midi::Patch>>(); }
	jni::ref<jni::array<java::lang::String>> getKeys() { return call_method<"getKeys", jni::ref<jni::array<java::lang::String>>>(); }
	jni::ref<jni::array<jboolean>> getChannels() { return call_method<"getChannels", jni::ref<jni::array<jboolean>>>(); }

protected:

	ModelInstrument(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_MODELINSTRUMENT