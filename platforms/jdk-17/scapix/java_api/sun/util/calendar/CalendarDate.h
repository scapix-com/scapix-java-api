// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/Cloneable.h>

#ifndef SCAPIX_JAVA_API_SUN_UTIL_CALENDAR_CALENDARDATE_FWD
#define SCAPIX_JAVA_API_SUN_UTIL_CALENDAR_CALENDARDATE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::util::calendar { class CalendarDate; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::util::calendar::CalendarDate>
{
	static constexpr fixed_string class_name = "sun/util/calendar/CalendarDate";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::Cloneable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_UTIL_CALENDAR_CALENDARDATE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_UTIL_CALENDAR_CALENDARDATE)
#define SCAPIX_JAVA_API_SUN_UTIL_CALENDAR_CALENDARDATE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/TimeZone.h>
#include <scapix/java_api/sun/util/calendar/Era.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::util::calendar::CalendarDate : public jni::object_base<"sun/util/calendar/CalendarDate",
	java::lang::Object,
	java::lang::Cloneable>
{
public:

	static jint FIELD_UNDEFINED() { return get_static_field<"FIELD_UNDEFINED", jint>(); }
	static jlong TIME_UNDEFINED() { return get_static_field<"TIME_UNDEFINED", jlong>(); }

	jni::ref<sun::util::calendar::Era> getEra() { return call_method<"getEra", jni::ref<sun::util::calendar::Era>>(); }
	jni::ref<sun::util::calendar::CalendarDate> setEra(jni::ref<sun::util::calendar::Era> era) { return call_method<"setEra", jni::ref<sun::util::calendar::CalendarDate>>(era); }
	jint getYear() { return call_method<"getYear", jint>(); }
	jni::ref<sun::util::calendar::CalendarDate> setYear(jint year) { return call_method<"setYear", jni::ref<sun::util::calendar::CalendarDate>>(year); }
	jni::ref<sun::util::calendar::CalendarDate> addYear(jint n) { return call_method<"addYear", jni::ref<sun::util::calendar::CalendarDate>>(n); }
	jboolean isLeapYear() { return call_method<"isLeapYear", jboolean>(); }
	jint getMonth() { return call_method<"getMonth", jint>(); }
	jni::ref<sun::util::calendar::CalendarDate> setMonth(jint month) { return call_method<"setMonth", jni::ref<sun::util::calendar::CalendarDate>>(month); }
	jni::ref<sun::util::calendar::CalendarDate> addMonth(jint n) { return call_method<"addMonth", jni::ref<sun::util::calendar::CalendarDate>>(n); }
	jint getDayOfMonth() { return call_method<"getDayOfMonth", jint>(); }
	jni::ref<sun::util::calendar::CalendarDate> setDayOfMonth(jint date) { return call_method<"setDayOfMonth", jni::ref<sun::util::calendar::CalendarDate>>(date); }
	jni::ref<sun::util::calendar::CalendarDate> addDayOfMonth(jint n) { return call_method<"addDayOfMonth", jni::ref<sun::util::calendar::CalendarDate>>(n); }
	jint getDayOfWeek() { return call_method<"getDayOfWeek", jint>(); }
	jint getHours() { return call_method<"getHours", jint>(); }
	jni::ref<sun::util::calendar::CalendarDate> setHours(jint hours) { return call_method<"setHours", jni::ref<sun::util::calendar::CalendarDate>>(hours); }
	jni::ref<sun::util::calendar::CalendarDate> addHours(jint n) { return call_method<"addHours", jni::ref<sun::util::calendar::CalendarDate>>(n); }
	jint getMinutes() { return call_method<"getMinutes", jint>(); }
	jni::ref<sun::util::calendar::CalendarDate> setMinutes(jint minutes) { return call_method<"setMinutes", jni::ref<sun::util::calendar::CalendarDate>>(minutes); }
	jni::ref<sun::util::calendar::CalendarDate> addMinutes(jint n) { return call_method<"addMinutes", jni::ref<sun::util::calendar::CalendarDate>>(n); }
	jint getSeconds() { return call_method<"getSeconds", jint>(); }
	jni::ref<sun::util::calendar::CalendarDate> setSeconds(jint seconds) { return call_method<"setSeconds", jni::ref<sun::util::calendar::CalendarDate>>(seconds); }
	jni::ref<sun::util::calendar::CalendarDate> addSeconds(jint n) { return call_method<"addSeconds", jni::ref<sun::util::calendar::CalendarDate>>(n); }
	jint getMillis() { return call_method<"getMillis", jint>(); }
	jni::ref<sun::util::calendar::CalendarDate> setMillis(jint millis) { return call_method<"setMillis", jni::ref<sun::util::calendar::CalendarDate>>(millis); }
	jni::ref<sun::util::calendar::CalendarDate> addMillis(jint n) { return call_method<"addMillis", jni::ref<sun::util::calendar::CalendarDate>>(n); }
	jlong getTimeOfDay() { return call_method<"getTimeOfDay", jlong>(); }
	jni::ref<sun::util::calendar::CalendarDate> setDate(jint year, jint month, jint dayOfMonth) { return call_method<"setDate", jni::ref<sun::util::calendar::CalendarDate>>(year, month, dayOfMonth); }
	jni::ref<sun::util::calendar::CalendarDate> addDate(jint year, jint month, jint dayOfMonth) { return call_method<"addDate", jni::ref<sun::util::calendar::CalendarDate>>(year, month, dayOfMonth); }
	jni::ref<sun::util::calendar::CalendarDate> setTimeOfDay(jint hours, jint minutes, jint seconds, jint millis) { return call_method<"setTimeOfDay", jni::ref<sun::util::calendar::CalendarDate>>(hours, minutes, seconds, millis); }
	jni::ref<sun::util::calendar::CalendarDate> addTimeOfDay(jint hours, jint minutes, jint seconds, jint millis) { return call_method<"addTimeOfDay", jni::ref<sun::util::calendar::CalendarDate>>(hours, minutes, seconds, millis); }
	jboolean isNormalized() { return call_method<"isNormalized", jboolean>(); }
	jboolean isStandardTime() { return call_method<"isStandardTime", jboolean>(); }
	void setStandardTime(jboolean standardTime) { return call_method<"setStandardTime", void>(standardTime); }
	jboolean isDaylightTime() { return call_method<"isDaylightTime", jboolean>(); }
	jni::ref<java::util::TimeZone> getZone() { return call_method<"getZone", jni::ref<java::util::TimeZone>>(); }
	jni::ref<sun::util::calendar::CalendarDate> setZone(jni::ref<java::util::TimeZone> zoneinfo) { return call_method<"setZone", jni::ref<sun::util::calendar::CalendarDate>>(zoneinfo); }
	jboolean isSameDate(jni::ref<sun::util::calendar::CalendarDate> date) { return call_method<"isSameDate", jboolean>(date); }
	jboolean equals(jni::ref<java::lang::Object> obj) { return call_method<"equals", jboolean>(obj); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::Object> clone() { return call_method<"clone", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jint getZoneOffset() { return call_method<"getZoneOffset", jint>(); }
	jint getDaylightSaving() { return call_method<"getDaylightSaving", jint>(); }

protected:

	CalendarDate(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_UTIL_CALENDAR_CALENDARDATE
