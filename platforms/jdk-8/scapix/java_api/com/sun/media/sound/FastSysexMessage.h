// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/sound/midi/SysexMessage.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_FASTSYSEXMESSAGE_FWD
#define SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_FASTSYSEXMESSAGE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::media::sound { class FastSysexMessage; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::media::sound::FastSysexMessage>
{
	static constexpr fixed_string class_name = "com/sun/media/sound/FastSysexMessage";
	using base_classes = std::tuple<scapix::java_api::javax::sound::midi::SysexMessage>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_FASTSYSEXMESSAGE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_FASTSYSEXMESSAGE)
#define SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_FASTSYSEXMESSAGE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::media::sound::FastSysexMessage : public jni::object_base<"com/sun/media/sound/FastSysexMessage",
	javax::sound::midi::SysexMessage>
{
public:

	void setMessage(jni::ref<jni::array<jbyte>> p1, jint p2) { return call_method<"setMessage", void>(p1, p2); }

protected:

	FastSysexMessage(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_FASTSYSEXMESSAGE
