// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_MODELOSCILLATOR_FWD
#define SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_MODELOSCILLATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::media::sound { class ModelOscillator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::media::sound::ModelOscillator>
{
	static constexpr fixed_string class_name = "com/sun/media/sound/ModelOscillator";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_MODELOSCILLATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_MODELOSCILLATOR)
#define SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_MODELOSCILLATOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/media/sound/ModelOscillatorStream.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::media::sound::ModelOscillator : public jni::object_base<"com/sun/media/sound/ModelOscillator",
	java::lang::Object>
{
public:

	jint getChannels() { return call_method<"getChannels", jint>(); }
	jfloat getAttenuation() { return call_method<"getAttenuation", jfloat>(); }
	jni::ref<com::sun::media::sound::ModelOscillatorStream> open(jfloat p1) { return call_method<"open", jni::ref<com::sun::media::sound::ModelOscillatorStream>>(p1); }

protected:

	ModelOscillator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_MODELOSCILLATOR
