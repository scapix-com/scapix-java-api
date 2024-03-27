// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/sound/sampled/Port_Info.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_PORTMIXER_PORTINFO_FWD
#define SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_PORTMIXER_PORTINFO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::media::sound { class PortMixer_PortInfo; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::media::sound::PortMixer_PortInfo>
{
	static constexpr fixed_string class_name = "com/sun/media/sound/PortMixer$PortInfo";
	using base_classes = std::tuple<scapix::java_api::javax::sound::sampled::Port_Info>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_PORTMIXER_PORTINFO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_PORTMIXER_PORTINFO)
#define SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_PORTMIXER_PORTINFO

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::media::sound::PortMixer_PortInfo : public jni::object_base<"com/sun/media/sound/PortMixer$PortInfo",
	javax::sound::sampled::Port_Info>
{
public:


protected:

	PortMixer_PortInfo(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_PORTMIXER_PORTINFO
