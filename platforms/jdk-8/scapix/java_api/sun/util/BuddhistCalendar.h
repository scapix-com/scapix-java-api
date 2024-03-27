// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/GregorianCalendar.h>

#ifndef SCAPIX_JAVA_API_SUN_UTIL_BUDDHISTCALENDAR_FWD
#define SCAPIX_JAVA_API_SUN_UTIL_BUDDHISTCALENDAR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::util { class BuddhistCalendar; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::util::BuddhistCalendar>
{
	static constexpr fixed_string class_name = "sun/util/BuddhistCalendar";
	using base_classes = std::tuple<scapix::java_api::java::util::GregorianCalendar>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_UTIL_BUDDHISTCALENDAR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_UTIL_BUDDHISTCALENDAR)
#define SCAPIX_JAVA_API_SUN_UTIL_BUDDHISTCALENDAR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Locale.h>
#include <scapix/java_api/java/util/Map.h>
#include <scapix/java_api/java/util/TimeZone.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::util::BuddhistCalendar : public jni::object_base<"sun/util/BuddhistCalendar",
	java::util::GregorianCalendar>
{
public:

	static jni::ref<sun::util::BuddhistCalendar> new_object() { return base_::new_object(); }
	static jni::ref<sun::util::BuddhistCalendar> new_object(jni::ref<java::util::TimeZone> p1) { return base_::new_object(p1); }
	static jni::ref<sun::util::BuddhistCalendar> new_object(jni::ref<java::util::Locale> p1) { return base_::new_object(p1); }
	static jni::ref<sun::util::BuddhistCalendar> new_object(jni::ref<java::util::TimeZone> p1, jni::ref<java::util::Locale> p2) { return base_::new_object(p1, p2); }
	jni::ref<java::lang::String> getCalendarType() { return call_method<"getCalendarType", jni::ref<java::lang::String>>(); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jint get(jint p1) { return call_method<"get", jint>(p1); }
	void set(jint p1, jint p2) { return call_method<"set", void>(p1, p2); }
	void add(jint p1, jint p2) { return call_method<"add", void>(p1, p2); }
	void roll(jint p1, jint p2) { return call_method<"roll", void>(p1, p2); }
	jni::ref<java::lang::String> getDisplayName(jint p1, jint p2, jni::ref<java::util::Locale> p3) { return call_method<"getDisplayName", jni::ref<java::lang::String>>(p1, p2, p3); }
	jni::ref<java::util::Map> getDisplayNames(jint p1, jint p2, jni::ref<java::util::Locale> p3) { return call_method<"getDisplayNames", jni::ref<java::util::Map>>(p1, p2, p3); }
	jint getActualMaximum(jint p1) { return call_method<"getActualMaximum", jint>(p1); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	BuddhistCalendar(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_UTIL_BUDDHISTCALENDAR
