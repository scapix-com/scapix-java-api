// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/sound/sampled/spi/AudioFileReader.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_SUNFILEREADER_FWD
#define SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_SUNFILEREADER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::media::sound { class SunFileReader; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::media::sound::SunFileReader>
{
	static constexpr fixed_string class_name = "com/sun/media/sound/SunFileReader";
	using base_classes = std::tuple<scapix::java_api::javax::sound::sampled::spi::AudioFileReader>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_SUNFILEREADER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_SUNFILEREADER)
#define SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_SUNFILEREADER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/File.h>
#include <scapix/java_api/java/io/InputStream.h>
#include <scapix/java_api/java/net/URL.h>
#include <scapix/java_api/javax/sound/sampled/AudioFileFormat.h>
#include <scapix/java_api/javax/sound/sampled/AudioInputStream.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::media::sound::SunFileReader : public jni::object_base<"com/sun/media/sound/SunFileReader",
	javax::sound::sampled::spi::AudioFileReader>
{
public:

	jni::ref<javax::sound::sampled::AudioFileFormat> getAudioFileFormat(jni::ref<java::io::InputStream> p1) { return call_method<"getAudioFileFormat", jni::ref<javax::sound::sampled::AudioFileFormat>>(p1); }
	jni::ref<javax::sound::sampled::AudioFileFormat> getAudioFileFormat(jni::ref<java::net::URL> p1) { return call_method<"getAudioFileFormat", jni::ref<javax::sound::sampled::AudioFileFormat>>(p1); }
	jni::ref<javax::sound::sampled::AudioFileFormat> getAudioFileFormat(jni::ref<java::io::File> p1) { return call_method<"getAudioFileFormat", jni::ref<javax::sound::sampled::AudioFileFormat>>(p1); }
	jni::ref<javax::sound::sampled::AudioInputStream> getAudioInputStream(jni::ref<java::io::InputStream> p1) { return call_method<"getAudioInputStream", jni::ref<javax::sound::sampled::AudioInputStream>>(p1); }
	jni::ref<javax::sound::sampled::AudioInputStream> getAudioInputStream(jni::ref<java::net::URL> p1) { return call_method<"getAudioInputStream", jni::ref<javax::sound::sampled::AudioInputStream>>(p1); }
	jni::ref<javax::sound::sampled::AudioInputStream> getAudioInputStream(jni::ref<java::io::File> p1) { return call_method<"getAudioInputStream", jni::ref<javax::sound::sampled::AudioInputStream>>(p1); }

protected:

	SunFileReader(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_SUNFILEREADER
