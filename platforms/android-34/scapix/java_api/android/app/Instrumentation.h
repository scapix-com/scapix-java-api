// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_APP_INSTRUMENTATION_FWD
#define SCAPIX_JAVA_API_ANDROID_APP_INSTRUMENTATION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::app { class Instrumentation; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::app::Instrumentation>
{
	static constexpr fixed_string class_name = "android/app/Instrumentation";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_INSTRUMENTATION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_APP_INSTRUMENTATION)
#define SCAPIX_JAVA_API_ANDROID_APP_INSTRUMENTATION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/app/Activity.h>
#include <scapix/java_api/android/app/Application.h>
#include <scapix/java_api/android/app/Instrumentation_ActivityMonitor.h>
#include <scapix/java_api/android/app/Instrumentation_ActivityResult.h>
#include <scapix/java_api/android/app/UiAutomation.h>
#include <scapix/java_api/android/content/ComponentName.h>
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/content/Intent.h>
#include <scapix/java_api/android/content/IntentFilter.h>
#include <scapix/java_api/android/content/pm/ActivityInfo.h>
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/android/os/IBinder.h>
#include <scapix/java_api/android/os/Looper.h>
#include <scapix/java_api/android/os/PersistableBundle.h>
#include <scapix/java_api/android/os/TestLooperManager.h>
#include <scapix/java_api/android/view/KeyEvent.h>
#include <scapix/java_api/android/view/MotionEvent.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/ClassLoader.h>
#include <scapix/java_api/java/lang/Runnable.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Throwable.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::app::Instrumentation : public jni::object_base<"android/app/Instrumentation",
	java::lang::Object>
{
public:

	using ActivityResult = Instrumentation_ActivityResult;
	using ActivityMonitor = Instrumentation_ActivityMonitor;

	static jni::ref<java::lang::String> REPORT_KEY_IDENTIFIER() { return get_static_field<"REPORT_KEY_IDENTIFIER", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> REPORT_KEY_STREAMRESULT() { return get_static_field<"REPORT_KEY_STREAMRESULT", jni::ref<java::lang::String>>(); }

	static jni::ref<android::app::Instrumentation> new_object() { return base_::new_object(); }
	void onCreate(jni::ref<android::os::Bundle> arguments) { return call_method<"onCreate", void>(arguments); }
	void start() { return call_method<"start", void>(); }
	void onStart() { return call_method<"onStart", void>(); }
	jboolean onException(jni::ref<java::lang::Object> obj, jni::ref<java::lang::Throwable> e) { return call_method<"onException", jboolean>(obj, e); }
	void sendStatus(jint resultCode, jni::ref<android::os::Bundle> results) { return call_method<"sendStatus", void>(resultCode, results); }
	void addResults(jni::ref<android::os::Bundle> results) { return call_method<"addResults", void>(results); }
	void finish(jint resultCode, jni::ref<android::os::Bundle> results) { return call_method<"finish", void>(resultCode, results); }
	void setAutomaticPerformanceSnapshots() { return call_method<"setAutomaticPerformanceSnapshots", void>(); }
	void startPerformanceSnapshot() { return call_method<"startPerformanceSnapshot", void>(); }
	void endPerformanceSnapshot() { return call_method<"endPerformanceSnapshot", void>(); }
	void onDestroy() { return call_method<"onDestroy", void>(); }
	jni::ref<android::content::Context> getContext() { return call_method<"getContext", jni::ref<android::content::Context>>(); }
	jni::ref<android::content::ComponentName> getComponentName() { return call_method<"getComponentName", jni::ref<android::content::ComponentName>>(); }
	jni::ref<android::content::Context> getTargetContext() { return call_method<"getTargetContext", jni::ref<android::content::Context>>(); }
	jni::ref<java::lang::String> getProcessName() { return call_method<"getProcessName", jni::ref<java::lang::String>>(); }
	jboolean isProfiling() { return call_method<"isProfiling", jboolean>(); }
	void startProfiling() { return call_method<"startProfiling", void>(); }
	void stopProfiling() { return call_method<"stopProfiling", void>(); }
	void setInTouchMode(jboolean inTouch) { return call_method<"setInTouchMode", void>(inTouch); }
	void resetInTouchMode() { return call_method<"resetInTouchMode", void>(); }
	void waitForIdle(jni::ref<java::lang::Runnable> recipient) { return call_method<"waitForIdle", void>(recipient); }
	void waitForIdleSync() { return call_method<"waitForIdleSync", void>(); }
	void runOnMainSync(jni::ref<java::lang::Runnable> runner) { return call_method<"runOnMainSync", void>(runner); }
	jni::ref<android::app::Activity> startActivitySync(jni::ref<android::content::Intent> intent) { return call_method<"startActivitySync", jni::ref<android::app::Activity>>(intent); }
	jni::ref<android::app::Activity> startActivitySync(jni::ref<android::content::Intent> intent, jni::ref<android::os::Bundle> options) { return call_method<"startActivitySync", jni::ref<android::app::Activity>>(intent, options); }
	void addMonitor(jni::ref<android::app::Instrumentation_ActivityMonitor> monitor) { return call_method<"addMonitor", void>(monitor); }
	jni::ref<android::app::Instrumentation_ActivityMonitor> addMonitor(jni::ref<android::content::IntentFilter> filter, jni::ref<android::app::Instrumentation_ActivityResult> result, jboolean block) { return call_method<"addMonitor", jni::ref<android::app::Instrumentation_ActivityMonitor>>(filter, result, block); }
	jni::ref<android::app::Instrumentation_ActivityMonitor> addMonitor(jni::ref<java::lang::String> cls, jni::ref<android::app::Instrumentation_ActivityResult> result, jboolean block) { return call_method<"addMonitor", jni::ref<android::app::Instrumentation_ActivityMonitor>>(cls, result, block); }
	jboolean checkMonitorHit(jni::ref<android::app::Instrumentation_ActivityMonitor> monitor, jint minHits) { return call_method<"checkMonitorHit", jboolean>(monitor, minHits); }
	jni::ref<android::app::Activity> waitForMonitor(jni::ref<android::app::Instrumentation_ActivityMonitor> monitor) { return call_method<"waitForMonitor", jni::ref<android::app::Activity>>(monitor); }
	jni::ref<android::app::Activity> waitForMonitorWithTimeout(jni::ref<android::app::Instrumentation_ActivityMonitor> monitor, jlong timeOut) { return call_method<"waitForMonitorWithTimeout", jni::ref<android::app::Activity>>(monitor, timeOut); }
	void removeMonitor(jni::ref<android::app::Instrumentation_ActivityMonitor> monitor) { return call_method<"removeMonitor", void>(monitor); }
	jboolean invokeMenuActionSync(jni::ref<android::app::Activity> targetActivity, jint id, jint flag) { return call_method<"invokeMenuActionSync", jboolean>(targetActivity, id, flag); }
	jboolean invokeContextMenuAction(jni::ref<android::app::Activity> targetActivity, jint id, jint flag) { return call_method<"invokeContextMenuAction", jboolean>(targetActivity, id, flag); }
	void sendStringSync(jni::ref<java::lang::String> text) { return call_method<"sendStringSync", void>(text); }
	void sendKeySync(jni::ref<android::view::KeyEvent> event) { return call_method<"sendKeySync", void>(event); }
	void sendKeyDownUpSync(jint keyCode) { return call_method<"sendKeyDownUpSync", void>(keyCode); }
	void sendCharacterSync(jint keyCode) { return call_method<"sendCharacterSync", void>(keyCode); }
	void sendPointerSync(jni::ref<android::view::MotionEvent> event) { return call_method<"sendPointerSync", void>(event); }
	void sendTrackballEventSync(jni::ref<android::view::MotionEvent> event) { return call_method<"sendTrackballEventSync", void>(event); }
	jni::ref<android::app::Application> newApplication(jni::ref<java::lang::ClassLoader> cl, jni::ref<java::lang::String> className, jni::ref<android::content::Context> context) { return call_method<"newApplication", jni::ref<android::app::Application>>(cl, className, context); }
	static jni::ref<android::app::Application> newApplication(jni::ref<java::lang::Class> clazz, jni::ref<android::content::Context> context) { return call_static_method<"newApplication", jni::ref<android::app::Application>>(clazz, context); }
	void callApplicationOnCreate(jni::ref<android::app::Application> app) { return call_method<"callApplicationOnCreate", void>(app); }
	jni::ref<android::app::Activity> newActivity(jni::ref<java::lang::Class> clazz, jni::ref<android::content::Context> context, jni::ref<android::os::IBinder> token, jni::ref<android::app::Application> application, jni::ref<android::content::Intent> intent, jni::ref<android::content::pm::ActivityInfo> info, jni::ref<java::lang::CharSequence> title, jni::ref<android::app::Activity> parent, jni::ref<java::lang::String> id, jni::ref<java::lang::Object> lastNonConfigurationInstance) { return call_method<"newActivity", jni::ref<android::app::Activity>>(clazz, context, token, application, intent, info, title, parent, id, lastNonConfigurationInstance); }
	jni::ref<android::app::Activity> newActivity(jni::ref<java::lang::ClassLoader> cl, jni::ref<java::lang::String> className, jni::ref<android::content::Intent> intent) { return call_method<"newActivity", jni::ref<android::app::Activity>>(cl, className, intent); }
	void callActivityOnCreate(jni::ref<android::app::Activity> activity, jni::ref<android::os::Bundle> icicle) { return call_method<"callActivityOnCreate", void>(activity, icicle); }
	void callActivityOnCreate(jni::ref<android::app::Activity> activity, jni::ref<android::os::Bundle> icicle, jni::ref<android::os::PersistableBundle> persistentState) { return call_method<"callActivityOnCreate", void>(activity, icicle, persistentState); }
	void callActivityOnDestroy(jni::ref<android::app::Activity> activity) { return call_method<"callActivityOnDestroy", void>(activity); }
	void callActivityOnRestoreInstanceState(jni::ref<android::app::Activity> activity, jni::ref<android::os::Bundle> savedInstanceState) { return call_method<"callActivityOnRestoreInstanceState", void>(activity, savedInstanceState); }
	void callActivityOnRestoreInstanceState(jni::ref<android::app::Activity> activity, jni::ref<android::os::Bundle> savedInstanceState, jni::ref<android::os::PersistableBundle> persistentState) { return call_method<"callActivityOnRestoreInstanceState", void>(activity, savedInstanceState, persistentState); }
	void callActivityOnPostCreate(jni::ref<android::app::Activity> activity, jni::ref<android::os::Bundle> savedInstanceState) { return call_method<"callActivityOnPostCreate", void>(activity, savedInstanceState); }
	void callActivityOnPostCreate(jni::ref<android::app::Activity> activity, jni::ref<android::os::Bundle> savedInstanceState, jni::ref<android::os::PersistableBundle> persistentState) { return call_method<"callActivityOnPostCreate", void>(activity, savedInstanceState, persistentState); }
	void callActivityOnNewIntent(jni::ref<android::app::Activity> activity, jni::ref<android::content::Intent> intent) { return call_method<"callActivityOnNewIntent", void>(activity, intent); }
	void callActivityOnStart(jni::ref<android::app::Activity> activity) { return call_method<"callActivityOnStart", void>(activity); }
	void callActivityOnRestart(jni::ref<android::app::Activity> activity) { return call_method<"callActivityOnRestart", void>(activity); }
	void callActivityOnResume(jni::ref<android::app::Activity> activity) { return call_method<"callActivityOnResume", void>(activity); }
	void callActivityOnStop(jni::ref<android::app::Activity> activity) { return call_method<"callActivityOnStop", void>(activity); }
	void callActivityOnSaveInstanceState(jni::ref<android::app::Activity> activity, jni::ref<android::os::Bundle> outState) { return call_method<"callActivityOnSaveInstanceState", void>(activity, outState); }
	void callActivityOnSaveInstanceState(jni::ref<android::app::Activity> activity, jni::ref<android::os::Bundle> outState, jni::ref<android::os::PersistableBundle> outPersistentState) { return call_method<"callActivityOnSaveInstanceState", void>(activity, outState, outPersistentState); }
	void callActivityOnPause(jni::ref<android::app::Activity> activity) { return call_method<"callActivityOnPause", void>(activity); }
	void callActivityOnUserLeaving(jni::ref<android::app::Activity> activity) { return call_method<"callActivityOnUserLeaving", void>(activity); }
	void callActivityOnPictureInPictureRequested(jni::ref<android::app::Activity> activity) { return call_method<"callActivityOnPictureInPictureRequested", void>(activity); }
	void startAllocCounting() { return call_method<"startAllocCounting", void>(); }
	void stopAllocCounting() { return call_method<"stopAllocCounting", void>(); }
	jni::ref<android::os::Bundle> getAllocCounts() { return call_method<"getAllocCounts", jni::ref<android::os::Bundle>>(); }
	jni::ref<android::os::Bundle> getBinderCounts() { return call_method<"getBinderCounts", jni::ref<android::os::Bundle>>(); }
	jni::ref<android::app::UiAutomation> getUiAutomation() { return call_method<"getUiAutomation", jni::ref<android::app::UiAutomation>>(); }
	jni::ref<android::app::UiAutomation> getUiAutomation(jint flags) { return call_method<"getUiAutomation", jni::ref<android::app::UiAutomation>>(flags); }
	jni::ref<android::os::TestLooperManager> acquireLooperManager(jni::ref<android::os::Looper> looper) { return call_method<"acquireLooperManager", jni::ref<android::os::TestLooperManager>>(looper); }

protected:

	Instrumentation(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_INSTRUMENTATION
