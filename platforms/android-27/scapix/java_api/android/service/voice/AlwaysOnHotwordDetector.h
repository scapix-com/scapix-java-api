// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_SERVICE_VOICE_ALWAYSONHOTWORDDETECTOR_FWD
#define SCAPIX_JAVA_API_ANDROID_SERVICE_VOICE_ALWAYSONHOTWORDDETECTOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::service::voice { class AlwaysOnHotwordDetector; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::service::voice::AlwaysOnHotwordDetector>
{
	static constexpr fixed_string class_name = "android/service/voice/AlwaysOnHotwordDetector";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SERVICE_VOICE_ALWAYSONHOTWORDDETECTOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_SERVICE_VOICE_ALWAYSONHOTWORDDETECTOR)
#define SCAPIX_JAVA_API_ANDROID_SERVICE_VOICE_ALWAYSONHOTWORDDETECTOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/Intent.h>
#include <scapix/java_api/android/service/voice/AlwaysOnHotwordDetector_Callback.h>
#include <scapix/java_api/android/service/voice/AlwaysOnHotwordDetector_EventPayload.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::service::voice::AlwaysOnHotwordDetector : public jni::object_base<"android/service/voice/AlwaysOnHotwordDetector",
	java::lang::Object>
{
public:

	using Callback = AlwaysOnHotwordDetector_Callback;
	using EventPayload = AlwaysOnHotwordDetector_EventPayload;

	static jint RECOGNITION_FLAG_ALLOW_MULTIPLE_TRIGGERS() { return get_static_field<"RECOGNITION_FLAG_ALLOW_MULTIPLE_TRIGGERS", jint>(); }
	static jint RECOGNITION_FLAG_CAPTURE_TRIGGER_AUDIO() { return get_static_field<"RECOGNITION_FLAG_CAPTURE_TRIGGER_AUDIO", jint>(); }
	static jint RECOGNITION_MODE_USER_IDENTIFICATION() { return get_static_field<"RECOGNITION_MODE_USER_IDENTIFICATION", jint>(); }
	static jint RECOGNITION_MODE_VOICE_TRIGGER() { return get_static_field<"RECOGNITION_MODE_VOICE_TRIGGER", jint>(); }
	static jint STATE_HARDWARE_UNAVAILABLE() { return get_static_field<"STATE_HARDWARE_UNAVAILABLE", jint>(); }
	static jint STATE_KEYPHRASE_ENROLLED() { return get_static_field<"STATE_KEYPHRASE_ENROLLED", jint>(); }
	static jint STATE_KEYPHRASE_UNENROLLED() { return get_static_field<"STATE_KEYPHRASE_UNENROLLED", jint>(); }
	static jint STATE_KEYPHRASE_UNSUPPORTED() { return get_static_field<"STATE_KEYPHRASE_UNSUPPORTED", jint>(); }

	jint getSupportedRecognitionModes() { return call_method<"getSupportedRecognitionModes", jint>(); }
	jboolean startRecognition(jint recognitionFlags) { return call_method<"startRecognition", jboolean>(recognitionFlags); }
	jboolean stopRecognition() { return call_method<"stopRecognition", jboolean>(); }
	jni::ref<android::content::Intent> createEnrollIntent() { return call_method<"createEnrollIntent", jni::ref<android::content::Intent>>(); }
	jni::ref<android::content::Intent> createUnEnrollIntent() { return call_method<"createUnEnrollIntent", jni::ref<android::content::Intent>>(); }
	jni::ref<android::content::Intent> createReEnrollIntent() { return call_method<"createReEnrollIntent", jni::ref<android::content::Intent>>(); }

protected:

	AlwaysOnHotwordDetector(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SERVICE_VOICE_ALWAYSONHOTWORDDETECTOR
