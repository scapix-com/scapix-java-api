// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/com/sun/media/sound/SoftProcess.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_SOFTLOWFREQUENCYOSCILLATOR_FWD
#define SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_SOFTLOWFREQUENCYOSCILLATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::media::sound { class SoftLowFrequencyOscillator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::media::sound::SoftLowFrequencyOscillator>
{
	static constexpr fixed_string class_name = "com/sun/media/sound/SoftLowFrequencyOscillator";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::com::sun::media::sound::SoftProcess>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_SOFTLOWFREQUENCYOSCILLATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_SOFTLOWFREQUENCYOSCILLATOR)
#define SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_SOFTLOWFREQUENCYOSCILLATOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/media/sound/SoftSynthesizer.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::media::sound::SoftLowFrequencyOscillator : public jni::object_base<"com/sun/media/sound/SoftLowFrequencyOscillator",
	java::lang::Object,
	com::sun::media::sound::SoftProcess>
{
public:

	static jni::ref<com::sun::media::sound::SoftLowFrequencyOscillator> new_object() { return base_::new_object(); }
	void reset() { return call_method<"reset", void>(); }
	void init(jni::ref<com::sun::media::sound::SoftSynthesizer> p1) { return call_method<"init", void>(p1); }
	void processControlLogic() { return call_method<"processControlLogic", void>(); }
	jni::ref<jni::array<jdouble>> get(jint p1, jni::ref<java::lang::String> p2) { return call_method<"get", jni::ref<jni::array<jdouble>>>(p1, p2); }

protected:

	SoftLowFrequencyOscillator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_SOFTLOWFREQUENCYOSCILLATOR