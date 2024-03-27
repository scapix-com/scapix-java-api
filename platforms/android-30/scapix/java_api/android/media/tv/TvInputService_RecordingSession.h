// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_TV_TVINPUTSERVICE_RECORDINGSESSION_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_TV_TVINPUTSERVICE_RECORDINGSESSION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media::tv { class TvInputService_RecordingSession; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::tv::TvInputService_RecordingSession>
{
	static constexpr fixed_string class_name = "android/media/tv/TvInputService$RecordingSession";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_TV_TVINPUTSERVICE_RECORDINGSESSION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_TV_TVINPUTSERVICE_RECORDINGSESSION)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_TV_TVINPUTSERVICE_RECORDINGSESSION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::tv::TvInputService_RecordingSession : public jni::object_base<"android/media/tv/TvInputService$RecordingSession",
	java::lang::Object>
{
public:

	static jni::ref<android::media::tv::TvInputService_RecordingSession> new_object(jni::ref<android::content::Context> context) { return base_::new_object(context); }
	void notifyTuned(jni::ref<android::net::Uri> channelUri) { return call_method<"notifyTuned", void>(channelUri); }
	void notifyRecordingStopped(jni::ref<android::net::Uri> recordedProgramUri) { return call_method<"notifyRecordingStopped", void>(recordedProgramUri); }
	void notifyError(jint error) { return call_method<"notifyError", void>(error); }
	void onTune(jni::ref<android::net::Uri> p1) { return call_method<"onTune", void>(p1); }
	void onTune(jni::ref<android::net::Uri> channelUri, jni::ref<android::os::Bundle> params) { return call_method<"onTune", void>(channelUri, params); }
	void onStartRecording(jni::ref<android::net::Uri> p1) { return call_method<"onStartRecording", void>(p1); }
	void onStartRecording(jni::ref<android::net::Uri> programUri, jni::ref<android::os::Bundle> params) { return call_method<"onStartRecording", void>(programUri, params); }
	void onStopRecording() { return call_method<"onStopRecording", void>(); }
	void onRelease() { return call_method<"onRelease", void>(); }
	void onAppPrivateCommand(jni::ref<java::lang::String> action, jni::ref<android::os::Bundle> data) { return call_method<"onAppPrivateCommand", void>(action, data); }

protected:

	TvInputService_RecordingSession(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_TV_TVINPUTSERVICE_RECORDINGSESSION
