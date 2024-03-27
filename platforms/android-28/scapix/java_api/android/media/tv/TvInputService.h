// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/app/Service.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_TV_TVINPUTSERVICE_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_TV_TVINPUTSERVICE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media::tv { class TvInputService; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::tv::TvInputService>
{
	static constexpr fixed_string class_name = "android/media/tv/TvInputService";
	using base_classes = std::tuple<scapix::java_api::android::app::Service>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_TV_TVINPUTSERVICE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_TV_TVINPUTSERVICE)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_TV_TVINPUTSERVICE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/Intent.h>
#include <scapix/java_api/android/media/tv/TvInputService_RecordingSession.h>
#include <scapix/java_api/android/media/tv/TvInputService_Session.h>
#include <scapix/java_api/android/os/IBinder.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/android/media/tv/TvInputService_HardwareSession.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::tv::TvInputService : public jni::object_base<"android/media/tv/TvInputService",
	android::app::Service>
{
public:

	using Session = TvInputService_Session;
	using RecordingSession = TvInputService_RecordingSession;
	using HardwareSession = TvInputService_HardwareSession;

	static jni::ref<java::lang::String> SERVICE_INTERFACE() { return get_static_field<"SERVICE_INTERFACE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SERVICE_META_DATA() { return get_static_field<"SERVICE_META_DATA", jni::ref<java::lang::String>>(); }

	static jni::ref<android::media::tv::TvInputService> new_object() { return base_::new_object(); }
	jni::ref<android::os::IBinder> onBind(jni::ref<android::content::Intent> intent) { return call_method<"onBind", jni::ref<android::os::IBinder>>(intent); }
	jni::ref<android::media::tv::TvInputService_Session> onCreateSession(jni::ref<java::lang::String> p1) { return call_method<"onCreateSession", jni::ref<android::media::tv::TvInputService_Session>>(p1); }
	jni::ref<android::media::tv::TvInputService_RecordingSession> onCreateRecordingSession(jni::ref<java::lang::String> inputId) { return call_method<"onCreateRecordingSession", jni::ref<android::media::tv::TvInputService_RecordingSession>>(inputId); }

protected:

	TvInputService(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_TV_TVINPUTSERVICE
