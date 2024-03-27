// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_ICU_UTIL_MEASUREUNIT_FWD
#define SCAPIX_JAVA_API_ANDROID_ICU_UTIL_MEASUREUNIT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::icu::util { class MeasureUnit; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::icu::util::MeasureUnit>
{
	static constexpr fixed_string class_name = "android/icu/util/MeasureUnit";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ICU_UTIL_MEASUREUNIT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_ICU_UTIL_MEASUREUNIT)
#define SCAPIX_JAVA_API_ANDROID_ICU_UTIL_MEASUREUNIT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/icu/util/TimeUnit.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Set.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::icu::util::MeasureUnit : public jni::object_base<"android/icu/util/MeasureUnit",
	java::lang::Object,
	java::io::Serializable>
{
public:

	static jni::ref<android::icu::util::MeasureUnit> ACRE() { return get_static_field<"ACRE", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> ACRE_FOOT() { return get_static_field<"ACRE_FOOT", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> AMPERE() { return get_static_field<"AMPERE", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> ARC_MINUTE() { return get_static_field<"ARC_MINUTE", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> ARC_SECOND() { return get_static_field<"ARC_SECOND", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> ASTRONOMICAL_UNIT() { return get_static_field<"ASTRONOMICAL_UNIT", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> ATMOSPHERE() { return get_static_field<"ATMOSPHERE", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> BIT() { return get_static_field<"BIT", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> BUSHEL() { return get_static_field<"BUSHEL", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> BYTE() { return get_static_field<"BYTE", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> CALORIE() { return get_static_field<"CALORIE", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> CARAT() { return get_static_field<"CARAT", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> CELSIUS() { return get_static_field<"CELSIUS", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> CENTILITER() { return get_static_field<"CENTILITER", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> CENTIMETER() { return get_static_field<"CENTIMETER", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> CENTURY() { return get_static_field<"CENTURY", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> CUBIC_CENTIMETER() { return get_static_field<"CUBIC_CENTIMETER", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> CUBIC_FOOT() { return get_static_field<"CUBIC_FOOT", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> CUBIC_INCH() { return get_static_field<"CUBIC_INCH", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> CUBIC_KILOMETER() { return get_static_field<"CUBIC_KILOMETER", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> CUBIC_METER() { return get_static_field<"CUBIC_METER", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> CUBIC_MILE() { return get_static_field<"CUBIC_MILE", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> CUBIC_YARD() { return get_static_field<"CUBIC_YARD", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> CUP() { return get_static_field<"CUP", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> CUP_METRIC() { return get_static_field<"CUP_METRIC", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::TimeUnit> DAY() { return get_static_field<"DAY", jni::ref<android::icu::util::TimeUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> DECILITER() { return get_static_field<"DECILITER", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> DECIMETER() { return get_static_field<"DECIMETER", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> DEGREE() { return get_static_field<"DEGREE", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> FAHRENHEIT() { return get_static_field<"FAHRENHEIT", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> FATHOM() { return get_static_field<"FATHOM", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> FLUID_OUNCE() { return get_static_field<"FLUID_OUNCE", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> FOODCALORIE() { return get_static_field<"FOODCALORIE", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> FOOT() { return get_static_field<"FOOT", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> FURLONG() { return get_static_field<"FURLONG", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> GALLON() { return get_static_field<"GALLON", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> GALLON_IMPERIAL() { return get_static_field<"GALLON_IMPERIAL", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> GENERIC_TEMPERATURE() { return get_static_field<"GENERIC_TEMPERATURE", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> GIGABIT() { return get_static_field<"GIGABIT", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> GIGABYTE() { return get_static_field<"GIGABYTE", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> GIGAHERTZ() { return get_static_field<"GIGAHERTZ", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> GIGAWATT() { return get_static_field<"GIGAWATT", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> GRAM() { return get_static_field<"GRAM", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> G_FORCE() { return get_static_field<"G_FORCE", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> HECTARE() { return get_static_field<"HECTARE", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> HECTOLITER() { return get_static_field<"HECTOLITER", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> HECTOPASCAL() { return get_static_field<"HECTOPASCAL", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> HERTZ() { return get_static_field<"HERTZ", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> HORSEPOWER() { return get_static_field<"HORSEPOWER", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::TimeUnit> HOUR() { return get_static_field<"HOUR", jni::ref<android::icu::util::TimeUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> INCH() { return get_static_field<"INCH", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> INCH_HG() { return get_static_field<"INCH_HG", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> JOULE() { return get_static_field<"JOULE", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> KARAT() { return get_static_field<"KARAT", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> KELVIN() { return get_static_field<"KELVIN", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> KILOBIT() { return get_static_field<"KILOBIT", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> KILOBYTE() { return get_static_field<"KILOBYTE", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> KILOCALORIE() { return get_static_field<"KILOCALORIE", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> KILOGRAM() { return get_static_field<"KILOGRAM", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> KILOHERTZ() { return get_static_field<"KILOHERTZ", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> KILOJOULE() { return get_static_field<"KILOJOULE", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> KILOMETER() { return get_static_field<"KILOMETER", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> KILOMETER_PER_HOUR() { return get_static_field<"KILOMETER_PER_HOUR", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> KILOWATT() { return get_static_field<"KILOWATT", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> KILOWATT_HOUR() { return get_static_field<"KILOWATT_HOUR", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> KNOT() { return get_static_field<"KNOT", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> LIGHT_YEAR() { return get_static_field<"LIGHT_YEAR", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> LITER() { return get_static_field<"LITER", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> LITER_PER_100KILOMETERS() { return get_static_field<"LITER_PER_100KILOMETERS", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> LITER_PER_KILOMETER() { return get_static_field<"LITER_PER_KILOMETER", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> LUX() { return get_static_field<"LUX", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> MEGABIT() { return get_static_field<"MEGABIT", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> MEGABYTE() { return get_static_field<"MEGABYTE", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> MEGAHERTZ() { return get_static_field<"MEGAHERTZ", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> MEGALITER() { return get_static_field<"MEGALITER", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> MEGAWATT() { return get_static_field<"MEGAWATT", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> METER() { return get_static_field<"METER", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> METER_PER_SECOND() { return get_static_field<"METER_PER_SECOND", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> METER_PER_SECOND_SQUARED() { return get_static_field<"METER_PER_SECOND_SQUARED", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> METRIC_TON() { return get_static_field<"METRIC_TON", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> MICROGRAM() { return get_static_field<"MICROGRAM", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> MICROMETER() { return get_static_field<"MICROMETER", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> MICROSECOND() { return get_static_field<"MICROSECOND", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> MILE() { return get_static_field<"MILE", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> MILE_PER_GALLON() { return get_static_field<"MILE_PER_GALLON", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> MILE_PER_GALLON_IMPERIAL() { return get_static_field<"MILE_PER_GALLON_IMPERIAL", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> MILE_PER_HOUR() { return get_static_field<"MILE_PER_HOUR", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> MILE_SCANDINAVIAN() { return get_static_field<"MILE_SCANDINAVIAN", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> MILLIAMPERE() { return get_static_field<"MILLIAMPERE", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> MILLIBAR() { return get_static_field<"MILLIBAR", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> MILLIGRAM() { return get_static_field<"MILLIGRAM", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> MILLIGRAM_PER_DECILITER() { return get_static_field<"MILLIGRAM_PER_DECILITER", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> MILLILITER() { return get_static_field<"MILLILITER", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> MILLIMETER() { return get_static_field<"MILLIMETER", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> MILLIMETER_OF_MERCURY() { return get_static_field<"MILLIMETER_OF_MERCURY", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> MILLIMOLE_PER_LITER() { return get_static_field<"MILLIMOLE_PER_LITER", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> MILLISECOND() { return get_static_field<"MILLISECOND", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> MILLIWATT() { return get_static_field<"MILLIWATT", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::TimeUnit> MINUTE() { return get_static_field<"MINUTE", jni::ref<android::icu::util::TimeUnit>>(); }
	static jni::ref<android::icu::util::TimeUnit> MONTH() { return get_static_field<"MONTH", jni::ref<android::icu::util::TimeUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> NANOMETER() { return get_static_field<"NANOMETER", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> NANOSECOND() { return get_static_field<"NANOSECOND", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> NAUTICAL_MILE() { return get_static_field<"NAUTICAL_MILE", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> OHM() { return get_static_field<"OHM", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> OUNCE() { return get_static_field<"OUNCE", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> OUNCE_TROY() { return get_static_field<"OUNCE_TROY", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> PARSEC() { return get_static_field<"PARSEC", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> PART_PER_MILLION() { return get_static_field<"PART_PER_MILLION", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> PERCENT() { return get_static_field<"PERCENT", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> PERMILLE() { return get_static_field<"PERMILLE", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> PETABYTE() { return get_static_field<"PETABYTE", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> PICOMETER() { return get_static_field<"PICOMETER", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> PINT() { return get_static_field<"PINT", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> PINT_METRIC() { return get_static_field<"PINT_METRIC", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> POINT() { return get_static_field<"POINT", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> POUND() { return get_static_field<"POUND", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> POUND_PER_SQUARE_INCH() { return get_static_field<"POUND_PER_SQUARE_INCH", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> QUART() { return get_static_field<"QUART", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> RADIAN() { return get_static_field<"RADIAN", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> REVOLUTION_ANGLE() { return get_static_field<"REVOLUTION_ANGLE", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::TimeUnit> SECOND() { return get_static_field<"SECOND", jni::ref<android::icu::util::TimeUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> SQUARE_CENTIMETER() { return get_static_field<"SQUARE_CENTIMETER", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> SQUARE_FOOT() { return get_static_field<"SQUARE_FOOT", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> SQUARE_INCH() { return get_static_field<"SQUARE_INCH", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> SQUARE_KILOMETER() { return get_static_field<"SQUARE_KILOMETER", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> SQUARE_METER() { return get_static_field<"SQUARE_METER", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> SQUARE_MILE() { return get_static_field<"SQUARE_MILE", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> SQUARE_YARD() { return get_static_field<"SQUARE_YARD", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> STONE() { return get_static_field<"STONE", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> TABLESPOON() { return get_static_field<"TABLESPOON", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> TEASPOON() { return get_static_field<"TEASPOON", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> TERABIT() { return get_static_field<"TERABIT", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> TERABYTE() { return get_static_field<"TERABYTE", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> TON() { return get_static_field<"TON", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> VOLT() { return get_static_field<"VOLT", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> WATT() { return get_static_field<"WATT", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::TimeUnit> WEEK() { return get_static_field<"WEEK", jni::ref<android::icu::util::TimeUnit>>(); }
	static jni::ref<android::icu::util::MeasureUnit> YARD() { return get_static_field<"YARD", jni::ref<android::icu::util::MeasureUnit>>(); }
	static jni::ref<android::icu::util::TimeUnit> YEAR() { return get_static_field<"YEAR", jni::ref<android::icu::util::TimeUnit>>(); }

	jni::ref<java::lang::String> getType() { return call_method<"getType", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getSubtype() { return call_method<"getSubtype", jni::ref<java::lang::String>>(); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> rhs) { return call_method<"equals", jboolean>(rhs); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	static jni::ref<java::util::Set> getAvailableTypes() { return call_static_method<"getAvailableTypes", jni::ref<java::util::Set>>(); }
	static jni::ref<java::util::Set> getAvailable(jni::ref<java::lang::String> type) { return call_static_method<"getAvailable", jni::ref<java::util::Set>>(type); }
	static jni::ref<java::util::Set> getAvailable() { return call_static_method<"getAvailable", jni::ref<java::util::Set>>(); }

protected:

	MeasureUnit(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ICU_UTIL_MEASUREUNIT