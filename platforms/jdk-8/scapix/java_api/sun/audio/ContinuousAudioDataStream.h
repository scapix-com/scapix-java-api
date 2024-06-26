// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/audio/AudioDataStream.h>

#ifndef SCAPIX_JAVA_API_SUN_AUDIO_CONTINUOUSAUDIODATASTREAM_FWD
#define SCAPIX_JAVA_API_SUN_AUDIO_CONTINUOUSAUDIODATASTREAM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::audio { class ContinuousAudioDataStream; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::audio::ContinuousAudioDataStream>
{
	static constexpr fixed_string class_name = "sun/audio/ContinuousAudioDataStream";
	using base_classes = std::tuple<scapix::java_api::sun::audio::AudioDataStream>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AUDIO_CONTINUOUSAUDIODATASTREAM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_AUDIO_CONTINUOUSAUDIODATASTREAM)
#define SCAPIX_JAVA_API_SUN_AUDIO_CONTINUOUSAUDIODATASTREAM

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/sun/audio/AudioData.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::audio::ContinuousAudioDataStream : public jni::object_base<"sun/audio/ContinuousAudioDataStream",
	sun::audio::AudioDataStream>
{
public:

	static jni::ref<sun::audio::ContinuousAudioDataStream> new_object(jni::ref<sun::audio::AudioData> p1) { return base_::new_object(p1); }
	jint read() { return call_method<"read", jint>(); }
	jint read(jni::ref<jni::array<jbyte>> p1, jint p2, jint p3) { return call_method<"read", jint>(p1, p2, p3); }

protected:

	ContinuousAudioDataStream(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AUDIO_CONTINUOUSAUDIODATASTREAM
