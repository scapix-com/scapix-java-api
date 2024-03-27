// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_AUDIOFLOATINPUTSTREAM_FWD
#define SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_AUDIOFLOATINPUTSTREAM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::media::sound { class AudioFloatInputStream; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::media::sound::AudioFloatInputStream>
{
	static constexpr fixed_string class_name = "com/sun/media/sound/AudioFloatInputStream";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_AUDIOFLOATINPUTSTREAM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_AUDIOFLOATINPUTSTREAM)
#define SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_AUDIOFLOATINPUTSTREAM

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/File.h>
#include <scapix/java_api/java/io/InputStream.h>
#include <scapix/java_api/java/net/URL.h>
#include <scapix/java_api/javax/sound/sampled/AudioFormat.h>
#include <scapix/java_api/javax/sound/sampled/AudioInputStream.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::media::sound::AudioFloatInputStream : public jni::object_base<"com/sun/media/sound/AudioFloatInputStream",
	java::lang::Object>
{
public:

	static jni::ref<com::sun::media::sound::AudioFloatInputStream> new_object() { return base_::new_object(); }
	static jni::ref<com::sun::media::sound::AudioFloatInputStream> getInputStream(jni::ref<java::net::URL> p1) { return call_static_method<"getInputStream", jni::ref<com::sun::media::sound::AudioFloatInputStream>>(p1); }
	static jni::ref<com::sun::media::sound::AudioFloatInputStream> getInputStream(jni::ref<java::io::File> p1) { return call_static_method<"getInputStream", jni::ref<com::sun::media::sound::AudioFloatInputStream>>(p1); }
	static jni::ref<com::sun::media::sound::AudioFloatInputStream> getInputStream(jni::ref<java::io::InputStream> p1) { return call_static_method<"getInputStream", jni::ref<com::sun::media::sound::AudioFloatInputStream>>(p1); }
	static jni::ref<com::sun::media::sound::AudioFloatInputStream> getInputStream(jni::ref<javax::sound::sampled::AudioInputStream> p1) { return call_static_method<"getInputStream", jni::ref<com::sun::media::sound::AudioFloatInputStream>>(p1); }
	static jni::ref<com::sun::media::sound::AudioFloatInputStream> getInputStream(jni::ref<javax::sound::sampled::AudioFormat> p1, jni::ref<jni::array<jbyte>> p2, jint p3, jint p4) { return call_static_method<"getInputStream", jni::ref<com::sun::media::sound::AudioFloatInputStream>>(p1, p2, p3, p4); }
	jni::ref<javax::sound::sampled::AudioFormat> getFormat() { return call_method<"getFormat", jni::ref<javax::sound::sampled::AudioFormat>>(); }
	jlong getFrameLength() { return call_method<"getFrameLength", jlong>(); }
	jint read(jni::ref<jni::array<jfloat>> p1, jint p2, jint p3) { return call_method<"read", jint>(p1, p2, p3); }
	jint read(jni::ref<jni::array<jfloat>> p1) { return call_method<"read", jint>(p1); }
	jfloat read() { return call_method<"read", jfloat>(); }
	jlong skip(jlong p1) { return call_method<"skip", jlong>(p1); }
	jint available() { return call_method<"available", jint>(); }
	void close() { return call_method<"close", void>(); }
	void mark(jint p1) { return call_method<"mark", void>(p1); }
	jboolean markSupported() { return call_method<"markSupported", jboolean>(); }
	void reset() { return call_method<"reset", void>(); }

protected:

	AudioFloatInputStream(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_AUDIOFLOATINPUTSTREAM