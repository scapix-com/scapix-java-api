// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_TEXT_FORMAT_DATEUTILS_FWD
#define SCAPIX_JAVA_API_ANDROID_TEXT_FORMAT_DATEUTILS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::text::format { class DateUtils; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::text::format::DateUtils>
{
	static constexpr fixed_string class_name = "android/text/format/DateUtils";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TEXT_FORMAT_DATEUTILS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_TEXT_FORMAT_DATEUTILS)
#define SCAPIX_JAVA_API_ANDROID_TEXT_FORMAT_DATEUTILS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/StringBuilder.h>
#include <scapix/java_api/java/util/Formatter.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::text::format::DateUtils : public jni::object_base<"android/text/format/DateUtils",
	java::lang::Object>
{
public:

	static jni::ref<java::lang::String> ABBREV_MONTH_FORMAT() { return get_static_field<"ABBREV_MONTH_FORMAT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ABBREV_WEEKDAY_FORMAT() { return get_static_field<"ABBREV_WEEKDAY_FORMAT", jni::ref<java::lang::String>>(); }
	static jlong DAY_IN_MILLIS() { return get_static_field<"DAY_IN_MILLIS", jlong>(); }
	static jint FORMAT_12HOUR() { return get_static_field<"FORMAT_12HOUR", jint>(); }
	static jint FORMAT_24HOUR() { return get_static_field<"FORMAT_24HOUR", jint>(); }
	static jint FORMAT_ABBREV_ALL() { return get_static_field<"FORMAT_ABBREV_ALL", jint>(); }
	static jint FORMAT_ABBREV_MONTH() { return get_static_field<"FORMAT_ABBREV_MONTH", jint>(); }
	static jint FORMAT_ABBREV_RELATIVE() { return get_static_field<"FORMAT_ABBREV_RELATIVE", jint>(); }
	static jint FORMAT_ABBREV_TIME() { return get_static_field<"FORMAT_ABBREV_TIME", jint>(); }
	static jint FORMAT_ABBREV_WEEKDAY() { return get_static_field<"FORMAT_ABBREV_WEEKDAY", jint>(); }
	static jint FORMAT_CAP_AMPM() { return get_static_field<"FORMAT_CAP_AMPM", jint>(); }
	static jint FORMAT_CAP_MIDNIGHT() { return get_static_field<"FORMAT_CAP_MIDNIGHT", jint>(); }
	static jint FORMAT_CAP_NOON() { return get_static_field<"FORMAT_CAP_NOON", jint>(); }
	static jint FORMAT_CAP_NOON_MIDNIGHT() { return get_static_field<"FORMAT_CAP_NOON_MIDNIGHT", jint>(); }
	static jint FORMAT_NO_MIDNIGHT() { return get_static_field<"FORMAT_NO_MIDNIGHT", jint>(); }
	static jint FORMAT_NO_MONTH_DAY() { return get_static_field<"FORMAT_NO_MONTH_DAY", jint>(); }
	static jint FORMAT_NO_NOON() { return get_static_field<"FORMAT_NO_NOON", jint>(); }
	static jint FORMAT_NO_NOON_MIDNIGHT() { return get_static_field<"FORMAT_NO_NOON_MIDNIGHT", jint>(); }
	static jint FORMAT_NO_YEAR() { return get_static_field<"FORMAT_NO_YEAR", jint>(); }
	static jint FORMAT_NUMERIC_DATE() { return get_static_field<"FORMAT_NUMERIC_DATE", jint>(); }
	static jint FORMAT_SHOW_DATE() { return get_static_field<"FORMAT_SHOW_DATE", jint>(); }
	static jint FORMAT_SHOW_TIME() { return get_static_field<"FORMAT_SHOW_TIME", jint>(); }
	static jint FORMAT_SHOW_WEEKDAY() { return get_static_field<"FORMAT_SHOW_WEEKDAY", jint>(); }
	static jint FORMAT_SHOW_YEAR() { return get_static_field<"FORMAT_SHOW_YEAR", jint>(); }
	static jint FORMAT_UTC() { return get_static_field<"FORMAT_UTC", jint>(); }
	static jlong HOUR_IN_MILLIS() { return get_static_field<"HOUR_IN_MILLIS", jlong>(); }
	static jni::ref<java::lang::String> HOUR_MINUTE_24() { return get_static_field<"HOUR_MINUTE_24", jni::ref<java::lang::String>>(); }
	static jint LENGTH_LONG() { return get_static_field<"LENGTH_LONG", jint>(); }
	static jint LENGTH_MEDIUM() { return get_static_field<"LENGTH_MEDIUM", jint>(); }
	static jint LENGTH_SHORT() { return get_static_field<"LENGTH_SHORT", jint>(); }
	static jint LENGTH_SHORTER() { return get_static_field<"LENGTH_SHORTER", jint>(); }
	static jint LENGTH_SHORTEST() { return get_static_field<"LENGTH_SHORTEST", jint>(); }
	static jlong MINUTE_IN_MILLIS() { return get_static_field<"MINUTE_IN_MILLIS", jlong>(); }
	static jni::ref<java::lang::String> MONTH_DAY_FORMAT() { return get_static_field<"MONTH_DAY_FORMAT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> MONTH_FORMAT() { return get_static_field<"MONTH_FORMAT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> NUMERIC_MONTH_FORMAT() { return get_static_field<"NUMERIC_MONTH_FORMAT", jni::ref<java::lang::String>>(); }
	static jlong SECOND_IN_MILLIS() { return get_static_field<"SECOND_IN_MILLIS", jlong>(); }
	static jni::ref<java::lang::String> WEEKDAY_FORMAT() { return get_static_field<"WEEKDAY_FORMAT", jni::ref<java::lang::String>>(); }
	static jlong WEEK_IN_MILLIS() { return get_static_field<"WEEK_IN_MILLIS", jlong>(); }
	static jni::ref<java::lang::String> YEAR_FORMAT() { return get_static_field<"YEAR_FORMAT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> YEAR_FORMAT_TWO_DIGITS() { return get_static_field<"YEAR_FORMAT_TWO_DIGITS", jni::ref<java::lang::String>>(); }
	static jlong YEAR_IN_MILLIS() { return get_static_field<"YEAR_IN_MILLIS", jlong>(); }
	static jni::ref<jni::array<jint>> sameMonthTable() { return get_static_field<"sameMonthTable", jni::ref<jni::array<jint>>>(); }
	static jni::ref<jni::array<jint>> sameYearTable() { return get_static_field<"sameYearTable", jni::ref<jni::array<jint>>>(); }

	static jni::ref<android::text::format::DateUtils> new_object() { return base_::new_object(); }
	static jni::ref<java::lang::String> getDayOfWeekString(jint dayOfWeek, jint abbrev) { return call_static_method<"getDayOfWeekString", jni::ref<java::lang::String>>(dayOfWeek, abbrev); }
	static jni::ref<java::lang::String> getAMPMString(jint ampm) { return call_static_method<"getAMPMString", jni::ref<java::lang::String>>(ampm); }
	static jni::ref<java::lang::String> getMonthString(jint month, jint abbrev) { return call_static_method<"getMonthString", jni::ref<java::lang::String>>(month, abbrev); }
	static jni::ref<java::lang::CharSequence> getRelativeTimeSpanString(jlong startTime) { return call_static_method<"getRelativeTimeSpanString", jni::ref<java::lang::CharSequence>>(startTime); }
	static jni::ref<java::lang::CharSequence> getRelativeTimeSpanString(jlong time, jlong p2, jlong now) { return call_static_method<"getRelativeTimeSpanString", jni::ref<java::lang::CharSequence>>(time, p2, now); }
	static jni::ref<java::lang::CharSequence> getRelativeTimeSpanString(jlong time, jlong p2, jlong now, jint p4) { return call_static_method<"getRelativeTimeSpanString", jni::ref<java::lang::CharSequence>>(time, p2, now, p4); }
	static jni::ref<java::lang::CharSequence> getRelativeDateTimeString(jni::ref<android::content::Context> c, jlong time, jlong p3, jlong minResolution, jint p5) { return call_static_method<"getRelativeDateTimeString", jni::ref<java::lang::CharSequence>>(c, time, p3, minResolution, p5); }
	static jni::ref<java::lang::String> formatElapsedTime(jlong elapsedSeconds) { return call_static_method<"formatElapsedTime", jni::ref<java::lang::String>>(elapsedSeconds); }
	static jni::ref<java::lang::String> formatElapsedTime(jni::ref<java::lang::StringBuilder> recycle, jlong elapsedSeconds) { return call_static_method<"formatElapsedTime", jni::ref<java::lang::String>>(recycle, elapsedSeconds); }
	static jni::ref<java::lang::CharSequence> formatSameDayTime(jlong then, jlong p2, jint now, jint p4) { return call_static_method<"formatSameDayTime", jni::ref<java::lang::CharSequence>>(then, p2, now, p4); }
	static jboolean isToday(jlong when) { return call_static_method<"isToday", jboolean>(when); }
	static jni::ref<java::lang::String> formatDateRange(jni::ref<android::content::Context> context, jlong startMillis, jlong p3, jint endMillis) { return call_static_method<"formatDateRange", jni::ref<java::lang::String>>(context, startMillis, p3, endMillis); }
	static jni::ref<java::util::Formatter> formatDateRange(jni::ref<android::content::Context> context, jni::ref<java::util::Formatter> formatter, jlong startMillis, jlong p4, jint endMillis) { return call_static_method<"formatDateRange", jni::ref<java::util::Formatter>>(context, formatter, startMillis, p4, endMillis); }
	static jni::ref<java::util::Formatter> formatDateRange(jni::ref<android::content::Context> context, jni::ref<java::util::Formatter> formatter, jlong startMillis, jlong p4, jint endMillis, jni::ref<java::lang::String> p6) { return call_static_method<"formatDateRange", jni::ref<java::util::Formatter>>(context, formatter, startMillis, p4, endMillis, p6); }
	static jni::ref<java::lang::String> formatDateTime(jni::ref<android::content::Context> context, jlong millis, jint p3) { return call_static_method<"formatDateTime", jni::ref<java::lang::String>>(context, millis, p3); }
	static jni::ref<java::lang::CharSequence> getRelativeTimeSpanString(jni::ref<android::content::Context> c, jlong millis, jboolean p3) { return call_static_method<"getRelativeTimeSpanString", jni::ref<java::lang::CharSequence>>(c, millis, p3); }
	static jni::ref<java::lang::CharSequence> getRelativeTimeSpanString(jni::ref<android::content::Context> c, jlong millis) { return call_static_method<"getRelativeTimeSpanString", jni::ref<java::lang::CharSequence>>(c, millis); }

protected:

	DateUtils(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TEXT_FORMAT_DATEUTILS
