// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/content/ContextWrapper.h>
#include <scapix/java_api/android/content/ComponentCallbacks2.h>

#ifndef SCAPIX_JAVA_API_ANDROID_APP_APPLICATION_FWD
#define SCAPIX_JAVA_API_ANDROID_APP_APPLICATION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::app { class Application; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::app::Application>
{
	static constexpr fixed_string class_name = "android/app/Application";
	using base_classes = std::tuple<scapix::java_api::android::content::ContextWrapper, scapix::java_api::android::content::ComponentCallbacks2>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_APPLICATION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_APP_APPLICATION)
#define SCAPIX_JAVA_API_ANDROID_APP_APPLICATION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/app/Application_ActivityLifecycleCallbacks.h>
#include <scapix/java_api/android/app/Application_OnProvideAssistDataListener.h>
#include <scapix/java_api/android/content/ComponentCallbacks.h>
#include <scapix/java_api/android/content/res/Configuration.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::app::Application : public jni::object_base<"android/app/Application",
	android::content::ContextWrapper,
	android::content::ComponentCallbacks2>
{
public:

	using OnProvideAssistDataListener = Application_OnProvideAssistDataListener;
	using ActivityLifecycleCallbacks = Application_ActivityLifecycleCallbacks;

	static jni::ref<android::app::Application> new_object() { return base_::new_object(); }
	void onCreate() { return call_method<"onCreate", void>(); }
	void onTerminate() { return call_method<"onTerminate", void>(); }
	void onConfigurationChanged(jni::ref<android::content::res::Configuration> newConfig) { return call_method<"onConfigurationChanged", void>(newConfig); }
	void onLowMemory() { return call_method<"onLowMemory", void>(); }
	void onTrimMemory(jint level) { return call_method<"onTrimMemory", void>(level); }
	void registerComponentCallbacks(jni::ref<android::content::ComponentCallbacks> callback) { return call_method<"registerComponentCallbacks", void>(callback); }
	void unregisterComponentCallbacks(jni::ref<android::content::ComponentCallbacks> callback) { return call_method<"unregisterComponentCallbacks", void>(callback); }
	void registerActivityLifecycleCallbacks(jni::ref<android::app::Application_ActivityLifecycleCallbacks> callback) { return call_method<"registerActivityLifecycleCallbacks", void>(callback); }
	void unregisterActivityLifecycleCallbacks(jni::ref<android::app::Application_ActivityLifecycleCallbacks> callback) { return call_method<"unregisterActivityLifecycleCallbacks", void>(callback); }
	void registerOnProvideAssistDataListener(jni::ref<android::app::Application_OnProvideAssistDataListener> callback) { return call_method<"registerOnProvideAssistDataListener", void>(callback); }
	void unregisterOnProvideAssistDataListener(jni::ref<android::app::Application_OnProvideAssistDataListener> callback) { return call_method<"unregisterOnProvideAssistDataListener", void>(callback); }

protected:

	Application(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_APPLICATION
