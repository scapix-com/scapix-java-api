// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_PROVIDER_ALARMCLOCK_FWD
#define SCAPIX_JAVA_API_ANDROID_PROVIDER_ALARMCLOCK_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::provider { class AlarmClock; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::provider::AlarmClock>
{
	static constexpr fixed_string class_name = "android/provider/AlarmClock";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PROVIDER_ALARMCLOCK_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_PROVIDER_ALARMCLOCK)
#define SCAPIX_JAVA_API_ANDROID_PROVIDER_ALARMCLOCK

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::provider::AlarmClock : public jni::object_base<"android/provider/AlarmClock",
	java::lang::Object>
{
public:

	static jni::ref<java::lang::String> ACTION_DISMISS_ALARM() { return get_static_field<"ACTION_DISMISS_ALARM", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ACTION_SET_ALARM() { return get_static_field<"ACTION_SET_ALARM", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ACTION_SET_TIMER() { return get_static_field<"ACTION_SET_TIMER", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ACTION_SHOW_ALARMS() { return get_static_field<"ACTION_SHOW_ALARMS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ACTION_SHOW_TIMERS() { return get_static_field<"ACTION_SHOW_TIMERS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ACTION_SNOOZE_ALARM() { return get_static_field<"ACTION_SNOOZE_ALARM", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ALARM_SEARCH_MODE_ALL() { return get_static_field<"ALARM_SEARCH_MODE_ALL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ALARM_SEARCH_MODE_LABEL() { return get_static_field<"ALARM_SEARCH_MODE_LABEL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ALARM_SEARCH_MODE_NEXT() { return get_static_field<"ALARM_SEARCH_MODE_NEXT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ALARM_SEARCH_MODE_TIME() { return get_static_field<"ALARM_SEARCH_MODE_TIME", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_ALARM_SEARCH_MODE() { return get_static_field<"EXTRA_ALARM_SEARCH_MODE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_ALARM_SNOOZE_DURATION() { return get_static_field<"EXTRA_ALARM_SNOOZE_DURATION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_DAYS() { return get_static_field<"EXTRA_DAYS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_HOUR() { return get_static_field<"EXTRA_HOUR", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_IS_PM() { return get_static_field<"EXTRA_IS_PM", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_LENGTH() { return get_static_field<"EXTRA_LENGTH", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_MESSAGE() { return get_static_field<"EXTRA_MESSAGE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_MINUTES() { return get_static_field<"EXTRA_MINUTES", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_RINGTONE() { return get_static_field<"EXTRA_RINGTONE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_SKIP_UI() { return get_static_field<"EXTRA_SKIP_UI", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_VIBRATE() { return get_static_field<"EXTRA_VIBRATE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> VALUE_RINGTONE_SILENT() { return get_static_field<"VALUE_RINGTONE_SILENT", jni::ref<java::lang::String>>(); }

	static jni::ref<android::provider::AlarmClock> new_object() { return base_::new_object(); }

protected:

	AlarmClock(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PROVIDER_ALARMCLOCK