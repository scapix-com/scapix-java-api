// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/icu/text/NumberFormat.h>

#ifndef SCAPIX_JAVA_API_ANDROID_ICU_TEXT_DECIMALFORMAT_FWD
#define SCAPIX_JAVA_API_ANDROID_ICU_TEXT_DECIMALFORMAT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::icu::text { class DecimalFormat; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::icu::text::DecimalFormat>
{
	static constexpr fixed_string class_name = "android/icu/text/DecimalFormat";
	using base_classes = std::tuple<scapix::java_api::android::icu::text::NumberFormat>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ICU_TEXT_DECIMALFORMAT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_ICU_TEXT_DECIMALFORMAT)
#define SCAPIX_JAVA_API_ANDROID_ICU_TEXT_DECIMALFORMAT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/icu/math/BigDecimal.h>
#include <scapix/java_api/android/icu/math/MathContext.h>
#include <scapix/java_api/android/icu/text/CurrencyPluralInfo.h>
#include <scapix/java_api/android/icu/text/DecimalFormatSymbols.h>
#include <scapix/java_api/android/icu/util/Currency.h>
#include <scapix/java_api/android/icu/util/Currency_CurrencyUsage.h>
#include <scapix/java_api/android/icu/util/CurrencyAmount.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/Number.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/StringBuffer.h>
#include <scapix/java_api/java/math/BigDecimal.h>
#include <scapix/java_api/java/math/BigInteger.h>
#include <scapix/java_api/java/math/MathContext.h>
#include <scapix/java_api/java/text/AttributedCharacterIterator.h>
#include <scapix/java_api/java/text/FieldPosition.h>
#include <scapix/java_api/java/text/ParsePosition.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::icu::text::DecimalFormat : public jni::object_base<"android/icu/text/DecimalFormat",
	android::icu::text::NumberFormat>
{
public:

	static jint PAD_AFTER_PREFIX() { return get_static_field<"PAD_AFTER_PREFIX", jint>(); }
	static jint PAD_AFTER_SUFFIX() { return get_static_field<"PAD_AFTER_SUFFIX", jint>(); }
	static jint PAD_BEFORE_PREFIX() { return get_static_field<"PAD_BEFORE_PREFIX", jint>(); }
	static jint PAD_BEFORE_SUFFIX() { return get_static_field<"PAD_BEFORE_SUFFIX", jint>(); }

	static jni::ref<android::icu::text::DecimalFormat> new_object() { return base_::new_object(); }
	static jni::ref<android::icu::text::DecimalFormat> new_object(jni::ref<java::lang::String> pattern) { return base_::new_object(pattern); }
	static jni::ref<android::icu::text::DecimalFormat> new_object(jni::ref<java::lang::String> pattern, jni::ref<android::icu::text::DecimalFormatSymbols> symbols) { return base_::new_object(pattern, symbols); }
	static jni::ref<android::icu::text::DecimalFormat> new_object(jni::ref<java::lang::String> pattern, jni::ref<android::icu::text::DecimalFormatSymbols> symbols, jni::ref<android::icu::text::CurrencyPluralInfo> infoInput, jint style) { return base_::new_object(pattern, symbols, infoInput, style); }
	jni::ref<java::lang::StringBuffer> format(jdouble number, jni::ref<java::lang::StringBuffer> p2, jni::ref<java::text::FieldPosition> result) { return call_method<"format", jni::ref<java::lang::StringBuffer>>(number, p2, result); }
	jni::ref<java::lang::StringBuffer> format(jlong number, jni::ref<java::lang::StringBuffer> p2, jni::ref<java::text::FieldPosition> result) { return call_method<"format", jni::ref<java::lang::StringBuffer>>(number, p2, result); }
	jni::ref<java::lang::StringBuffer> format(jni::ref<java::math::BigInteger> number, jni::ref<java::lang::StringBuffer> result, jni::ref<java::text::FieldPosition> fieldPosition) { return call_method<"format", jni::ref<java::lang::StringBuffer>>(number, result, fieldPosition); }
	jni::ref<java::lang::StringBuffer> format(jni::ref<java::math::BigDecimal> number, jni::ref<java::lang::StringBuffer> result, jni::ref<java::text::FieldPosition> fieldPosition) { return call_method<"format", jni::ref<java::lang::StringBuffer>>(number, result, fieldPosition); }
	jni::ref<java::lang::StringBuffer> format(jni::ref<android::icu::math::BigDecimal> number, jni::ref<java::lang::StringBuffer> result, jni::ref<java::text::FieldPosition> fieldPosition) { return call_method<"format", jni::ref<java::lang::StringBuffer>>(number, result, fieldPosition); }
	jni::ref<java::lang::Number> parse(jni::ref<java::lang::String> text, jni::ref<java::text::ParsePosition> parsePosition) { return call_method<"parse", jni::ref<java::lang::Number>>(text, parsePosition); }
	jni::ref<android::icu::util::CurrencyAmount> parseCurrency(jni::ref<java::lang::CharSequence> text, jni::ref<java::text::ParsePosition> pos) { return call_method<"parseCurrency", jni::ref<android::icu::util::CurrencyAmount>>(text, pos); }
	jni::ref<android::icu::text::DecimalFormatSymbols> getDecimalFormatSymbols() { return call_method<"getDecimalFormatSymbols", jni::ref<android::icu::text::DecimalFormatSymbols>>(); }
	void setDecimalFormatSymbols(jni::ref<android::icu::text::DecimalFormatSymbols> newSymbols) { return call_method<"setDecimalFormatSymbols", void>(newSymbols); }
	jni::ref<java::lang::String> getPositivePrefix() { return call_method<"getPositivePrefix", jni::ref<java::lang::String>>(); }
	void setPositivePrefix(jni::ref<java::lang::String> newValue) { return call_method<"setPositivePrefix", void>(newValue); }
	jni::ref<java::lang::String> getNegativePrefix() { return call_method<"getNegativePrefix", jni::ref<java::lang::String>>(); }
	void setNegativePrefix(jni::ref<java::lang::String> newValue) { return call_method<"setNegativePrefix", void>(newValue); }
	jni::ref<java::lang::String> getPositiveSuffix() { return call_method<"getPositiveSuffix", jni::ref<java::lang::String>>(); }
	void setPositiveSuffix(jni::ref<java::lang::String> newValue) { return call_method<"setPositiveSuffix", void>(newValue); }
	jni::ref<java::lang::String> getNegativeSuffix() { return call_method<"getNegativeSuffix", jni::ref<java::lang::String>>(); }
	void setNegativeSuffix(jni::ref<java::lang::String> newValue) { return call_method<"setNegativeSuffix", void>(newValue); }
	jint getMultiplier() { return call_method<"getMultiplier", jint>(); }
	void setMultiplier(jint newValue) { return call_method<"setMultiplier", void>(newValue); }
	jni::ref<java::math::BigDecimal> getRoundingIncrement() { return call_method<"getRoundingIncrement", jni::ref<java::math::BigDecimal>>(); }
	void setRoundingIncrement(jni::ref<java::math::BigDecimal> newValue) { return call_method<"setRoundingIncrement", void>(newValue); }
	void setRoundingIncrement(jni::ref<android::icu::math::BigDecimal> newValue) { return call_method<"setRoundingIncrement", void>(newValue); }
	void setRoundingIncrement(jdouble newValue) { return call_method<"setRoundingIncrement", void>(newValue); }
	jint getRoundingMode() { return call_method<"getRoundingMode", jint>(); }
	void setRoundingMode(jint roundingMode) { return call_method<"setRoundingMode", void>(roundingMode); }
	jint getFormatWidth() { return call_method<"getFormatWidth", jint>(); }
	void setFormatWidth(jint width) { return call_method<"setFormatWidth", void>(width); }
	jchar getPadCharacter() { return call_method<"getPadCharacter", jchar>(); }
	void setPadCharacter(jchar padChar) { return call_method<"setPadCharacter", void>(padChar); }
	jint getPadPosition() { return call_method<"getPadPosition", jint>(); }
	void setPadPosition(jint padPos) { return call_method<"setPadPosition", void>(padPos); }
	jboolean isScientificNotation() { return call_method<"isScientificNotation", jboolean>(); }
	void setScientificNotation(jboolean useScientific) { return call_method<"setScientificNotation", void>(useScientific); }
	jbyte getMinimumExponentDigits() { return call_method<"getMinimumExponentDigits", jbyte>(); }
	void setMinimumExponentDigits(jbyte minExpDig) { return call_method<"setMinimumExponentDigits", void>(minExpDig); }
	jboolean isExponentSignAlwaysShown() { return call_method<"isExponentSignAlwaysShown", jboolean>(); }
	void setExponentSignAlwaysShown(jboolean expSignAlways) { return call_method<"setExponentSignAlwaysShown", void>(expSignAlways); }
	jint getGroupingSize() { return call_method<"getGroupingSize", jint>(); }
	void setGroupingSize(jint newValue) { return call_method<"setGroupingSize", void>(newValue); }
	jint getSecondaryGroupingSize() { return call_method<"getSecondaryGroupingSize", jint>(); }
	void setSecondaryGroupingSize(jint newValue) { return call_method<"setSecondaryGroupingSize", void>(newValue); }
	jni::ref<android::icu::math::MathContext> getMathContextICU() { return call_method<"getMathContextICU", jni::ref<android::icu::math::MathContext>>(); }
	jni::ref<java::math::MathContext> getMathContext() { return call_method<"getMathContext", jni::ref<java::math::MathContext>>(); }
	void setMathContextICU(jni::ref<android::icu::math::MathContext> newValue) { return call_method<"setMathContextICU", void>(newValue); }
	void setMathContext(jni::ref<java::math::MathContext> newValue) { return call_method<"setMathContext", void>(newValue); }
	jboolean isDecimalSeparatorAlwaysShown() { return call_method<"isDecimalSeparatorAlwaysShown", jboolean>(); }
	void setDecimalPatternMatchRequired(jboolean value) { return call_method<"setDecimalPatternMatchRequired", void>(value); }
	jboolean isDecimalPatternMatchRequired() { return call_method<"isDecimalPatternMatchRequired", jboolean>(); }
	void setDecimalSeparatorAlwaysShown(jboolean newValue) { return call_method<"setDecimalSeparatorAlwaysShown", void>(newValue); }
	jni::ref<android::icu::text::CurrencyPluralInfo> getCurrencyPluralInfo() { return call_method<"getCurrencyPluralInfo", jni::ref<android::icu::text::CurrencyPluralInfo>>(); }
	void setCurrencyPluralInfo(jni::ref<android::icu::text::CurrencyPluralInfo> newInfo) { return call_method<"setCurrencyPluralInfo", void>(newInfo); }
	jni::ref<java::lang::Object> clone() { return call_method<"clone", jni::ref<java::lang::Object>>(); }
	jboolean equals(jni::ref<java::lang::Object> obj) { return call_method<"equals", jboolean>(obj); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::String> toPattern() { return call_method<"toPattern", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> toLocalizedPattern() { return call_method<"toLocalizedPattern", jni::ref<java::lang::String>>(); }
	jni::ref<java::text::AttributedCharacterIterator> formatToCharacterIterator(jni::ref<java::lang::Object> obj) { return call_method<"formatToCharacterIterator", jni::ref<java::text::AttributedCharacterIterator>>(obj); }
	void applyPattern(jni::ref<java::lang::String> pattern) { return call_method<"applyPattern", void>(pattern); }
	void applyLocalizedPattern(jni::ref<java::lang::String> pattern) { return call_method<"applyLocalizedPattern", void>(pattern); }
	void setMaximumIntegerDigits(jint newValue) { return call_method<"setMaximumIntegerDigits", void>(newValue); }
	void setMinimumIntegerDigits(jint newValue) { return call_method<"setMinimumIntegerDigits", void>(newValue); }
	jint getMinimumSignificantDigits() { return call_method<"getMinimumSignificantDigits", jint>(); }
	jint getMaximumSignificantDigits() { return call_method<"getMaximumSignificantDigits", jint>(); }
	void setMinimumSignificantDigits(jint min) { return call_method<"setMinimumSignificantDigits", void>(min); }
	void setMaximumSignificantDigits(jint max) { return call_method<"setMaximumSignificantDigits", void>(max); }
	jboolean areSignificantDigitsUsed() { return call_method<"areSignificantDigitsUsed", jboolean>(); }
	void setSignificantDigitsUsed(jboolean useSignificantDigits) { return call_method<"setSignificantDigitsUsed", void>(useSignificantDigits); }
	void setCurrency(jni::ref<android::icu::util::Currency> theCurrency) { return call_method<"setCurrency", void>(theCurrency); }
	void setCurrencyUsage(jni::ref<android::icu::util::Currency_CurrencyUsage> newUsage) { return call_method<"setCurrencyUsage", void>(newUsage); }
	jni::ref<android::icu::util::Currency_CurrencyUsage> getCurrencyUsage() { return call_method<"getCurrencyUsage", jni::ref<android::icu::util::Currency_CurrencyUsage>>(); }
	void setMaximumFractionDigits(jint newValue) { return call_method<"setMaximumFractionDigits", void>(newValue); }
	void setMinimumFractionDigits(jint newValue) { return call_method<"setMinimumFractionDigits", void>(newValue); }
	void setParseBigDecimal(jboolean value) { return call_method<"setParseBigDecimal", void>(value); }
	jboolean isParseBigDecimal() { return call_method<"isParseBigDecimal", jboolean>(); }
	void setParseMaxDigits(jint newValue) { return call_method<"setParseMaxDigits", void>(newValue); }
	jint getParseMaxDigits() { return call_method<"getParseMaxDigits", jint>(); }

protected:

	DecimalFormat(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ICU_TEXT_DECIMALFORMAT