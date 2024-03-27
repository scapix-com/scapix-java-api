// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_SOFTMIXINGMAINMIXER_FWD
#define SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_SOFTMIXINGMAINMIXER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::media::sound { class SoftMixingMainMixer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::media::sound::SoftMixingMainMixer>
{
	static constexpr fixed_string class_name = "com/sun/media/sound/SoftMixingMainMixer";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_SOFTMIXINGMAINMIXER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_SOFTMIXINGMAINMIXER)
#define SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_SOFTMIXINGMAINMIXER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/media/sound/SoftMixingDataLine.h>
#include <scapix/java_api/com/sun/media/sound/SoftMixingMixer.h>
#include <scapix/java_api/javax/sound/sampled/AudioInputStream.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::media::sound::SoftMixingMainMixer : public jni::object_base<"com/sun/media/sound/SoftMixingMainMixer",
	java::lang::Object>
{
public:

	static jint CHANNEL_LEFT() { return get_static_field<"CHANNEL_LEFT", jint>(); }
	static jint CHANNEL_RIGHT() { return get_static_field<"CHANNEL_RIGHT", jint>(); }
	static jint CHANNEL_EFFECT1() { return get_static_field<"CHANNEL_EFFECT1", jint>(); }
	static jint CHANNEL_EFFECT2() { return get_static_field<"CHANNEL_EFFECT2", jint>(); }
	static jint CHANNEL_EFFECT3() { return get_static_field<"CHANNEL_EFFECT3", jint>(); }
	static jint CHANNEL_EFFECT4() { return get_static_field<"CHANNEL_EFFECT4", jint>(); }
	static jint CHANNEL_LEFT_DRY() { return get_static_field<"CHANNEL_LEFT_DRY", jint>(); }
	static jint CHANNEL_RIGHT_DRY() { return get_static_field<"CHANNEL_RIGHT_DRY", jint>(); }
	static jint CHANNEL_SCRATCH1() { return get_static_field<"CHANNEL_SCRATCH1", jint>(); }
	static jint CHANNEL_SCRATCH2() { return get_static_field<"CHANNEL_SCRATCH2", jint>(); }
	static jint CHANNEL_CHANNELMIXER_LEFT() { return get_static_field<"CHANNEL_CHANNELMIXER_LEFT", jint>(); }
	static jint CHANNEL_CHANNELMIXER_RIGHT() { return get_static_field<"CHANNEL_CHANNELMIXER_RIGHT", jint>(); }

	jni::ref<javax::sound::sampled::AudioInputStream> getInputStream() { return call_method<"getInputStream", jni::ref<javax::sound::sampled::AudioInputStream>>(); }
	static jni::ref<com::sun::media::sound::SoftMixingMainMixer> new_object(jni::ref<com::sun::media::sound::SoftMixingMixer> p1) { return base_::new_object(p1); }
	void openLine(jni::ref<com::sun::media::sound::SoftMixingDataLine> p1) { return call_method<"openLine", void>(p1); }
	void closeLine(jni::ref<com::sun::media::sound::SoftMixingDataLine> p1) { return call_method<"closeLine", void>(p1); }
	jni::ref<jni::array<com::sun::media::sound::SoftMixingDataLine>> getOpenLines() { return call_method<"getOpenLines", jni::ref<jni::array<com::sun::media::sound::SoftMixingDataLine>>>(); }
	void close() { return call_method<"close", void>(); }

protected:

	SoftMixingMainMixer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_SOFTMIXINGMAINMIXER