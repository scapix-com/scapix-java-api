// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/TimeZone.h>

#ifndef SCAPIX_JAVA_API_SUN_UTIL_CALENDAR_ZONEINFO_FWD
#define SCAPIX_JAVA_API_SUN_UTIL_CALENDAR_ZONEINFO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::util::calendar { class ZoneInfo; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::util::calendar::ZoneInfo>
{
	static constexpr fixed_string class_name = "sun/util/calendar/ZoneInfo";
	using base_classes = std::tuple<scapix::java_api::java::util::TimeZone>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_UTIL_CALENDAR_ZONEINFO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_UTIL_CALENDAR_ZONEINFO)
#define SCAPIX_JAVA_API_SUN_UTIL_CALENDAR_ZONEINFO

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Date.h>
#include <scapix/java_api/java/util/Map.h>
#include <scapix/java_api/java/util/SimpleTimeZone.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::util::calendar::ZoneInfo : public jni::object_base<"sun/util/calendar/ZoneInfo",
	java::util::TimeZone>
{
public:

	static jni::ref<sun::util::calendar::ZoneInfo> new_object() { return base_::new_object(); }
	static jni::ref<sun::util::calendar::ZoneInfo> new_object(jni::ref<java::lang::String> p1, jint p2) { return base_::new_object(p1, p2); }
	jint getOffset(jlong p1) { return call_method<"getOffset", jint>(p1); }
	jint getOffsets(jlong p1, jni::ref<jni::array<jint>> p2) { return call_method<"getOffsets", jint>(p1, p2); }
	jint getOffsetsByStandard(jlong p1, jni::ref<jni::array<jint>> p2) { return call_method<"getOffsetsByStandard", jint>(p1, p2); }
	jint getOffsetsByWall(jlong p1, jni::ref<jni::array<jint>> p2) { return call_method<"getOffsetsByWall", jint>(p1, p2); }
	jint getOffset(jint p1, jint p2, jint p3, jint p4, jint p5, jint p6) { return call_method<"getOffset", jint>(p1, p2, p3, p4, p5, p6); }
	void setRawOffset(jint p1) { return call_method<"setRawOffset", void>(p1); }
	jint getRawOffset() { return call_method<"getRawOffset", jint>(); }
	jboolean isDirty() { return call_method<"isDirty", jboolean>(); }
	jboolean useDaylightTime() { return call_method<"useDaylightTime", jboolean>(); }
	jboolean observesDaylightTime() { return call_method<"observesDaylightTime", jboolean>(); }
	jboolean inDaylightTime(jni::ref<java::util::Date> p1) { return call_method<"inDaylightTime", jboolean>(p1); }
	jint getDSTSavings() { return call_method<"getDSTSavings", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	static jni::ref<jni::array<java::lang::String>> getAvailableIDs() { return call_static_method<"getAvailableIDs", jni::ref<jni::array<java::lang::String>>>(); }
	static jni::ref<jni::array<java::lang::String>> getAvailableIDs(jint p1) { return call_static_method<"getAvailableIDs", jni::ref<jni::array<java::lang::String>>>(p1); }
	static jni::ref<java::util::TimeZone> getTimeZone(jni::ref<java::lang::String> p1) { return call_static_method<"getTimeZone", jni::ref<java::util::TimeZone>>(p1); }
	jni::ref<java::util::SimpleTimeZone> getLastRuleInstance() { return call_method<"getLastRuleInstance", jni::ref<java::util::SimpleTimeZone>>(); }
	jni::ref<java::lang::Object> clone() { return call_method<"clone", jni::ref<java::lang::Object>>(); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jboolean hasSameRules(jni::ref<java::util::TimeZone> p1) { return call_method<"hasSameRules", jboolean>(p1); }
	static jni::ref<java::util::Map> getAliasTable() { return call_static_method<"getAliasTable", jni::ref<java::util::Map>>(); }

protected:

	ZoneInfo(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_UTIL_CALENDAR_ZONEINFO
