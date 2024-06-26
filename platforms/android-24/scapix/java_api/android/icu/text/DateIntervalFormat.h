// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/icu/text/UFormat.h>

#ifndef SCAPIX_JAVA_API_ANDROID_ICU_TEXT_DATEINTERVALFORMAT_FWD
#define SCAPIX_JAVA_API_ANDROID_ICU_TEXT_DATEINTERVALFORMAT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::icu::text { class DateIntervalFormat; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::icu::text::DateIntervalFormat>
{
	static constexpr fixed_string class_name = "android/icu/text/DateIntervalFormat";
	using base_classes = std::tuple<scapix::java_api::android::icu::text::UFormat>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ICU_TEXT_DATEINTERVALFORMAT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_ICU_TEXT_DATEINTERVALFORMAT)
#define SCAPIX_JAVA_API_ANDROID_ICU_TEXT_DATEINTERVALFORMAT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/icu/text/DateFormat.h>
#include <scapix/java_api/android/icu/text/DateIntervalInfo.h>
#include <scapix/java_api/android/icu/util/Calendar.h>
#include <scapix/java_api/android/icu/util/DateInterval.h>
#include <scapix/java_api/android/icu/util/TimeZone.h>
#include <scapix/java_api/android/icu/util/ULocale.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/StringBuffer.h>
#include <scapix/java_api/java/text/FieldPosition.h>
#include <scapix/java_api/java/text/ParsePosition.h>
#include <scapix/java_api/java/util/Locale.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::icu::text::DateIntervalFormat : public jni::object_base<"android/icu/text/DateIntervalFormat",
	android::icu::text::UFormat>
{
public:

	static jni::ref<android::icu::text::DateIntervalFormat> getInstance(jni::ref<java::lang::String> skeleton) { return call_static_method<"getInstance", jni::ref<android::icu::text::DateIntervalFormat>>(skeleton); }
	static jni::ref<android::icu::text::DateIntervalFormat> getInstance(jni::ref<java::lang::String> skeleton, jni::ref<java::util::Locale> locale) { return call_static_method<"getInstance", jni::ref<android::icu::text::DateIntervalFormat>>(skeleton, locale); }
	static jni::ref<android::icu::text::DateIntervalFormat> getInstance(jni::ref<java::lang::String> skeleton, jni::ref<android::icu::util::ULocale> locale) { return call_static_method<"getInstance", jni::ref<android::icu::text::DateIntervalFormat>>(skeleton, locale); }
	static jni::ref<android::icu::text::DateIntervalFormat> getInstance(jni::ref<java::lang::String> skeleton, jni::ref<android::icu::text::DateIntervalInfo> dtitvinf) { return call_static_method<"getInstance", jni::ref<android::icu::text::DateIntervalFormat>>(skeleton, dtitvinf); }
	static jni::ref<android::icu::text::DateIntervalFormat> getInstance(jni::ref<java::lang::String> skeleton, jni::ref<java::util::Locale> locale, jni::ref<android::icu::text::DateIntervalInfo> dtitvinf) { return call_static_method<"getInstance", jni::ref<android::icu::text::DateIntervalFormat>>(skeleton, locale, dtitvinf); }
	static jni::ref<android::icu::text::DateIntervalFormat> getInstance(jni::ref<java::lang::String> skeleton, jni::ref<android::icu::util::ULocale> locale, jni::ref<android::icu::text::DateIntervalInfo> dtitvinf) { return call_static_method<"getInstance", jni::ref<android::icu::text::DateIntervalFormat>>(skeleton, locale, dtitvinf); }
	jni::ref<java::lang::Object> clone() { return call_method<"clone", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::StringBuffer> format(jni::ref<java::lang::Object> obj, jni::ref<java::lang::StringBuffer> appendTo, jni::ref<java::text::FieldPosition> fieldPosition) { return call_method<"format", jni::ref<java::lang::StringBuffer>>(obj, appendTo, fieldPosition); }
	jni::ref<java::lang::StringBuffer> format(jni::ref<android::icu::util::DateInterval> dtInterval, jni::ref<java::lang::StringBuffer> appendTo, jni::ref<java::text::FieldPosition> fieldPosition) { return call_method<"format", jni::ref<java::lang::StringBuffer>>(dtInterval, appendTo, fieldPosition); }
	jni::ref<java::lang::StringBuffer> format(jni::ref<android::icu::util::Calendar> fromCalendar, jni::ref<android::icu::util::Calendar> toCalendar, jni::ref<java::lang::StringBuffer> appendTo, jni::ref<java::text::FieldPosition> pos) { return call_method<"format", jni::ref<java::lang::StringBuffer>>(fromCalendar, toCalendar, appendTo, pos); }
	jni::ref<android::icu::text::DateIntervalInfo> getDateIntervalInfo() { return call_method<"getDateIntervalInfo", jni::ref<android::icu::text::DateIntervalInfo>>(); }
	void setDateIntervalInfo(jni::ref<android::icu::text::DateIntervalInfo> newItvPattern) { return call_method<"setDateIntervalInfo", void>(newItvPattern); }
	jni::ref<android::icu::util::TimeZone> getTimeZone() { return call_method<"getTimeZone", jni::ref<android::icu::util::TimeZone>>(); }
	void setTimeZone(jni::ref<android::icu::util::TimeZone> zone) { return call_method<"setTimeZone", void>(zone); }
	jni::ref<android::icu::text::DateFormat> getDateFormat() { return call_method<"getDateFormat", jni::ref<android::icu::text::DateFormat>>(); }
	jni::ref<java::lang::Object> parseObject(jni::ref<java::lang::String> source, jni::ref<java::text::ParsePosition> parse_pos) { return call_method<"parseObject", jni::ref<java::lang::Object>>(source, parse_pos); }

protected:

	DateIntervalFormat(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ICU_TEXT_DATEINTERVALFORMAT
