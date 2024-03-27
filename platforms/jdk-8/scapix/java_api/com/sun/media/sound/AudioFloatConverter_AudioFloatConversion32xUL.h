// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/media/sound/AudioFloatConverter.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_AUDIOFLOATCONVERTER_AUDIOFLOATCONVERSION32XUL_FWD
#define SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_AUDIOFLOATCONVERTER_AUDIOFLOATCONVERSION32XUL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::media::sound { class AudioFloatConverter_AudioFloatConversion32xUL; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::media::sound::AudioFloatConverter_AudioFloatConversion32xUL>
{
	static constexpr fixed_string class_name = "com/sun/media/sound/AudioFloatConverter$AudioFloatConversion32xUL";
	using base_classes = std::tuple<scapix::java_api::com::sun::media::sound::AudioFloatConverter>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_AUDIOFLOATCONVERTER_AUDIOFLOATCONVERSION32XUL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_AUDIOFLOATCONVERTER_AUDIOFLOATCONVERSION32XUL)
#define SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_AUDIOFLOATCONVERTER_AUDIOFLOATCONVERSION32XUL

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::media::sound::AudioFloatConverter_AudioFloatConversion32xUL : public jni::object_base<"com/sun/media/sound/AudioFloatConverter$AudioFloatConversion32xUL",
	com::sun::media::sound::AudioFloatConverter>
{
public:

	jni::ref<jni::array<jfloat>> toFloatArray(jni::ref<jni::array<jbyte>> p1, jint p2, jni::ref<jni::array<jfloat>> p3, jint p4, jint p5) { return call_method<"toFloatArray", jni::ref<jni::array<jfloat>>>(p1, p2, p3, p4, p5); }
	jni::ref<jni::array<jbyte>> toByteArray(jni::ref<jni::array<jfloat>> p1, jint p2, jint p3, jni::ref<jni::array<jbyte>> p4, jint p5) { return call_method<"toByteArray", jni::ref<jni::array<jbyte>>>(p1, p2, p3, p4, p5); }

protected:

	AudioFloatConverter_AudioFloatConversion32xUL(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_AUDIOFLOATCONVERTER_AUDIOFLOATCONVERSION32XUL
