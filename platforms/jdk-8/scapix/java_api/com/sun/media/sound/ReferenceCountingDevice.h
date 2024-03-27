// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_REFERENCECOUNTINGDEVICE_FWD
#define SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_REFERENCECOUNTINGDEVICE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::media::sound { class ReferenceCountingDevice; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::media::sound::ReferenceCountingDevice>
{
	static constexpr fixed_string class_name = "com/sun/media/sound/ReferenceCountingDevice";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_REFERENCECOUNTINGDEVICE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_REFERENCECOUNTINGDEVICE)
#define SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_REFERENCECOUNTINGDEVICE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/sound/midi/Receiver.h>
#include <scapix/java_api/javax/sound/midi/Transmitter.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::media::sound::ReferenceCountingDevice : public jni::object_base<"com/sun/media/sound/ReferenceCountingDevice",
	java::lang::Object>
{
public:

	jni::ref<javax::sound::midi::Receiver> getReceiverReferenceCounting() { return call_method<"getReceiverReferenceCounting", jni::ref<javax::sound::midi::Receiver>>(); }
	jni::ref<javax::sound::midi::Transmitter> getTransmitterReferenceCounting() { return call_method<"getTransmitterReferenceCounting", jni::ref<javax::sound::midi::Transmitter>>(); }

protected:

	ReferenceCountingDevice(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_REFERENCECOUNTINGDEVICE