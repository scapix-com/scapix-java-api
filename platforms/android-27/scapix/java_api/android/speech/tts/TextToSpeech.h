// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_SPEECH_TTS_TEXTTOSPEECH_FWD
#define SCAPIX_JAVA_API_ANDROID_SPEECH_TTS_TEXTTOSPEECH_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::speech::tts { class TextToSpeech; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::speech::tts::TextToSpeech>
{
	static constexpr fixed_string class_name = "android/speech/tts/TextToSpeech";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SPEECH_TTS_TEXTTOSPEECH_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_SPEECH_TTS_TEXTTOSPEECH)
#define SCAPIX_JAVA_API_ANDROID_SPEECH_TTS_TEXTTOSPEECH

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/media/AudioAttributes.h>
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/android/speech/tts/TextToSpeech_OnInitListener.h>
#include <scapix/java_api/android/speech/tts/TextToSpeech_OnUtteranceCompletedListener.h>
#include <scapix/java_api/android/speech/tts/UtteranceProgressListener.h>
#include <scapix/java_api/android/speech/tts/Voice.h>
#include <scapix/java_api/java/io/File.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/HashMap.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/java/util/Locale.h>
#include <scapix/java_api/java/util/Set.h>
#include <scapix/java_api/android/speech/tts/TextToSpeech_EngineInfo.h>
#include <scapix/java_api/android/speech/tts/TextToSpeech_Engine.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::speech::tts::TextToSpeech : public jni::object_base<"android/speech/tts/TextToSpeech",
	java::lang::Object>
{
public:

	using EngineInfo = TextToSpeech_EngineInfo;
	using Engine = TextToSpeech_Engine;
	using OnUtteranceCompletedListener = TextToSpeech_OnUtteranceCompletedListener;
	using OnInitListener = TextToSpeech_OnInitListener;

	static jni::ref<java::lang::String> ACTION_TTS_QUEUE_PROCESSING_COMPLETED() { return get_static_field<"ACTION_TTS_QUEUE_PROCESSING_COMPLETED", jni::ref<java::lang::String>>(); }
	static jint ERROR() { return get_static_field<"ERROR", jint>(); }
	static jint ERROR_INVALID_REQUEST() { return get_static_field<"ERROR_INVALID_REQUEST", jint>(); }
	static jint ERROR_NETWORK() { return get_static_field<"ERROR_NETWORK", jint>(); }
	static jint ERROR_NETWORK_TIMEOUT() { return get_static_field<"ERROR_NETWORK_TIMEOUT", jint>(); }
	static jint ERROR_NOT_INSTALLED_YET() { return get_static_field<"ERROR_NOT_INSTALLED_YET", jint>(); }
	static jint ERROR_OUTPUT() { return get_static_field<"ERROR_OUTPUT", jint>(); }
	static jint ERROR_SERVICE() { return get_static_field<"ERROR_SERVICE", jint>(); }
	static jint ERROR_SYNTHESIS() { return get_static_field<"ERROR_SYNTHESIS", jint>(); }
	static jint LANG_AVAILABLE() { return get_static_field<"LANG_AVAILABLE", jint>(); }
	static jint LANG_COUNTRY_AVAILABLE() { return get_static_field<"LANG_COUNTRY_AVAILABLE", jint>(); }
	static jint LANG_COUNTRY_VAR_AVAILABLE() { return get_static_field<"LANG_COUNTRY_VAR_AVAILABLE", jint>(); }
	static jint LANG_MISSING_DATA() { return get_static_field<"LANG_MISSING_DATA", jint>(); }
	static jint LANG_NOT_SUPPORTED() { return get_static_field<"LANG_NOT_SUPPORTED", jint>(); }
	static jint QUEUE_ADD() { return get_static_field<"QUEUE_ADD", jint>(); }
	static jint QUEUE_FLUSH() { return get_static_field<"QUEUE_FLUSH", jint>(); }
	static jint STOPPED() { return get_static_field<"STOPPED", jint>(); }
	static jint SUCCESS() { return get_static_field<"SUCCESS", jint>(); }

	static jni::ref<android::speech::tts::TextToSpeech> new_object(jni::ref<android::content::Context> context, jni::ref<android::speech::tts::TextToSpeech_OnInitListener> listener) { return base_::new_object(context, listener); }
	static jni::ref<android::speech::tts::TextToSpeech> new_object(jni::ref<android::content::Context> context, jni::ref<android::speech::tts::TextToSpeech_OnInitListener> listener, jni::ref<java::lang::String> engine) { return base_::new_object(context, listener, engine); }
	void shutdown() { return call_method<"shutdown", void>(); }
	jint addSpeech(jni::ref<java::lang::String> text, jni::ref<java::lang::String> packagename, jint resourceId) { return call_method<"addSpeech", jint>(text, packagename, resourceId); }
	jint addSpeech(jni::ref<java::lang::CharSequence> text, jni::ref<java::lang::String> packagename, jint resourceId) { return call_method<"addSpeech", jint>(text, packagename, resourceId); }
	jint addSpeech(jni::ref<java::lang::String> text, jni::ref<java::lang::String> filename) { return call_method<"addSpeech", jint>(text, filename); }
	jint addSpeech(jni::ref<java::lang::CharSequence> text, jni::ref<java::io::File> file) { return call_method<"addSpeech", jint>(text, file); }
	jint addEarcon(jni::ref<java::lang::String> earcon, jni::ref<java::lang::String> packagename, jint resourceId) { return call_method<"addEarcon", jint>(earcon, packagename, resourceId); }
	jint addEarcon(jni::ref<java::lang::String> earcon, jni::ref<java::lang::String> filename) { return call_method<"addEarcon", jint>(earcon, filename); }
	jint addEarcon(jni::ref<java::lang::String> earcon, jni::ref<java::io::File> file) { return call_method<"addEarcon", jint>(earcon, file); }
	jint speak(jni::ref<java::lang::CharSequence> text, jint queueMode, jni::ref<android::os::Bundle> params, jni::ref<java::lang::String> utteranceId) { return call_method<"speak", jint>(text, queueMode, params, utteranceId); }
	jint speak(jni::ref<java::lang::String> text, jint queueMode, jni::ref<java::util::HashMap> params) { return call_method<"speak", jint>(text, queueMode, params); }
	jint playEarcon(jni::ref<java::lang::String> earcon, jint queueMode, jni::ref<android::os::Bundle> params, jni::ref<java::lang::String> utteranceId) { return call_method<"playEarcon", jint>(earcon, queueMode, params, utteranceId); }
	jint playEarcon(jni::ref<java::lang::String> earcon, jint queueMode, jni::ref<java::util::HashMap> params) { return call_method<"playEarcon", jint>(earcon, queueMode, params); }
	jint playSilentUtterance(jlong durationInMs, jint p2, jni::ref<java::lang::String> queueMode) { return call_method<"playSilentUtterance", jint>(durationInMs, p2, queueMode); }
	jint playSilence(jlong durationInMs, jint p2, jni::ref<java::util::HashMap> queueMode) { return call_method<"playSilence", jint>(durationInMs, p2, queueMode); }
	jni::ref<java::util::Set> getFeatures(jni::ref<java::util::Locale> locale) { return call_method<"getFeatures", jni::ref<java::util::Set>>(locale); }
	jboolean isSpeaking() { return call_method<"isSpeaking", jboolean>(); }
	jint stop() { return call_method<"stop", jint>(); }
	jint setSpeechRate(jfloat speechRate) { return call_method<"setSpeechRate", jint>(speechRate); }
	jint setPitch(jfloat pitch) { return call_method<"setPitch", jint>(pitch); }
	jint setAudioAttributes(jni::ref<android::media::AudioAttributes> audioAttributes) { return call_method<"setAudioAttributes", jint>(audioAttributes); }
	jni::ref<java::util::Locale> getDefaultLanguage() { return call_method<"getDefaultLanguage", jni::ref<java::util::Locale>>(); }
	jint setLanguage(jni::ref<java::util::Locale> loc) { return call_method<"setLanguage", jint>(loc); }
	jni::ref<java::util::Locale> getLanguage() { return call_method<"getLanguage", jni::ref<java::util::Locale>>(); }
	jni::ref<java::util::Set> getAvailableLanguages() { return call_method<"getAvailableLanguages", jni::ref<java::util::Set>>(); }
	jni::ref<java::util::Set> getVoices() { return call_method<"getVoices", jni::ref<java::util::Set>>(); }
	jint setVoice(jni::ref<android::speech::tts::Voice> voice) { return call_method<"setVoice", jint>(voice); }
	jni::ref<android::speech::tts::Voice> getVoice() { return call_method<"getVoice", jni::ref<android::speech::tts::Voice>>(); }
	jni::ref<android::speech::tts::Voice> getDefaultVoice() { return call_method<"getDefaultVoice", jni::ref<android::speech::tts::Voice>>(); }
	jint isLanguageAvailable(jni::ref<java::util::Locale> loc) { return call_method<"isLanguageAvailable", jint>(loc); }
	jint synthesizeToFile(jni::ref<java::lang::CharSequence> text, jni::ref<android::os::Bundle> params, jni::ref<java::io::File> file, jni::ref<java::lang::String> utteranceId) { return call_method<"synthesizeToFile", jint>(text, params, file, utteranceId); }
	jint synthesizeToFile(jni::ref<java::lang::String> text, jni::ref<java::util::HashMap> params, jni::ref<java::lang::String> filename) { return call_method<"synthesizeToFile", jint>(text, params, filename); }
	jint setOnUtteranceCompletedListener(jni::ref<android::speech::tts::TextToSpeech_OnUtteranceCompletedListener> listener) { return call_method<"setOnUtteranceCompletedListener", jint>(listener); }
	jint setOnUtteranceProgressListener(jni::ref<android::speech::tts::UtteranceProgressListener> listener) { return call_method<"setOnUtteranceProgressListener", jint>(listener); }
	jint setEngineByPackageName(jni::ref<java::lang::String> enginePackageName) { return call_method<"setEngineByPackageName", jint>(enginePackageName); }
	jni::ref<java::lang::String> getDefaultEngine() { return call_method<"getDefaultEngine", jni::ref<java::lang::String>>(); }
	jboolean areDefaultsEnforced() { return call_method<"areDefaultsEnforced", jboolean>(); }
	jni::ref<java::util::List> getEngines() { return call_method<"getEngines", jni::ref<java::util::List>>(); }
	static jint getMaxSpeechInputLength() { return call_static_method<"getMaxSpeechInputLength", jint>(); }

protected:

	TextToSpeech(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SPEECH_TTS_TEXTTOSPEECH
