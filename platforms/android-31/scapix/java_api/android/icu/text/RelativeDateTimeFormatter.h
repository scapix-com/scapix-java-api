// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_ICU_TEXT_RELATIVEDATETIMEFORMATTER_FWD
#define SCAPIX_JAVA_API_ANDROID_ICU_TEXT_RELATIVEDATETIMEFORMATTER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::icu::text { class RelativeDateTimeFormatter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::icu::text::RelativeDateTimeFormatter>
{
	static constexpr fixed_string class_name = "android/icu/text/RelativeDateTimeFormatter";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ICU_TEXT_RELATIVEDATETIMEFORMATTER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_ICU_TEXT_RELATIVEDATETIMEFORMATTER)
#define SCAPIX_JAVA_API_ANDROID_ICU_TEXT_RELATIVEDATETIMEFORMATTER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/icu/text/DisplayContext.h>
#include <scapix/java_api/android/icu/text/NumberFormat.h>
#include <scapix/java_api/android/icu/text/RelativeDateTimeFormatter_AbsoluteUnit.h>
#include <scapix/java_api/android/icu/text/RelativeDateTimeFormatter_Direction.h>
#include <scapix/java_api/android/icu/text/RelativeDateTimeFormatter_FormattedRelativeDateTime.h>
#include <scapix/java_api/android/icu/text/RelativeDateTimeFormatter_RelativeDateTimeUnit.h>
#include <scapix/java_api/android/icu/text/RelativeDateTimeFormatter_RelativeUnit.h>
#include <scapix/java_api/android/icu/text/RelativeDateTimeFormatter_Style.h>
#include <scapix/java_api/android/icu/util/ULocale.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Locale.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::icu::text::RelativeDateTimeFormatter : public jni::object_base<"android/icu/text/RelativeDateTimeFormatter",
	java::lang::Object>
{
public:

	using Style = RelativeDateTimeFormatter_Style;
	using RelativeUnit = RelativeDateTimeFormatter_RelativeUnit;
	using RelativeDateTimeUnit = RelativeDateTimeFormatter_RelativeDateTimeUnit;
	using FormattedRelativeDateTime = RelativeDateTimeFormatter_FormattedRelativeDateTime;
	using Direction = RelativeDateTimeFormatter_Direction;
	using AbsoluteUnit = RelativeDateTimeFormatter_AbsoluteUnit;

	static jni::ref<android::icu::text::RelativeDateTimeFormatter> getInstance() { return call_static_method<"getInstance", jni::ref<android::icu::text::RelativeDateTimeFormatter>>(); }
	static jni::ref<android::icu::text::RelativeDateTimeFormatter> getInstance(jni::ref<android::icu::util::ULocale> locale) { return call_static_method<"getInstance", jni::ref<android::icu::text::RelativeDateTimeFormatter>>(locale); }
	static jni::ref<android::icu::text::RelativeDateTimeFormatter> getInstance(jni::ref<java::util::Locale> locale) { return call_static_method<"getInstance", jni::ref<android::icu::text::RelativeDateTimeFormatter>>(locale); }
	static jni::ref<android::icu::text::RelativeDateTimeFormatter> getInstance(jni::ref<android::icu::util::ULocale> locale, jni::ref<android::icu::text::NumberFormat> nf) { return call_static_method<"getInstance", jni::ref<android::icu::text::RelativeDateTimeFormatter>>(locale, nf); }
	static jni::ref<android::icu::text::RelativeDateTimeFormatter> getInstance(jni::ref<android::icu::util::ULocale> locale, jni::ref<android::icu::text::NumberFormat> nf, jni::ref<android::icu::text::RelativeDateTimeFormatter_Style> style, jni::ref<android::icu::text::DisplayContext> capitalizationContext) { return call_static_method<"getInstance", jni::ref<android::icu::text::RelativeDateTimeFormatter>>(locale, nf, style, capitalizationContext); }
	static jni::ref<android::icu::text::RelativeDateTimeFormatter> getInstance(jni::ref<java::util::Locale> locale, jni::ref<android::icu::text::NumberFormat> nf) { return call_static_method<"getInstance", jni::ref<android::icu::text::RelativeDateTimeFormatter>>(locale, nf); }
	jni::ref<java::lang::String> format(jdouble quantity, jni::ref<android::icu::text::RelativeDateTimeFormatter_Direction> p2, jni::ref<android::icu::text::RelativeDateTimeFormatter_RelativeUnit> direction) { return call_method<"format", jni::ref<java::lang::String>>(quantity, p2, direction); }
	jni::ref<android::icu::text::RelativeDateTimeFormatter_FormattedRelativeDateTime> formatToValue(jdouble quantity, jni::ref<android::icu::text::RelativeDateTimeFormatter_Direction> p2, jni::ref<android::icu::text::RelativeDateTimeFormatter_RelativeUnit> direction) { return call_method<"formatToValue", jni::ref<android::icu::text::RelativeDateTimeFormatter_FormattedRelativeDateTime>>(quantity, p2, direction); }
	jni::ref<java::lang::String> formatNumeric(jdouble offset, jni::ref<android::icu::text::RelativeDateTimeFormatter_RelativeDateTimeUnit> p2) { return call_method<"formatNumeric", jni::ref<java::lang::String>>(offset, p2); }
	jni::ref<android::icu::text::RelativeDateTimeFormatter_FormattedRelativeDateTime> formatNumericToValue(jdouble offset, jni::ref<android::icu::text::RelativeDateTimeFormatter_RelativeDateTimeUnit> p2) { return call_method<"formatNumericToValue", jni::ref<android::icu::text::RelativeDateTimeFormatter_FormattedRelativeDateTime>>(offset, p2); }
	jni::ref<java::lang::String> format(jni::ref<android::icu::text::RelativeDateTimeFormatter_Direction> direction, jni::ref<android::icu::text::RelativeDateTimeFormatter_AbsoluteUnit> unit) { return call_method<"format", jni::ref<java::lang::String>>(direction, unit); }
	jni::ref<android::icu::text::RelativeDateTimeFormatter_FormattedRelativeDateTime> formatToValue(jni::ref<android::icu::text::RelativeDateTimeFormatter_Direction> direction, jni::ref<android::icu::text::RelativeDateTimeFormatter_AbsoluteUnit> unit) { return call_method<"formatToValue", jni::ref<android::icu::text::RelativeDateTimeFormatter_FormattedRelativeDateTime>>(direction, unit); }
	jni::ref<java::lang::String> format(jdouble offset, jni::ref<android::icu::text::RelativeDateTimeFormatter_RelativeDateTimeUnit> p2) { return call_method<"format", jni::ref<java::lang::String>>(offset, p2); }
	jni::ref<android::icu::text::RelativeDateTimeFormatter_FormattedRelativeDateTime> formatToValue(jdouble offset, jni::ref<android::icu::text::RelativeDateTimeFormatter_RelativeDateTimeUnit> p2) { return call_method<"formatToValue", jni::ref<android::icu::text::RelativeDateTimeFormatter_FormattedRelativeDateTime>>(offset, p2); }
	jni::ref<java::lang::String> combineDateAndTime(jni::ref<java::lang::String> relativeDateString, jni::ref<java::lang::String> timeString) { return call_method<"combineDateAndTime", jni::ref<java::lang::String>>(relativeDateString, timeString); }
	jni::ref<android::icu::text::NumberFormat> getNumberFormat() { return call_method<"getNumberFormat", jni::ref<android::icu::text::NumberFormat>>(); }
	jni::ref<android::icu::text::DisplayContext> getCapitalizationContext() { return call_method<"getCapitalizationContext", jni::ref<android::icu::text::DisplayContext>>(); }
	jni::ref<android::icu::text::RelativeDateTimeFormatter_Style> getFormatStyle() { return call_method<"getFormatStyle", jni::ref<android::icu::text::RelativeDateTimeFormatter_Style>>(); }

protected:

	RelativeDateTimeFormatter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ICU_TEXT_RELATIVEDATETIMEFORMATTER
