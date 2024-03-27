// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/icu/util/MeasureUnit.h>

#ifndef SCAPIX_JAVA_API_ANDROID_ICU_UTIL_CURRENCY_FWD
#define SCAPIX_JAVA_API_ANDROID_ICU_UTIL_CURRENCY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::icu::util { class Currency; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::icu::util::Currency>
{
	static constexpr fixed_string class_name = "android/icu/util/Currency";
	using base_classes = std::tuple<scapix::java_api::android::icu::util::MeasureUnit>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ICU_UTIL_CURRENCY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_ICU_UTIL_CURRENCY)
#define SCAPIX_JAVA_API_ANDROID_ICU_UTIL_CURRENCY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/icu/util/Currency_CurrencyUsage.h>
#include <scapix/java_api/android/icu/util/ULocale.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Currency.h>
#include <scapix/java_api/java/util/Date.h>
#include <scapix/java_api/java/util/Locale.h>
#include <scapix/java_api/java/util/Set.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::icu::util::Currency : public jni::object_base<"android/icu/util/Currency",
	android::icu::util::MeasureUnit>
{
public:

	using CurrencyUsage = Currency_CurrencyUsage;

	static jint LONG_NAME() { return get_static_field<"LONG_NAME", jint>(); }
	static jint PLURAL_LONG_NAME() { return get_static_field<"PLURAL_LONG_NAME", jint>(); }
	static jint SYMBOL_NAME() { return get_static_field<"SYMBOL_NAME", jint>(); }

	static jni::ref<android::icu::util::Currency> getInstance(jni::ref<java::util::Locale> locale) { return call_static_method<"getInstance", jni::ref<android::icu::util::Currency>>(locale); }
	static jni::ref<android::icu::util::Currency> getInstance(jni::ref<android::icu::util::ULocale> locale) { return call_static_method<"getInstance", jni::ref<android::icu::util::Currency>>(locale); }
	static jni::ref<jni::array<java::lang::String>> getAvailableCurrencyCodes(jni::ref<android::icu::util::ULocale> loc, jni::ref<java::util::Date> d) { return call_static_method<"getAvailableCurrencyCodes", jni::ref<jni::array<java::lang::String>>>(loc, d); }
	static jni::ref<jni::array<java::lang::String>> getAvailableCurrencyCodes(jni::ref<java::util::Locale> loc, jni::ref<java::util::Date> d) { return call_static_method<"getAvailableCurrencyCodes", jni::ref<jni::array<java::lang::String>>>(loc, d); }
	static jni::ref<java::util::Set> getAvailableCurrencies() { return call_static_method<"getAvailableCurrencies", jni::ref<java::util::Set>>(); }
	static jni::ref<android::icu::util::Currency> getInstance(jni::ref<java::lang::String> theISOCode) { return call_static_method<"getInstance", jni::ref<android::icu::util::Currency>>(theISOCode); }
	static jni::ref<android::icu::util::Currency> fromJavaCurrency(jni::ref<java::util::Currency> currency) { return call_static_method<"fromJavaCurrency", jni::ref<android::icu::util::Currency>>(currency); }
	jni::ref<java::util::Currency> toJavaCurrency() { return call_method<"toJavaCurrency", jni::ref<java::util::Currency>>(); }
	static jni::ref<jni::array<java::util::Locale>> getAvailableLocales() { return call_static_method<"getAvailableLocales", jni::ref<jni::array<java::util::Locale>>>(); }
	static jni::ref<jni::array<android::icu::util::ULocale>> getAvailableULocales() { return call_static_method<"getAvailableULocales", jni::ref<jni::array<android::icu::util::ULocale>>>(); }
	static jni::ref<jni::array<java::lang::String>> getKeywordValuesForLocale(jni::ref<java::lang::String> key, jni::ref<android::icu::util::ULocale> locale, jboolean commonlyUsed) { return call_static_method<"getKeywordValuesForLocale", jni::ref<jni::array<java::lang::String>>>(key, locale, commonlyUsed); }
	jni::ref<java::lang::String> getCurrencyCode() { return call_method<"getCurrencyCode", jni::ref<java::lang::String>>(); }
	jint getNumericCode() { return call_method<"getNumericCode", jint>(); }
	jni::ref<java::lang::String> getSymbol() { return call_method<"getSymbol", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getSymbol(jni::ref<java::util::Locale> loc) { return call_method<"getSymbol", jni::ref<java::lang::String>>(loc); }
	jni::ref<java::lang::String> getSymbol(jni::ref<android::icu::util::ULocale> uloc) { return call_method<"getSymbol", jni::ref<java::lang::String>>(uloc); }
	jni::ref<java::lang::String> getName(jni::ref<java::util::Locale> locale, jint nameStyle, jni::ref<jni::array<jboolean>> isChoiceFormat) { return call_method<"getName", jni::ref<java::lang::String>>(locale, nameStyle, isChoiceFormat); }
	jni::ref<java::lang::String> getName(jni::ref<android::icu::util::ULocale> locale, jint nameStyle, jni::ref<jni::array<jboolean>> isChoiceFormat) { return call_method<"getName", jni::ref<java::lang::String>>(locale, nameStyle, isChoiceFormat); }
	jni::ref<java::lang::String> getName(jni::ref<java::util::Locale> locale, jint nameStyle, jni::ref<java::lang::String> pluralCount, jni::ref<jni::array<jboolean>> isChoiceFormat) { return call_method<"getName", jni::ref<java::lang::String>>(locale, nameStyle, pluralCount, isChoiceFormat); }
	jni::ref<java::lang::String> getName(jni::ref<android::icu::util::ULocale> locale, jint nameStyle, jni::ref<java::lang::String> pluralCount, jni::ref<jni::array<jboolean>> isChoiceFormat) { return call_method<"getName", jni::ref<java::lang::String>>(locale, nameStyle, pluralCount, isChoiceFormat); }
	jni::ref<java::lang::String> getDisplayName() { return call_method<"getDisplayName", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getDisplayName(jni::ref<java::util::Locale> locale) { return call_method<"getDisplayName", jni::ref<java::lang::String>>(locale); }
	jint getDefaultFractionDigits() { return call_method<"getDefaultFractionDigits", jint>(); }
	jint getDefaultFractionDigits(jni::ref<android::icu::util::Currency_CurrencyUsage> Usage) { return call_method<"getDefaultFractionDigits", jint>(Usage); }
	jdouble getRoundingIncrement() { return call_method<"getRoundingIncrement", jdouble>(); }
	jdouble getRoundingIncrement(jni::ref<android::icu::util::Currency_CurrencyUsage> Usage) { return call_method<"getRoundingIncrement", jdouble>(Usage); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	static jboolean isAvailable(jni::ref<java::lang::String> code, jni::ref<java::util::Date> from, jni::ref<java::util::Date> to) { return call_static_method<"isAvailable", jboolean>(code, from, to); }

protected:

	Currency(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ICU_UTIL_CURRENCY
