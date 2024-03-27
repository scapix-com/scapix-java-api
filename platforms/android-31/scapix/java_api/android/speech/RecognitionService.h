// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/app/Service.h>

#ifndef SCAPIX_JAVA_API_ANDROID_SPEECH_RECOGNITIONSERVICE_FWD
#define SCAPIX_JAVA_API_ANDROID_SPEECH_RECOGNITIONSERVICE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::speech { class RecognitionService; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::speech::RecognitionService>
{
	static constexpr fixed_string class_name = "android/speech/RecognitionService";
	using base_classes = std::tuple<scapix::java_api::android::app::Service>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SPEECH_RECOGNITIONSERVICE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_SPEECH_RECOGNITIONSERVICE)
#define SCAPIX_JAVA_API_ANDROID_SPEECH_RECOGNITIONSERVICE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/content/ContextParams.h>
#include <scapix/java_api/android/content/Intent.h>
#include <scapix/java_api/android/os/IBinder.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/android/speech/RecognitionService_Callback.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::speech::RecognitionService : public jni::object_base<"android/speech/RecognitionService",
	android::app::Service>
{
public:

	using Callback = RecognitionService_Callback;

	static jni::ref<java::lang::String> SERVICE_INTERFACE() { return get_static_field<"SERVICE_INTERFACE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SERVICE_META_DATA() { return get_static_field<"SERVICE_META_DATA", jni::ref<java::lang::String>>(); }

	static jni::ref<android::speech::RecognitionService> new_object() { return base_::new_object(); }
	jni::ref<android::content::Context> createContext(jni::ref<android::content::ContextParams> contextParams) { return call_method<"createContext", jni::ref<android::content::Context>>(contextParams); }
	jni::ref<android::os::IBinder> onBind(jni::ref<android::content::Intent> intent) { return call_method<"onBind", jni::ref<android::os::IBinder>>(intent); }
	void onDestroy() { return call_method<"onDestroy", void>(); }

protected:

	RecognitionService(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SPEECH_RECOGNITIONSERVICE