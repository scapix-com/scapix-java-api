// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/sound/midi/MidiChannel.h>
#include <scapix/java_api/com/sun/media/sound/ModelDirectedPlayer.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_SOFTCHANNEL_FWD
#define SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_SOFTCHANNEL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::media::sound { class SoftChannel; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::media::sound::SoftChannel>
{
	static constexpr fixed_string class_name = "com/sun/media/sound/SoftChannel";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::javax::sound::midi::MidiChannel, scapix::java_api::com::sun::media::sound::ModelDirectedPlayer>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_SOFTCHANNEL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_SOFTCHANNEL)
#define SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_SOFTCHANNEL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/media/sound/ModelConnectionBlock.h>
#include <scapix/java_api/com/sun/media/sound/SoftSynthesizer.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::media::sound::SoftChannel : public jni::object_base<"com/sun/media/sound/SoftChannel",
	java::lang::Object,
	javax::sound::midi::MidiChannel,
	com::sun::media::sound::ModelDirectedPlayer>
{
public:

	static jni::ref<com::sun::media::sound::SoftChannel> new_object(jni::ref<com::sun::media::sound::SoftSynthesizer> p1, jint p2) { return base_::new_object(p1, p2); }
	void noteOn(jint p1, jint p2) { return call_method<"noteOn", void>(p1, p2); }
	void noteOff(jint p1, jint p2) { return call_method<"noteOff", void>(p1, p2); }
	void play(jint p1, jni::ref<jni::array<com::sun::media::sound::ModelConnectionBlock>> p2) { return call_method<"play", void>(p1, p2); }
	void noteOff(jint p1) { return call_method<"noteOff", void>(p1); }
	void setPolyPressure(jint p1, jint p2) { return call_method<"setPolyPressure", void>(p1, p2); }
	jint getPolyPressure(jint p1) { return call_method<"getPolyPressure", jint>(p1); }
	void setChannelPressure(jint p1) { return call_method<"setChannelPressure", void>(p1); }
	jint getChannelPressure() { return call_method<"getChannelPressure", jint>(); }
	void mapPolyPressureToDestination(jni::ref<jni::array<jint>> p1, jni::ref<jni::array<jint>> p2) { return call_method<"mapPolyPressureToDestination", void>(p1, p2); }
	void mapChannelPressureToDestination(jni::ref<jni::array<jint>> p1, jni::ref<jni::array<jint>> p2) { return call_method<"mapChannelPressureToDestination", void>(p1, p2); }
	void mapControlToDestination(jint p1, jni::ref<jni::array<jint>> p2, jni::ref<jni::array<jint>> p3) { return call_method<"mapControlToDestination", void>(p1, p2, p3); }
	void controlChangePerNote(jint p1, jint p2, jint p3) { return call_method<"controlChangePerNote", void>(p1, p2, p3); }
	jint getControlPerNote(jint p1, jint p2) { return call_method<"getControlPerNote", jint>(p1, p2); }
	void controlChange(jint p1, jint p2) { return call_method<"controlChange", void>(p1, p2); }
	jint getController(jint p1) { return call_method<"getController", jint>(p1); }
	void tuningChange(jint p1) { return call_method<"tuningChange", void>(p1); }
	void tuningChange(jint p1, jint p2) { return call_method<"tuningChange", void>(p1, p2); }
	void programChange(jint p1) { return call_method<"programChange", void>(p1); }
	void programChange(jint p1, jint p2) { return call_method<"programChange", void>(p1, p2); }
	jint getProgram() { return call_method<"getProgram", jint>(); }
	void setPitchBend(jint p1) { return call_method<"setPitchBend", void>(p1); }
	jint getPitchBend() { return call_method<"getPitchBend", jint>(); }
	void nrpnChange(jint p1, jint p2) { return call_method<"nrpnChange", void>(p1, p2); }
	void rpnChange(jint p1, jint p2) { return call_method<"rpnChange", void>(p1, p2); }
	void resetAllControllers() { return call_method<"resetAllControllers", void>(); }
	void resetAllControllers(jboolean p1) { return call_method<"resetAllControllers", void>(p1); }
	void allNotesOff() { return call_method<"allNotesOff", void>(); }
	void allSoundOff() { return call_method<"allSoundOff", void>(); }
	jboolean localControl(jboolean p1) { return call_method<"localControl", jboolean>(p1); }
	void setMono(jboolean p1) { return call_method<"setMono", void>(p1); }
	jboolean getMono() { return call_method<"getMono", jboolean>(); }
	void setOmni(jboolean p1) { return call_method<"setOmni", void>(p1); }
	jboolean getOmni() { return call_method<"getOmni", jboolean>(); }
	void setMute(jboolean p1) { return call_method<"setMute", void>(p1); }
	jboolean getMute() { return call_method<"getMute", jboolean>(); }
	void setSolo(jboolean p1) { return call_method<"setSolo", void>(p1); }
	jboolean getSolo() { return call_method<"getSolo", jboolean>(); }

protected:

	SoftChannel(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_SOFTCHANNEL
