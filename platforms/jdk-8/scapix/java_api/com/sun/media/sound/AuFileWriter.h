// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/media/sound/SunFileWriter.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_AUFILEWRITER_FWD
#define SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_AUFILEWRITER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::media::sound { class AuFileWriter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::media::sound::AuFileWriter>
{
	static constexpr fixed_string class_name = "com/sun/media/sound/AuFileWriter";
	using base_classes = std::tuple<scapix::java_api::com::sun::media::sound::SunFileWriter>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_AUFILEWRITER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_AUFILEWRITER)
#define SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_AUFILEWRITER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/File.h>
#include <scapix/java_api/java/io/OutputStream.h>
#include <scapix/java_api/javax/sound/sampled/AudioFileFormat_Type.h>
#include <scapix/java_api/javax/sound/sampled/AudioInputStream.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::media::sound::AuFileWriter : public jni::object_base<"com/sun/media/sound/AuFileWriter",
	com::sun::media::sound::SunFileWriter>
{
public:

	static jint UNKNOWN_SIZE() { return get_static_field<"UNKNOWN_SIZE", jint>(); }

	static jni::ref<com::sun::media::sound::AuFileWriter> new_object() { return base_::new_object(); }
	jni::ref<jni::array<javax::sound::sampled::AudioFileFormat_Type>> getAudioFileTypes(jni::ref<javax::sound::sampled::AudioInputStream> p1) { return call_method<"getAudioFileTypes", jni::ref<jni::array<javax::sound::sampled::AudioFileFormat_Type>>>(p1); }
	jint write(jni::ref<javax::sound::sampled::AudioInputStream> p1, jni::ref<javax::sound::sampled::AudioFileFormat_Type> p2, jni::ref<java::io::OutputStream> p3) { return call_method<"write", jint>(p1, p2, p3); }
	jint write(jni::ref<javax::sound::sampled::AudioInputStream> p1, jni::ref<javax::sound::sampled::AudioFileFormat_Type> p2, jni::ref<java::io::File> p3) { return call_method<"write", jint>(p1, p2, p3); }

protected:

	AuFileWriter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_AUFILEWRITER
