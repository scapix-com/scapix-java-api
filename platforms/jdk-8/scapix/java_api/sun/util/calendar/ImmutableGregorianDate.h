// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/util/calendar/BaseCalendar_Date.h>

#ifndef SCAPIX_JAVA_API_SUN_UTIL_CALENDAR_IMMUTABLEGREGORIANDATE_FWD
#define SCAPIX_JAVA_API_SUN_UTIL_CALENDAR_IMMUTABLEGREGORIANDATE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::util::calendar { class ImmutableGregorianDate; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::util::calendar::ImmutableGregorianDate>
{
	static constexpr fixed_string class_name = "sun/util/calendar/ImmutableGregorianDate";
	using base_classes = std::tuple<scapix::java_api::sun::util::calendar::BaseCalendar_Date>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_UTIL_CALENDAR_IMMUTABLEGREGORIANDATE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_UTIL_CALENDAR_IMMUTABLEGREGORIANDATE)
#define SCAPIX_JAVA_API_SUN_UTIL_CALENDAR_IMMUTABLEGREGORIANDATE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/TimeZone.h>
#include <scapix/java_api/sun/util/calendar/CalendarDate.h>
#include <scapix/java_api/sun/util/calendar/Era.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::util::calendar::ImmutableGregorianDate : public jni::object_base<"sun/util/calendar/ImmutableGregorianDate",
	sun::util::calendar::BaseCalendar_Date>
{
public:

	jni::ref<sun::util::calendar::Era> getEra() { return call_method<"getEra", jni::ref<sun::util::calendar::Era>>(); }
	jni::ref<sun::util::calendar::CalendarDate> setEra(jni::ref<sun::util::calendar::Era> p1) { return call_method<"setEra", jni::ref<sun::util::calendar::CalendarDate>>(p1); }
	jint getYear() { return call_method<"getYear", jint>(); }
	jni::ref<sun::util::calendar::CalendarDate> setYear(jint p1) { return call_method<"setYear", jni::ref<sun::util::calendar::CalendarDate>>(p1); }
	jni::ref<sun::util::calendar::CalendarDate> addYear(jint p1) { return call_method<"addYear", jni::ref<sun::util::calendar::CalendarDate>>(p1); }
	jboolean isLeapYear() { return call_method<"isLeapYear", jboolean>(); }
	jint getMonth() { return call_method<"getMonth", jint>(); }
	jni::ref<sun::util::calendar::CalendarDate> setMonth(jint p1) { return call_method<"setMonth", jni::ref<sun::util::calendar::CalendarDate>>(p1); }
	jni::ref<sun::util::calendar::CalendarDate> addMonth(jint p1) { return call_method<"addMonth", jni::ref<sun::util::calendar::CalendarDate>>(p1); }
	jint getDayOfMonth() { return call_method<"getDayOfMonth", jint>(); }
	jni::ref<sun::util::calendar::CalendarDate> setDayOfMonth(jint p1) { return call_method<"setDayOfMonth", jni::ref<sun::util::calendar::CalendarDate>>(p1); }
	jni::ref<sun::util::calendar::CalendarDate> addDayOfMonth(jint p1) { return call_method<"addDayOfMonth", jni::ref<sun::util::calendar::CalendarDate>>(p1); }
	jint getDayOfWeek() { return call_method<"getDayOfWeek", jint>(); }
	jint getHours() { return call_method<"getHours", jint>(); }
	jni::ref<sun::util::calendar::CalendarDate> setHours(jint p1) { return call_method<"setHours", jni::ref<sun::util::calendar::CalendarDate>>(p1); }
	jni::ref<sun::util::calendar::CalendarDate> addHours(jint p1) { return call_method<"addHours", jni::ref<sun::util::calendar::CalendarDate>>(p1); }
	jint getMinutes() { return call_method<"getMinutes", jint>(); }
	jni::ref<sun::util::calendar::CalendarDate> setMinutes(jint p1) { return call_method<"setMinutes", jni::ref<sun::util::calendar::CalendarDate>>(p1); }
	jni::ref<sun::util::calendar::CalendarDate> addMinutes(jint p1) { return call_method<"addMinutes", jni::ref<sun::util::calendar::CalendarDate>>(p1); }
	jint getSeconds() { return call_method<"getSeconds", jint>(); }
	jni::ref<sun::util::calendar::CalendarDate> setSeconds(jint p1) { return call_method<"setSeconds", jni::ref<sun::util::calendar::CalendarDate>>(p1); }
	jni::ref<sun::util::calendar::CalendarDate> addSeconds(jint p1) { return call_method<"addSeconds", jni::ref<sun::util::calendar::CalendarDate>>(p1); }
	jint getMillis() { return call_method<"getMillis", jint>(); }
	jni::ref<sun::util::calendar::CalendarDate> setMillis(jint p1) { return call_method<"setMillis", jni::ref<sun::util::calendar::CalendarDate>>(p1); }
	jni::ref<sun::util::calendar::CalendarDate> addMillis(jint p1) { return call_method<"addMillis", jni::ref<sun::util::calendar::CalendarDate>>(p1); }
	jlong getTimeOfDay() { return call_method<"getTimeOfDay", jlong>(); }
	jni::ref<sun::util::calendar::CalendarDate> setDate(jint p1, jint p2, jint p3) { return call_method<"setDate", jni::ref<sun::util::calendar::CalendarDate>>(p1, p2, p3); }
	jni::ref<sun::util::calendar::CalendarDate> addDate(jint p1, jint p2, jint p3) { return call_method<"addDate", jni::ref<sun::util::calendar::CalendarDate>>(p1, p2, p3); }
	jni::ref<sun::util::calendar::CalendarDate> setTimeOfDay(jint p1, jint p2, jint p3, jint p4) { return call_method<"setTimeOfDay", jni::ref<sun::util::calendar::CalendarDate>>(p1, p2, p3, p4); }
	jni::ref<sun::util::calendar::CalendarDate> addTimeOfDay(jint p1, jint p2, jint p3, jint p4) { return call_method<"addTimeOfDay", jni::ref<sun::util::calendar::CalendarDate>>(p1, p2, p3, p4); }
	jboolean isNormalized() { return call_method<"isNormalized", jboolean>(); }
	jboolean isStandardTime() { return call_method<"isStandardTime", jboolean>(); }
	void setStandardTime(jboolean p1) { return call_method<"setStandardTime", void>(p1); }
	jboolean isDaylightTime() { return call_method<"isDaylightTime", jboolean>(); }
	jni::ref<java::util::TimeZone> getZone() { return call_method<"getZone", jni::ref<java::util::TimeZone>>(); }
	jni::ref<sun::util::calendar::CalendarDate> setZone(jni::ref<java::util::TimeZone> p1) { return call_method<"setZone", jni::ref<sun::util::calendar::CalendarDate>>(p1); }
	jboolean isSameDate(jni::ref<sun::util::calendar::CalendarDate> p1) { return call_method<"isSameDate", jboolean>(p1); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::Object> clone() { return call_method<"clone", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jint getZoneOffset() { return call_method<"getZoneOffset", jint>(); }
	jint getDaylightSaving() { return call_method<"getDaylightSaving", jint>(); }
	jint getNormalizedYear() { return call_method<"getNormalizedYear", jint>(); }
	void setNormalizedYear(jint p1) { return call_method<"setNormalizedYear", void>(p1); }

protected:

	ImmutableGregorianDate(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_UTIL_CALENDAR_IMMUTABLEGREGORIANDATE
