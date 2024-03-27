// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_EMERGENCYSOUNDBANK_FWD
#define SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_EMERGENCYSOUNDBANK_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::media::sound { class EmergencySoundbank; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::media::sound::EmergencySoundbank>
{
	static constexpr fixed_string class_name = "com/sun/media/sound/EmergencySoundbank";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_EMERGENCYSOUNDBANK_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_EMERGENCYSOUNDBANK)
#define SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_EMERGENCYSOUNDBANK

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/media/sound/SF2Instrument.h>
#include <scapix/java_api/com/sun/media/sound/SF2Layer.h>
#include <scapix/java_api/com/sun/media/sound/SF2Sample.h>
#include <scapix/java_api/com/sun/media/sound/SF2Soundbank.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Random.h>
#include <scapix/java_api/javax/sound/midi/Patch.h>
#include <scapix/java_api/javax/sound/sampled/AudioFormat.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::media::sound::EmergencySoundbank : public jni::object_base<"com/sun/media/sound/EmergencySoundbank",
	java::lang::Object>
{
public:

	static jni::ref<com::sun::media::sound::EmergencySoundbank> new_object() { return base_::new_object(); }
	static jni::ref<com::sun::media::sound::SF2Soundbank> createSoundbank() { return call_static_method<"createSoundbank", jni::ref<com::sun::media::sound::SF2Soundbank>>(); }
	static jni::ref<com::sun::media::sound::SF2Layer> new_bell(jni::ref<com::sun::media::sound::SF2Soundbank> p1) { return call_static_method<"new_bell", jni::ref<com::sun::media::sound::SF2Layer>>(p1); }
	static jni::ref<com::sun::media::sound::SF2Layer> new_guitar1(jni::ref<com::sun::media::sound::SF2Soundbank> p1) { return call_static_method<"new_guitar1", jni::ref<com::sun::media::sound::SF2Layer>>(p1); }
	static jni::ref<com::sun::media::sound::SF2Layer> new_guitar_dist(jni::ref<com::sun::media::sound::SF2Soundbank> p1) { return call_static_method<"new_guitar_dist", jni::ref<com::sun::media::sound::SF2Layer>>(p1); }
	static jni::ref<com::sun::media::sound::SF2Layer> new_guitar_pick(jni::ref<com::sun::media::sound::SF2Soundbank> p1) { return call_static_method<"new_guitar_pick", jni::ref<com::sun::media::sound::SF2Layer>>(p1); }
	static jni::ref<com::sun::media::sound::SF2Layer> new_gpiano(jni::ref<com::sun::media::sound::SF2Soundbank> p1) { return call_static_method<"new_gpiano", jni::ref<com::sun::media::sound::SF2Layer>>(p1); }
	static jni::ref<com::sun::media::sound::SF2Layer> new_gpiano2(jni::ref<com::sun::media::sound::SF2Soundbank> p1) { return call_static_method<"new_gpiano2", jni::ref<com::sun::media::sound::SF2Layer>>(p1); }
	static jni::ref<com::sun::media::sound::SF2Layer> new_piano_hammer(jni::ref<com::sun::media::sound::SF2Soundbank> p1) { return call_static_method<"new_piano_hammer", jni::ref<com::sun::media::sound::SF2Layer>>(p1); }
	static jni::ref<com::sun::media::sound::SF2Layer> new_piano1(jni::ref<com::sun::media::sound::SF2Soundbank> p1) { return call_static_method<"new_piano1", jni::ref<com::sun::media::sound::SF2Layer>>(p1); }
	static jni::ref<com::sun::media::sound::SF2Layer> new_epiano1(jni::ref<com::sun::media::sound::SF2Soundbank> p1) { return call_static_method<"new_epiano1", jni::ref<com::sun::media::sound::SF2Layer>>(p1); }
	static jni::ref<com::sun::media::sound::SF2Layer> new_epiano2(jni::ref<com::sun::media::sound::SF2Soundbank> p1) { return call_static_method<"new_epiano2", jni::ref<com::sun::media::sound::SF2Layer>>(p1); }
	static jni::ref<com::sun::media::sound::SF2Layer> new_bass1(jni::ref<com::sun::media::sound::SF2Soundbank> p1) { return call_static_method<"new_bass1", jni::ref<com::sun::media::sound::SF2Layer>>(p1); }
	static jni::ref<com::sun::media::sound::SF2Layer> new_synthbass(jni::ref<com::sun::media::sound::SF2Soundbank> p1) { return call_static_method<"new_synthbass", jni::ref<com::sun::media::sound::SF2Layer>>(p1); }
	static jni::ref<com::sun::media::sound::SF2Layer> new_bass2(jni::ref<com::sun::media::sound::SF2Soundbank> p1) { return call_static_method<"new_bass2", jni::ref<com::sun::media::sound::SF2Layer>>(p1); }
	static jni::ref<com::sun::media::sound::SF2Layer> new_solostring(jni::ref<com::sun::media::sound::SF2Soundbank> p1) { return call_static_method<"new_solostring", jni::ref<com::sun::media::sound::SF2Layer>>(p1); }
	static jni::ref<com::sun::media::sound::SF2Layer> new_orchhit(jni::ref<com::sun::media::sound::SF2Soundbank> p1) { return call_static_method<"new_orchhit", jni::ref<com::sun::media::sound::SF2Layer>>(p1); }
	static jni::ref<com::sun::media::sound::SF2Layer> new_string2(jni::ref<com::sun::media::sound::SF2Soundbank> p1) { return call_static_method<"new_string2", jni::ref<com::sun::media::sound::SF2Layer>>(p1); }
	static jni::ref<com::sun::media::sound::SF2Layer> new_choir(jni::ref<com::sun::media::sound::SF2Soundbank> p1) { return call_static_method<"new_choir", jni::ref<com::sun::media::sound::SF2Layer>>(p1); }
	static jni::ref<com::sun::media::sound::SF2Layer> new_organ(jni::ref<com::sun::media::sound::SF2Soundbank> p1) { return call_static_method<"new_organ", jni::ref<com::sun::media::sound::SF2Layer>>(p1); }
	static jni::ref<com::sun::media::sound::SF2Layer> new_ch_organ(jni::ref<com::sun::media::sound::SF2Soundbank> p1) { return call_static_method<"new_ch_organ", jni::ref<com::sun::media::sound::SF2Layer>>(p1); }
	static jni::ref<com::sun::media::sound::SF2Layer> new_flute(jni::ref<com::sun::media::sound::SF2Soundbank> p1) { return call_static_method<"new_flute", jni::ref<com::sun::media::sound::SF2Layer>>(p1); }
	static jni::ref<com::sun::media::sound::SF2Layer> new_horn(jni::ref<com::sun::media::sound::SF2Soundbank> p1) { return call_static_method<"new_horn", jni::ref<com::sun::media::sound::SF2Layer>>(p1); }
	static jni::ref<com::sun::media::sound::SF2Layer> new_trumpet(jni::ref<com::sun::media::sound::SF2Soundbank> p1) { return call_static_method<"new_trumpet", jni::ref<com::sun::media::sound::SF2Layer>>(p1); }
	static jni::ref<com::sun::media::sound::SF2Layer> new_brass_section(jni::ref<com::sun::media::sound::SF2Soundbank> p1) { return call_static_method<"new_brass_section", jni::ref<com::sun::media::sound::SF2Layer>>(p1); }
	static jni::ref<com::sun::media::sound::SF2Layer> new_trombone(jni::ref<com::sun::media::sound::SF2Soundbank> p1) { return call_static_method<"new_trombone", jni::ref<com::sun::media::sound::SF2Layer>>(p1); }
	static jni::ref<com::sun::media::sound::SF2Layer> new_sax(jni::ref<com::sun::media::sound::SF2Soundbank> p1) { return call_static_method<"new_sax", jni::ref<com::sun::media::sound::SF2Layer>>(p1); }
	static jni::ref<com::sun::media::sound::SF2Layer> new_oboe(jni::ref<com::sun::media::sound::SF2Soundbank> p1) { return call_static_method<"new_oboe", jni::ref<com::sun::media::sound::SF2Layer>>(p1); }
	static jni::ref<com::sun::media::sound::SF2Layer> new_bassoon(jni::ref<com::sun::media::sound::SF2Soundbank> p1) { return call_static_method<"new_bassoon", jni::ref<com::sun::media::sound::SF2Layer>>(p1); }
	static jni::ref<com::sun::media::sound::SF2Layer> new_clarinet(jni::ref<com::sun::media::sound::SF2Soundbank> p1) { return call_static_method<"new_clarinet", jni::ref<com::sun::media::sound::SF2Layer>>(p1); }
	static jni::ref<com::sun::media::sound::SF2Layer> new_timpani(jni::ref<com::sun::media::sound::SF2Soundbank> p1) { return call_static_method<"new_timpani", jni::ref<com::sun::media::sound::SF2Layer>>(p1); }
	static jni::ref<com::sun::media::sound::SF2Layer> new_melodic_toms(jni::ref<com::sun::media::sound::SF2Soundbank> p1) { return call_static_method<"new_melodic_toms", jni::ref<com::sun::media::sound::SF2Layer>>(p1); }
	static jni::ref<com::sun::media::sound::SF2Layer> new_reverse_cymbal(jni::ref<com::sun::media::sound::SF2Soundbank> p1) { return call_static_method<"new_reverse_cymbal", jni::ref<com::sun::media::sound::SF2Layer>>(p1); }
	static jni::ref<com::sun::media::sound::SF2Layer> new_snare_drum(jni::ref<com::sun::media::sound::SF2Soundbank> p1) { return call_static_method<"new_snare_drum", jni::ref<com::sun::media::sound::SF2Layer>>(p1); }
	static jni::ref<com::sun::media::sound::SF2Layer> new_bass_drum(jni::ref<com::sun::media::sound::SF2Soundbank> p1) { return call_static_method<"new_bass_drum", jni::ref<com::sun::media::sound::SF2Layer>>(p1); }
	static jni::ref<com::sun::media::sound::SF2Layer> new_tom(jni::ref<com::sun::media::sound::SF2Soundbank> p1) { return call_static_method<"new_tom", jni::ref<com::sun::media::sound::SF2Layer>>(p1); }
	static jni::ref<com::sun::media::sound::SF2Layer> new_closed_hihat(jni::ref<com::sun::media::sound::SF2Soundbank> p1) { return call_static_method<"new_closed_hihat", jni::ref<com::sun::media::sound::SF2Layer>>(p1); }
	static jni::ref<com::sun::media::sound::SF2Layer> new_open_hihat(jni::ref<com::sun::media::sound::SF2Soundbank> p1) { return call_static_method<"new_open_hihat", jni::ref<com::sun::media::sound::SF2Layer>>(p1); }
	static jni::ref<com::sun::media::sound::SF2Layer> new_crash_cymbal(jni::ref<com::sun::media::sound::SF2Soundbank> p1) { return call_static_method<"new_crash_cymbal", jni::ref<com::sun::media::sound::SF2Layer>>(p1); }
	static jni::ref<com::sun::media::sound::SF2Layer> new_side_stick(jni::ref<com::sun::media::sound::SF2Soundbank> p1) { return call_static_method<"new_side_stick", jni::ref<com::sun::media::sound::SF2Layer>>(p1); }
	static jni::ref<com::sun::media::sound::SF2Sample> newSimpleFFTSample(jni::ref<com::sun::media::sound::SF2Soundbank> p1, jni::ref<java::lang::String> p2, jni::ref<jni::array<jdouble>> p3, jdouble p4) { return call_static_method<"newSimpleFFTSample", jni::ref<com::sun::media::sound::SF2Sample>>(p1, p2, p3, p4); }
	static jni::ref<com::sun::media::sound::SF2Sample> newSimpleFFTSample(jni::ref<com::sun::media::sound::SF2Soundbank> p1, jni::ref<java::lang::String> p2, jni::ref<jni::array<jdouble>> p3, jdouble p4, jint p5) { return call_static_method<"newSimpleFFTSample", jni::ref<com::sun::media::sound::SF2Sample>>(p1, p2, p3, p4, p5); }
	static jni::ref<com::sun::media::sound::SF2Sample> newSimpleFFTSample_dist(jni::ref<com::sun::media::sound::SF2Soundbank> p1, jni::ref<java::lang::String> p2, jni::ref<jni::array<jdouble>> p3, jdouble p4, jdouble p5) { return call_static_method<"newSimpleFFTSample_dist", jni::ref<com::sun::media::sound::SF2Sample>>(p1, p2, p3, p4, p5); }
	static jni::ref<com::sun::media::sound::SF2Sample> newSimpleDrumSample(jni::ref<com::sun::media::sound::SF2Soundbank> p1, jni::ref<java::lang::String> p2, jni::ref<jni::array<jdouble>> p3) { return call_static_method<"newSimpleDrumSample", jni::ref<com::sun::media::sound::SF2Sample>>(p1, p2, p3); }
	static jni::ref<com::sun::media::sound::SF2Layer> newLayer(jni::ref<com::sun::media::sound::SF2Soundbank> p1, jni::ref<java::lang::String> p2, jni::ref<com::sun::media::sound::SF2Sample> p3) { return call_static_method<"newLayer", jni::ref<com::sun::media::sound::SF2Layer>>(p1, p2, p3); }
	static jni::ref<com::sun::media::sound::SF2Instrument> newInstrument(jni::ref<com::sun::media::sound::SF2Soundbank> p1, jni::ref<java::lang::String> p2, jni::ref<javax::sound::midi::Patch> p3, jni::ref<jni::array<com::sun::media::sound::SF2Layer>> p4) { return call_static_method<"newInstrument", jni::ref<com::sun::media::sound::SF2Instrument>>(p1, p2, p3, p4); }
	static void ifft(jni::ref<jni::array<jdouble>> p1) { return call_static_method<"ifft", void>(p1); }
	static void fft(jni::ref<jni::array<jdouble>> p1) { return call_static_method<"fft", void>(p1); }
	static void complexGaussianDist(jni::ref<jni::array<jdouble>> p1, jdouble p2, jdouble p3, jdouble p4) { return call_static_method<"complexGaussianDist", void>(p1, p2, p3, p4); }
	static void randomPhase(jni::ref<jni::array<jdouble>> p1) { return call_static_method<"randomPhase", void>(p1); }
	static void randomPhase(jni::ref<jni::array<jdouble>> p1, jni::ref<java::util::Random> p2) { return call_static_method<"randomPhase", void>(p1, p2); }
	static void normalize(jni::ref<jni::array<jdouble>> p1, jdouble p2) { return call_static_method<"normalize", void>(p1, p2); }
	static void normalize(jni::ref<jni::array<jfloat>> p1, jdouble p2) { return call_static_method<"normalize", void>(p1, p2); }
	static jni::ref<jni::array<jdouble>> realPart(jni::ref<jni::array<jdouble>> p1) { return call_static_method<"realPart", jni::ref<jni::array<jdouble>>>(p1); }
	static jni::ref<jni::array<jdouble>> imgPart(jni::ref<jni::array<jdouble>> p1) { return call_static_method<"imgPart", jni::ref<jni::array<jdouble>>>(p1); }
	static jni::ref<jni::array<jfloat>> toFloat(jni::ref<jni::array<jdouble>> p1) { return call_static_method<"toFloat", jni::ref<jni::array<jfloat>>>(p1); }
	static jni::ref<jni::array<jbyte>> toBytes(jni::ref<jni::array<jfloat>> p1, jni::ref<javax::sound::sampled::AudioFormat> p2) { return call_static_method<"toBytes", jni::ref<jni::array<jbyte>>>(p1, p2); }
	static void fadeUp(jni::ref<jni::array<jdouble>> p1, jint p2) { return call_static_method<"fadeUp", void>(p1, p2); }
	static void fadeUp(jni::ref<jni::array<jfloat>> p1, jint p2) { return call_static_method<"fadeUp", void>(p1, p2); }
	static jni::ref<jni::array<jdouble>> loopExtend(jni::ref<jni::array<jdouble>> p1, jint p2) { return call_static_method<"loopExtend", jni::ref<jni::array<jdouble>>>(p1, p2); }
	static jni::ref<jni::array<jfloat>> loopExtend(jni::ref<jni::array<jfloat>> p1, jint p2) { return call_static_method<"loopExtend", jni::ref<jni::array<jfloat>>>(p1, p2); }

protected:

	EmergencySoundbank(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_EMERGENCYSOUNDBANK