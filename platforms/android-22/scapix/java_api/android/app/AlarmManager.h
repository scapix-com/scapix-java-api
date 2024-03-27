// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_APP_ALARMMANAGER_FWD
#define SCAPIX_JAVA_API_ANDROID_APP_ALARMMANAGER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::app { class AlarmManager; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::app::AlarmManager>
{
	static constexpr fixed_string class_name = "android/app/AlarmManager";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_ALARMMANAGER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_APP_ALARMMANAGER)
#define SCAPIX_JAVA_API_ANDROID_APP_ALARMMANAGER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/app/AlarmManager_AlarmClockInfo.h>
#include <scapix/java_api/android/app/PendingIntent.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::app::AlarmManager : public jni::object_base<"android/app/AlarmManager",
	java::lang::Object>
{
public:

	using AlarmClockInfo = AlarmManager_AlarmClockInfo;

	static jni::ref<java::lang::String> ACTION_NEXT_ALARM_CLOCK_CHANGED() { return get_static_field<"ACTION_NEXT_ALARM_CLOCK_CHANGED", jni::ref<java::lang::String>>(); }
	static jint ELAPSED_REALTIME() { return get_static_field<"ELAPSED_REALTIME", jint>(); }
	static jint ELAPSED_REALTIME_WAKEUP() { return get_static_field<"ELAPSED_REALTIME_WAKEUP", jint>(); }
	static jlong INTERVAL_DAY() { return get_static_field<"INTERVAL_DAY", jlong>(); }
	static jlong INTERVAL_FIFTEEN_MINUTES() { return get_static_field<"INTERVAL_FIFTEEN_MINUTES", jlong>(); }
	static jlong INTERVAL_HALF_DAY() { return get_static_field<"INTERVAL_HALF_DAY", jlong>(); }
	static jlong INTERVAL_HALF_HOUR() { return get_static_field<"INTERVAL_HALF_HOUR", jlong>(); }
	static jlong INTERVAL_HOUR() { return get_static_field<"INTERVAL_HOUR", jlong>(); }
	static jint RTC() { return get_static_field<"RTC", jint>(); }
	static jint RTC_WAKEUP() { return get_static_field<"RTC_WAKEUP", jint>(); }

	void set(jint type, jlong triggerAtMillis, jni::ref<android::app::PendingIntent> p3) { return call_method<"set", void>(type, triggerAtMillis, p3); }
	void setRepeating(jint type, jlong triggerAtMillis, jlong p3, jni::ref<android::app::PendingIntent> intervalMillis) { return call_method<"setRepeating", void>(type, triggerAtMillis, p3, intervalMillis); }
	void setWindow(jint type, jlong windowStartMillis, jlong p3, jni::ref<android::app::PendingIntent> windowLengthMillis) { return call_method<"setWindow", void>(type, windowStartMillis, p3, windowLengthMillis); }
	void setExact(jint type, jlong triggerAtMillis, jni::ref<android::app::PendingIntent> p3) { return call_method<"setExact", void>(type, triggerAtMillis, p3); }
	void setAlarmClock(jni::ref<android::app::AlarmManager_AlarmClockInfo> info, jni::ref<android::app::PendingIntent> operation) { return call_method<"setAlarmClock", void>(info, operation); }
	void setInexactRepeating(jint type, jlong triggerAtMillis, jlong p3, jni::ref<android::app::PendingIntent> intervalMillis) { return call_method<"setInexactRepeating", void>(type, triggerAtMillis, p3, intervalMillis); }
	void cancel(jni::ref<android::app::PendingIntent> operation) { return call_method<"cancel", void>(operation); }
	void setTime(jlong millis) { return call_method<"setTime", void>(millis); }
	void setTimeZone(jni::ref<java::lang::String> timeZone) { return call_method<"setTimeZone", void>(timeZone); }
	jni::ref<android::app::AlarmManager_AlarmClockInfo> getNextAlarmClock() { return call_method<"getNextAlarmClock", jni::ref<android::app::AlarmManager_AlarmClockInfo>>(); }

protected:

	AlarmManager(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_ALARMMANAGER
