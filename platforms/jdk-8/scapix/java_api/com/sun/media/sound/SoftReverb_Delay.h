// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_SOFTREVERB_DELAY_FWD
#define SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_SOFTREVERB_DELAY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::media::sound { class SoftReverb_Delay; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::media::sound::SoftReverb_Delay>
{
	static constexpr fixed_string class_name = "com/sun/media/sound/SoftReverb$Delay";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_SOFTREVERB_DELAY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_SOFTREVERB_DELAY)
#define SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_SOFTREVERB_DELAY

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::media::sound::SoftReverb_Delay : public jni::object_base<"com/sun/media/sound/SoftReverb$Delay",
	java::lang::Object>
{
public:

	void setDelay(jint p1) { return call_method<"setDelay", void>(p1); }
	void processReplace(jni::ref<jni::array<jfloat>> p1) { return call_method<"processReplace", void>(p1); }

protected:

	SoftReverb_Delay(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_SOFTREVERB_DELAY
