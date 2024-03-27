// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_UTIL_CALENDAR_CALENDARUTILS_FWD
#define SCAPIX_JAVA_API_SUN_UTIL_CALENDAR_CALENDARUTILS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::util::calendar { class CalendarUtils; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::util::calendar::CalendarUtils>
{
	static constexpr fixed_string class_name = "sun/util/calendar/CalendarUtils";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_UTIL_CALENDAR_CALENDARUTILS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_UTIL_CALENDAR_CALENDARUTILS)
#define SCAPIX_JAVA_API_SUN_UTIL_CALENDAR_CALENDARUTILS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/StringBuffer.h>
#include <scapix/java_api/java/lang/StringBuilder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::util::calendar::CalendarUtils : public jni::object_base<"sun/util/calendar/CalendarUtils",
	java::lang::Object>
{
public:

	static jni::ref<sun::util::calendar::CalendarUtils> new_object() { return base_::new_object(); }
	static jboolean isGregorianLeapYear(jint gregorianYear) { return call_static_method<"isGregorianLeapYear", jboolean>(gregorianYear); }
	static jboolean isJulianLeapYear(jint normalizedJulianYear) { return call_static_method<"isJulianLeapYear", jboolean>(normalizedJulianYear); }
	static jlong floorDivide(jlong n, jlong p2) { return call_static_method<"floorDivide", jlong>(n, p2); }
	static jint floorDivide(jint n, jint d) { return call_static_method<"floorDivide", jint>(n, d); }
	static jint floorDivide(jint n, jint d, jni::ref<jni::array<jint>> r) { return call_static_method<"floorDivide", jint>(n, d, r); }
	static jint floorDivide(jlong n, jint p2, jni::ref<jni::array<jint>> d) { return call_static_method<"floorDivide", jint>(n, p2, d); }
	static jlong mod(jlong x, jlong p2) { return call_static_method<"mod", jlong>(x, p2); }
	static jint mod(jint x, jint y) { return call_static_method<"mod", jint>(x, y); }
	static jint amod(jint x, jint y) { return call_static_method<"amod", jint>(x, y); }
	static jlong amod(jlong x, jlong p2) { return call_static_method<"amod", jlong>(x, p2); }
	static jni::ref<java::lang::StringBuilder> sprintf0d(jni::ref<java::lang::StringBuilder> sb, jint value, jint width) { return call_static_method<"sprintf0d", jni::ref<java::lang::StringBuilder>>(sb, value, width); }
	static jni::ref<java::lang::StringBuffer> sprintf0d(jni::ref<java::lang::StringBuffer> sb, jint value, jint width) { return call_static_method<"sprintf0d", jni::ref<java::lang::StringBuffer>>(sb, value, width); }

protected:

	CalendarUtils(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_UTIL_CALENDAR_CALENDARUTILS
