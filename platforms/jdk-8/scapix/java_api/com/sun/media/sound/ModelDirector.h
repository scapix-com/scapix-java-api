// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_MODELDIRECTOR_FWD
#define SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_MODELDIRECTOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::media::sound { class ModelDirector; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::media::sound::ModelDirector>
{
	static constexpr fixed_string class_name = "com/sun/media/sound/ModelDirector";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_MODELDIRECTOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_MODELDIRECTOR)
#define SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_MODELDIRECTOR

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::media::sound::ModelDirector : public jni::object_base<"com/sun/media/sound/ModelDirector",
	java::lang::Object>
{
public:

	void noteOn(jint p1, jint p2) { return call_method<"noteOn", void>(p1, p2); }
	void noteOff(jint p1, jint p2) { return call_method<"noteOff", void>(p1, p2); }
	void close() { return call_method<"close", void>(); }

protected:

	ModelDirector(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_MODELDIRECTOR