// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/media/sound/AbstractMidiDevice_AbstractReceiver.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_REALTIMESEQUENCER_SEQUENCERRECEIVER_FWD
#define SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_REALTIMESEQUENCER_SEQUENCERRECEIVER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::media::sound { class RealTimeSequencer_SequencerReceiver; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::media::sound::RealTimeSequencer_SequencerReceiver>
{
	static constexpr fixed_string class_name = "com/sun/media/sound/RealTimeSequencer$SequencerReceiver";
	using base_classes = std::tuple<scapix::java_api::com::sun::media::sound::AbstractMidiDevice_AbstractReceiver>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_REALTIMESEQUENCER_SEQUENCERRECEIVER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_REALTIMESEQUENCER_SEQUENCERRECEIVER)
#define SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_REALTIMESEQUENCER_SEQUENCERRECEIVER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::media::sound::RealTimeSequencer_SequencerReceiver : public jni::object_base<"com/sun/media/sound/RealTimeSequencer$SequencerReceiver",
	com::sun::media::sound::AbstractMidiDevice_AbstractReceiver>
{
public:


protected:

	RealTimeSequencer_SequencerReceiver(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_REALTIMESEQUENCER_SEQUENCERRECEIVER
