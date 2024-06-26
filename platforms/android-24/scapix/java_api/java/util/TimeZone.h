// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Serializable.h>
#include <scapix/java_api/java/lang/Cloneable.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_TIMEZONE_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_TIMEZONE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class TimeZone; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::TimeZone>
{
	static constexpr fixed_string class_name = "java/util/TimeZone";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::io::Serializable, scapix::java_api::java::lang::Cloneable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_TIMEZONE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_TIMEZONE)
#define SCAPIX_JAVA_API_JAVA_UTIL_TIMEZONE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Date.h>
#include <scapix/java_api/java/util/Locale.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::TimeZone : public jni::object_base<"java/util/TimeZone",
	java::lang::Object,
	java::io::Serializable,
	java::lang::Cloneable>
{
public:

	static jint LONG() { return get_static_field<"LONG", jint>(); }
	static jint SHORT() { return get_static_field<"SHORT", jint>(); }

	static jni::ref<java::util::TimeZone> new_object() { return base_::new_object(); }
	jint getOffset(jint p1, jint p2, jint p3, jint p4, jint p5, jint p6) { return call_method<"getOffset", jint>(p1, p2, p3, p4, p5, p6); }
	jint getOffset(jlong date) { return call_method<"getOffset", jint>(date); }
	void setRawOffset(jint p1) { return call_method<"setRawOffset", void>(p1); }
	jint getRawOffset() { return call_method<"getRawOffset", jint>(); }
	jni::ref<java::lang::String> getID() { return call_method<"getID", jni::ref<java::lang::String>>(); }
	void setID(jni::ref<java::lang::String> ID) { return call_method<"setID", void>(ID); }
	jni::ref<java::lang::String> getDisplayName() { return call_method<"getDisplayName", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getDisplayName(jni::ref<java::util::Locale> locale) { return call_method<"getDisplayName", jni::ref<java::lang::String>>(locale); }
	jni::ref<java::lang::String> getDisplayName(jboolean daylight, jint style) { return call_method<"getDisplayName", jni::ref<java::lang::String>>(daylight, style); }
	jni::ref<java::lang::String> getDisplayName(jboolean daylightTime, jint style, jni::ref<java::util::Locale> locale) { return call_method<"getDisplayName", jni::ref<java::lang::String>>(daylightTime, style, locale); }
	jint getDSTSavings() { return call_method<"getDSTSavings", jint>(); }
	jboolean useDaylightTime() { return call_method<"useDaylightTime", jboolean>(); }
	jboolean observesDaylightTime() { return call_method<"observesDaylightTime", jboolean>(); }
	jboolean inDaylightTime(jni::ref<java::util::Date> p1) { return call_method<"inDaylightTime", jboolean>(p1); }
	static jni::ref<java::util::TimeZone> getTimeZone(jni::ref<java::lang::String> id) { return call_static_method<"getTimeZone", jni::ref<java::util::TimeZone>>(id); }
	static jni::ref<jni::array<java::lang::String>> getAvailableIDs(jint rawOffset) { return call_static_method<"getAvailableIDs", jni::ref<jni::array<java::lang::String>>>(rawOffset); }
	static jni::ref<jni::array<java::lang::String>> getAvailableIDs() { return call_static_method<"getAvailableIDs", jni::ref<jni::array<java::lang::String>>>(); }
	static jni::ref<java::util::TimeZone> getDefault() { return call_static_method<"getDefault", jni::ref<java::util::TimeZone>>(); }
	static void setDefault(jni::ref<java::util::TimeZone> timeZone) { return call_static_method<"setDefault", void>(timeZone); }
	jboolean hasSameRules(jni::ref<java::util::TimeZone> other) { return call_method<"hasSameRules", jboolean>(other); }
	jni::ref<java::lang::Object> clone() { return call_method<"clone", jni::ref<java::lang::Object>>(); }

protected:

	TimeZone(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_TIMEZONE
