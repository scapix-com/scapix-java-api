// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_SPEECH_RECOGNITIONSERVICE_SUPPORTCALLBACK_FWD
#define SCAPIX_JAVA_API_ANDROID_SPEECH_RECOGNITIONSERVICE_SUPPORTCALLBACK_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::speech { class RecognitionService_SupportCallback; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::speech::RecognitionService_SupportCallback>
{
	static constexpr fixed_string class_name = "android/speech/RecognitionService$SupportCallback";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SPEECH_RECOGNITIONSERVICE_SUPPORTCALLBACK_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_SPEECH_RECOGNITIONSERVICE_SUPPORTCALLBACK)
#define SCAPIX_JAVA_API_ANDROID_SPEECH_RECOGNITIONSERVICE_SUPPORTCALLBACK

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/speech/RecognitionSupport.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::speech::RecognitionService_SupportCallback : public jni::object_base<"android/speech/RecognitionService$SupportCallback",
	java::lang::Object>
{
public:

	void onSupportResult(jni::ref<android::speech::RecognitionSupport> recognitionSupport) { return call_method<"onSupportResult", void>(recognitionSupport); }
	void onError(jint errorCode) { return call_method<"onError", void>(errorCode); }

protected:

	RecognitionService_SupportCallback(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SPEECH_RECOGNITIONSERVICE_SUPPORTCALLBACK
