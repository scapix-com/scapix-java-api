// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Serializable.h>
#include <scapix/java_api/java/lang/Cloneable.h>
#include <scapix/java_api/android/icu/util/Freezable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_ICU_UTIL_TIMEZONE_FWD
#define SCAPIX_JAVA_API_ANDROID_ICU_UTIL_TIMEZONE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::icu::util { class TimeZone; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::icu::util::TimeZone>
{
	static constexpr fixed_string class_name = "android/icu/util/TimeZone";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::io::Serializable, scapix::java_api::java::lang::Cloneable, scapix::java_api::android::icu::util::Freezable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ICU_UTIL_TIMEZONE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_ICU_UTIL_TIMEZONE)
#define SCAPIX_JAVA_API_ANDROID_ICU_UTIL_TIMEZONE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/icu/util/TimeZone_SystemTimeZoneType.h>
#include <scapix/java_api/android/icu/util/ULocale.h>
#include <scapix/java_api/java/lang/Integer.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Date.h>
#include <scapix/java_api/java/util/Locale.h>
#include <scapix/java_api/java/util/Set.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::icu::util::TimeZone : public jni::object_base<"android/icu/util/TimeZone",
	java::lang::Object,
	java::io::Serializable,
	java::lang::Cloneable,
	android::icu::util::Freezable>
{
public:

	using SystemTimeZoneType = TimeZone_SystemTimeZoneType;

	static jint GENERIC_LOCATION() { return get_static_field<"GENERIC_LOCATION", jint>(); }
	static jni::ref<android::icu::util::TimeZone> GMT_ZONE() { return get_static_field<"GMT_ZONE", jni::ref<android::icu::util::TimeZone>>(); }
	static jint LONG() { return get_static_field<"LONG", jint>(); }
	static jint LONG_GENERIC() { return get_static_field<"LONG_GENERIC", jint>(); }
	static jint LONG_GMT() { return get_static_field<"LONG_GMT", jint>(); }
	static jint SHORT() { return get_static_field<"SHORT", jint>(); }
	static jint SHORT_COMMONLY_USED() { return get_static_field<"SHORT_COMMONLY_USED", jint>(); }
	static jint SHORT_GENERIC() { return get_static_field<"SHORT_GENERIC", jint>(); }
	static jint SHORT_GMT() { return get_static_field<"SHORT_GMT", jint>(); }
	static jint TIMEZONE_ICU() { return get_static_field<"TIMEZONE_ICU", jint>(); }
	static jint TIMEZONE_JDK() { return get_static_field<"TIMEZONE_JDK", jint>(); }
	static jni::ref<android::icu::util::TimeZone> UNKNOWN_ZONE() { return get_static_field<"UNKNOWN_ZONE", jni::ref<android::icu::util::TimeZone>>(); }
	static jni::ref<java::lang::String> UNKNOWN_ZONE_ID() { return get_static_field<"UNKNOWN_ZONE_ID", jni::ref<java::lang::String>>(); }

	static jni::ref<android::icu::util::TimeZone> new_object() { return base_::new_object(); }
	jint getOffset(jint p1, jint p2, jint p3, jint p4, jint p5, jint p6) { return call_method<"getOffset", jint>(p1, p2, p3, p4, p5, p6); }
	jint getOffset(jlong date) { return call_method<"getOffset", jint>(date); }
	void getOffset(jlong date, jboolean p2, jni::ref<jni::array<jint>> local) { return call_method<"getOffset", void>(date, p2, local); }
	void setRawOffset(jint p1) { return call_method<"setRawOffset", void>(p1); }
	jint getRawOffset() { return call_method<"getRawOffset", jint>(); }
	jni::ref<java::lang::String> getID() { return call_method<"getID", jni::ref<java::lang::String>>(); }
	void setID(jni::ref<java::lang::String> ID) { return call_method<"setID", void>(ID); }
	jni::ref<java::lang::String> getDisplayName() { return call_method<"getDisplayName", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getDisplayName(jni::ref<java::util::Locale> locale) { return call_method<"getDisplayName", jni::ref<java::lang::String>>(locale); }
	jni::ref<java::lang::String> getDisplayName(jni::ref<android::icu::util::ULocale> locale) { return call_method<"getDisplayName", jni::ref<java::lang::String>>(locale); }
	jni::ref<java::lang::String> getDisplayName(jboolean daylight, jint style) { return call_method<"getDisplayName", jni::ref<java::lang::String>>(daylight, style); }
	jni::ref<java::lang::String> getDisplayName(jboolean daylight, jint style, jni::ref<java::util::Locale> locale) { return call_method<"getDisplayName", jni::ref<java::lang::String>>(daylight, style, locale); }
	jni::ref<java::lang::String> getDisplayName(jboolean daylight, jint style, jni::ref<android::icu::util::ULocale> locale) { return call_method<"getDisplayName", jni::ref<java::lang::String>>(daylight, style, locale); }
	jint getDSTSavings() { return call_method<"getDSTSavings", jint>(); }
	jboolean useDaylightTime() { return call_method<"useDaylightTime", jboolean>(); }
	jboolean observesDaylightTime() { return call_method<"observesDaylightTime", jboolean>(); }
	jboolean inDaylightTime(jni::ref<java::util::Date> p1) { return call_method<"inDaylightTime", jboolean>(p1); }
	static jni::ref<android::icu::util::TimeZone> getTimeZone(jni::ref<java::lang::String> ID) { return call_static_method<"getTimeZone", jni::ref<android::icu::util::TimeZone>>(ID); }
	static jni::ref<android::icu::util::TimeZone> getFrozenTimeZone(jni::ref<java::lang::String> ID) { return call_static_method<"getFrozenTimeZone", jni::ref<android::icu::util::TimeZone>>(ID); }
	static jni::ref<android::icu::util::TimeZone> getTimeZone(jni::ref<java::lang::String> ID, jint type) { return call_static_method<"getTimeZone", jni::ref<android::icu::util::TimeZone>>(ID, type); }
	static jni::ref<java::util::Set> getAvailableIDs(jni::ref<android::icu::util::TimeZone_SystemTimeZoneType> zoneType, jni::ref<java::lang::String> region, jni::ref<java::lang::Integer> rawOffset) { return call_static_method<"getAvailableIDs", jni::ref<java::util::Set>>(zoneType, region, rawOffset); }
	static jni::ref<jni::array<java::lang::String>> getAvailableIDs(jint rawOffset) { return call_static_method<"getAvailableIDs", jni::ref<jni::array<java::lang::String>>>(rawOffset); }
	static jni::ref<jni::array<java::lang::String>> getAvailableIDs(jni::ref<java::lang::String> country) { return call_static_method<"getAvailableIDs", jni::ref<jni::array<java::lang::String>>>(country); }
	static jni::ref<jni::array<java::lang::String>> getAvailableIDs() { return call_static_method<"getAvailableIDs", jni::ref<jni::array<java::lang::String>>>(); }
	static jint countEquivalentIDs(jni::ref<java::lang::String> id) { return call_static_method<"countEquivalentIDs", jint>(id); }
	static jni::ref<java::lang::String> getEquivalentID(jni::ref<java::lang::String> id, jint index) { return call_static_method<"getEquivalentID", jni::ref<java::lang::String>>(id, index); }
	static jni::ref<android::icu::util::TimeZone> getDefault() { return call_static_method<"getDefault", jni::ref<android::icu::util::TimeZone>>(); }
	jboolean hasSameRules(jni::ref<android::icu::util::TimeZone> other) { return call_method<"hasSameRules", jboolean>(other); }
	jni::ref<java::lang::Object> clone() { return call_method<"clone", jni::ref<java::lang::Object>>(); }
	jboolean equals(jni::ref<java::lang::Object> obj) { return call_method<"equals", jboolean>(obj); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	static jni::ref<java::lang::String> getTZDataVersion() { return call_static_method<"getTZDataVersion", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> getCanonicalID(jni::ref<java::lang::String> id) { return call_static_method<"getCanonicalID", jni::ref<java::lang::String>>(id); }
	static jni::ref<java::lang::String> getCanonicalID(jni::ref<java::lang::String> id, jni::ref<jni::array<jboolean>> isSystemID) { return call_static_method<"getCanonicalID", jni::ref<java::lang::String>>(id, isSystemID); }
	static jni::ref<java::lang::String> getRegion(jni::ref<java::lang::String> id) { return call_static_method<"getRegion", jni::ref<java::lang::String>>(id); }
	static jni::ref<java::lang::String> getWindowsID(jni::ref<java::lang::String> id) { return call_static_method<"getWindowsID", jni::ref<java::lang::String>>(id); }
	static jni::ref<java::lang::String> getIDForWindowsID(jni::ref<java::lang::String> winid, jni::ref<java::lang::String> region) { return call_static_method<"getIDForWindowsID", jni::ref<java::lang::String>>(winid, region); }
	jboolean isFrozen() { return call_method<"isFrozen", jboolean>(); }
	jni::ref<android::icu::util::TimeZone> freeze() { return call_method<"freeze", jni::ref<android::icu::util::TimeZone>>(); }
	jni::ref<android::icu::util::TimeZone> cloneAsThawed() { return call_method<"cloneAsThawed", jni::ref<android::icu::util::TimeZone>>(); }

protected:

	TimeZone(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ICU_UTIL_TIMEZONE
