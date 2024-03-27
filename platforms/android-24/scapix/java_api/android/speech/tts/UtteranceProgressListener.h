// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_SPEECH_TTS_UTTERANCEPROGRESSLISTENER_FWD
#define SCAPIX_JAVA_API_ANDROID_SPEECH_TTS_UTTERANCEPROGRESSLISTENER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::speech::tts { class UtteranceProgressListener; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::speech::tts::UtteranceProgressListener>
{
	static constexpr fixed_string class_name = "android/speech/tts/UtteranceProgressListener";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SPEECH_TTS_UTTERANCEPROGRESSLISTENER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_SPEECH_TTS_UTTERANCEPROGRESSLISTENER)
#define SCAPIX_JAVA_API_ANDROID_SPEECH_TTS_UTTERANCEPROGRESSLISTENER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::speech::tts::UtteranceProgressListener : public jni::object_base<"android/speech/tts/UtteranceProgressListener",
	java::lang::Object>
{
public:

	static jni::ref<android::speech::tts::UtteranceProgressListener> new_object() { return base_::new_object(); }
	void onStart(jni::ref<java::lang::String> p1) { return call_method<"onStart", void>(p1); }
	void onDone(jni::ref<java::lang::String> p1) { return call_method<"onDone", void>(p1); }
	void onError(jni::ref<java::lang::String> p1) { return call_method<"onError", void>(p1); }
	void onError(jni::ref<java::lang::String> utteranceId, jint errorCode) { return call_method<"onError", void>(utteranceId, errorCode); }
	void onStop(jni::ref<java::lang::String> utteranceId, jboolean interrupted) { return call_method<"onStop", void>(utteranceId, interrupted); }
	void onBeginSynthesis(jni::ref<java::lang::String> utteranceId, jint sampleRateInHz, jint audioFormat, jint channelCount) { return call_method<"onBeginSynthesis", void>(utteranceId, sampleRateInHz, audioFormat, channelCount); }
	void onAudioAvailable(jni::ref<java::lang::String> utteranceId, jni::ref<jni::array<jbyte>> audio) { return call_method<"onAudioAvailable", void>(utteranceId, audio); }

protected:

	UtteranceProgressListener(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SPEECH_TTS_UTTERANCEPROGRESSLISTENER
