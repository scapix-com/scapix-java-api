// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_SPEECH_RECOGNITIONLISTENER_FWD
#define SCAPIX_JAVA_API_ANDROID_SPEECH_RECOGNITIONLISTENER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::speech { class RecognitionListener; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::speech::RecognitionListener>
{
	static constexpr fixed_string class_name = "android/speech/RecognitionListener";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SPEECH_RECOGNITIONLISTENER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_SPEECH_RECOGNITIONLISTENER)
#define SCAPIX_JAVA_API_ANDROID_SPEECH_RECOGNITIONLISTENER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Bundle.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::speech::RecognitionListener : public jni::object_base<"android/speech/RecognitionListener",
	java::lang::Object>
{
public:

	void onReadyForSpeech(jni::ref<android::os::Bundle> p1) { return call_method<"onReadyForSpeech", void>(p1); }
	void onBeginningOfSpeech() { return call_method<"onBeginningOfSpeech", void>(); }
	void onRmsChanged(jfloat p1) { return call_method<"onRmsChanged", void>(p1); }
	void onBufferReceived(jni::ref<jni::array<jbyte>> p1) { return call_method<"onBufferReceived", void>(p1); }
	void onEndOfSpeech() { return call_method<"onEndOfSpeech", void>(); }
	void onError(jint p1) { return call_method<"onError", void>(p1); }
	void onResults(jni::ref<android::os::Bundle> p1) { return call_method<"onResults", void>(p1); }
	void onPartialResults(jni::ref<android::os::Bundle> p1) { return call_method<"onPartialResults", void>(p1); }
	void onEvent(jint p1, jni::ref<android::os::Bundle> p2) { return call_method<"onEvent", void>(p1, p2); }

protected:

	RecognitionListener(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SPEECH_RECOGNITIONLISTENER
