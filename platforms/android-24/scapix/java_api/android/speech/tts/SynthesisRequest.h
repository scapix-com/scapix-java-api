// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_SPEECH_TTS_SYNTHESISREQUEST_FWD
#define SCAPIX_JAVA_API_ANDROID_SPEECH_TTS_SYNTHESISREQUEST_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::speech::tts { class SynthesisRequest; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::speech::tts::SynthesisRequest>
{
	static constexpr fixed_string class_name = "android/speech/tts/SynthesisRequest";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SPEECH_TTS_SYNTHESISREQUEST_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_SPEECH_TTS_SYNTHESISREQUEST)
#define SCAPIX_JAVA_API_ANDROID_SPEECH_TTS_SYNTHESISREQUEST

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::speech::tts::SynthesisRequest : public jni::object_base<"android/speech/tts/SynthesisRequest",
	java::lang::Object>
{
public:

	static jni::ref<android::speech::tts::SynthesisRequest> new_object(jni::ref<java::lang::String> text, jni::ref<android::os::Bundle> params) { return base_::new_object(text, params); }
	static jni::ref<android::speech::tts::SynthesisRequest> new_object(jni::ref<java::lang::CharSequence> text, jni::ref<android::os::Bundle> params) { return base_::new_object(text, params); }
	jni::ref<java::lang::String> getText() { return call_method<"getText", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::CharSequence> getCharSequenceText() { return call_method<"getCharSequenceText", jni::ref<java::lang::CharSequence>>(); }
	jni::ref<java::lang::String> getVoiceName() { return call_method<"getVoiceName", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getLanguage() { return call_method<"getLanguage", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getCountry() { return call_method<"getCountry", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getVariant() { return call_method<"getVariant", jni::ref<java::lang::String>>(); }
	jint getSpeechRate() { return call_method<"getSpeechRate", jint>(); }
	jint getPitch() { return call_method<"getPitch", jint>(); }
	jni::ref<android::os::Bundle> getParams() { return call_method<"getParams", jni::ref<android::os::Bundle>>(); }
	jint getCallerUid() { return call_method<"getCallerUid", jint>(); }

protected:

	SynthesisRequest(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SPEECH_TTS_SYNTHESISREQUEST
