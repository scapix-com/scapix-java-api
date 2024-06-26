// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_TV_INTERACTIVE_TVINTERACTIVEAPPMANAGER_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_TV_INTERACTIVE_TVINTERACTIVEAPPMANAGER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media::tv::interactive { class TvInteractiveAppManager; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::tv::interactive::TvInteractiveAppManager>
{
	static constexpr fixed_string class_name = "android/media/tv/interactive/TvInteractiveAppManager";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_TV_INTERACTIVE_TVINTERACTIVEAPPMANAGER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_TV_INTERACTIVE_TVINTERACTIVEAPPMANAGER)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_TV_INTERACTIVE_TVINTERACTIVEAPPMANAGER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/media/tv/interactive/AppLinkInfo.h>
#include <scapix/java_api/android/media/tv/interactive/TvInteractiveAppManager_TvInteractiveAppCallback.h>
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/java/util/concurrent/Executor.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::tv::interactive::TvInteractiveAppManager : public jni::object_base<"android/media/tv/interactive/TvInteractiveAppManager",
	java::lang::Object>
{
public:

	using TvInteractiveAppCallback = TvInteractiveAppManager_TvInteractiveAppCallback;

	static jni::ref<java::lang::String> ACTION_APP_LINK_COMMAND() { return get_static_field<"ACTION_APP_LINK_COMMAND", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> APP_LINK_KEY_BACK_URI() { return get_static_field<"APP_LINK_KEY_BACK_URI", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> APP_LINK_KEY_CLASS_NAME() { return get_static_field<"APP_LINK_KEY_CLASS_NAME", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> APP_LINK_KEY_COMMAND_TYPE() { return get_static_field<"APP_LINK_KEY_COMMAND_TYPE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> APP_LINK_KEY_PACKAGE_NAME() { return get_static_field<"APP_LINK_KEY_PACKAGE_NAME", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> APP_LINK_KEY_SERVICE_ID() { return get_static_field<"APP_LINK_KEY_SERVICE_ID", jni::ref<java::lang::String>>(); }
	static jint ERROR_BLOCKED() { return get_static_field<"ERROR_BLOCKED", jint>(); }
	static jint ERROR_ENCRYPTED() { return get_static_field<"ERROR_ENCRYPTED", jint>(); }
	static jint ERROR_NONE() { return get_static_field<"ERROR_NONE", jint>(); }
	static jint ERROR_NOT_SUPPORTED() { return get_static_field<"ERROR_NOT_SUPPORTED", jint>(); }
	static jint ERROR_RESOURCE_UNAVAILABLE() { return get_static_field<"ERROR_RESOURCE_UNAVAILABLE", jint>(); }
	static jint ERROR_UNKNOWN() { return get_static_field<"ERROR_UNKNOWN", jint>(); }
	static jint ERROR_UNKNOWN_CHANNEL() { return get_static_field<"ERROR_UNKNOWN_CHANNEL", jint>(); }
	static jint ERROR_WEAK_SIGNAL() { return get_static_field<"ERROR_WEAK_SIGNAL", jint>(); }
	static jni::ref<java::lang::String> INTENT_KEY_BI_INTERACTIVE_APP_TYPE() { return get_static_field<"INTENT_KEY_BI_INTERACTIVE_APP_TYPE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> INTENT_KEY_BI_INTERACTIVE_APP_URI() { return get_static_field<"INTENT_KEY_BI_INTERACTIVE_APP_URI", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> INTENT_KEY_CHANNEL_URI() { return get_static_field<"INTENT_KEY_CHANNEL_URI", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> INTENT_KEY_COMMAND_TYPE() { return get_static_field<"INTENT_KEY_COMMAND_TYPE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> INTENT_KEY_INTERACTIVE_APP_SERVICE_ID() { return get_static_field<"INTENT_KEY_INTERACTIVE_APP_SERVICE_ID", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> INTENT_KEY_TV_INPUT_ID() { return get_static_field<"INTENT_KEY_TV_INPUT_ID", jni::ref<java::lang::String>>(); }
	static jint INTERACTIVE_APP_STATE_ERROR() { return get_static_field<"INTERACTIVE_APP_STATE_ERROR", jint>(); }
	static jint INTERACTIVE_APP_STATE_RUNNING() { return get_static_field<"INTERACTIVE_APP_STATE_RUNNING", jint>(); }
	static jint INTERACTIVE_APP_STATE_STOPPED() { return get_static_field<"INTERACTIVE_APP_STATE_STOPPED", jint>(); }
	static jint SERVICE_STATE_ERROR() { return get_static_field<"SERVICE_STATE_ERROR", jint>(); }
	static jint SERVICE_STATE_PREPARING() { return get_static_field<"SERVICE_STATE_PREPARING", jint>(); }
	static jint SERVICE_STATE_READY() { return get_static_field<"SERVICE_STATE_READY", jint>(); }
	static jint SERVICE_STATE_UNREALIZED() { return get_static_field<"SERVICE_STATE_UNREALIZED", jint>(); }
	static jint TELETEXT_APP_STATE_ERROR() { return get_static_field<"TELETEXT_APP_STATE_ERROR", jint>(); }
	static jint TELETEXT_APP_STATE_HIDE() { return get_static_field<"TELETEXT_APP_STATE_HIDE", jint>(); }
	static jint TELETEXT_APP_STATE_SHOW() { return get_static_field<"TELETEXT_APP_STATE_SHOW", jint>(); }

	jni::ref<java::util::List> getTvInteractiveAppServiceList() { return call_method<"getTvInteractiveAppServiceList", jni::ref<java::util::List>>(); }
	jni::ref<java::util::List> getAppLinkInfoList() { return call_method<"getAppLinkInfoList", jni::ref<java::util::List>>(); }
	void registerAppLinkInfo(jni::ref<java::lang::String> tvIAppServiceId, jni::ref<android::media::tv::interactive::AppLinkInfo> appLinkInfo) { return call_method<"registerAppLinkInfo", void>(tvIAppServiceId, appLinkInfo); }
	void unregisterAppLinkInfo(jni::ref<java::lang::String> tvIAppServiceId, jni::ref<android::media::tv::interactive::AppLinkInfo> appLinkInfo) { return call_method<"unregisterAppLinkInfo", void>(tvIAppServiceId, appLinkInfo); }
	void sendAppLinkCommand(jni::ref<java::lang::String> tvIAppServiceId, jni::ref<android::os::Bundle> command) { return call_method<"sendAppLinkCommand", void>(tvIAppServiceId, command); }
	void registerCallback(jni::ref<java::util::concurrent::Executor> executor, jni::ref<android::media::tv::interactive::TvInteractiveAppManager_TvInteractiveAppCallback> callback) { return call_method<"registerCallback", void>(executor, callback); }
	void unregisterCallback(jni::ref<android::media::tv::interactive::TvInteractiveAppManager_TvInteractiveAppCallback> callback) { return call_method<"unregisterCallback", void>(callback); }

protected:

	TvInteractiveAppManager(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_TV_INTERACTIVE_TVINTERACTIVEAPPMANAGER
