// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/sound/sampled/AudioInputStream.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_PCMTOPCMCODEC_PCMTOPCMCODECSTREAM_FWD
#define SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_PCMTOPCMCODEC_PCMTOPCMCODECSTREAM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::media::sound { class PCMtoPCMCodec_PCMtoPCMCodecStream; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::media::sound::PCMtoPCMCodec_PCMtoPCMCodecStream>
{
	static constexpr fixed_string class_name = "com/sun/media/sound/PCMtoPCMCodec$PCMtoPCMCodecStream";
	using base_classes = std::tuple<scapix::java_api::javax::sound::sampled::AudioInputStream>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_PCMTOPCMCODEC_PCMTOPCMCODECSTREAM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_PCMTOPCMCODEC_PCMTOPCMCODECSTREAM)
#define SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_PCMTOPCMCODEC_PCMTOPCMCODECSTREAM

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::media::sound::PCMtoPCMCodec_PCMtoPCMCodecStream : public jni::object_base<"com/sun/media/sound/PCMtoPCMCodec$PCMtoPCMCodecStream",
	javax::sound::sampled::AudioInputStream>
{
public:

	jint read() { return call_method<"read", jint>(); }
	jint read(jni::ref<jni::array<jbyte>> p1) { return call_method<"read", jint>(p1); }
	jint read(jni::ref<jni::array<jbyte>> p1, jint p2, jint p3) { return call_method<"read", jint>(p1, p2, p3); }

protected:

	PCMtoPCMCodec_PCMtoPCMCodecStream(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_PCMTOPCMCODEC_PCMTOPCMCODECSTREAM
