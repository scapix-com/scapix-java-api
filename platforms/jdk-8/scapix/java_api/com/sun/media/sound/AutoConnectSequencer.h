// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_AUTOCONNECTSEQUENCER_FWD
#define SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_AUTOCONNECTSEQUENCER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::media::sound { class AutoConnectSequencer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::media::sound::AutoConnectSequencer>
{
	static constexpr fixed_string class_name = "com/sun/media/sound/AutoConnectSequencer";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_AUTOCONNECTSEQUENCER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_AUTOCONNECTSEQUENCER)
#define SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_AUTOCONNECTSEQUENCER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/sound/midi/Receiver.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::media::sound::AutoConnectSequencer : public jni::object_base<"com/sun/media/sound/AutoConnectSequencer",
	java::lang::Object>
{
public:

	void setAutoConnect(jni::ref<javax::sound::midi::Receiver> p1) { return call_method<"setAutoConnect", void>(p1); }

protected:

	AutoConnectSequencer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_AUTOCONNECTSEQUENCER
