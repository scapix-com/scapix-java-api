// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/app/Service.h>

#ifndef SCAPIX_JAVA_API_ANDROID_SERVICE_QUICKSETTINGS_TILESERVICE_FWD
#define SCAPIX_JAVA_API_ANDROID_SERVICE_QUICKSETTINGS_TILESERVICE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::service::quicksettings { class TileService; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::service::quicksettings::TileService>
{
	static constexpr fixed_string class_name = "android/service/quicksettings/TileService";
	using base_classes = std::tuple<scapix::java_api::android::app::Service>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SERVICE_QUICKSETTINGS_TILESERVICE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_SERVICE_QUICKSETTINGS_TILESERVICE)
#define SCAPIX_JAVA_API_ANDROID_SERVICE_QUICKSETTINGS_TILESERVICE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/app/Dialog.h>
#include <scapix/java_api/android/app/PendingIntent.h>
#include <scapix/java_api/android/content/ComponentName.h>
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/content/Intent.h>
#include <scapix/java_api/android/os/IBinder.h>
#include <scapix/java_api/android/service/quicksettings/Tile.h>
#include <scapix/java_api/java/lang/Runnable.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::service::quicksettings::TileService : public jni::object_base<"android/service/quicksettings/TileService",
	android::app::Service>
{
public:

	static jni::ref<java::lang::String> ACTION_QS_TILE() { return get_static_field<"ACTION_QS_TILE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ACTION_QS_TILE_PREFERENCES() { return get_static_field<"ACTION_QS_TILE_PREFERENCES", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> META_DATA_ACTIVE_TILE() { return get_static_field<"META_DATA_ACTIVE_TILE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> META_DATA_TOGGLEABLE_TILE() { return get_static_field<"META_DATA_TOGGLEABLE_TILE", jni::ref<java::lang::String>>(); }

	static jni::ref<android::service::quicksettings::TileService> new_object() { return base_::new_object(); }
	void onDestroy() { return call_method<"onDestroy", void>(); }
	void onTileAdded() { return call_method<"onTileAdded", void>(); }
	void onTileRemoved() { return call_method<"onTileRemoved", void>(); }
	void onStartListening() { return call_method<"onStartListening", void>(); }
	void onStopListening() { return call_method<"onStopListening", void>(); }
	void onClick() { return call_method<"onClick", void>(); }
	void showDialog(jni::ref<android::app::Dialog> dialog) { return call_method<"showDialog", void>(dialog); }
	void unlockAndRun(jni::ref<java::lang::Runnable> runnable) { return call_method<"unlockAndRun", void>(runnable); }
	jboolean isSecure() { return call_method<"isSecure", jboolean>(); }
	jboolean isLocked() { return call_method<"isLocked", jboolean>(); }
	void startActivityAndCollapse(jni::ref<android::content::Intent> intent) { return call_method<"startActivityAndCollapse", void>(intent); }
	void startActivityAndCollapse(jni::ref<android::app::PendingIntent> pendingIntent) { return call_method<"startActivityAndCollapse", void>(pendingIntent); }
	jni::ref<android::service::quicksettings::Tile> getQsTile() { return call_method<"getQsTile", jni::ref<android::service::quicksettings::Tile>>(); }
	jni::ref<android::os::IBinder> onBind(jni::ref<android::content::Intent> intent) { return call_method<"onBind", jni::ref<android::os::IBinder>>(intent); }
	static void requestListeningState(jni::ref<android::content::Context> context, jni::ref<android::content::ComponentName> component) { return call_static_method<"requestListeningState", void>(context, component); }

protected:

	TileService(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SERVICE_QUICKSETTINGS_TILESERVICE
