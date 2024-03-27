// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/sound/midi/spi/SoundbankReader.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_JARSOUNDBANKREADER_FWD
#define SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_JARSOUNDBANKREADER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::media::sound { class JARSoundbankReader; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::media::sound::JARSoundbankReader>
{
	static constexpr fixed_string class_name = "com/sun/media/sound/JARSoundbankReader";
	using base_classes = std::tuple<scapix::java_api::javax::sound::midi::spi::SoundbankReader>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_JARSOUNDBANKREADER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_JARSOUNDBANKREADER)
#define SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_JARSOUNDBANKREADER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/File.h>
#include <scapix/java_api/java/io/InputStream.h>
#include <scapix/java_api/java/net/URL.h>
#include <scapix/java_api/javax/sound/midi/Soundbank.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::media::sound::JARSoundbankReader : public jni::object_base<"com/sun/media/sound/JARSoundbankReader",
	javax::sound::midi::spi::SoundbankReader>
{
public:

	static jni::ref<com::sun::media::sound::JARSoundbankReader> new_object() { return base_::new_object(); }
	jni::ref<javax::sound::midi::Soundbank> getSoundbank(jni::ref<java::net::URL> p1) { return call_method<"getSoundbank", jni::ref<javax::sound::midi::Soundbank>>(p1); }
	jni::ref<javax::sound::midi::Soundbank> getSoundbank(jni::ref<java::io::InputStream> p1) { return call_method<"getSoundbank", jni::ref<javax::sound::midi::Soundbank>>(p1); }
	jni::ref<javax::sound::midi::Soundbank> getSoundbank(jni::ref<java::io::File> p1) { return call_method<"getSoundbank", jni::ref<javax::sound::midi::Soundbank>>(p1); }

protected:

	JARSoundbankReader(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_JARSOUNDBANKREADER
