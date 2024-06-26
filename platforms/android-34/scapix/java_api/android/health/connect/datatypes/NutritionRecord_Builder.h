// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_NUTRITIONRECORD_BUILDER_FWD
#define SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_NUTRITIONRECORD_BUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::health::connect::datatypes { class NutritionRecord_Builder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::health::connect::datatypes::NutritionRecord_Builder>
{
	static constexpr fixed_string class_name = "android/health/connect/datatypes/NutritionRecord$Builder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_NUTRITIONRECORD_BUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_NUTRITIONRECORD_BUILDER)
#define SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_NUTRITIONRECORD_BUILDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/health/connect/datatypes/Metadata.h>
#include <scapix/java_api/android/health/connect/datatypes/NutritionRecord.h>
#include <scapix/java_api/android/health/connect/datatypes/units/Energy.h>
#include <scapix/java_api/android/health/connect/datatypes/units/Mass.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/time/Instant.h>
#include <scapix/java_api/java/time/ZoneOffset.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::health::connect::datatypes::NutritionRecord_Builder : public jni::object_base<"android/health/connect/datatypes/NutritionRecord$Builder",
	java::lang::Object>
{
public:

	static jni::ref<android::health::connect::datatypes::NutritionRecord_Builder> new_object(jni::ref<android::health::connect::datatypes::Metadata> metadata, jni::ref<java::time::Instant> startTime, jni::ref<java::time::Instant> endTime) { return base_::new_object(metadata, startTime, endTime); }
	jni::ref<android::health::connect::datatypes::NutritionRecord_Builder> setStartZoneOffset(jni::ref<java::time::ZoneOffset> startZoneOffset) { return call_method<"setStartZoneOffset", jni::ref<android::health::connect::datatypes::NutritionRecord_Builder>>(startZoneOffset); }
	jni::ref<android::health::connect::datatypes::NutritionRecord_Builder> setEndZoneOffset(jni::ref<java::time::ZoneOffset> endZoneOffset) { return call_method<"setEndZoneOffset", jni::ref<android::health::connect::datatypes::NutritionRecord_Builder>>(endZoneOffset); }
	jni::ref<android::health::connect::datatypes::NutritionRecord_Builder> clearStartZoneOffset() { return call_method<"clearStartZoneOffset", jni::ref<android::health::connect::datatypes::NutritionRecord_Builder>>(); }
	jni::ref<android::health::connect::datatypes::NutritionRecord_Builder> clearEndZoneOffset() { return call_method<"clearEndZoneOffset", jni::ref<android::health::connect::datatypes::NutritionRecord_Builder>>(); }
	jni::ref<android::health::connect::datatypes::NutritionRecord_Builder> setUnsaturatedFat(jni::ref<android::health::connect::datatypes::units::Mass> unsaturatedFat) { return call_method<"setUnsaturatedFat", jni::ref<android::health::connect::datatypes::NutritionRecord_Builder>>(unsaturatedFat); }
	jni::ref<android::health::connect::datatypes::NutritionRecord_Builder> setPotassium(jni::ref<android::health::connect::datatypes::units::Mass> potassium) { return call_method<"setPotassium", jni::ref<android::health::connect::datatypes::NutritionRecord_Builder>>(potassium); }
	jni::ref<android::health::connect::datatypes::NutritionRecord_Builder> setThiamin(jni::ref<android::health::connect::datatypes::units::Mass> thiamin) { return call_method<"setThiamin", jni::ref<android::health::connect::datatypes::NutritionRecord_Builder>>(thiamin); }
	jni::ref<android::health::connect::datatypes::NutritionRecord_Builder> setMealType(jint mealType) { return call_method<"setMealType", jni::ref<android::health::connect::datatypes::NutritionRecord_Builder>>(mealType); }
	jni::ref<android::health::connect::datatypes::NutritionRecord_Builder> setTransFat(jni::ref<android::health::connect::datatypes::units::Mass> transFat) { return call_method<"setTransFat", jni::ref<android::health::connect::datatypes::NutritionRecord_Builder>>(transFat); }
	jni::ref<android::health::connect::datatypes::NutritionRecord_Builder> setManganese(jni::ref<android::health::connect::datatypes::units::Mass> manganese) { return call_method<"setManganese", jni::ref<android::health::connect::datatypes::NutritionRecord_Builder>>(manganese); }
	jni::ref<android::health::connect::datatypes::NutritionRecord_Builder> setEnergyFromFat(jni::ref<android::health::connect::datatypes::units::Energy> energyFromFat) { return call_method<"setEnergyFromFat", jni::ref<android::health::connect::datatypes::NutritionRecord_Builder>>(energyFromFat); }
	jni::ref<android::health::connect::datatypes::NutritionRecord_Builder> setCaffeine(jni::ref<android::health::connect::datatypes::units::Mass> caffeine) { return call_method<"setCaffeine", jni::ref<android::health::connect::datatypes::NutritionRecord_Builder>>(caffeine); }
	jni::ref<android::health::connect::datatypes::NutritionRecord_Builder> setDietaryFiber(jni::ref<android::health::connect::datatypes::units::Mass> dietaryFiber) { return call_method<"setDietaryFiber", jni::ref<android::health::connect::datatypes::NutritionRecord_Builder>>(dietaryFiber); }
	jni::ref<android::health::connect::datatypes::NutritionRecord_Builder> setSelenium(jni::ref<android::health::connect::datatypes::units::Mass> selenium) { return call_method<"setSelenium", jni::ref<android::health::connect::datatypes::NutritionRecord_Builder>>(selenium); }
	jni::ref<android::health::connect::datatypes::NutritionRecord_Builder> setVitaminB6(jni::ref<android::health::connect::datatypes::units::Mass> vitaminB6) { return call_method<"setVitaminB6", jni::ref<android::health::connect::datatypes::NutritionRecord_Builder>>(vitaminB6); }
	jni::ref<android::health::connect::datatypes::NutritionRecord_Builder> setProtein(jni::ref<android::health::connect::datatypes::units::Mass> protein) { return call_method<"setProtein", jni::ref<android::health::connect::datatypes::NutritionRecord_Builder>>(protein); }
	jni::ref<android::health::connect::datatypes::NutritionRecord_Builder> setChloride(jni::ref<android::health::connect::datatypes::units::Mass> chloride) { return call_method<"setChloride", jni::ref<android::health::connect::datatypes::NutritionRecord_Builder>>(chloride); }
	jni::ref<android::health::connect::datatypes::NutritionRecord_Builder> setCholesterol(jni::ref<android::health::connect::datatypes::units::Mass> cholesterol) { return call_method<"setCholesterol", jni::ref<android::health::connect::datatypes::NutritionRecord_Builder>>(cholesterol); }
	jni::ref<android::health::connect::datatypes::NutritionRecord_Builder> setCopper(jni::ref<android::health::connect::datatypes::units::Mass> copper) { return call_method<"setCopper", jni::ref<android::health::connect::datatypes::NutritionRecord_Builder>>(copper); }
	jni::ref<android::health::connect::datatypes::NutritionRecord_Builder> setIodine(jni::ref<android::health::connect::datatypes::units::Mass> iodine) { return call_method<"setIodine", jni::ref<android::health::connect::datatypes::NutritionRecord_Builder>>(iodine); }
	jni::ref<android::health::connect::datatypes::NutritionRecord_Builder> setVitaminB12(jni::ref<android::health::connect::datatypes::units::Mass> vitaminB12) { return call_method<"setVitaminB12", jni::ref<android::health::connect::datatypes::NutritionRecord_Builder>>(vitaminB12); }
	jni::ref<android::health::connect::datatypes::NutritionRecord_Builder> setZinc(jni::ref<android::health::connect::datatypes::units::Mass> zinc) { return call_method<"setZinc", jni::ref<android::health::connect::datatypes::NutritionRecord_Builder>>(zinc); }
	jni::ref<android::health::connect::datatypes::NutritionRecord_Builder> setRiboflavin(jni::ref<android::health::connect::datatypes::units::Mass> riboflavin) { return call_method<"setRiboflavin", jni::ref<android::health::connect::datatypes::NutritionRecord_Builder>>(riboflavin); }
	jni::ref<android::health::connect::datatypes::NutritionRecord_Builder> setEnergy(jni::ref<android::health::connect::datatypes::units::Energy> energy) { return call_method<"setEnergy", jni::ref<android::health::connect::datatypes::NutritionRecord_Builder>>(energy); }
	jni::ref<android::health::connect::datatypes::NutritionRecord_Builder> setMolybdenum(jni::ref<android::health::connect::datatypes::units::Mass> molybdenum) { return call_method<"setMolybdenum", jni::ref<android::health::connect::datatypes::NutritionRecord_Builder>>(molybdenum); }
	jni::ref<android::health::connect::datatypes::NutritionRecord_Builder> setPhosphorus(jni::ref<android::health::connect::datatypes::units::Mass> phosphorus) { return call_method<"setPhosphorus", jni::ref<android::health::connect::datatypes::NutritionRecord_Builder>>(phosphorus); }
	jni::ref<android::health::connect::datatypes::NutritionRecord_Builder> setChromium(jni::ref<android::health::connect::datatypes::units::Mass> chromium) { return call_method<"setChromium", jni::ref<android::health::connect::datatypes::NutritionRecord_Builder>>(chromium); }
	jni::ref<android::health::connect::datatypes::NutritionRecord_Builder> setTotalFat(jni::ref<android::health::connect::datatypes::units::Mass> totalFat) { return call_method<"setTotalFat", jni::ref<android::health::connect::datatypes::NutritionRecord_Builder>>(totalFat); }
	jni::ref<android::health::connect::datatypes::NutritionRecord_Builder> setCalcium(jni::ref<android::health::connect::datatypes::units::Mass> calcium) { return call_method<"setCalcium", jni::ref<android::health::connect::datatypes::NutritionRecord_Builder>>(calcium); }
	jni::ref<android::health::connect::datatypes::NutritionRecord_Builder> setVitaminC(jni::ref<android::health::connect::datatypes::units::Mass> vitaminC) { return call_method<"setVitaminC", jni::ref<android::health::connect::datatypes::NutritionRecord_Builder>>(vitaminC); }
	jni::ref<android::health::connect::datatypes::NutritionRecord_Builder> setVitaminE(jni::ref<android::health::connect::datatypes::units::Mass> vitaminE) { return call_method<"setVitaminE", jni::ref<android::health::connect::datatypes::NutritionRecord_Builder>>(vitaminE); }
	jni::ref<android::health::connect::datatypes::NutritionRecord_Builder> setBiotin(jni::ref<android::health::connect::datatypes::units::Mass> biotin) { return call_method<"setBiotin", jni::ref<android::health::connect::datatypes::NutritionRecord_Builder>>(biotin); }
	jni::ref<android::health::connect::datatypes::NutritionRecord_Builder> setVitaminD(jni::ref<android::health::connect::datatypes::units::Mass> vitaminD) { return call_method<"setVitaminD", jni::ref<android::health::connect::datatypes::NutritionRecord_Builder>>(vitaminD); }
	jni::ref<android::health::connect::datatypes::NutritionRecord_Builder> setNiacin(jni::ref<android::health::connect::datatypes::units::Mass> niacin) { return call_method<"setNiacin", jni::ref<android::health::connect::datatypes::NutritionRecord_Builder>>(niacin); }
	jni::ref<android::health::connect::datatypes::NutritionRecord_Builder> setMagnesium(jni::ref<android::health::connect::datatypes::units::Mass> magnesium) { return call_method<"setMagnesium", jni::ref<android::health::connect::datatypes::NutritionRecord_Builder>>(magnesium); }
	jni::ref<android::health::connect::datatypes::NutritionRecord_Builder> setTotalCarbohydrate(jni::ref<android::health::connect::datatypes::units::Mass> totalCarbohydrate) { return call_method<"setTotalCarbohydrate", jni::ref<android::health::connect::datatypes::NutritionRecord_Builder>>(totalCarbohydrate); }
	jni::ref<android::health::connect::datatypes::NutritionRecord_Builder> setVitaminK(jni::ref<android::health::connect::datatypes::units::Mass> vitaminK) { return call_method<"setVitaminK", jni::ref<android::health::connect::datatypes::NutritionRecord_Builder>>(vitaminK); }
	jni::ref<android::health::connect::datatypes::NutritionRecord_Builder> setPolyunsaturatedFat(jni::ref<android::health::connect::datatypes::units::Mass> polyunsaturatedFat) { return call_method<"setPolyunsaturatedFat", jni::ref<android::health::connect::datatypes::NutritionRecord_Builder>>(polyunsaturatedFat); }
	jni::ref<android::health::connect::datatypes::NutritionRecord_Builder> setSaturatedFat(jni::ref<android::health::connect::datatypes::units::Mass> saturatedFat) { return call_method<"setSaturatedFat", jni::ref<android::health::connect::datatypes::NutritionRecord_Builder>>(saturatedFat); }
	jni::ref<android::health::connect::datatypes::NutritionRecord_Builder> setSodium(jni::ref<android::health::connect::datatypes::units::Mass> sodium) { return call_method<"setSodium", jni::ref<android::health::connect::datatypes::NutritionRecord_Builder>>(sodium); }
	jni::ref<android::health::connect::datatypes::NutritionRecord_Builder> setFolate(jni::ref<android::health::connect::datatypes::units::Mass> folate) { return call_method<"setFolate", jni::ref<android::health::connect::datatypes::NutritionRecord_Builder>>(folate); }
	jni::ref<android::health::connect::datatypes::NutritionRecord_Builder> setMonounsaturatedFat(jni::ref<android::health::connect::datatypes::units::Mass> monounsaturatedFat) { return call_method<"setMonounsaturatedFat", jni::ref<android::health::connect::datatypes::NutritionRecord_Builder>>(monounsaturatedFat); }
	jni::ref<android::health::connect::datatypes::NutritionRecord_Builder> setPantothenicAcid(jni::ref<android::health::connect::datatypes::units::Mass> pantothenicAcid) { return call_method<"setPantothenicAcid", jni::ref<android::health::connect::datatypes::NutritionRecord_Builder>>(pantothenicAcid); }
	jni::ref<android::health::connect::datatypes::NutritionRecord_Builder> setMealName(jni::ref<java::lang::String> mealName) { return call_method<"setMealName", jni::ref<android::health::connect::datatypes::NutritionRecord_Builder>>(mealName); }
	jni::ref<android::health::connect::datatypes::NutritionRecord_Builder> setIron(jni::ref<android::health::connect::datatypes::units::Mass> iron) { return call_method<"setIron", jni::ref<android::health::connect::datatypes::NutritionRecord_Builder>>(iron); }
	jni::ref<android::health::connect::datatypes::NutritionRecord_Builder> setVitaminA(jni::ref<android::health::connect::datatypes::units::Mass> vitaminA) { return call_method<"setVitaminA", jni::ref<android::health::connect::datatypes::NutritionRecord_Builder>>(vitaminA); }
	jni::ref<android::health::connect::datatypes::NutritionRecord_Builder> setFolicAcid(jni::ref<android::health::connect::datatypes::units::Mass> folicAcid) { return call_method<"setFolicAcid", jni::ref<android::health::connect::datatypes::NutritionRecord_Builder>>(folicAcid); }
	jni::ref<android::health::connect::datatypes::NutritionRecord_Builder> setSugar(jni::ref<android::health::connect::datatypes::units::Mass> sugar) { return call_method<"setSugar", jni::ref<android::health::connect::datatypes::NutritionRecord_Builder>>(sugar); }
	jni::ref<android::health::connect::datatypes::NutritionRecord> build() { return call_method<"build", jni::ref<android::health::connect::datatypes::NutritionRecord>>(); }

protected:

	NutritionRecord_Builder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_NUTRITIONRECORD_BUILDER
