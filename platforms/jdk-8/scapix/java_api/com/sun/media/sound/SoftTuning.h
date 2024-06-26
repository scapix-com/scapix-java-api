// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_SOFTTUNING_FWD
#define SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_SOFTTUNING_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::media::sound { class SoftTuning; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::media::sound::SoftTuning>
{
	static constexpr fixed_string class_name = "com/sun/media/sound/SoftTuning";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_SOFTTUNING_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_SOFTTUNING)
#define SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_SOFTTUNING

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/sound/midi/Patch.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::media::sound::SoftTuning : public jni::object_base<"com/sun/media/sound/SoftTuning",
	java::lang::Object>
{
public:

	static jni::ref<com::sun::media::sound::SoftTuning> new_object() { return base_::new_object(); }
	static jni::ref<com::sun::media::sound::SoftTuning> new_object(jni::ref<jni::array<jbyte>> p1) { return base_::new_object(p1); }
	static jni::ref<com::sun::media::sound::SoftTuning> new_object(jni::ref<javax::sound::midi::Patch> p1) { return base_::new_object(p1); }
	static jni::ref<com::sun::media::sound::SoftTuning> new_object(jni::ref<javax::sound::midi::Patch> p1, jni::ref<jni::array<jbyte>> p2) { return base_::new_object(p1, p2); }
	void load(jni::ref<jni::array<jbyte>> p1) { return call_method<"load", void>(p1); }
	jni::ref<jni::array<jdouble>> getTuning() { return call_method<"getTuning", jni::ref<jni::array<jdouble>>>(); }
	jdouble getTuning(jint p1) { return call_method<"getTuning", jdouble>(p1); }
	jni::ref<javax::sound::midi::Patch> getPatch() { return call_method<"getPatch", jni::ref<javax::sound::midi::Patch>>(); }
	jni::ref<java::lang::String> getName() { return call_method<"getName", jni::ref<java::lang::String>>(); }
	void setName(jni::ref<java::lang::String> p1) { return call_method<"setName", void>(p1); }

protected:

	SoftTuning(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_SOFTTUNING
