// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_SPEECH_TTS_TEXTTOSPEECH_ENGINE_FWD
#define SCAPIX_JAVA_API_ANDROID_SPEECH_TTS_TEXTTOSPEECH_ENGINE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::speech::tts { class TextToSpeech_Engine; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::speech::tts::TextToSpeech_Engine>
{
	static constexpr fixed_string class_name = "android/speech/tts/TextToSpeech$Engine";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SPEECH_TTS_TEXTTOSPEECH_ENGINE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_SPEECH_TTS_TEXTTOSPEECH_ENGINE)
#define SCAPIX_JAVA_API_ANDROID_SPEECH_TTS_TEXTTOSPEECH_ENGINE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/speech/tts/TextToSpeech.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::speech::tts::TextToSpeech_Engine : public jni::object_base<"android/speech/tts/TextToSpeech$Engine",
	java::lang::Object>
{
public:

	static jni::ref<java::lang::String> ACTION_CHECK_TTS_DATA() { return get_static_field<"ACTION_CHECK_TTS_DATA", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ACTION_GET_SAMPLE_TEXT() { return get_static_field<"ACTION_GET_SAMPLE_TEXT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ACTION_INSTALL_TTS_DATA() { return get_static_field<"ACTION_INSTALL_TTS_DATA", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ACTION_TTS_DATA_INSTALLED() { return get_static_field<"ACTION_TTS_DATA_INSTALLED", jni::ref<java::lang::String>>(); }
	static jint CHECK_VOICE_DATA_BAD_DATA() { return get_static_field<"CHECK_VOICE_DATA_BAD_DATA", jint>(); }
	static jint CHECK_VOICE_DATA_FAIL() { return get_static_field<"CHECK_VOICE_DATA_FAIL", jint>(); }
	static jint CHECK_VOICE_DATA_MISSING_DATA() { return get_static_field<"CHECK_VOICE_DATA_MISSING_DATA", jint>(); }
	static jint CHECK_VOICE_DATA_MISSING_VOLUME() { return get_static_field<"CHECK_VOICE_DATA_MISSING_VOLUME", jint>(); }
	static jint CHECK_VOICE_DATA_PASS() { return get_static_field<"CHECK_VOICE_DATA_PASS", jint>(); }
	static jint DEFAULT_STREAM() { return get_static_field<"DEFAULT_STREAM", jint>(); }
	static jni::ref<java::lang::String> EXTRA_AVAILABLE_VOICES() { return get_static_field<"EXTRA_AVAILABLE_VOICES", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_CHECK_VOICE_DATA_FOR() { return get_static_field<"EXTRA_CHECK_VOICE_DATA_FOR", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_SAMPLE_TEXT() { return get_static_field<"EXTRA_SAMPLE_TEXT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_TTS_DATA_INSTALLED() { return get_static_field<"EXTRA_TTS_DATA_INSTALLED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_UNAVAILABLE_VOICES() { return get_static_field<"EXTRA_UNAVAILABLE_VOICES", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_VOICE_DATA_FILES() { return get_static_field<"EXTRA_VOICE_DATA_FILES", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_VOICE_DATA_FILES_INFO() { return get_static_field<"EXTRA_VOICE_DATA_FILES_INFO", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_VOICE_DATA_ROOT_DIRECTORY() { return get_static_field<"EXTRA_VOICE_DATA_ROOT_DIRECTORY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> INTENT_ACTION_TTS_SERVICE() { return get_static_field<"INTENT_ACTION_TTS_SERVICE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_FEATURE_EMBEDDED_SYNTHESIS() { return get_static_field<"KEY_FEATURE_EMBEDDED_SYNTHESIS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_FEATURE_NETWORK_RETRIES_COUNT() { return get_static_field<"KEY_FEATURE_NETWORK_RETRIES_COUNT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_FEATURE_NETWORK_SYNTHESIS() { return get_static_field<"KEY_FEATURE_NETWORK_SYNTHESIS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_FEATURE_NETWORK_TIMEOUT_MS() { return get_static_field<"KEY_FEATURE_NETWORK_TIMEOUT_MS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_FEATURE_NOT_INSTALLED() { return get_static_field<"KEY_FEATURE_NOT_INSTALLED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_PARAM_PAN() { return get_static_field<"KEY_PARAM_PAN", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_PARAM_SESSION_ID() { return get_static_field<"KEY_PARAM_SESSION_ID", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_PARAM_STREAM() { return get_static_field<"KEY_PARAM_STREAM", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_PARAM_UTTERANCE_ID() { return get_static_field<"KEY_PARAM_UTTERANCE_ID", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_PARAM_VOLUME() { return get_static_field<"KEY_PARAM_VOLUME", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SERVICE_META_DATA() { return get_static_field<"SERVICE_META_DATA", jni::ref<java::lang::String>>(); }

	static jni::ref<android::speech::tts::TextToSpeech_Engine> new_object(jni::ref<android::speech::tts::TextToSpeech> p1) { return base_::new_object(p1); }

protected:

	TextToSpeech_Engine(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SPEECH_TTS_TEXTTOSPEECH_ENGINE
