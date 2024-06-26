// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/util/calendar/CalendarDate.h>

#ifndef SCAPIX_JAVA_API_SUN_UTIL_CALENDAR_BASECALENDAR_DATE_FWD
#define SCAPIX_JAVA_API_SUN_UTIL_CALENDAR_BASECALENDAR_DATE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::util::calendar { class BaseCalendar_Date; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::util::calendar::BaseCalendar_Date>
{
	static constexpr fixed_string class_name = "sun/util/calendar/BaseCalendar$Date";
	using base_classes = std::tuple<scapix::java_api::sun::util::calendar::CalendarDate>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_UTIL_CALENDAR_BASECALENDAR_DATE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_UTIL_CALENDAR_BASECALENDAR_DATE)
#define SCAPIX_JAVA_API_SUN_UTIL_CALENDAR_BASECALENDAR_DATE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::util::calendar::BaseCalendar_Date : public jni::object_base<"sun/util/calendar/BaseCalendar$Date",
	sun::util::calendar::CalendarDate>
{
public:

	jni::ref<sun::util::calendar::BaseCalendar_Date> setNormalizedDate(jint p1, jint p2, jint p3) { return call_method<"setNormalizedDate", jni::ref<sun::util::calendar::BaseCalendar_Date>>(p1, p2, p3); }
	jint getNormalizedYear() { return call_method<"getNormalizedYear", jint>(); }
	void setNormalizedYear(jint p1) { return call_method<"setNormalizedYear", void>(p1); }

protected:

	BaseCalendar_Date(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_UTIL_CALENDAR_BASECALENDAR_DATE
