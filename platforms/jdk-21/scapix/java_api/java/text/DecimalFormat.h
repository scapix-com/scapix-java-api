// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/text/NumberFormat.h>

#ifndef SCAPIX_JAVA_API_JAVA_TEXT_DECIMALFORMAT_FWD
#define SCAPIX_JAVA_API_JAVA_TEXT_DECIMALFORMAT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::text { class DecimalFormat; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::text::DecimalFormat>
{
	static constexpr fixed_string class_name = "java/text/DecimalFormat";
	using base_classes = std::tuple<scapix::java_api::java::text::NumberFormat>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TEXT_DECIMALFORMAT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_TEXT_DECIMALFORMAT)
#define SCAPIX_JAVA_API_JAVA_TEXT_DECIMALFORMAT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Number.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/StringBuffer.h>
#include <scapix/java_api/java/math/RoundingMode.h>
#include <scapix/java_api/java/text/AttributedCharacterIterator.h>
#include <scapix/java_api/java/text/DecimalFormatSymbols.h>
#include <scapix/java_api/java/text/FieldPosition.h>
#include <scapix/java_api/java/text/ParsePosition.h>
#include <scapix/java_api/java/util/Currency.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::text::DecimalFormat : public jni::object_base<"java/text/DecimalFormat",
	java::text::NumberFormat>
{
public:

	static jni::ref<java::text::DecimalFormat> new_object() { return base_::new_object(); }
	static jni::ref<java::text::DecimalFormat> new_object(jni::ref<java::lang::String> pattern) { return base_::new_object(pattern); }
	static jni::ref<java::text::DecimalFormat> new_object(jni::ref<java::lang::String> pattern, jni::ref<java::text::DecimalFormatSymbols> symbols) { return base_::new_object(pattern, symbols); }
	jni::ref<java::lang::StringBuffer> format(jni::ref<java::lang::Object> number, jni::ref<java::lang::StringBuffer> toAppendTo, jni::ref<java::text::FieldPosition> pos) { return call_method<"format", jni::ref<java::lang::StringBuffer>>(number, toAppendTo, pos); }
	jni::ref<java::lang::StringBuffer> format(jdouble number, jni::ref<java::lang::StringBuffer> p2, jni::ref<java::text::FieldPosition> result) { return call_method<"format", jni::ref<java::lang::StringBuffer>>(number, p2, result); }
	jni::ref<java::lang::StringBuffer> format(jlong number, jni::ref<java::lang::StringBuffer> p2, jni::ref<java::text::FieldPosition> result) { return call_method<"format", jni::ref<java::lang::StringBuffer>>(number, p2, result); }
	jni::ref<java::text::AttributedCharacterIterator> formatToCharacterIterator(jni::ref<java::lang::Object> obj) { return call_method<"formatToCharacterIterator", jni::ref<java::text::AttributedCharacterIterator>>(obj); }
	jni::ref<java::lang::Number> parse(jni::ref<java::lang::String> text, jni::ref<java::text::ParsePosition> pos) { return call_method<"parse", jni::ref<java::lang::Number>>(text, pos); }
	jni::ref<java::text::DecimalFormatSymbols> getDecimalFormatSymbols() { return call_method<"getDecimalFormatSymbols", jni::ref<java::text::DecimalFormatSymbols>>(); }
	void setDecimalFormatSymbols(jni::ref<java::text::DecimalFormatSymbols> newSymbols) { return call_method<"setDecimalFormatSymbols", void>(newSymbols); }
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
	void setGroupingUsed(jboolean newValue) { return call_method<"setGroupingUsed", void>(newValue); }
	jint getGroupingSize() { return call_method<"getGroupingSize", jint>(); }
	void setGroupingSize(jint newValue) { return call_method<"setGroupingSize", void>(newValue); }
	jboolean isDecimalSeparatorAlwaysShown() { return call_method<"isDecimalSeparatorAlwaysShown", jboolean>(); }
	void setDecimalSeparatorAlwaysShown(jboolean newValue) { return call_method<"setDecimalSeparatorAlwaysShown", void>(newValue); }
	jboolean isParseBigDecimal() { return call_method<"isParseBigDecimal", jboolean>(); }
	void setParseBigDecimal(jboolean newValue) { return call_method<"setParseBigDecimal", void>(newValue); }
	jni::ref<java::lang::Object> clone() { return call_method<"clone", jni::ref<java::lang::Object>>(); }
	jboolean equals(jni::ref<java::lang::Object> obj) { return call_method<"equals", jboolean>(obj); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::String> toPattern() { return call_method<"toPattern", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> toLocalizedPattern() { return call_method<"toLocalizedPattern", jni::ref<java::lang::String>>(); }
	void applyPattern(jni::ref<java::lang::String> pattern) { return call_method<"applyPattern", void>(pattern); }
	void applyLocalizedPattern(jni::ref<java::lang::String> pattern) { return call_method<"applyLocalizedPattern", void>(pattern); }
	void setMaximumIntegerDigits(jint newValue) { return call_method<"setMaximumIntegerDigits", void>(newValue); }
	void setMinimumIntegerDigits(jint newValue) { return call_method<"setMinimumIntegerDigits", void>(newValue); }
	void setMaximumFractionDigits(jint newValue) { return call_method<"setMaximumFractionDigits", void>(newValue); }
	void setMinimumFractionDigits(jint newValue) { return call_method<"setMinimumFractionDigits", void>(newValue); }
	jint getMaximumIntegerDigits() { return call_method<"getMaximumIntegerDigits", jint>(); }
	jint getMinimumIntegerDigits() { return call_method<"getMinimumIntegerDigits", jint>(); }
	jint getMaximumFractionDigits() { return call_method<"getMaximumFractionDigits", jint>(); }
	jint getMinimumFractionDigits() { return call_method<"getMinimumFractionDigits", jint>(); }
	jni::ref<java::util::Currency> getCurrency() { return call_method<"getCurrency", jni::ref<java::util::Currency>>(); }
	void setCurrency(jni::ref<java::util::Currency> currency) { return call_method<"setCurrency", void>(currency); }
	jni::ref<java::math::RoundingMode> getRoundingMode() { return call_method<"getRoundingMode", jni::ref<java::math::RoundingMode>>(); }
	void setRoundingMode(jni::ref<java::math::RoundingMode> roundingMode) { return call_method<"setRoundingMode", void>(roundingMode); }

protected:

	DecimalFormat(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TEXT_DECIMALFORMAT
