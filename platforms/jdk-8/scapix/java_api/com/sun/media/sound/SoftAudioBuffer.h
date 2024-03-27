// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_SOFTAUDIOBUFFER_FWD
#define SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_SOFTAUDIOBUFFER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::media::sound { class SoftAudioBuffer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::media::sound::SoftAudioBuffer>
{
	static constexpr fixed_string class_name = "com/sun/media/sound/SoftAudioBuffer";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_SOFTAUDIOBUFFER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_SOFTAUDIOBUFFER)
#define SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_SOFTAUDIOBUFFER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/sound/sampled/AudioFormat.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::media::sound::SoftAudioBuffer : public jni::object_base<"com/sun/media/sound/SoftAudioBuffer",
	java::lang::Object>
{
public:

	static jni::ref<com::sun::media::sound::SoftAudioBuffer> new_object(jint p1, jni::ref<javax::sound::sampled::AudioFormat> p2) { return base_::new_object(p1, p2); }
	void swap(jni::ref<com::sun::media::sound::SoftAudioBuffer> p1) { return call_method<"swap", void>(p1); }
	jni::ref<javax::sound::sampled::AudioFormat> getFormat() { return call_method<"getFormat", jni::ref<javax::sound::sampled::AudioFormat>>(); }
	jint getSize() { return call_method<"getSize", jint>(); }
	void clear() { return call_method<"clear", void>(); }
	jboolean isSilent() { return call_method<"isSilent", jboolean>(); }
	jni::ref<jni::array<jfloat>> array() { return call_method<"array", jni::ref<jni::array<jfloat>>>(); }
	void get(jni::ref<jni::array<jbyte>> p1, jint p2) { return call_method<"get", void>(p1, p2); }

protected:

	SoftAudioBuffer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_SOFTAUDIOBUFFER