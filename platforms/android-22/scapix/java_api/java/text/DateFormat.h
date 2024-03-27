// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/text/Format.h>

#ifndef SCAPIX_JAVA_API_JAVA_TEXT_DATEFORMAT_FWD
#define SCAPIX_JAVA_API_JAVA_TEXT_DATEFORMAT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::text { class DateFormat; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::text::DateFormat>
{
	static constexpr fixed_string class_name = "java/text/DateFormat";
	using base_classes = std::tuple<scapix::java_api::java::text::Format>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TEXT_DATEFORMAT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_TEXT_DATEFORMAT)
#define SCAPIX_JAVA_API_JAVA_TEXT_DATEFORMAT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/StringBuffer.h>
#include <scapix/java_api/java/text/FieldPosition.h>
#include <scapix/java_api/java/text/NumberFormat.h>
#include <scapix/java_api/java/text/ParsePosition.h>
#include <scapix/java_api/java/util/Calendar.h>
#include <scapix/java_api/java/util/Date.h>
#include <scapix/java_api/java/util/Locale.h>
#include <scapix/java_api/java/util/TimeZone.h>
#include <scapix/java_api/java/text/DateFormat_Field.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::text::DateFormat : public jni::object_base<"java/text/DateFormat",
	java::text::Format>
{
public:

	using Field = DateFormat_Field;

	static jint AM_PM_FIELD() { return get_static_field<"AM_PM_FIELD", jint>(); }
	static jint DATE_FIELD() { return get_static_field<"DATE_FIELD", jint>(); }
	static jint DAY_OF_WEEK_FIELD() { return get_static_field<"DAY_OF_WEEK_FIELD", jint>(); }
	static jint DAY_OF_WEEK_IN_MONTH_FIELD() { return get_static_field<"DAY_OF_WEEK_IN_MONTH_FIELD", jint>(); }
	static jint DAY_OF_YEAR_FIELD() { return get_static_field<"DAY_OF_YEAR_FIELD", jint>(); }
	static jint DEFAULT() { return get_static_field<"DEFAULT", jint>(); }
	static jint ERA_FIELD() { return get_static_field<"ERA_FIELD", jint>(); }
	static jint FULL() { return get_static_field<"FULL", jint>(); }
	static jint HOUR0_FIELD() { return get_static_field<"HOUR0_FIELD", jint>(); }
	static jint HOUR1_FIELD() { return get_static_field<"HOUR1_FIELD", jint>(); }
	static jint HOUR_OF_DAY0_FIELD() { return get_static_field<"HOUR_OF_DAY0_FIELD", jint>(); }
	static jint HOUR_OF_DAY1_FIELD() { return get_static_field<"HOUR_OF_DAY1_FIELD", jint>(); }
	static jint LONG() { return get_static_field<"LONG", jint>(); }
	static jint MEDIUM() { return get_static_field<"MEDIUM", jint>(); }
	static jint MILLISECOND_FIELD() { return get_static_field<"MILLISECOND_FIELD", jint>(); }
	static jint MINUTE_FIELD() { return get_static_field<"MINUTE_FIELD", jint>(); }
	static jint MONTH_FIELD() { return get_static_field<"MONTH_FIELD", jint>(); }
	static jint SECOND_FIELD() { return get_static_field<"SECOND_FIELD", jint>(); }
	static jint SHORT() { return get_static_field<"SHORT", jint>(); }
	static jint TIMEZONE_FIELD() { return get_static_field<"TIMEZONE_FIELD", jint>(); }
	static jint WEEK_OF_MONTH_FIELD() { return get_static_field<"WEEK_OF_MONTH_FIELD", jint>(); }
	static jint WEEK_OF_YEAR_FIELD() { return get_static_field<"WEEK_OF_YEAR_FIELD", jint>(); }
	static jint YEAR_FIELD() { return get_static_field<"YEAR_FIELD", jint>(); }

	jni::ref<java::lang::Object> clone() { return call_method<"clone", jni::ref<java::lang::Object>>(); }
	jboolean equals(jni::ref<java::lang::Object> object) { return call_method<"equals", jboolean>(object); }
	jni::ref<java::lang::StringBuffer> format(jni::ref<java::lang::Object> object, jni::ref<java::lang::StringBuffer> buffer, jni::ref<java::text::FieldPosition> field) { return call_method<"format", jni::ref<java::lang::StringBuffer>>(object, buffer, field); }
	jni::ref<java::lang::String> format(jni::ref<java::util::Date> date) { return call_method<"format", jni::ref<java::lang::String>>(date); }
	jni::ref<java::lang::StringBuffer> format(jni::ref<java::util::Date> p1, jni::ref<java::lang::StringBuffer> p2, jni::ref<java::text::FieldPosition> p3) { return call_method<"format", jni::ref<java::lang::StringBuffer>>(p1, p2, p3); }
	static jni::ref<jni::array<java::util::Locale>> getAvailableLocales() { return call_static_method<"getAvailableLocales", jni::ref<jni::array<java::util::Locale>>>(); }
	jni::ref<java::util::Calendar> getCalendar() { return call_method<"getCalendar", jni::ref<java::util::Calendar>>(); }
	static jni::ref<java::text::DateFormat> getDateInstance() { return call_static_method<"getDateInstance", jni::ref<java::text::DateFormat>>(); }
	static jni::ref<java::text::DateFormat> getDateInstance(jint style) { return call_static_method<"getDateInstance", jni::ref<java::text::DateFormat>>(style); }
	static jni::ref<java::text::DateFormat> getDateInstance(jint style, jni::ref<java::util::Locale> locale) { return call_static_method<"getDateInstance", jni::ref<java::text::DateFormat>>(style, locale); }
	static jni::ref<java::text::DateFormat> getDateTimeInstance() { return call_static_method<"getDateTimeInstance", jni::ref<java::text::DateFormat>>(); }
	static jni::ref<java::text::DateFormat> getDateTimeInstance(jint dateStyle, jint timeStyle) { return call_static_method<"getDateTimeInstance", jni::ref<java::text::DateFormat>>(dateStyle, timeStyle); }
	static jni::ref<java::text::DateFormat> getDateTimeInstance(jint dateStyle, jint timeStyle, jni::ref<java::util::Locale> locale) { return call_static_method<"getDateTimeInstance", jni::ref<java::text::DateFormat>>(dateStyle, timeStyle, locale); }
	static jni::ref<java::text::DateFormat> getInstance() { return call_static_method<"getInstance", jni::ref<java::text::DateFormat>>(); }
	jni::ref<java::text::NumberFormat> getNumberFormat() { return call_method<"getNumberFormat", jni::ref<java::text::NumberFormat>>(); }
	static jni::ref<java::text::DateFormat> getTimeInstance() { return call_static_method<"getTimeInstance", jni::ref<java::text::DateFormat>>(); }
	static jni::ref<java::text::DateFormat> getTimeInstance(jint style) { return call_static_method<"getTimeInstance", jni::ref<java::text::DateFormat>>(style); }
	static jni::ref<java::text::DateFormat> getTimeInstance(jint style, jni::ref<java::util::Locale> locale) { return call_static_method<"getTimeInstance", jni::ref<java::text::DateFormat>>(style, locale); }
	jni::ref<java::util::TimeZone> getTimeZone() { return call_method<"getTimeZone", jni::ref<java::util::TimeZone>>(); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean isLenient() { return call_method<"isLenient", jboolean>(); }
	jni::ref<java::util::Date> parse(jni::ref<java::lang::String> string) { return call_method<"parse", jni::ref<java::util::Date>>(string); }
	jni::ref<java::util::Date> parse(jni::ref<java::lang::String> p1, jni::ref<java::text::ParsePosition> p2) { return call_method<"parse", jni::ref<java::util::Date>>(p1, p2); }
	jni::ref<java::lang::Object> parseObject(jni::ref<java::lang::String> string, jni::ref<java::text::ParsePosition> position) { return call_method<"parseObject", jni::ref<java::lang::Object>>(string, position); }
	void setCalendar(jni::ref<java::util::Calendar> cal) { return call_method<"setCalendar", void>(cal); }
	void setLenient(jboolean value) { return call_method<"setLenient", void>(value); }
	void setNumberFormat(jni::ref<java::text::NumberFormat> format) { return call_method<"setNumberFormat", void>(format); }
	void setTimeZone(jni::ref<java::util::TimeZone> timezone) { return call_method<"setTimeZone", void>(timezone); }

protected:

	DateFormat(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TEXT_DATEFORMAT
