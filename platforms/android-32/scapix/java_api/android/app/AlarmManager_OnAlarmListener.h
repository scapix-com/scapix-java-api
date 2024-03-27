// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_APP_ALARMMANAGER_ONALARMLISTENER_FWD
#define SCAPIX_JAVA_API_ANDROID_APP_ALARMMANAGER_ONALARMLISTENER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::app { class AlarmManager_OnAlarmListener; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::app::AlarmManager_OnAlarmListener>
{
	static constexpr fixed_string class_name = "android/app/AlarmManager$OnAlarmListener";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_ALARMMANAGER_ONALARMLISTENER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_APP_ALARMMANAGER_ONALARMLISTENER)
#define SCAPIX_JAVA_API_ANDROID_APP_ALARMMANAGER_ONALARMLISTENER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::app::AlarmManager_OnAlarmListener : public jni::object_base<"android/app/AlarmManager$OnAlarmListener",
	java::lang::Object>
{
public:

	void onAlarm() { return call_method<"onAlarm", void>(); }

protected:

	AlarmManager_OnAlarmListener(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_ALARMMANAGER_ONALARMLISTENER
