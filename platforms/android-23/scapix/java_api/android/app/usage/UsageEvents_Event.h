// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_APP_USAGE_USAGEEVENTS_EVENT_FWD
#define SCAPIX_JAVA_API_ANDROID_APP_USAGE_USAGEEVENTS_EVENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::app::usage { class UsageEvents_Event; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::app::usage::UsageEvents_Event>
{
	static constexpr fixed_string class_name = "android/app/usage/UsageEvents$Event";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_USAGE_USAGEEVENTS_EVENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_APP_USAGE_USAGEEVENTS_EVENT)
#define SCAPIX_JAVA_API_ANDROID_APP_USAGE_USAGEEVENTS_EVENT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/res/Configuration.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::app::usage::UsageEvents_Event : public jni::object_base<"android/app/usage/UsageEvents$Event",
	java::lang::Object>
{
public:

	static jint CONFIGURATION_CHANGE() { return get_static_field<"CONFIGURATION_CHANGE", jint>(); }
	static jint MOVE_TO_BACKGROUND() { return get_static_field<"MOVE_TO_BACKGROUND", jint>(); }
	static jint MOVE_TO_FOREGROUND() { return get_static_field<"MOVE_TO_FOREGROUND", jint>(); }
	static jint NONE() { return get_static_field<"NONE", jint>(); }
	static jint USER_INTERACTION() { return get_static_field<"USER_INTERACTION", jint>(); }

	static jni::ref<android::app::usage::UsageEvents_Event> new_object() { return base_::new_object(); }
	jni::ref<java::lang::String> getPackageName() { return call_method<"getPackageName", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getClassName() { return call_method<"getClassName", jni::ref<java::lang::String>>(); }
	jlong getTimeStamp() { return call_method<"getTimeStamp", jlong>(); }
	jint getEventType() { return call_method<"getEventType", jint>(); }
	jni::ref<android::content::res::Configuration> getConfiguration() { return call_method<"getConfiguration", jni::ref<android::content::res::Configuration>>(); }

protected:

	UsageEvents_Event(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_USAGE_USAGEEVENTS_EVENT