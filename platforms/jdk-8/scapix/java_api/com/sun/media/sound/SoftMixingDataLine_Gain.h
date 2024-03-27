// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/sound/sampled/FloatControl.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_SOFTMIXINGDATALINE_GAIN_FWD
#define SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_SOFTMIXINGDATALINE_GAIN_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::media::sound { class SoftMixingDataLine_Gain; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::media::sound::SoftMixingDataLine_Gain>
{
	static constexpr fixed_string class_name = "com/sun/media/sound/SoftMixingDataLine$Gain";
	using base_classes = std::tuple<scapix::java_api::javax::sound::sampled::FloatControl>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_SOFTMIXINGDATALINE_GAIN_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_SOFTMIXINGDATALINE_GAIN)
#define SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_SOFTMIXINGDATALINE_GAIN

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::media::sound::SoftMixingDataLine_Gain : public jni::object_base<"com/sun/media/sound/SoftMixingDataLine$Gain",
	javax::sound::sampled::FloatControl>
{
public:

	void setValue(jfloat p1) { return call_method<"setValue", void>(p1); }

protected:

	SoftMixingDataLine_Gain(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_SOFTMIXINGDATALINE_GAIN