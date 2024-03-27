// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_ICU_NUMBER_PRECISION_FWD
#define SCAPIX_JAVA_API_ANDROID_ICU_NUMBER_PRECISION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::icu::number { class Precision; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::icu::number::Precision>
{
	static constexpr fixed_string class_name = "android/icu/number/Precision";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ICU_NUMBER_PRECISION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_ICU_NUMBER_PRECISION)
#define SCAPIX_JAVA_API_ANDROID_ICU_NUMBER_PRECISION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/icu/number/CurrencyPrecision.h>
#include <scapix/java_api/android/icu/number/FractionPrecision.h>
#include <scapix/java_api/android/icu/number/NumberFormatter_TrailingZeroDisplay.h>
#include <scapix/java_api/android/icu/util/Currency_CurrencyUsage.h>
#include <scapix/java_api/java/math/BigDecimal.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::icu::number::Precision : public jni::object_base<"android/icu/number/Precision",
	java::lang::Object>
{
public:

	static jni::ref<android::icu::number::Precision> unlimited() { return call_static_method<"unlimited", jni::ref<android::icu::number::Precision>>(); }
	static jni::ref<android::icu::number::FractionPrecision> integer() { return call_static_method<"integer", jni::ref<android::icu::number::FractionPrecision>>(); }
	static jni::ref<android::icu::number::FractionPrecision> fixedFraction(jint minMaxFractionPlaces) { return call_static_method<"fixedFraction", jni::ref<android::icu::number::FractionPrecision>>(minMaxFractionPlaces); }
	static jni::ref<android::icu::number::FractionPrecision> minFraction(jint minFractionPlaces) { return call_static_method<"minFraction", jni::ref<android::icu::number::FractionPrecision>>(minFractionPlaces); }
	static jni::ref<android::icu::number::FractionPrecision> maxFraction(jint maxFractionPlaces) { return call_static_method<"maxFraction", jni::ref<android::icu::number::FractionPrecision>>(maxFractionPlaces); }
	static jni::ref<android::icu::number::FractionPrecision> minMaxFraction(jint minFractionPlaces, jint maxFractionPlaces) { return call_static_method<"minMaxFraction", jni::ref<android::icu::number::FractionPrecision>>(minFractionPlaces, maxFractionPlaces); }
	static jni::ref<android::icu::number::Precision> fixedSignificantDigits(jint minMaxSignificantDigits) { return call_static_method<"fixedSignificantDigits", jni::ref<android::icu::number::Precision>>(minMaxSignificantDigits); }
	static jni::ref<android::icu::number::Precision> minSignificantDigits(jint minSignificantDigits) { return call_static_method<"minSignificantDigits", jni::ref<android::icu::number::Precision>>(minSignificantDigits); }
	static jni::ref<android::icu::number::Precision> maxSignificantDigits(jint maxSignificantDigits) { return call_static_method<"maxSignificantDigits", jni::ref<android::icu::number::Precision>>(maxSignificantDigits); }
	static jni::ref<android::icu::number::Precision> minMaxSignificantDigits(jint minSignificantDigits, jint maxSignificantDigits) { return call_static_method<"minMaxSignificantDigits", jni::ref<android::icu::number::Precision>>(minSignificantDigits, maxSignificantDigits); }
	static jni::ref<android::icu::number::Precision> increment(jni::ref<java::math::BigDecimal> roundingIncrement) { return call_static_method<"increment", jni::ref<android::icu::number::Precision>>(roundingIncrement); }
	static jni::ref<android::icu::number::CurrencyPrecision> currency(jni::ref<android::icu::util::Currency_CurrencyUsage> currencyUsage) { return call_static_method<"currency", jni::ref<android::icu::number::CurrencyPrecision>>(currencyUsage); }
	jni::ref<android::icu::number::Precision> trailingZeroDisplay(jni::ref<android::icu::number::NumberFormatter_TrailingZeroDisplay> trailingZeroDisplay) { return call_method<"trailingZeroDisplay", jni::ref<android::icu::number::Precision>>(trailingZeroDisplay); }

protected:

	Precision(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ICU_NUMBER_PRECISION