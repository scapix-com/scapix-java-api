// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_SERVICE_VOICE_ALWAYSONHOTWORDDETECTOR_CALLBACK_FWD
#define SCAPIX_JAVA_API_ANDROID_SERVICE_VOICE_ALWAYSONHOTWORDDETECTOR_CALLBACK_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::service::voice { class AlwaysOnHotwordDetector_Callback; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::service::voice::AlwaysOnHotwordDetector_Callback>
{
	static constexpr fixed_string class_name = "android/service/voice/AlwaysOnHotwordDetector$Callback";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SERVICE_VOICE_ALWAYSONHOTWORDDETECTOR_CALLBACK_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_SERVICE_VOICE_ALWAYSONHOTWORDDETECTOR_CALLBACK)
#define SCAPIX_JAVA_API_ANDROID_SERVICE_VOICE_ALWAYSONHOTWORDDETECTOR_CALLBACK

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/service/voice/AlwaysOnHotwordDetector_EventPayload.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::service::voice::AlwaysOnHotwordDetector_Callback : public jni::object_base<"android/service/voice/AlwaysOnHotwordDetector$Callback",
	java::lang::Object>
{
public:

	static jni::ref<android::service::voice::AlwaysOnHotwordDetector_Callback> new_object() { return base_::new_object(); }
	void onAvailabilityChanged(jint p1) { return call_method<"onAvailabilityChanged", void>(p1); }
	void onDetected(jni::ref<android::service::voice::AlwaysOnHotwordDetector_EventPayload> p1) { return call_method<"onDetected", void>(p1); }
	void onError() { return call_method<"onError", void>(); }
	void onRecognitionPaused() { return call_method<"onRecognitionPaused", void>(); }
	void onRecognitionResumed() { return call_method<"onRecognitionResumed", void>(); }

protected:

	AlwaysOnHotwordDetector_Callback(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SERVICE_VOICE_ALWAYSONHOTWORDDETECTOR_CALLBACK
