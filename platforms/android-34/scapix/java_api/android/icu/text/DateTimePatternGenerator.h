// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/icu/util/Freezable.h>
#include <scapix/java_api/java/lang/Cloneable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_ICU_TEXT_DATETIMEPATTERNGENERATOR_FWD
#define SCAPIX_JAVA_API_ANDROID_ICU_TEXT_DATETIMEPATTERNGENERATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::icu::text { class DateTimePatternGenerator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::icu::text::DateTimePatternGenerator>
{
	static constexpr fixed_string class_name = "android/icu/text/DateTimePatternGenerator";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::icu::util::Freezable, scapix::java_api::java::lang::Cloneable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ICU_TEXT_DATETIMEPATTERNGENERATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_ICU_TEXT_DATETIMEPATTERNGENERATOR)
#define SCAPIX_JAVA_API_ANDROID_ICU_TEXT_DATETIMEPATTERNGENERATOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/icu/text/DateFormat_HourCycle.h>
#include <scapix/java_api/android/icu/text/DateTimePatternGenerator_DisplayWidth.h>
#include <scapix/java_api/android/icu/text/DateTimePatternGenerator_PatternInfo.h>
#include <scapix/java_api/android/icu/util/ULocale.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Locale.h>
#include <scapix/java_api/java/util/Map.h>
#include <scapix/java_api/java/util/Set.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::icu::text::DateTimePatternGenerator : public jni::object_base<"android/icu/text/DateTimePatternGenerator",
	java::lang::Object,
	android::icu::util::Freezable,
	java::lang::Cloneable>
{
public:

	using PatternInfo = DateTimePatternGenerator_PatternInfo;
	using DisplayWidth = DateTimePatternGenerator_DisplayWidth;

	static jint DAY() { return get_static_field<"DAY", jint>(); }
	static jint DAYPERIOD() { return get_static_field<"DAYPERIOD", jint>(); }
	static jint DAY_OF_WEEK_IN_MONTH() { return get_static_field<"DAY_OF_WEEK_IN_MONTH", jint>(); }
	static jint DAY_OF_YEAR() { return get_static_field<"DAY_OF_YEAR", jint>(); }
	static jint ERA() { return get_static_field<"ERA", jint>(); }
	static jint FRACTIONAL_SECOND() { return get_static_field<"FRACTIONAL_SECOND", jint>(); }
	static jint HOUR() { return get_static_field<"HOUR", jint>(); }
	static jint MATCH_ALL_FIELDS_LENGTH() { return get_static_field<"MATCH_ALL_FIELDS_LENGTH", jint>(); }
	static jint MATCH_HOUR_FIELD_LENGTH() { return get_static_field<"MATCH_HOUR_FIELD_LENGTH", jint>(); }
	static jint MATCH_NO_OPTIONS() { return get_static_field<"MATCH_NO_OPTIONS", jint>(); }
	static jint MINUTE() { return get_static_field<"MINUTE", jint>(); }
	static jint MONTH() { return get_static_field<"MONTH", jint>(); }
	static jint QUARTER() { return get_static_field<"QUARTER", jint>(); }
	static jint SECOND() { return get_static_field<"SECOND", jint>(); }
	static jint WEEKDAY() { return get_static_field<"WEEKDAY", jint>(); }
	static jint WEEK_OF_MONTH() { return get_static_field<"WEEK_OF_MONTH", jint>(); }
	static jint WEEK_OF_YEAR() { return get_static_field<"WEEK_OF_YEAR", jint>(); }
	static jint YEAR() { return get_static_field<"YEAR", jint>(); }
	static jint ZONE() { return get_static_field<"ZONE", jint>(); }

	static jni::ref<android::icu::text::DateTimePatternGenerator> getEmptyInstance() { return call_static_method<"getEmptyInstance", jni::ref<android::icu::text::DateTimePatternGenerator>>(); }
	static jni::ref<android::icu::text::DateTimePatternGenerator> getInstance() { return call_static_method<"getInstance", jni::ref<android::icu::text::DateTimePatternGenerator>>(); }
	static jni::ref<android::icu::text::DateTimePatternGenerator> getInstance(jni::ref<android::icu::util::ULocale> uLocale) { return call_static_method<"getInstance", jni::ref<android::icu::text::DateTimePatternGenerator>>(uLocale); }
	static jni::ref<android::icu::text::DateTimePatternGenerator> getInstance(jni::ref<java::util::Locale> locale) { return call_static_method<"getInstance", jni::ref<android::icu::text::DateTimePatternGenerator>>(locale); }
	jni::ref<java::lang::String> getBestPattern(jni::ref<java::lang::String> skeleton) { return call_method<"getBestPattern", jni::ref<java::lang::String>>(skeleton); }
	jni::ref<java::lang::String> getBestPattern(jni::ref<java::lang::String> skeleton, jint options) { return call_method<"getBestPattern", jni::ref<java::lang::String>>(skeleton, options); }
	jni::ref<android::icu::text::DateTimePatternGenerator> addPattern(jni::ref<java::lang::String> pattern, jboolean override, jni::ref<android::icu::text::DateTimePatternGenerator_PatternInfo> returnInfo) { return call_method<"addPattern", jni::ref<android::icu::text::DateTimePatternGenerator>>(pattern, override, returnInfo); }
	jni::ref<java::lang::String> getSkeleton(jni::ref<java::lang::String> pattern) { return call_method<"getSkeleton", jni::ref<java::lang::String>>(pattern); }
	jni::ref<java::lang::String> getBaseSkeleton(jni::ref<java::lang::String> pattern) { return call_method<"getBaseSkeleton", jni::ref<java::lang::String>>(pattern); }
	jni::ref<java::util::Map> getSkeletons(jni::ref<java::util::Map> result) { return call_method<"getSkeletons", jni::ref<java::util::Map>>(result); }
	jni::ref<java::util::Set> getBaseSkeletons(jni::ref<java::util::Set> result) { return call_method<"getBaseSkeletons", jni::ref<java::util::Set>>(result); }
	jni::ref<java::lang::String> replaceFieldTypes(jni::ref<java::lang::String> pattern, jni::ref<java::lang::String> skeleton) { return call_method<"replaceFieldTypes", jni::ref<java::lang::String>>(pattern, skeleton); }
	jni::ref<java::lang::String> replaceFieldTypes(jni::ref<java::lang::String> pattern, jni::ref<java::lang::String> skeleton, jint options) { return call_method<"replaceFieldTypes", jni::ref<java::lang::String>>(pattern, skeleton, options); }
	void setDateTimeFormat(jni::ref<java::lang::String> dateTimeFormat) { return call_method<"setDateTimeFormat", void>(dateTimeFormat); }
	jni::ref<java::lang::String> getDateTimeFormat() { return call_method<"getDateTimeFormat", jni::ref<java::lang::String>>(); }
	void setDecimal(jni::ref<java::lang::String> decimal) { return call_method<"setDecimal", void>(decimal); }
	jni::ref<java::lang::String> getDecimal() { return call_method<"getDecimal", jni::ref<java::lang::String>>(); }
	void setAppendItemFormat(jint field, jni::ref<java::lang::String> value) { return call_method<"setAppendItemFormat", void>(field, value); }
	jni::ref<java::lang::String> getAppendItemFormat(jint field) { return call_method<"getAppendItemFormat", jni::ref<java::lang::String>>(field); }
	void setAppendItemName(jint field, jni::ref<java::lang::String> value) { return call_method<"setAppendItemName", void>(field, value); }
	jni::ref<java::lang::String> getAppendItemName(jint field) { return call_method<"getAppendItemName", jni::ref<java::lang::String>>(field); }
	jni::ref<android::icu::text::DateFormat_HourCycle> getDefaultHourCycle() { return call_method<"getDefaultHourCycle", jni::ref<android::icu::text::DateFormat_HourCycle>>(); }
	jni::ref<java::lang::String> getFieldDisplayName(jint field, jni::ref<android::icu::text::DateTimePatternGenerator_DisplayWidth> width) { return call_method<"getFieldDisplayName", jni::ref<java::lang::String>>(field, width); }
	jboolean isFrozen() { return call_method<"isFrozen", jboolean>(); }
	jni::ref<android::icu::text::DateTimePatternGenerator> freeze() { return call_method<"freeze", jni::ref<android::icu::text::DateTimePatternGenerator>>(); }
	jni::ref<android::icu::text::DateTimePatternGenerator> cloneAsThawed() { return call_method<"cloneAsThawed", jni::ref<android::icu::text::DateTimePatternGenerator>>(); }
	jni::ref<java::lang::Object> clone() { return call_method<"clone", jni::ref<java::lang::Object>>(); }

protected:

	DateTimePatternGenerator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ICU_TEXT_DATETIMEPATTERNGENERATOR
