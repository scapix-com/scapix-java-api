// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_SPEECH_SPEECHRECOGNIZER_FWD
#define SCAPIX_JAVA_API_ANDROID_SPEECH_SPEECHRECOGNIZER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::speech { class SpeechRecognizer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::speech::SpeechRecognizer>
{
	static constexpr fixed_string class_name = "android/speech/SpeechRecognizer";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SPEECH_SPEECHRECOGNIZER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_SPEECH_SPEECHRECOGNIZER)
#define SCAPIX_JAVA_API_ANDROID_SPEECH_SPEECHRECOGNIZER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/ComponentName.h>
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/content/Intent.h>
#include <scapix/java_api/android/speech/RecognitionListener.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::speech::SpeechRecognizer : public jni::object_base<"android/speech/SpeechRecognizer",
	java::lang::Object>
{
public:

	static jni::ref<java::lang::String> CONFIDENCE_SCORES() { return get_static_field<"CONFIDENCE_SCORES", jni::ref<java::lang::String>>(); }
	static jint ERROR_AUDIO() { return get_static_field<"ERROR_AUDIO", jint>(); }
	static jint ERROR_CLIENT() { return get_static_field<"ERROR_CLIENT", jint>(); }
	static jint ERROR_INSUFFICIENT_PERMISSIONS() { return get_static_field<"ERROR_INSUFFICIENT_PERMISSIONS", jint>(); }
	static jint ERROR_NETWORK() { return get_static_field<"ERROR_NETWORK", jint>(); }
	static jint ERROR_NETWORK_TIMEOUT() { return get_static_field<"ERROR_NETWORK_TIMEOUT", jint>(); }
	static jint ERROR_NO_MATCH() { return get_static_field<"ERROR_NO_MATCH", jint>(); }
	static jint ERROR_RECOGNIZER_BUSY() { return get_static_field<"ERROR_RECOGNIZER_BUSY", jint>(); }
	static jint ERROR_SERVER() { return get_static_field<"ERROR_SERVER", jint>(); }
	static jint ERROR_SPEECH_TIMEOUT() { return get_static_field<"ERROR_SPEECH_TIMEOUT", jint>(); }
	static jni::ref<java::lang::String> RESULTS_RECOGNITION() { return get_static_field<"RESULTS_RECOGNITION", jni::ref<java::lang::String>>(); }

	static jboolean isRecognitionAvailable(jni::ref<android::content::Context> context) { return call_static_method<"isRecognitionAvailable", jboolean>(context); }
	static jni::ref<android::speech::SpeechRecognizer> createSpeechRecognizer(jni::ref<android::content::Context> context) { return call_static_method<"createSpeechRecognizer", jni::ref<android::speech::SpeechRecognizer>>(context); }
	static jni::ref<android::speech::SpeechRecognizer> createSpeechRecognizer(jni::ref<android::content::Context> context, jni::ref<android::content::ComponentName> serviceComponent) { return call_static_method<"createSpeechRecognizer", jni::ref<android::speech::SpeechRecognizer>>(context, serviceComponent); }
	void setRecognitionListener(jni::ref<android::speech::RecognitionListener> listener) { return call_method<"setRecognitionListener", void>(listener); }
	void startListening(jni::ref<android::content::Intent> recognizerIntent) { return call_method<"startListening", void>(recognizerIntent); }
	void stopListening() { return call_method<"stopListening", void>(); }
	void cancel() { return call_method<"cancel", void>(); }
	void destroy() { return call_method<"destroy", void>(); }

protected:

	SpeechRecognizer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SPEECH_SPEECHRECOGNIZER
