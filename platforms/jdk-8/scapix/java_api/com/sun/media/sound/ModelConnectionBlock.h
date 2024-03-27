// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_MODELCONNECTIONBLOCK_FWD
#define SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_MODELCONNECTIONBLOCK_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::media::sound { class ModelConnectionBlock; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::media::sound::ModelConnectionBlock>
{
	static constexpr fixed_string class_name = "com/sun/media/sound/ModelConnectionBlock";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_MODELCONNECTIONBLOCK_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_MODELCONNECTIONBLOCK)
#define SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_MODELCONNECTIONBLOCK

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/media/sound/ModelDestination.h>
#include <scapix/java_api/com/sun/media/sound/ModelSource.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::media::sound::ModelConnectionBlock : public jni::object_base<"com/sun/media/sound/ModelConnectionBlock",
	java::lang::Object>
{
public:

	static jni::ref<com::sun::media::sound::ModelConnectionBlock> new_object() { return base_::new_object(); }
	static jni::ref<com::sun::media::sound::ModelConnectionBlock> new_object(jdouble p1, jni::ref<com::sun::media::sound::ModelDestination> p2) { return base_::new_object(p1, p2); }
	static jni::ref<com::sun::media::sound::ModelConnectionBlock> new_object(jni::ref<com::sun::media::sound::ModelSource> p1, jni::ref<com::sun::media::sound::ModelDestination> p2) { return base_::new_object(p1, p2); }
	static jni::ref<com::sun::media::sound::ModelConnectionBlock> new_object(jni::ref<com::sun::media::sound::ModelSource> p1, jdouble p2, jni::ref<com::sun::media::sound::ModelDestination> p3) { return base_::new_object(p1, p2, p3); }
	static jni::ref<com::sun::media::sound::ModelConnectionBlock> new_object(jni::ref<com::sun::media::sound::ModelSource> p1, jni::ref<com::sun::media::sound::ModelSource> p2, jni::ref<com::sun::media::sound::ModelDestination> p3) { return base_::new_object(p1, p2, p3); }
	static jni::ref<com::sun::media::sound::ModelConnectionBlock> new_object(jni::ref<com::sun::media::sound::ModelSource> p1, jni::ref<com::sun::media::sound::ModelSource> p2, jdouble p3, jni::ref<com::sun::media::sound::ModelDestination> p4) { return base_::new_object(p1, p2, p3, p4); }
	jni::ref<com::sun::media::sound::ModelDestination> getDestination() { return call_method<"getDestination", jni::ref<com::sun::media::sound::ModelDestination>>(); }
	void setDestination(jni::ref<com::sun::media::sound::ModelDestination> p1) { return call_method<"setDestination", void>(p1); }
	jdouble getScale() { return call_method<"getScale", jdouble>(); }
	void setScale(jdouble p1) { return call_method<"setScale", void>(p1); }
	jni::ref<jni::array<com::sun::media::sound::ModelSource>> getSources() { return call_method<"getSources", jni::ref<jni::array<com::sun::media::sound::ModelSource>>>(); }
	void setSources(jni::ref<jni::array<com::sun::media::sound::ModelSource>> p1) { return call_method<"setSources", void>(p1); }
	void addSource(jni::ref<com::sun::media::sound::ModelSource> p1) { return call_method<"addSource", void>(p1); }

protected:

	ModelConnectionBlock(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_MODELCONNECTIONBLOCK
