// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/sound/sampled/spi/FormatConversionProvider.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_AUDIOFLOATFORMATCONVERTER_FWD
#define SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_AUDIOFLOATFORMATCONVERTER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::media::sound { class AudioFloatFormatConverter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::media::sound::AudioFloatFormatConverter>
{
	static constexpr fixed_string class_name = "com/sun/media/sound/AudioFloatFormatConverter";
	using base_classes = std::tuple<scapix::java_api::javax::sound::sampled::spi::FormatConversionProvider>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_AUDIOFLOATFORMATCONVERTER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_AUDIOFLOATFORMATCONVERTER)
#define SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_AUDIOFLOATFORMATCONVERTER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/media/sound/AudioFloatInputStream.h>
#include <scapix/java_api/javax/sound/sampled/AudioFormat.h>
#include <scapix/java_api/javax/sound/sampled/AudioFormat_Encoding.h>
#include <scapix/java_api/javax/sound/sampled/AudioInputStream.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::media::sound::AudioFloatFormatConverter : public jni::object_base<"com/sun/media/sound/AudioFloatFormatConverter",
	javax::sound::sampled::spi::FormatConversionProvider>
{
public:

	static jni::ref<com::sun::media::sound::AudioFloatFormatConverter> new_object() { return base_::new_object(); }
	jni::ref<javax::sound::sampled::AudioInputStream> getAudioInputStream(jni::ref<javax::sound::sampled::AudioFormat_Encoding> p1, jni::ref<javax::sound::sampled::AudioInputStream> p2) { return call_method<"getAudioInputStream", jni::ref<javax::sound::sampled::AudioInputStream>>(p1, p2); }
	jni::ref<javax::sound::sampled::AudioInputStream> getAudioInputStream(jni::ref<javax::sound::sampled::AudioFormat> p1, jni::ref<javax::sound::sampled::AudioInputStream> p2) { return call_method<"getAudioInputStream", jni::ref<javax::sound::sampled::AudioInputStream>>(p1, p2); }
	jni::ref<javax::sound::sampled::AudioInputStream> getAudioInputStream(jni::ref<javax::sound::sampled::AudioFormat> p1, jni::ref<com::sun::media::sound::AudioFloatInputStream> p2) { return call_method<"getAudioInputStream", jni::ref<javax::sound::sampled::AudioInputStream>>(p1, p2); }
	jni::ref<jni::array<javax::sound::sampled::AudioFormat_Encoding>> getSourceEncodings() { return call_method<"getSourceEncodings", jni::ref<jni::array<javax::sound::sampled::AudioFormat_Encoding>>>(); }
	jni::ref<jni::array<javax::sound::sampled::AudioFormat_Encoding>> getTargetEncodings() { return call_method<"getTargetEncodings", jni::ref<jni::array<javax::sound::sampled::AudioFormat_Encoding>>>(); }
	jni::ref<jni::array<javax::sound::sampled::AudioFormat_Encoding>> getTargetEncodings(jni::ref<javax::sound::sampled::AudioFormat> p1) { return call_method<"getTargetEncodings", jni::ref<jni::array<javax::sound::sampled::AudioFormat_Encoding>>>(p1); }
	jni::ref<jni::array<javax::sound::sampled::AudioFormat>> getTargetFormats(jni::ref<javax::sound::sampled::AudioFormat_Encoding> p1, jni::ref<javax::sound::sampled::AudioFormat> p2) { return call_method<"getTargetFormats", jni::ref<jni::array<javax::sound::sampled::AudioFormat>>>(p1, p2); }
	jboolean isConversionSupported(jni::ref<javax::sound::sampled::AudioFormat> p1, jni::ref<javax::sound::sampled::AudioFormat> p2) { return call_method<"isConversionSupported", jboolean>(p1, p2); }
	jboolean isConversionSupported(jni::ref<javax::sound::sampled::AudioFormat_Encoding> p1, jni::ref<javax::sound::sampled::AudioFormat> p2) { return call_method<"isConversionSupported", jboolean>(p1, p2); }

protected:

	AudioFloatFormatConverter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_AUDIOFLOATFORMATCONVERTER
