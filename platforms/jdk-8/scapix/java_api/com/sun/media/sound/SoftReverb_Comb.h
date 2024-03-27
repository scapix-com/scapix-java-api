// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_SOFTREVERB_COMB_FWD
#define SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_SOFTREVERB_COMB_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::media::sound { class SoftReverb_Comb; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::media::sound::SoftReverb_Comb>
{
	static constexpr fixed_string class_name = "com/sun/media/sound/SoftReverb$Comb";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_SOFTREVERB_COMB_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_SOFTREVERB_COMB)
#define SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_SOFTREVERB_COMB

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::media::sound::SoftReverb_Comb : public jni::object_base<"com/sun/media/sound/SoftReverb$Comb",
	java::lang::Object>
{
public:

	void setFeedBack(jfloat p1) { return call_method<"setFeedBack", void>(p1); }
	void processMix(jni::ref<jni::array<jfloat>> p1, jni::ref<jni::array<jfloat>> p2) { return call_method<"processMix", void>(p1, p2); }
	void processReplace(jni::ref<jni::array<jfloat>> p1, jni::ref<jni::array<jfloat>> p2) { return call_method<"processReplace", void>(p1, p2); }
	void setDamp(jfloat p1) { return call_method<"setDamp", void>(p1); }

protected:

	SoftReverb_Comb(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_SOFTREVERB_COMB