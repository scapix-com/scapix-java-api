// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/sound/sampled/CompoundControl_Type.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_PORTMIXER_COMPCTRL_CCT_FWD
#define SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_PORTMIXER_COMPCTRL_CCT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::media::sound { class PortMixer_CompCtrl_CCT; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::media::sound::PortMixer_CompCtrl_CCT>
{
	static constexpr fixed_string class_name = "com/sun/media/sound/PortMixer$CompCtrl$CCT";
	using base_classes = std::tuple<scapix::java_api::javax::sound::sampled::CompoundControl_Type>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_PORTMIXER_COMPCTRL_CCT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_PORTMIXER_COMPCTRL_CCT)
#define SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_PORTMIXER_COMPCTRL_CCT

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::media::sound::PortMixer_CompCtrl_CCT : public jni::object_base<"com/sun/media/sound/PortMixer$CompCtrl$CCT",
	javax::sound::sampled::CompoundControl_Type>
{
public:


protected:

	PortMixer_CompCtrl_CCT(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_PORTMIXER_COMPCTRL_CCT