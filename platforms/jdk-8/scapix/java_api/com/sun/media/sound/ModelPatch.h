// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/sound/midi/Patch.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_MODELPATCH_FWD
#define SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_MODELPATCH_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::media::sound { class ModelPatch; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::media::sound::ModelPatch>
{
	static constexpr fixed_string class_name = "com/sun/media/sound/ModelPatch";
	using base_classes = std::tuple<scapix::java_api::javax::sound::midi::Patch>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_MODELPATCH_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_MODELPATCH)
#define SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_MODELPATCH

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::media::sound::ModelPatch : public jni::object_base<"com/sun/media/sound/ModelPatch",
	javax::sound::midi::Patch>
{
public:

	static jni::ref<com::sun::media::sound::ModelPatch> new_object(jint p1, jint p2) { return base_::new_object(p1, p2); }
	static jni::ref<com::sun::media::sound::ModelPatch> new_object(jint p1, jint p2, jboolean p3) { return base_::new_object(p1, p2, p3); }
	jboolean isPercussion() { return call_method<"isPercussion", jboolean>(); }

protected:

	ModelPatch(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_MODELPATCH
