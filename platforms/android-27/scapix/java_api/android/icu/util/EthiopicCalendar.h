// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/icu/util/CECalendar.h>

#ifndef SCAPIX_JAVA_API_ANDROID_ICU_UTIL_ETHIOPICCALENDAR_FWD
#define SCAPIX_JAVA_API_ANDROID_ICU_UTIL_ETHIOPICCALENDAR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::icu::util { class EthiopicCalendar; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::icu::util::EthiopicCalendar>
{
	static constexpr fixed_string class_name = "android/icu/util/EthiopicCalendar";
	using base_classes = std::tuple<scapix::java_api::android::icu::util::CECalendar>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ICU_UTIL_ETHIOPICCALENDAR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_ICU_UTIL_ETHIOPICCALENDAR)
#define SCAPIX_JAVA_API_ANDROID_ICU_UTIL_ETHIOPICCALENDAR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/icu/util/TimeZone.h>
#include <scapix/java_api/android/icu/util/ULocale.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Date.h>
#include <scapix/java_api/java/util/Locale.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::icu::util::EthiopicCalendar : public jni::object_base<"android/icu/util/EthiopicCalendar",
	android::icu::util::CECalendar>
{
public:

	static jint GENBOT() { return get_static_field<"GENBOT", jint>(); }
	static jint HAMLE() { return get_static_field<"HAMLE", jint>(); }
	static jint HEDAR() { return get_static_field<"HEDAR", jint>(); }
	static jint MEGABIT() { return get_static_field<"MEGABIT", jint>(); }
	static jint MESKEREM() { return get_static_field<"MESKEREM", jint>(); }
	static jint MIAZIA() { return get_static_field<"MIAZIA", jint>(); }
	static jint NEHASSE() { return get_static_field<"NEHASSE", jint>(); }
	static jint PAGUMEN() { return get_static_field<"PAGUMEN", jint>(); }
	static jint SENE() { return get_static_field<"SENE", jint>(); }
	static jint TAHSAS() { return get_static_field<"TAHSAS", jint>(); }
	static jint TEKEMT() { return get_static_field<"TEKEMT", jint>(); }
	static jint TER() { return get_static_field<"TER", jint>(); }
	static jint YEKATIT() { return get_static_field<"YEKATIT", jint>(); }

	static jni::ref<android::icu::util::EthiopicCalendar> new_object() { return base_::new_object(); }
	static jni::ref<android::icu::util::EthiopicCalendar> new_object(jni::ref<android::icu::util::TimeZone> zone) { return base_::new_object(zone); }
	static jni::ref<android::icu::util::EthiopicCalendar> new_object(jni::ref<java::util::Locale> aLocale) { return base_::new_object(aLocale); }
	static jni::ref<android::icu::util::EthiopicCalendar> new_object(jni::ref<android::icu::util::ULocale> locale) { return base_::new_object(locale); }
	static jni::ref<android::icu::util::EthiopicCalendar> new_object(jni::ref<android::icu::util::TimeZone> zone, jni::ref<java::util::Locale> aLocale) { return base_::new_object(zone, aLocale); }
	static jni::ref<android::icu::util::EthiopicCalendar> new_object(jni::ref<android::icu::util::TimeZone> zone, jni::ref<android::icu::util::ULocale> locale) { return base_::new_object(zone, locale); }
	static jni::ref<android::icu::util::EthiopicCalendar> new_object(jint year, jint month, jint date) { return base_::new_object(year, month, date); }
	static jni::ref<android::icu::util::EthiopicCalendar> new_object(jni::ref<java::util::Date> date) { return base_::new_object(date); }
	static jni::ref<android::icu::util::EthiopicCalendar> new_object(jint year, jint month, jint date, jint hour, jint minute, jint second) { return base_::new_object(year, month, date, hour, minute, second); }
	jni::ref<java::lang::String> getType() { return call_method<"getType", jni::ref<java::lang::String>>(); }
	void setAmeteAlemEra(jboolean onOff) { return call_method<"setAmeteAlemEra", void>(onOff); }
	jboolean isAmeteAlemEra() { return call_method<"isAmeteAlemEra", jboolean>(); }

protected:

	EthiopicCalendar(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ICU_UTIL_ETHIOPICCALENDAR
