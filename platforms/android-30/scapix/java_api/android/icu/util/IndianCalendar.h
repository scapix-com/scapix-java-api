// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/icu/util/Calendar.h>

#ifndef SCAPIX_JAVA_API_ANDROID_ICU_UTIL_INDIANCALENDAR_FWD
#define SCAPIX_JAVA_API_ANDROID_ICU_UTIL_INDIANCALENDAR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::icu::util { class IndianCalendar; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::icu::util::IndianCalendar>
{
	static constexpr fixed_string class_name = "android/icu/util/IndianCalendar";
	using base_classes = std::tuple<scapix::java_api::android::icu::util::Calendar>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ICU_UTIL_INDIANCALENDAR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_ICU_UTIL_INDIANCALENDAR)
#define SCAPIX_JAVA_API_ANDROID_ICU_UTIL_INDIANCALENDAR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/icu/util/TimeZone.h>
#include <scapix/java_api/android/icu/util/ULocale.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Date.h>
#include <scapix/java_api/java/util/Locale.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::icu::util::IndianCalendar : public jni::object_base<"android/icu/util/IndianCalendar",
	android::icu::util::Calendar>
{
public:

	static jint AGRAHAYANA() { return get_static_field<"AGRAHAYANA", jint>(); }
	static jint ASADHA() { return get_static_field<"ASADHA", jint>(); }
	static jint ASVINA() { return get_static_field<"ASVINA", jint>(); }
	static jint BHADRA() { return get_static_field<"BHADRA", jint>(); }
	static jint CHAITRA() { return get_static_field<"CHAITRA", jint>(); }
	static jint IE() { return get_static_field<"IE", jint>(); }
	static jint JYAISTHA() { return get_static_field<"JYAISTHA", jint>(); }
	static jint KARTIKA() { return get_static_field<"KARTIKA", jint>(); }
	static jint MAGHA() { return get_static_field<"MAGHA", jint>(); }
	static jint PAUSA() { return get_static_field<"PAUSA", jint>(); }
	static jint PHALGUNA() { return get_static_field<"PHALGUNA", jint>(); }
	static jint SRAVANA() { return get_static_field<"SRAVANA", jint>(); }
	static jint VAISAKHA() { return get_static_field<"VAISAKHA", jint>(); }

	static jni::ref<android::icu::util::IndianCalendar> new_object() { return base_::new_object(); }
	static jni::ref<android::icu::util::IndianCalendar> new_object(jni::ref<android::icu::util::TimeZone> zone) { return base_::new_object(zone); }
	static jni::ref<android::icu::util::IndianCalendar> new_object(jni::ref<java::util::Locale> aLocale) { return base_::new_object(aLocale); }
	static jni::ref<android::icu::util::IndianCalendar> new_object(jni::ref<android::icu::util::ULocale> locale) { return base_::new_object(locale); }
	static jni::ref<android::icu::util::IndianCalendar> new_object(jni::ref<android::icu::util::TimeZone> zone, jni::ref<java::util::Locale> aLocale) { return base_::new_object(zone, aLocale); }
	static jni::ref<android::icu::util::IndianCalendar> new_object(jni::ref<android::icu::util::TimeZone> zone, jni::ref<android::icu::util::ULocale> locale) { return base_::new_object(zone, locale); }
	static jni::ref<android::icu::util::IndianCalendar> new_object(jni::ref<java::util::Date> date) { return base_::new_object(date); }
	static jni::ref<android::icu::util::IndianCalendar> new_object(jint year, jint month, jint date) { return base_::new_object(year, month, date); }
	static jni::ref<android::icu::util::IndianCalendar> new_object(jint year, jint month, jint date, jint hour, jint minute, jint second) { return base_::new_object(year, month, date, hour, minute, second); }
	jni::ref<java::lang::String> getType() { return call_method<"getType", jni::ref<java::lang::String>>(); }

protected:

	IndianCalendar(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ICU_UTIL_INDIANCALENDAR