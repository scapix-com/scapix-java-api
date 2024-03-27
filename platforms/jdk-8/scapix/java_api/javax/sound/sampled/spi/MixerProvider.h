// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SOUND_SAMPLED_SPI_MIXERPROVIDER_FWD
#define SCAPIX_JAVA_API_JAVAX_SOUND_SAMPLED_SPI_MIXERPROVIDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::sound::sampled::spi { class MixerProvider; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::sound::sampled::spi::MixerProvider>
{
	static constexpr fixed_string class_name = "javax/sound/sampled/spi/MixerProvider";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SOUND_SAMPLED_SPI_MIXERPROVIDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SOUND_SAMPLED_SPI_MIXERPROVIDER)
#define SCAPIX_JAVA_API_JAVAX_SOUND_SAMPLED_SPI_MIXERPROVIDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/sound/sampled/Mixer.h>
#include <scapix/java_api/javax/sound/sampled/Mixer_Info.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::sound::sampled::spi::MixerProvider : public jni::object_base<"javax/sound/sampled/spi/MixerProvider",
	java::lang::Object>
{
public:

	static jni::ref<javax::sound::sampled::spi::MixerProvider> new_object() { return base_::new_object(); }
	jboolean isMixerSupported(jni::ref<javax::sound::sampled::Mixer_Info> p1) { return call_method<"isMixerSupported", jboolean>(p1); }
	jni::ref<jni::array<javax::sound::sampled::Mixer_Info>> getMixerInfo() { return call_method<"getMixerInfo", jni::ref<jni::array<javax::sound::sampled::Mixer_Info>>>(); }
	jni::ref<javax::sound::sampled::Mixer> getMixer(jni::ref<javax::sound::sampled::Mixer_Info> p1) { return call_method<"getMixer", jni::ref<javax::sound::sampled::Mixer>>(p1); }

protected:

	MixerProvider(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SOUND_SAMPLED_SPI_MIXERPROVIDER
