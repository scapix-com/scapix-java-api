// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/icu/text/UFormat.h>

#ifndef SCAPIX_JAVA_API_ANDROID_ICU_TEXT_PLURALFORMAT_FWD
#define SCAPIX_JAVA_API_ANDROID_ICU_TEXT_PLURALFORMAT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::icu::text { class PluralFormat; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::icu::text::PluralFormat>
{
	static constexpr fixed_string class_name = "android/icu/text/PluralFormat";
	using base_classes = std::tuple<scapix::java_api::android::icu::text::UFormat>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ICU_TEXT_PLURALFORMAT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_ICU_TEXT_PLURALFORMAT)
#define SCAPIX_JAVA_API_ANDROID_ICU_TEXT_PLURALFORMAT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/icu/text/NumberFormat.h>
#include <scapix/java_api/android/icu/text/PluralRules.h>
#include <scapix/java_api/android/icu/text/PluralRules_PluralType.h>
#include <scapix/java_api/android/icu/util/ULocale.h>
#include <scapix/java_api/java/lang/Number.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/StringBuffer.h>
#include <scapix/java_api/java/text/FieldPosition.h>
#include <scapix/java_api/java/text/ParsePosition.h>
#include <scapix/java_api/java/util/Locale.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::icu::text::PluralFormat : public jni::object_base<"android/icu/text/PluralFormat",
	android::icu::text::UFormat>
{
public:

	static jni::ref<android::icu::text::PluralFormat> new_object() { return base_::new_object(); }
	static jni::ref<android::icu::text::PluralFormat> new_object(jni::ref<android::icu::util::ULocale> ulocale) { return base_::new_object(ulocale); }
	static jni::ref<android::icu::text::PluralFormat> new_object(jni::ref<java::util::Locale> locale) { return base_::new_object(locale); }
	static jni::ref<android::icu::text::PluralFormat> new_object(jni::ref<android::icu::text::PluralRules> rules) { return base_::new_object(rules); }
	static jni::ref<android::icu::text::PluralFormat> new_object(jni::ref<android::icu::util::ULocale> ulocale, jni::ref<android::icu::text::PluralRules> rules) { return base_::new_object(ulocale, rules); }
	static jni::ref<android::icu::text::PluralFormat> new_object(jni::ref<java::util::Locale> locale, jni::ref<android::icu::text::PluralRules> rules) { return base_::new_object(locale, rules); }
	static jni::ref<android::icu::text::PluralFormat> new_object(jni::ref<android::icu::util::ULocale> ulocale, jni::ref<android::icu::text::PluralRules_PluralType> type) { return base_::new_object(ulocale, type); }
	static jni::ref<android::icu::text::PluralFormat> new_object(jni::ref<java::util::Locale> locale, jni::ref<android::icu::text::PluralRules_PluralType> type) { return base_::new_object(locale, type); }
	static jni::ref<android::icu::text::PluralFormat> new_object(jni::ref<java::lang::String> pattern) { return base_::new_object(pattern); }
	static jni::ref<android::icu::text::PluralFormat> new_object(jni::ref<android::icu::util::ULocale> ulocale, jni::ref<java::lang::String> pattern) { return base_::new_object(ulocale, pattern); }
	static jni::ref<android::icu::text::PluralFormat> new_object(jni::ref<android::icu::text::PluralRules> rules, jni::ref<java::lang::String> pattern) { return base_::new_object(rules, pattern); }
	static jni::ref<android::icu::text::PluralFormat> new_object(jni::ref<android::icu::util::ULocale> ulocale, jni::ref<android::icu::text::PluralRules> rules, jni::ref<java::lang::String> pattern) { return base_::new_object(ulocale, rules, pattern); }
	static jni::ref<android::icu::text::PluralFormat> new_object(jni::ref<android::icu::util::ULocale> ulocale, jni::ref<android::icu::text::PluralRules_PluralType> type, jni::ref<java::lang::String> pattern) { return base_::new_object(ulocale, type, pattern); }
	void applyPattern(jni::ref<java::lang::String> pattern) { return call_method<"applyPattern", void>(pattern); }
	jni::ref<java::lang::String> toPattern() { return call_method<"toPattern", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> format(jdouble number) { return call_method<"format", jni::ref<java::lang::String>>(number); }
	jni::ref<java::lang::StringBuffer> format(jni::ref<java::lang::Object> number, jni::ref<java::lang::StringBuffer> toAppendTo, jni::ref<java::text::FieldPosition> pos) { return call_method<"format", jni::ref<java::lang::StringBuffer>>(number, toAppendTo, pos); }
	jni::ref<java::lang::Number> parse(jni::ref<java::lang::String> text, jni::ref<java::text::ParsePosition> parsePosition) { return call_method<"parse", jni::ref<java::lang::Number>>(text, parsePosition); }
	jni::ref<java::lang::Object> parseObject(jni::ref<java::lang::String> source, jni::ref<java::text::ParsePosition> pos) { return call_method<"parseObject", jni::ref<java::lang::Object>>(source, pos); }
	void setNumberFormat(jni::ref<android::icu::text::NumberFormat> format) { return call_method<"setNumberFormat", void>(format); }
	jboolean equals(jni::ref<java::lang::Object> rhs) { return call_method<"equals", jboolean>(rhs); }
	jboolean equals(jni::ref<android::icu::text::PluralFormat> rhs) { return call_method<"equals", jboolean>(rhs); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	PluralFormat(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ICU_TEXT_PLURALFORMAT
