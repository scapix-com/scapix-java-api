// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/media/tv/TvInputService_Session.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_TV_TVINPUTSERVICE_HARDWARESESSION_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_TV_TVINPUTSERVICE_HARDWARESESSION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media::tv { class TvInputService_HardwareSession; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::tv::TvInputService_HardwareSession>
{
	static constexpr fixed_string class_name = "android/media/tv/TvInputService$HardwareSession";
	using base_classes = std::tuple<scapix::java_api::android::media::tv::TvInputService_Session>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_TV_TVINPUTSERVICE_HARDWARESESSION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_TV_TVINPUTSERVICE_HARDWARESESSION)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_TV_TVINPUTSERVICE_HARDWARESESSION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/view/Surface.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::tv::TvInputService_HardwareSession : public jni::object_base<"android/media/tv/TvInputService$HardwareSession",
	android::media::tv::TvInputService_Session>
{
public:

	static jni::ref<android::media::tv::TvInputService_HardwareSession> new_object(jni::ref<android::content::Context> context) { return base_::new_object(context); }
	jni::ref<java::lang::String> getHardwareInputId() { return call_method<"getHardwareInputId", jni::ref<java::lang::String>>(); }
	jboolean onSetSurface(jni::ref<android::view::Surface> surface) { return call_method<"onSetSurface", jboolean>(surface); }
	void onHardwareVideoAvailable() { return call_method<"onHardwareVideoAvailable", void>(); }
	void onHardwareVideoUnavailable(jint reason) { return call_method<"onHardwareVideoUnavailable", void>(reason); }

protected:

	TvInputService_HardwareSession(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_TV_TVINPUTSERVICE_HARDWARESESSION