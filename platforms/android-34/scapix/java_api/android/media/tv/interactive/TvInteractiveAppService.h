// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/app/Service.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_TV_INTERACTIVE_TVINTERACTIVEAPPSERVICE_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_TV_INTERACTIVE_TVINTERACTIVEAPPSERVICE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media::tv::interactive { class TvInteractiveAppService; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::tv::interactive::TvInteractiveAppService>
{
	static constexpr fixed_string class_name = "android/media/tv/interactive/TvInteractiveAppService";
	using base_classes = std::tuple<scapix::java_api::android::app::Service>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_TV_INTERACTIVE_TVINTERACTIVEAPPSERVICE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_TV_INTERACTIVE_TVINTERACTIVEAPPSERVICE)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_TV_INTERACTIVE_TVINTERACTIVEAPPSERVICE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/Intent.h>
#include <scapix/java_api/android/media/tv/interactive/AppLinkInfo.h>
#include <scapix/java_api/android/media/tv/interactive/TvInteractiveAppService_Session.h>
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/android/os/IBinder.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::tv::interactive::TvInteractiveAppService : public jni::object_base<"android/media/tv/interactive/TvInteractiveAppService",
	android::app::Service>
{
public:

	using Session = TvInteractiveAppService_Session;

	static jni::ref<java::lang::String> COMMAND_PARAMETER_KEY_CHANGE_CHANNEL_QUIETLY() { return get_static_field<"COMMAND_PARAMETER_KEY_CHANGE_CHANNEL_QUIETLY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> COMMAND_PARAMETER_KEY_CHANNEL_URI() { return get_static_field<"COMMAND_PARAMETER_KEY_CHANNEL_URI", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> COMMAND_PARAMETER_KEY_INPUT_ID() { return get_static_field<"COMMAND_PARAMETER_KEY_INPUT_ID", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> COMMAND_PARAMETER_KEY_PLAYBACK_PARAMS() { return get_static_field<"COMMAND_PARAMETER_KEY_PLAYBACK_PARAMS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> COMMAND_PARAMETER_KEY_PROGRAM_URI() { return get_static_field<"COMMAND_PARAMETER_KEY_PROGRAM_URI", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> COMMAND_PARAMETER_KEY_STOP_MODE() { return get_static_field<"COMMAND_PARAMETER_KEY_STOP_MODE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> COMMAND_PARAMETER_KEY_TIME_POSITION() { return get_static_field<"COMMAND_PARAMETER_KEY_TIME_POSITION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> COMMAND_PARAMETER_KEY_TIME_SHIFT_MODE() { return get_static_field<"COMMAND_PARAMETER_KEY_TIME_SHIFT_MODE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> COMMAND_PARAMETER_KEY_TRACK_ID() { return get_static_field<"COMMAND_PARAMETER_KEY_TRACK_ID", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> COMMAND_PARAMETER_KEY_TRACK_TYPE() { return get_static_field<"COMMAND_PARAMETER_KEY_TRACK_TYPE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> COMMAND_PARAMETER_KEY_VOLUME() { return get_static_field<"COMMAND_PARAMETER_KEY_VOLUME", jni::ref<java::lang::String>>(); }
	static jint COMMAND_PARAMETER_VALUE_STOP_MODE_BLANK() { return get_static_field<"COMMAND_PARAMETER_VALUE_STOP_MODE_BLANK", jint>(); }
	static jint COMMAND_PARAMETER_VALUE_STOP_MODE_FREEZE() { return get_static_field<"COMMAND_PARAMETER_VALUE_STOP_MODE_FREEZE", jint>(); }
	static jni::ref<java::lang::String> PLAYBACK_COMMAND_TYPE_SELECT_TRACK() { return get_static_field<"PLAYBACK_COMMAND_TYPE_SELECT_TRACK", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> PLAYBACK_COMMAND_TYPE_SET_STREAM_VOLUME() { return get_static_field<"PLAYBACK_COMMAND_TYPE_SET_STREAM_VOLUME", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> PLAYBACK_COMMAND_TYPE_STOP() { return get_static_field<"PLAYBACK_COMMAND_TYPE_STOP", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> PLAYBACK_COMMAND_TYPE_TUNE() { return get_static_field<"PLAYBACK_COMMAND_TYPE_TUNE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> PLAYBACK_COMMAND_TYPE_TUNE_NEXT() { return get_static_field<"PLAYBACK_COMMAND_TYPE_TUNE_NEXT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> PLAYBACK_COMMAND_TYPE_TUNE_PREV() { return get_static_field<"PLAYBACK_COMMAND_TYPE_TUNE_PREV", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SERVICE_INTERFACE() { return get_static_field<"SERVICE_INTERFACE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SERVICE_META_DATA() { return get_static_field<"SERVICE_META_DATA", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> TIME_SHIFT_COMMAND_TYPE_PAUSE() { return get_static_field<"TIME_SHIFT_COMMAND_TYPE_PAUSE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> TIME_SHIFT_COMMAND_TYPE_PLAY() { return get_static_field<"TIME_SHIFT_COMMAND_TYPE_PLAY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> TIME_SHIFT_COMMAND_TYPE_RESUME() { return get_static_field<"TIME_SHIFT_COMMAND_TYPE_RESUME", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> TIME_SHIFT_COMMAND_TYPE_SEEK_TO() { return get_static_field<"TIME_SHIFT_COMMAND_TYPE_SEEK_TO", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> TIME_SHIFT_COMMAND_TYPE_SET_MODE() { return get_static_field<"TIME_SHIFT_COMMAND_TYPE_SET_MODE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> TIME_SHIFT_COMMAND_TYPE_SET_PLAYBACK_PARAMS() { return get_static_field<"TIME_SHIFT_COMMAND_TYPE_SET_PLAYBACK_PARAMS", jni::ref<java::lang::String>>(); }

	static jni::ref<android::media::tv::interactive::TvInteractiveAppService> new_object() { return base_::new_object(); }
	jni::ref<android::os::IBinder> onBind(jni::ref<android::content::Intent> intent) { return call_method<"onBind", jni::ref<android::os::IBinder>>(intent); }
	void onRegisterAppLinkInfo(jni::ref<android::media::tv::interactive::AppLinkInfo> appLinkInfo) { return call_method<"onRegisterAppLinkInfo", void>(appLinkInfo); }
	void onUnregisterAppLinkInfo(jni::ref<android::media::tv::interactive::AppLinkInfo> appLinkInfo) { return call_method<"onUnregisterAppLinkInfo", void>(appLinkInfo); }
	void onAppLinkCommand(jni::ref<android::os::Bundle> command) { return call_method<"onAppLinkCommand", void>(command); }
	jni::ref<android::media::tv::interactive::TvInteractiveAppService_Session> onCreateSession(jni::ref<java::lang::String> p1, jint p2) { return call_method<"onCreateSession", jni::ref<android::media::tv::interactive::TvInteractiveAppService_Session>>(p1, p2); }
	void notifyStateChanged(jint type, jint state, jint error) { return call_method<"notifyStateChanged", void>(type, state, error); }

protected:

	TvInteractiveAppService(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_TV_INTERACTIVE_TVINTERACTIVEAPPSERVICE
