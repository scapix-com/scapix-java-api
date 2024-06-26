// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/TimeZone.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_SIMPLETIMEZONE_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_SIMPLETIMEZONE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class SimpleTimeZone; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::SimpleTimeZone>
{
	static constexpr fixed_string class_name = "java/util/SimpleTimeZone";
	using base_classes = std::tuple<scapix::java_api::java::util::TimeZone>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_SIMPLETIMEZONE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_SIMPLETIMEZONE)
#define SCAPIX_JAVA_API_JAVA_UTIL_SIMPLETIMEZONE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Date.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::SimpleTimeZone : public jni::object_base<"java/util/SimpleTimeZone",
	java::util::TimeZone>
{
public:

	static jint WALL_TIME() { return get_static_field<"WALL_TIME", jint>(); }
	static jint STANDARD_TIME() { return get_static_field<"STANDARD_TIME", jint>(); }
	static jint UTC_TIME() { return get_static_field<"UTC_TIME", jint>(); }

	static jni::ref<java::util::SimpleTimeZone> new_object(jint rawOffset, jni::ref<java::lang::String> ID) { return base_::new_object(rawOffset, ID); }
	static jni::ref<java::util::SimpleTimeZone> new_object(jint rawOffset, jni::ref<java::lang::String> ID, jint startMonth, jint startDay, jint startDayOfWeek, jint startTime, jint endMonth, jint endDay, jint endDayOfWeek, jint endTime) { return base_::new_object(rawOffset, ID, startMonth, startDay, startDayOfWeek, startTime, endMonth, endDay, endDayOfWeek, endTime); }
	static jni::ref<java::util::SimpleTimeZone> new_object(jint rawOffset, jni::ref<java::lang::String> ID, jint startMonth, jint startDay, jint startDayOfWeek, jint startTime, jint endMonth, jint endDay, jint endDayOfWeek, jint endTime, jint dstSavings) { return base_::new_object(rawOffset, ID, startMonth, startDay, startDayOfWeek, startTime, endMonth, endDay, endDayOfWeek, endTime, dstSavings); }
	static jni::ref<java::util::SimpleTimeZone> new_object(jint rawOffset, jni::ref<java::lang::String> ID, jint startMonth, jint startDay, jint startDayOfWeek, jint startTime, jint startTimeMode, jint endMonth, jint endDay, jint endDayOfWeek, jint endTime, jint endTimeMode, jint dstSavings) { return base_::new_object(rawOffset, ID, startMonth, startDay, startDayOfWeek, startTime, startTimeMode, endMonth, endDay, endDayOfWeek, endTime, endTimeMode, dstSavings); }
	void setStartYear(jint year) { return call_method<"setStartYear", void>(year); }
	void setStartRule(jint startMonth, jint startDay, jint startDayOfWeek, jint startTime) { return call_method<"setStartRule", void>(startMonth, startDay, startDayOfWeek, startTime); }
	void setStartRule(jint startMonth, jint startDay, jint startTime) { return call_method<"setStartRule", void>(startMonth, startDay, startTime); }
	void setStartRule(jint startMonth, jint startDay, jint startDayOfWeek, jint startTime, jboolean after) { return call_method<"setStartRule", void>(startMonth, startDay, startDayOfWeek, startTime, after); }
	void setEndRule(jint endMonth, jint endDay, jint endDayOfWeek, jint endTime) { return call_method<"setEndRule", void>(endMonth, endDay, endDayOfWeek, endTime); }
	void setEndRule(jint endMonth, jint endDay, jint endTime) { return call_method<"setEndRule", void>(endMonth, endDay, endTime); }
	void setEndRule(jint endMonth, jint endDay, jint endDayOfWeek, jint endTime, jboolean after) { return call_method<"setEndRule", void>(endMonth, endDay, endDayOfWeek, endTime, after); }
	jint getOffset(jlong date) { return call_method<"getOffset", jint>(date); }
	jint getOffset(jint era, jint year, jint month, jint day, jint dayOfWeek, jint millis) { return call_method<"getOffset", jint>(era, year, month, day, dayOfWeek, millis); }
	jint getRawOffset() { return call_method<"getRawOffset", jint>(); }
	void setRawOffset(jint offsetMillis) { return call_method<"setRawOffset", void>(offsetMillis); }
	void setDSTSavings(jint millisSavedDuringDST) { return call_method<"setDSTSavings", void>(millisSavedDuringDST); }
	jint getDSTSavings() { return call_method<"getDSTSavings", jint>(); }
	jboolean useDaylightTime() { return call_method<"useDaylightTime", jboolean>(); }
	jboolean observesDaylightTime() { return call_method<"observesDaylightTime", jboolean>(); }
	jboolean inDaylightTime(jni::ref<java::util::Date> date) { return call_method<"inDaylightTime", jboolean>(date); }
	jni::ref<java::lang::Object> clone() { return call_method<"clone", jni::ref<java::lang::Object>>(); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> obj) { return call_method<"equals", jboolean>(obj); }
	jboolean hasSameRules(jni::ref<java::util::TimeZone> other) { return call_method<"hasSameRules", jboolean>(other); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	SimpleTimeZone(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_SIMPLETIMEZONE
