// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/text/Format_Field.h>

#ifndef SCAPIX_JAVA_API_JAVA_TEXT_DATEFORMAT_FIELD_FWD
#define SCAPIX_JAVA_API_JAVA_TEXT_DATEFORMAT_FIELD_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::text { class DateFormat_Field; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::text::DateFormat_Field>
{
	static constexpr fixed_string class_name = "java/text/DateFormat$Field";
	using base_classes = std::tuple<scapix::java_api::java::text::Format_Field>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TEXT_DATEFORMAT_FIELD_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_TEXT_DATEFORMAT_FIELD)
#define SCAPIX_JAVA_API_JAVA_TEXT_DATEFORMAT_FIELD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::text::DateFormat_Field : public jni::object_base<"java/text/DateFormat$Field",
	java::text::Format_Field>
{
public:

	static jni::ref<java::text::DateFormat_Field> AM_PM() { return get_static_field<"AM_PM", jni::ref<java::text::DateFormat_Field>>(); }
	static jni::ref<java::text::DateFormat_Field> DAY_OF_MONTH() { return get_static_field<"DAY_OF_MONTH", jni::ref<java::text::DateFormat_Field>>(); }
	static jni::ref<java::text::DateFormat_Field> DAY_OF_WEEK() { return get_static_field<"DAY_OF_WEEK", jni::ref<java::text::DateFormat_Field>>(); }
	static jni::ref<java::text::DateFormat_Field> DAY_OF_WEEK_IN_MONTH() { return get_static_field<"DAY_OF_WEEK_IN_MONTH", jni::ref<java::text::DateFormat_Field>>(); }
	static jni::ref<java::text::DateFormat_Field> DAY_OF_YEAR() { return get_static_field<"DAY_OF_YEAR", jni::ref<java::text::DateFormat_Field>>(); }
	static jni::ref<java::text::DateFormat_Field> ERA() { return get_static_field<"ERA", jni::ref<java::text::DateFormat_Field>>(); }
	static jni::ref<java::text::DateFormat_Field> HOUR0() { return get_static_field<"HOUR0", jni::ref<java::text::DateFormat_Field>>(); }
	static jni::ref<java::text::DateFormat_Field> HOUR1() { return get_static_field<"HOUR1", jni::ref<java::text::DateFormat_Field>>(); }
	static jni::ref<java::text::DateFormat_Field> HOUR_OF_DAY0() { return get_static_field<"HOUR_OF_DAY0", jni::ref<java::text::DateFormat_Field>>(); }
	static jni::ref<java::text::DateFormat_Field> HOUR_OF_DAY1() { return get_static_field<"HOUR_OF_DAY1", jni::ref<java::text::DateFormat_Field>>(); }
	static jni::ref<java::text::DateFormat_Field> MILLISECOND() { return get_static_field<"MILLISECOND", jni::ref<java::text::DateFormat_Field>>(); }
	static jni::ref<java::text::DateFormat_Field> MINUTE() { return get_static_field<"MINUTE", jni::ref<java::text::DateFormat_Field>>(); }
	static jni::ref<java::text::DateFormat_Field> MONTH() { return get_static_field<"MONTH", jni::ref<java::text::DateFormat_Field>>(); }
	static jni::ref<java::text::DateFormat_Field> SECOND() { return get_static_field<"SECOND", jni::ref<java::text::DateFormat_Field>>(); }
	static jni::ref<java::text::DateFormat_Field> TIME_ZONE() { return get_static_field<"TIME_ZONE", jni::ref<java::text::DateFormat_Field>>(); }
	static jni::ref<java::text::DateFormat_Field> WEEK_OF_MONTH() { return get_static_field<"WEEK_OF_MONTH", jni::ref<java::text::DateFormat_Field>>(); }
	static jni::ref<java::text::DateFormat_Field> WEEK_OF_YEAR() { return get_static_field<"WEEK_OF_YEAR", jni::ref<java::text::DateFormat_Field>>(); }
	static jni::ref<java::text::DateFormat_Field> YEAR() { return get_static_field<"YEAR", jni::ref<java::text::DateFormat_Field>>(); }

	static jni::ref<java::text::DateFormat_Field> ofCalendarField(jint calendarField) { return call_static_method<"ofCalendarField", jni::ref<java::text::DateFormat_Field>>(calendarField); }
	jint getCalendarField() { return call_method<"getCalendarField", jint>(); }

protected:

	DateFormat_Field(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TEXT_DATEFORMAT_FIELD