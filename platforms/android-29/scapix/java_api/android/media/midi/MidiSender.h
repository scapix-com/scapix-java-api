// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_MIDI_MIDISENDER_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_MIDI_MIDISENDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media::midi { class MidiSender; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::midi::MidiSender>
{
	static constexpr fixed_string class_name = "android/media/midi/MidiSender";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_MIDI_MIDISENDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_MIDI_MIDISENDER)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_MIDI_MIDISENDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/media/midi/MidiReceiver.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::midi::MidiSender : public jni::object_base<"android/media/midi/MidiSender",
	java::lang::Object>
{
public:

	static jni::ref<android::media::midi::MidiSender> new_object() { return base_::new_object(); }
	void connect(jni::ref<android::media::midi::MidiReceiver> receiver) { return call_method<"connect", void>(receiver); }
	void disconnect(jni::ref<android::media::midi::MidiReceiver> receiver) { return call_method<"disconnect", void>(receiver); }
	void onConnect(jni::ref<android::media::midi::MidiReceiver> p1) { return call_method<"onConnect", void>(p1); }
	void onDisconnect(jni::ref<android::media::midi::MidiReceiver> p1) { return call_method<"onDisconnect", void>(p1); }

protected:

	MidiSender(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_MIDI_MIDISENDER
