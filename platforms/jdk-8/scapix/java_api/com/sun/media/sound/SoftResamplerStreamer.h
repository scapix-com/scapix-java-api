// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/com/sun/media/sound/ModelOscillatorStream.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_SOFTRESAMPLERSTREAMER_FWD
#define SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_SOFTRESAMPLERSTREAMER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::media::sound { class SoftResamplerStreamer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::media::sound::SoftResamplerStreamer>
{
	static constexpr fixed_string class_name = "com/sun/media/sound/SoftResamplerStreamer";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::com::sun::media::sound::ModelOscillatorStream>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_SOFTRESAMPLERSTREAMER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_SOFTRESAMPLERSTREAMER)
#define SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_SOFTRESAMPLERSTREAMER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/media/sound/ModelWavetable.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::media::sound::SoftResamplerStreamer : public jni::object_base<"com/sun/media/sound/SoftResamplerStreamer",
	java::lang::Object,
	com::sun::media::sound::ModelOscillatorStream>
{
public:

	void open(jni::ref<com::sun::media::sound::ModelWavetable> p1, jfloat p2) { return call_method<"open", void>(p1, p2); }

protected:

	SoftResamplerStreamer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_SOFTRESAMPLERSTREAMER
