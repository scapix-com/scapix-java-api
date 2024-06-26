// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_SPEECH_TTS_SYNTHESISCALLBACK_FWD
#define SCAPIX_JAVA_API_ANDROID_SPEECH_TTS_SYNTHESISCALLBACK_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::speech::tts { class SynthesisCallback; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::speech::tts::SynthesisCallback>
{
	static constexpr fixed_string class_name = "android/speech/tts/SynthesisCallback";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SPEECH_TTS_SYNTHESISCALLBACK_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_SPEECH_TTS_SYNTHESISCALLBACK)
#define SCAPIX_JAVA_API_ANDROID_SPEECH_TTS_SYNTHESISCALLBACK

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::speech::tts::SynthesisCallback : public jni::object_base<"android/speech/tts/SynthesisCallback",
	java::lang::Object>
{
public:

	jint getMaxBufferSize() { return call_method<"getMaxBufferSize", jint>(); }
	jint start(jint p1, jint p2, jint p3) { return call_method<"start", jint>(p1, p2, p3); }
	jint audioAvailable(jni::ref<jni::array<jbyte>> p1, jint p2, jint p3) { return call_method<"audioAvailable", jint>(p1, p2, p3); }
	jint done() { return call_method<"done", jint>(); }
	void error() { return call_method<"error", void>(); }
	void error(jint p1) { return call_method<"error", void>(p1); }
	jboolean hasStarted() { return call_method<"hasStarted", jboolean>(); }
	jboolean hasFinished() { return call_method<"hasFinished", jboolean>(); }

protected:

	SynthesisCallback(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SPEECH_TTS_SYNTHESISCALLBACK
