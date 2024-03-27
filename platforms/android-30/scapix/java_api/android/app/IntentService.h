// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/app/Service.h>

#ifndef SCAPIX_JAVA_API_ANDROID_APP_INTENTSERVICE_FWD
#define SCAPIX_JAVA_API_ANDROID_APP_INTENTSERVICE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::app { class IntentService; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::app::IntentService>
{
	static constexpr fixed_string class_name = "android/app/IntentService";
	using base_classes = std::tuple<scapix::java_api::android::app::Service>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_INTENTSERVICE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_APP_INTENTSERVICE)
#define SCAPIX_JAVA_API_ANDROID_APP_INTENTSERVICE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/Intent.h>
#include <scapix/java_api/android/os/IBinder.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::app::IntentService : public jni::object_base<"android/app/IntentService",
	android::app::Service>
{
public:

	static jni::ref<android::app::IntentService> new_object(jni::ref<java::lang::String> name) { return base_::new_object(name); }
	void setIntentRedelivery(jboolean enabled) { return call_method<"setIntentRedelivery", void>(enabled); }
	void onCreate() { return call_method<"onCreate", void>(); }
	void onStart(jni::ref<android::content::Intent> intent, jint startId) { return call_method<"onStart", void>(intent, startId); }
	jint onStartCommand(jni::ref<android::content::Intent> intent, jint flags, jint startId) { return call_method<"onStartCommand", jint>(intent, flags, startId); }
	void onDestroy() { return call_method<"onDestroy", void>(); }
	jni::ref<android::os::IBinder> onBind(jni::ref<android::content::Intent> intent) { return call_method<"onBind", jni::ref<android::os::IBinder>>(intent); }

protected:

	IntentService(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_INTENTSERVICE