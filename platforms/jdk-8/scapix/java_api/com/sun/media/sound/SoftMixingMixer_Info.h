// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/sound/sampled/Mixer_Info.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_SOFTMIXINGMIXER_INFO_FWD
#define SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_SOFTMIXINGMIXER_INFO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::media::sound { class SoftMixingMixer_Info; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::media::sound::SoftMixingMixer_Info>
{
	static constexpr fixed_string class_name = "com/sun/media/sound/SoftMixingMixer$Info";
	using base_classes = std::tuple<scapix::java_api::javax::sound::sampled::Mixer_Info>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_SOFTMIXINGMIXER_INFO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_SOFTMIXINGMIXER_INFO)
#define SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_SOFTMIXINGMIXER_INFO

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::media::sound::SoftMixingMixer_Info : public jni::object_base<"com/sun/media/sound/SoftMixingMixer$Info",
	javax::sound::sampled::Mixer_Info>
{
public:


protected:

	SoftMixingMixer_Info(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_SOFTMIXINGMIXER_INFO
