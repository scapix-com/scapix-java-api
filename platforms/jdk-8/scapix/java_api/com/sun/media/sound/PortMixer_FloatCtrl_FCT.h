// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/sound/sampled/FloatControl_Type.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_PORTMIXER_FLOATCTRL_FCT_FWD
#define SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_PORTMIXER_FLOATCTRL_FCT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::media::sound { class PortMixer_FloatCtrl_FCT; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::media::sound::PortMixer_FloatCtrl_FCT>
{
	static constexpr fixed_string class_name = "com/sun/media/sound/PortMixer$FloatCtrl$FCT";
	using base_classes = std::tuple<scapix::java_api::javax::sound::sampled::FloatControl_Type>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_PORTMIXER_FLOATCTRL_FCT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_PORTMIXER_FLOATCTRL_FCT)
#define SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_PORTMIXER_FLOATCTRL_FCT

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::media::sound::PortMixer_FloatCtrl_FCT : public jni::object_base<"com/sun/media/sound/PortMixer$FloatCtrl$FCT",
	javax::sound::sampled::FloatControl_Type>
{
public:


protected:

	PortMixer_FloatCtrl_FCT(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_PORTMIXER_FLOATCTRL_FCT