// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_MEALTYPE_FWD
#define SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_MEALTYPE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::health::connect::datatypes { class MealType; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::health::connect::datatypes::MealType>
{
	static constexpr fixed_string class_name = "android/health/connect/datatypes/MealType";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_MEALTYPE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_MEALTYPE)
#define SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_MEALTYPE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::health::connect::datatypes::MealType : public jni::object_base<"android/health/connect/datatypes/MealType",
	java::lang::Object>
{
public:

	static jint MEAL_TYPE_BREAKFAST() { return get_static_field<"MEAL_TYPE_BREAKFAST", jint>(); }
	static jint MEAL_TYPE_DINNER() { return get_static_field<"MEAL_TYPE_DINNER", jint>(); }
	static jint MEAL_TYPE_LUNCH() { return get_static_field<"MEAL_TYPE_LUNCH", jint>(); }
	static jint MEAL_TYPE_SNACK() { return get_static_field<"MEAL_TYPE_SNACK", jint>(); }
	static jint MEAL_TYPE_UNKNOWN() { return get_static_field<"MEAL_TYPE_UNKNOWN", jint>(); }


protected:

	MealType(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_DATATYPES_MEALTYPE
