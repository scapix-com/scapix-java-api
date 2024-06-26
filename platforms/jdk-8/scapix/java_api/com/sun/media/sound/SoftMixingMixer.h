// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/sound/sampled/Mixer.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_SOFTMIXINGMIXER_FWD
#define SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_SOFTMIXINGMIXER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::media::sound { class SoftMixingMixer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::media::sound::SoftMixingMixer>
{
	static constexpr fixed_string class_name = "com/sun/media/sound/SoftMixingMixer";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::javax::sound::sampled::Mixer>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_SOFTMIXINGMIXER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_SOFTMIXINGMIXER)
#define SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_SOFTMIXINGMIXER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/sound/sampled/AudioFormat.h>
#include <scapix/java_api/javax/sound/sampled/AudioInputStream.h>
#include <scapix/java_api/javax/sound/sampled/Control.h>
#include <scapix/java_api/javax/sound/sampled/Control_Type.h>
#include <scapix/java_api/javax/sound/sampled/Line.h>
#include <scapix/java_api/javax/sound/sampled/Line_Info.h>
#include <scapix/java_api/javax/sound/sampled/LineListener.h>
#include <scapix/java_api/javax/sound/sampled/Mixer_Info.h>
#include <scapix/java_api/javax/sound/sampled/SourceDataLine.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::media::sound::SoftMixingMixer : public jni::object_base<"com/sun/media/sound/SoftMixingMixer",
	java::lang::Object,
	javax::sound::sampled::Mixer>
{
public:

	static jni::ref<com::sun::media::sound::SoftMixingMixer> new_object() { return base_::new_object(); }
	jni::ref<javax::sound::sampled::Line> getLine(jni::ref<javax::sound::sampled::Line_Info> p1) { return call_method<"getLine", jni::ref<javax::sound::sampled::Line>>(p1); }
	jint getMaxLines(jni::ref<javax::sound::sampled::Line_Info> p1) { return call_method<"getMaxLines", jint>(p1); }
	jni::ref<javax::sound::sampled::Mixer_Info> getMixerInfo() { return call_method<"getMixerInfo", jni::ref<javax::sound::sampled::Mixer_Info>>(); }
	jni::ref<jni::array<javax::sound::sampled::Line_Info>> getSourceLineInfo() { return call_method<"getSourceLineInfo", jni::ref<jni::array<javax::sound::sampled::Line_Info>>>(); }
	jni::ref<jni::array<javax::sound::sampled::Line_Info>> getSourceLineInfo(jni::ref<javax::sound::sampled::Line_Info> p1) { return call_method<"getSourceLineInfo", jni::ref<jni::array<javax::sound::sampled::Line_Info>>>(p1); }
	jni::ref<jni::array<javax::sound::sampled::Line>> getSourceLines() { return call_method<"getSourceLines", jni::ref<jni::array<javax::sound::sampled::Line>>>(); }
	jni::ref<jni::array<javax::sound::sampled::Line_Info>> getTargetLineInfo() { return call_method<"getTargetLineInfo", jni::ref<jni::array<javax::sound::sampled::Line_Info>>>(); }
	jni::ref<jni::array<javax::sound::sampled::Line_Info>> getTargetLineInfo(jni::ref<javax::sound::sampled::Line_Info> p1) { return call_method<"getTargetLineInfo", jni::ref<jni::array<javax::sound::sampled::Line_Info>>>(p1); }
	jni::ref<jni::array<javax::sound::sampled::Line>> getTargetLines() { return call_method<"getTargetLines", jni::ref<jni::array<javax::sound::sampled::Line>>>(); }
	jboolean isLineSupported(jni::ref<javax::sound::sampled::Line_Info> p1) { return call_method<"isLineSupported", jboolean>(p1); }
	jboolean isSynchronizationSupported(jni::ref<jni::array<javax::sound::sampled::Line>> p1, jboolean p2) { return call_method<"isSynchronizationSupported", jboolean>(p1, p2); }
	void synchronize(jni::ref<jni::array<javax::sound::sampled::Line>> p1, jboolean p2) { return call_method<"synchronize", void>(p1, p2); }
	void unsynchronize(jni::ref<jni::array<javax::sound::sampled::Line>> p1) { return call_method<"unsynchronize", void>(p1); }
	void addLineListener(jni::ref<javax::sound::sampled::LineListener> p1) { return call_method<"addLineListener", void>(p1); }
	void close() { return call_method<"close", void>(); }
	jni::ref<javax::sound::sampled::Control> getControl(jni::ref<javax::sound::sampled::Control_Type> p1) { return call_method<"getControl", jni::ref<javax::sound::sampled::Control>>(p1); }
	jni::ref<jni::array<javax::sound::sampled::Control>> getControls() { return call_method<"getControls", jni::ref<jni::array<javax::sound::sampled::Control>>>(); }
	jni::ref<javax::sound::sampled::Line_Info> getLineInfo() { return call_method<"getLineInfo", jni::ref<javax::sound::sampled::Line_Info>>(); }
	jboolean isControlSupported(jni::ref<javax::sound::sampled::Control_Type> p1) { return call_method<"isControlSupported", jboolean>(p1); }
	jboolean isOpen() { return call_method<"isOpen", jboolean>(); }
	void open() { return call_method<"open", void>(); }
	void open(jni::ref<javax::sound::sampled::SourceDataLine> p1) { return call_method<"open", void>(p1); }
	jni::ref<javax::sound::sampled::AudioInputStream> openStream(jni::ref<javax::sound::sampled::AudioFormat> p1) { return call_method<"openStream", jni::ref<javax::sound::sampled::AudioInputStream>>(p1); }
	void removeLineListener(jni::ref<javax::sound::sampled::LineListener> p1) { return call_method<"removeLineListener", void>(p1); }
	jlong getLatency() { return call_method<"getLatency", jlong>(); }
	jni::ref<javax::sound::sampled::AudioFormat> getFormat() { return call_method<"getFormat", jni::ref<javax::sound::sampled::AudioFormat>>(); }

protected:

	SoftMixingMixer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_SOFTMIXINGMIXER
