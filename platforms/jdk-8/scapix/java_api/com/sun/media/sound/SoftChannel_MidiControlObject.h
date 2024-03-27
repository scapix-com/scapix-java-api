// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/com/sun/media/sound/SoftControl.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_SOFTCHANNEL_MIDICONTROLOBJECT_FWD
#define SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_SOFTCHANNEL_MIDICONTROLOBJECT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::media::sound { class SoftChannel_MidiControlObject; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::media::sound::SoftChannel_MidiControlObject>
{
	static constexpr fixed_string class_name = "com/sun/media/sound/SoftChannel$MidiControlObject";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::com::sun::media::sound::SoftControl>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_SOFTCHANNEL_MIDICONTROLOBJECT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_SOFTCHANNEL_MIDICONTROLOBJECT)
#define SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_SOFTCHANNEL_MIDICONTROLOBJECT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::media::sound::SoftChannel_MidiControlObject : public jni::object_base<"com/sun/media/sound/SoftChannel$MidiControlObject",
	java::lang::Object,
	com::sun::media::sound::SoftControl>
{
public:

	jni::ref<jni::array<jdouble>> get(jint p1, jni::ref<java::lang::String> p2) { return call_method<"get", jni::ref<jni::array<jdouble>>>(p1, p2); }

protected:

	SoftChannel_MidiControlObject(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_SOFTCHANNEL_MIDICONTROLOBJECT