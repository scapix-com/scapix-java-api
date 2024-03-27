// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/media/sound/AbstractMidiDevice_BasicTransmitter.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_REALTIMESEQUENCER_SEQUENCERTRANSMITTER_FWD
#define SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_REALTIMESEQUENCER_SEQUENCERTRANSMITTER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::media::sound { class RealTimeSequencer_SequencerTransmitter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::media::sound::RealTimeSequencer_SequencerTransmitter>
{
	static constexpr fixed_string class_name = "com/sun/media/sound/RealTimeSequencer$SequencerTransmitter";
	using base_classes = std::tuple<scapix::java_api::com::sun::media::sound::AbstractMidiDevice_BasicTransmitter>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_REALTIMESEQUENCER_SEQUENCERTRANSMITTER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_REALTIMESEQUENCER_SEQUENCERTRANSMITTER)
#define SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_REALTIMESEQUENCER_SEQUENCERTRANSMITTER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::media::sound::RealTimeSequencer_SequencerTransmitter : public jni::object_base<"com/sun/media/sound/RealTimeSequencer$SequencerTransmitter",
	com::sun::media::sound::AbstractMidiDevice_BasicTransmitter>
{
public:


protected:

	RealTimeSequencer_SequencerTransmitter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_REALTIMESEQUENCER_SEQUENCERTRANSMITTER
