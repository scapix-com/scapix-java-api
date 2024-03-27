// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_APP_INSTRUMENTATION_ACTIVITYMONITOR_FWD
#define SCAPIX_JAVA_API_ANDROID_APP_INSTRUMENTATION_ACTIVITYMONITOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::app { class Instrumentation_ActivityMonitor; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::app::Instrumentation_ActivityMonitor>
{
	static constexpr fixed_string class_name = "android/app/Instrumentation$ActivityMonitor";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_INSTRUMENTATION_ACTIVITYMONITOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_APP_INSTRUMENTATION_ACTIVITYMONITOR)
#define SCAPIX_JAVA_API_ANDROID_APP_INSTRUMENTATION_ACTIVITYMONITOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/app/Activity.h>
#include <scapix/java_api/android/app/Instrumentation_ActivityResult.h>
#include <scapix/java_api/android/content/Intent.h>
#include <scapix/java_api/android/content/IntentFilter.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::app::Instrumentation_ActivityMonitor : public jni::object_base<"android/app/Instrumentation$ActivityMonitor",
	java::lang::Object>
{
public:

	static jni::ref<android::app::Instrumentation_ActivityMonitor> new_object(jni::ref<android::content::IntentFilter> which, jni::ref<android::app::Instrumentation_ActivityResult> result, jboolean block) { return base_::new_object(which, result, block); }
	static jni::ref<android::app::Instrumentation_ActivityMonitor> new_object(jni::ref<java::lang::String> cls, jni::ref<android::app::Instrumentation_ActivityResult> result, jboolean block) { return base_::new_object(cls, result, block); }
	static jni::ref<android::app::Instrumentation_ActivityMonitor> new_object() { return base_::new_object(); }
	jni::ref<android::content::IntentFilter> getFilter() { return call_method<"getFilter", jni::ref<android::content::IntentFilter>>(); }
	jni::ref<android::app::Instrumentation_ActivityResult> getResult() { return call_method<"getResult", jni::ref<android::app::Instrumentation_ActivityResult>>(); }
	jboolean isBlocking() { return call_method<"isBlocking", jboolean>(); }
	jint getHits() { return call_method<"getHits", jint>(); }
	jni::ref<android::app::Activity> getLastActivity() { return call_method<"getLastActivity", jni::ref<android::app::Activity>>(); }
	jni::ref<android::app::Activity> waitForActivity() { return call_method<"waitForActivity", jni::ref<android::app::Activity>>(); }
	jni::ref<android::app::Activity> waitForActivityWithTimeout(jlong timeOut) { return call_method<"waitForActivityWithTimeout", jni::ref<android::app::Activity>>(timeOut); }
	jni::ref<android::app::Instrumentation_ActivityResult> onStartActivity(jni::ref<android::content::Intent> intent) { return call_method<"onStartActivity", jni::ref<android::app::Instrumentation_ActivityResult>>(intent); }

protected:

	Instrumentation_ActivityMonitor(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_INSTRUMENTATION_ACTIVITYMONITOR
