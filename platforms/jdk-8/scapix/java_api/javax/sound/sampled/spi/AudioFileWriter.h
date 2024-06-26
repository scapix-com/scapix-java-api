// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SOUND_SAMPLED_SPI_AUDIOFILEWRITER_FWD
#define SCAPIX_JAVA_API_JAVAX_SOUND_SAMPLED_SPI_AUDIOFILEWRITER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::sound::sampled::spi { class AudioFileWriter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::sound::sampled::spi::AudioFileWriter>
{
	static constexpr fixed_string class_name = "javax/sound/sampled/spi/AudioFileWriter";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SOUND_SAMPLED_SPI_AUDIOFILEWRITER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SOUND_SAMPLED_SPI_AUDIOFILEWRITER)
#define SCAPIX_JAVA_API_JAVAX_SOUND_SAMPLED_SPI_AUDIOFILEWRITER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/File.h>
#include <scapix/java_api/java/io/OutputStream.h>
#include <scapix/java_api/javax/sound/sampled/AudioFileFormat_Type.h>
#include <scapix/java_api/javax/sound/sampled/AudioInputStream.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::sound::sampled::spi::AudioFileWriter : public jni::object_base<"javax/sound/sampled/spi/AudioFileWriter",
	java::lang::Object>
{
public:

	static jni::ref<javax::sound::sampled::spi::AudioFileWriter> new_object() { return base_::new_object(); }
	jni::ref<jni::array<javax::sound::sampled::AudioFileFormat_Type>> getAudioFileTypes() { return call_method<"getAudioFileTypes", jni::ref<jni::array<javax::sound::sampled::AudioFileFormat_Type>>>(); }
	jboolean isFileTypeSupported(jni::ref<javax::sound::sampled::AudioFileFormat_Type> p1) { return call_method<"isFileTypeSupported", jboolean>(p1); }
	jni::ref<jni::array<javax::sound::sampled::AudioFileFormat_Type>> getAudioFileTypes(jni::ref<javax::sound::sampled::AudioInputStream> p1) { return call_method<"getAudioFileTypes", jni::ref<jni::array<javax::sound::sampled::AudioFileFormat_Type>>>(p1); }
	jboolean isFileTypeSupported(jni::ref<javax::sound::sampled::AudioFileFormat_Type> p1, jni::ref<javax::sound::sampled::AudioInputStream> p2) { return call_method<"isFileTypeSupported", jboolean>(p1, p2); }
	jint write(jni::ref<javax::sound::sampled::AudioInputStream> p1, jni::ref<javax::sound::sampled::AudioFileFormat_Type> p2, jni::ref<java::io::OutputStream> p3) { return call_method<"write", jint>(p1, p2, p3); }
	jint write(jni::ref<javax::sound::sampled::AudioInputStream> p1, jni::ref<javax::sound::sampled::AudioFileFormat_Type> p2, jni::ref<java::io::File> p3) { return call_method<"write", jint>(p1, p2, p3); }

protected:

	AudioFileWriter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SOUND_SAMPLED_SPI_AUDIOFILEWRITER
