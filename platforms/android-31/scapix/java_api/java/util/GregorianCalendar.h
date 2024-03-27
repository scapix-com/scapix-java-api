// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/Calendar.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_GREGORIANCALENDAR_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_GREGORIANCALENDAR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class GregorianCalendar; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::GregorianCalendar>
{
	static constexpr fixed_string class_name = "java/util/GregorianCalendar";
	using base_classes = std::tuple<scapix::java_api::java::util::Calendar>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_GREGORIANCALENDAR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_GREGORIANCALENDAR)
#define SCAPIX_JAVA_API_JAVA_UTIL_GREGORIANCALENDAR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/time/ZonedDateTime.h>
#include <scapix/java_api/java/util/Date.h>
#include <scapix/java_api/java/util/Locale.h>
#include <scapix/java_api/java/util/TimeZone.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::GregorianCalendar : public jni::object_base<"java/util/GregorianCalendar",
	java::util::Calendar>
{
public:

	static jint AD() { return get_static_field<"AD", jint>(); }
	static jint BC() { return get_static_field<"BC", jint>(); }

	static jni::ref<java::util::GregorianCalendar> new_object() { return base_::new_object(); }
	static jni::ref<java::util::GregorianCalendar> new_object(jni::ref<java::util::TimeZone> zone) { return base_::new_object(zone); }
	static jni::ref<java::util::GregorianCalendar> new_object(jni::ref<java::util::Locale> aLocale) { return base_::new_object(aLocale); }
	static jni::ref<java::util::GregorianCalendar> new_object(jni::ref<java::util::TimeZone> zone, jni::ref<java::util::Locale> aLocale) { return base_::new_object(zone, aLocale); }
	static jni::ref<java::util::GregorianCalendar> new_object(jint year, jint month, jint dayOfMonth) { return base_::new_object(year, month, dayOfMonth); }
	static jni::ref<java::util::GregorianCalendar> new_object(jint year, jint month, jint dayOfMonth, jint hourOfDay, jint minute) { return base_::new_object(year, month, dayOfMonth, hourOfDay, minute); }
	static jni::ref<java::util::GregorianCalendar> new_object(jint year, jint month, jint dayOfMonth, jint hourOfDay, jint minute, jint second) { return base_::new_object(year, month, dayOfMonth, hourOfDay, minute, second); }
	void setGregorianChange(jni::ref<java::util::Date> date) { return call_method<"setGregorianChange", void>(date); }
	jni::ref<java::util::Date> getGregorianChange() { return call_method<"getGregorianChange", jni::ref<java::util::Date>>(); }
	jboolean isLeapYear(jint year) { return call_method<"isLeapYear", jboolean>(year); }
	jni::ref<java::lang::String> getCalendarType() { return call_method<"getCalendarType", jni::ref<java::lang::String>>(); }
	jboolean equals(jni::ref<java::lang::Object> obj) { return call_method<"equals", jboolean>(obj); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	void add(jint field, jint amount) { return call_method<"add", void>(field, amount); }
	void roll(jint field, jboolean up) { return call_method<"roll", void>(field, up); }
	void roll(jint field, jint amount) { return call_method<"roll", void>(field, amount); }
	jint getMinimum(jint field) { return call_method<"getMinimum", jint>(field); }
	jint getMaximum(jint field) { return call_method<"getMaximum", jint>(field); }
	jint getGreatestMinimum(jint field) { return call_method<"getGreatestMinimum", jint>(field); }
	jint getLeastMaximum(jint field) { return call_method<"getLeastMaximum", jint>(field); }
	jint getActualMinimum(jint field) { return call_method<"getActualMinimum", jint>(field); }
	jint getActualMaximum(jint field) { return call_method<"getActualMaximum", jint>(field); }
	jni::ref<java::lang::Object> clone() { return call_method<"clone", jni::ref<java::lang::Object>>(); }
	jni::ref<java::util::TimeZone> getTimeZone() { return call_method<"getTimeZone", jni::ref<java::util::TimeZone>>(); }
	void setTimeZone(jni::ref<java::util::TimeZone> zone) { return call_method<"setTimeZone", void>(zone); }
	jboolean isWeekDateSupported() { return call_method<"isWeekDateSupported", jboolean>(); }
	jint getWeekYear() { return call_method<"getWeekYear", jint>(); }
	void setWeekDate(jint weekYear, jint weekOfYear, jint dayOfWeek) { return call_method<"setWeekDate", void>(weekYear, weekOfYear, dayOfWeek); }
	jint getWeeksInWeekYear() { return call_method<"getWeeksInWeekYear", jint>(); }
	jni::ref<java::time::ZonedDateTime> toZonedDateTime() { return call_method<"toZonedDateTime", jni::ref<java::time::ZonedDateTime>>(); }
	static jni::ref<java::util::GregorianCalendar> from(jni::ref<java::time::ZonedDateTime> zdt) { return call_static_method<"from", jni::ref<java::util::GregorianCalendar>>(zdt); }

protected:

	GregorianCalendar(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_GREGORIANCALENDAR
