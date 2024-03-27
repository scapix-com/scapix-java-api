// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_JAVA_API_ANDROID_ICU_UTIL_ISLAMICCALENDAR_CALCULATIONTYPE_FWD
#define SCAPIX_JAVA_API_ANDROID_ICU_UTIL_ISLAMICCALENDAR_CALCULATIONTYPE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::icu::util { class IslamicCalendar_CalculationType; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::icu::util::IslamicCalendar_CalculationType>
{
	static constexpr fixed_string class_name = "android/icu/util/IslamicCalendar$CalculationType";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ICU_UTIL_ISLAMICCALENDAR_CALCULATIONTYPE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_ICU_UTIL_ISLAMICCALENDAR_CALCULATIONTYPE)
#define SCAPIX_JAVA_API_ANDROID_ICU_UTIL_ISLAMICCALENDAR_CALCULATIONTYPE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::icu::util::IslamicCalendar_CalculationType : public jni::object_base<"android/icu/util/IslamicCalendar$CalculationType",
	java::lang::Enum>
{
public:

	static jni::ref<android::icu::util::IslamicCalendar_CalculationType> ISLAMIC() { return get_static_field<"ISLAMIC", jni::ref<android::icu::util::IslamicCalendar_CalculationType>>(); }
	static jni::ref<android::icu::util::IslamicCalendar_CalculationType> ISLAMIC_CIVIL() { return get_static_field<"ISLAMIC_CIVIL", jni::ref<android::icu::util::IslamicCalendar_CalculationType>>(); }
	static jni::ref<android::icu::util::IslamicCalendar_CalculationType> ISLAMIC_UMALQURA() { return get_static_field<"ISLAMIC_UMALQURA", jni::ref<android::icu::util::IslamicCalendar_CalculationType>>(); }
	static jni::ref<android::icu::util::IslamicCalendar_CalculationType> ISLAMIC_TBLA() { return get_static_field<"ISLAMIC_TBLA", jni::ref<android::icu::util::IslamicCalendar_CalculationType>>(); }

	static jni::ref<jni::array<android::icu::util::IslamicCalendar_CalculationType>> values() { return call_static_method<"values", jni::ref<jni::array<android::icu::util::IslamicCalendar_CalculationType>>>(); }
	static jni::ref<android::icu::util::IslamicCalendar_CalculationType> valueOf(jni::ref<java::lang::String> name) { return call_static_method<"valueOf", jni::ref<android::icu::util::IslamicCalendar_CalculationType>>(name); }

protected:

	IslamicCalendar_CalculationType(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ICU_UTIL_ISLAMICCALENDAR_CALCULATIONTYPE
