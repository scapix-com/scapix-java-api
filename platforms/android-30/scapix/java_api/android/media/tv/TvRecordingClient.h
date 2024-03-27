// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_TV_TVRECORDINGCLIENT_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_TV_TVRECORDINGCLIENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media::tv { class TvRecordingClient; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::tv::TvRecordingClient>
{
	static constexpr fixed_string class_name = "android/media/tv/TvRecordingClient";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_TV_TVRECORDINGCLIENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_TV_TVRECORDINGCLIENT)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_TV_TVRECORDINGCLIENT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/media/tv/TvRecordingClient_RecordingCallback.h>
#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/android/os/Handler.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::tv::TvRecordingClient : public jni::object_base<"android/media/tv/TvRecordingClient",
	java::lang::Object>
{
public:

	using RecordingCallback = TvRecordingClient_RecordingCallback;

	static jni::ref<android::media::tv::TvRecordingClient> new_object(jni::ref<android::content::Context> context, jni::ref<java::lang::String> tag, jni::ref<android::media::tv::TvRecordingClient_RecordingCallback> callback, jni::ref<android::os::Handler> handler) { return base_::new_object(context, tag, callback, handler); }
	void tune(jni::ref<java::lang::String> inputId, jni::ref<android::net::Uri> channelUri) { return call_method<"tune", void>(inputId, channelUri); }
	void tune(jni::ref<java::lang::String> inputId, jni::ref<android::net::Uri> channelUri, jni::ref<android::os::Bundle> params) { return call_method<"tune", void>(inputId, channelUri, params); }
	void release() { return call_method<"release", void>(); }
	void startRecording(jni::ref<android::net::Uri> programUri) { return call_method<"startRecording", void>(programUri); }
	void startRecording(jni::ref<android::net::Uri> programUri, jni::ref<android::os::Bundle> params) { return call_method<"startRecording", void>(programUri, params); }
	void stopRecording() { return call_method<"stopRecording", void>(); }
	void sendAppPrivateCommand(jni::ref<java::lang::String> action, jni::ref<android::os::Bundle> data) { return call_method<"sendAppPrivateCommand", void>(action, data); }

protected:

	TvRecordingClient(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_TV_TVRECORDINGCLIENT
