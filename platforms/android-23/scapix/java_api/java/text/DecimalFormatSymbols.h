// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/Cloneable.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVA_TEXT_DECIMALFORMATSYMBOLS_FWD
#define SCAPIX_JAVA_API_JAVA_TEXT_DECIMALFORMATSYMBOLS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::text { class DecimalFormatSymbols; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::text::DecimalFormatSymbols>
{
	static constexpr fixed_string class_name = "java/text/DecimalFormatSymbols";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::Cloneable, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TEXT_DECIMALFORMATSYMBOLS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_TEXT_DECIMALFORMATSYMBOLS)
#define SCAPIX_JAVA_API_JAVA_TEXT_DECIMALFORMATSYMBOLS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Currency.h>
#include <scapix/java_api/java/util/Locale.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::text::DecimalFormatSymbols : public jni::object_base<"java/text/DecimalFormatSymbols",
	java::lang::Object,
	java::lang::Cloneable,
	java::io::Serializable>
{
public:

	static jni::ref<java::text::DecimalFormatSymbols> new_object() { return base_::new_object(); }
	static jni::ref<java::text::DecimalFormatSymbols> new_object(jni::ref<java::util::Locale> locale) { return base_::new_object(locale); }
	static jni::ref<java::text::DecimalFormatSymbols> getInstance() { return call_static_method<"getInstance", jni::ref<java::text::DecimalFormatSymbols>>(); }
	static jni::ref<java::text::DecimalFormatSymbols> getInstance(jni::ref<java::util::Locale> locale) { return call_static_method<"getInstance", jni::ref<java::text::DecimalFormatSymbols>>(locale); }
	static jni::ref<jni::array<java::util::Locale>> getAvailableLocales() { return call_static_method<"getAvailableLocales", jni::ref<jni::array<java::util::Locale>>>(); }
	jni::ref<java::lang::Object> clone() { return call_method<"clone", jni::ref<java::lang::Object>>(); }
	jboolean equals(jni::ref<java::lang::Object> object) { return call_method<"equals", jboolean>(object); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jni::ref<java::util::Currency> getCurrency() { return call_method<"getCurrency", jni::ref<java::util::Currency>>(); }
	jni::ref<java::lang::String> getInternationalCurrencySymbol() { return call_method<"getInternationalCurrencySymbol", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getCurrencySymbol() { return call_method<"getCurrencySymbol", jni::ref<java::lang::String>>(); }
	jchar getDecimalSeparator() { return call_method<"getDecimalSeparator", jchar>(); }
	jchar getDigit() { return call_method<"getDigit", jchar>(); }
	jchar getGroupingSeparator() { return call_method<"getGroupingSeparator", jchar>(); }
	jni::ref<java::lang::String> getInfinity() { return call_method<"getInfinity", jni::ref<java::lang::String>>(); }
	jchar getMinusSign() { return call_method<"getMinusSign", jchar>(); }
	jchar getMonetaryDecimalSeparator() { return call_method<"getMonetaryDecimalSeparator", jchar>(); }
	jni::ref<java::lang::String> getNaN() { return call_method<"getNaN", jni::ref<java::lang::String>>(); }
	jchar getPatternSeparator() { return call_method<"getPatternSeparator", jchar>(); }
	jchar getPercent() { return call_method<"getPercent", jchar>(); }
	jchar getPerMill() { return call_method<"getPerMill", jchar>(); }
	jchar getZeroDigit() { return call_method<"getZeroDigit", jchar>(); }
	jni::ref<java::lang::String> getExponentSeparator() { return call_method<"getExponentSeparator", jni::ref<java::lang::String>>(); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	void setCurrency(jni::ref<java::util::Currency> currency) { return call_method<"setCurrency", void>(currency); }
	void setInternationalCurrencySymbol(jni::ref<java::lang::String> value) { return call_method<"setInternationalCurrencySymbol", void>(value); }
	void setCurrencySymbol(jni::ref<java::lang::String> value) { return call_method<"setCurrencySymbol", void>(value); }
	void setDecimalSeparator(jchar value) { return call_method<"setDecimalSeparator", void>(value); }
	void setDigit(jchar value) { return call_method<"setDigit", void>(value); }
	void setGroupingSeparator(jchar value) { return call_method<"setGroupingSeparator", void>(value); }
	void setInfinity(jni::ref<java::lang::String> value) { return call_method<"setInfinity", void>(value); }
	void setMinusSign(jchar value) { return call_method<"setMinusSign", void>(value); }
	void setMonetaryDecimalSeparator(jchar value) { return call_method<"setMonetaryDecimalSeparator", void>(value); }
	void setNaN(jni::ref<java::lang::String> value) { return call_method<"setNaN", void>(value); }
	void setPatternSeparator(jchar value) { return call_method<"setPatternSeparator", void>(value); }
	void setPercent(jchar value) { return call_method<"setPercent", void>(value); }
	void setPerMill(jchar value) { return call_method<"setPerMill", void>(value); }
	void setZeroDigit(jchar value) { return call_method<"setZeroDigit", void>(value); }
	void setExponentSeparator(jni::ref<java::lang::String> value) { return call_method<"setExponentSeparator", void>(value); }

protected:

	DecimalFormatSymbols(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TEXT_DECIMALFORMATSYMBOLS
