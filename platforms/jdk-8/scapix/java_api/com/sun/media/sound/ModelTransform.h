// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_MODELTRANSFORM_FWD
#define SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_MODELTRANSFORM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::media::sound { class ModelTransform; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::media::sound::ModelTransform>
{
	static constexpr fixed_string class_name = "com/sun/media/sound/ModelTransform";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_MODELTRANSFORM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_MODELTRANSFORM)
#define SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_MODELTRANSFORM

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::media::sound::ModelTransform : public jni::object_base<"com/sun/media/sound/ModelTransform",
	java::lang::Object>
{
public:

	jdouble transform(jdouble p1) { return call_method<"transform", jdouble>(p1); }

protected:

	ModelTransform(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_MODELTRANSFORM
