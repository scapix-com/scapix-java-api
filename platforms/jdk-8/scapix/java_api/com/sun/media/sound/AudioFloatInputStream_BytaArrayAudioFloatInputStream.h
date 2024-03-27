// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/media/sound/AudioFloatInputStream.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_AUDIOFLOATINPUTSTREAM_BYTAARRAYAUDIOFLOATINPUTSTREAM_FWD
#define SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_AUDIOFLOATINPUTSTREAM_BYTAARRAYAUDIOFLOATINPUTSTREAM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::media::sound { class AudioFloatInputStream_BytaArrayAudioFloatInputStream; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::media::sound::AudioFloatInputStream_BytaArrayAudioFloatInputStream>
{
	static constexpr fixed_string class_name = "com/sun/media/sound/AudioFloatInputStream$BytaArrayAudioFloatInputStream";
	using base_classes = std::tuple<scapix::java_api::com::sun::media::sound::AudioFloatInputStream>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_AUDIOFLOATINPUTSTREAM_BYTAARRAYAUDIOFLOATINPUTSTREAM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_AUDIOFLOATINPUTSTREAM_BYTAARRAYAUDIOFLOATINPUTSTREAM)
#define SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_AUDIOFLOATINPUTSTREAM_BYTAARRAYAUDIOFLOATINPUTSTREAM

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/sound/sampled/AudioFormat.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::media::sound::AudioFloatInputStream_BytaArrayAudioFloatInputStream : public jni::object_base<"com/sun/media/sound/AudioFloatInputStream$BytaArrayAudioFloatInputStream",
	com::sun::media::sound::AudioFloatInputStream>
{
public:

	jni::ref<javax::sound::sampled::AudioFormat> getFormat() { return call_method<"getFormat", jni::ref<javax::sound::sampled::AudioFormat>>(); }
	jlong getFrameLength() { return call_method<"getFrameLength", jlong>(); }
	jint read(jni::ref<jni::array<jfloat>> p1, jint p2, jint p3) { return call_method<"read", jint>(p1, p2, p3); }
	jlong skip(jlong p1) { return call_method<"skip", jlong>(p1); }
	jint available() { return call_method<"available", jint>(); }
	void close() { return call_method<"close", void>(); }
	void mark(jint p1) { return call_method<"mark", void>(p1); }
	jboolean markSupported() { return call_method<"markSupported", jboolean>(); }
	void reset() { return call_method<"reset", void>(); }

protected:

	AudioFloatInputStream_BytaArrayAudioFloatInputStream(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_AUDIOFLOATINPUTSTREAM_BYTAARRAYAUDIOFLOATINPUTSTREAM