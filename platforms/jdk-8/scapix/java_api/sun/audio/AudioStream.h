// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/io/FilterInputStream.h>

#ifndef SCAPIX_JAVA_API_SUN_AUDIO_AUDIOSTREAM_FWD
#define SCAPIX_JAVA_API_SUN_AUDIO_AUDIOSTREAM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::audio { class AudioStream; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::audio::AudioStream>
{
	static constexpr fixed_string class_name = "sun/audio/AudioStream";
	using base_classes = std::tuple<scapix::java_api::java::io::FilterInputStream>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AUDIO_AUDIOSTREAM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_AUDIO_AUDIOSTREAM)
#define SCAPIX_JAVA_API_SUN_AUDIO_AUDIOSTREAM

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/InputStream.h>
#include <scapix/java_api/sun/audio/AudioData.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::audio::AudioStream : public jni::object_base<"sun/audio/AudioStream",
	java::io::FilterInputStream>
{
public:

	static jni::ref<sun::audio::AudioStream> new_object(jni::ref<java::io::InputStream> p1) { return base_::new_object(p1); }
	jni::ref<sun::audio::AudioData> getData() { return call_method<"getData", jni::ref<sun::audio::AudioData>>(); }
	jint getLength() { return call_method<"getLength", jint>(); }

protected:

	AudioStream(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AUDIO_AUDIOSTREAM
