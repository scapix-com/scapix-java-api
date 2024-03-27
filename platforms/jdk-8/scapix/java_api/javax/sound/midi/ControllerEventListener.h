// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/EventListener.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SOUND_MIDI_CONTROLLEREVENTLISTENER_FWD
#define SCAPIX_JAVA_API_JAVAX_SOUND_MIDI_CONTROLLEREVENTLISTENER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::sound::midi { class ControllerEventListener; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::sound::midi::ControllerEventListener>
{
	static constexpr fixed_string class_name = "javax/sound/midi/ControllerEventListener";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::EventListener>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SOUND_MIDI_CONTROLLEREVENTLISTENER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SOUND_MIDI_CONTROLLEREVENTLISTENER)
#define SCAPIX_JAVA_API_JAVAX_SOUND_MIDI_CONTROLLEREVENTLISTENER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/sound/midi/ShortMessage.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::sound::midi::ControllerEventListener : public jni::object_base<"javax/sound/midi/ControllerEventListener",
	java::lang::Object,
	java::util::EventListener>
{
public:

	void controlChange(jni::ref<javax::sound::midi::ShortMessage> p1) { return call_method<"controlChange", void>(p1); }

protected:

	ControllerEventListener(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SOUND_MIDI_CONTROLLEREVENTLISTENER