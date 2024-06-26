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

	static jni::ref<java::util::SimpleTimeZone> new_object(jint p1, jni::ref<java::lang::String> p2) { return base_::new_object(p1, p2); }
	static jni::ref<java::util::SimpleTimeZone> new_object(jint p1, jni::ref<java::lang::String> p2, jint p3, jint p4, jint p5, jint p6, jint p7, jint p8, jint p9, jint p10) { return base_::new_object(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); }
	static jni::ref<java::util::SimpleTimeZone> new_object(jint p1, jni::ref<java::lang::String> p2, jint p3, jint p4, jint p5, jint p6, jint p7, jint p8, jint p9, jint p10, jint p11) { return base_::new_object(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); }
	static jni::ref<java::util::SimpleTimeZone> new_object(jint p1, jni::ref<java::lang::String> p2, jint p3, jint p4, jint p5, jint p6, jint p7, jint p8, jint p9, jint p10, jint p11, jint p12, jint p13) { return base_::new_object(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13); }
	void setStartYear(jint p1) { return call_method<"setStartYear", void>(p1); }
	void setStartRule(jint p1, jint p2, jint p3, jint p4) { return call_method<"setStartRule", void>(p1, p2, p3, p4); }
	void setStartRule(jint p1, jint p2, jint p3) { return call_method<"setStartRule", void>(p1, p2, p3); }
	void setStartRule(jint p1, jint p2, jint p3, jint p4, jboolean p5) { return call_method<"setStartRule", void>(p1, p2, p3, p4, p5); }
	void setEndRule(jint p1, jint p2, jint p3, jint p4) { return call_method<"setEndRule", void>(p1, p2, p3, p4); }
	void setEndRule(jint p1, jint p2, jint p3) { return call_method<"setEndRule", void>(p1, p2, p3); }
	void setEndRule(jint p1, jint p2, jint p3, jint p4, jboolean p5) { return call_method<"setEndRule", void>(p1, p2, p3, p4, p5); }
	jint getOffset(jlong p1) { return call_method<"getOffset", jint>(p1); }
	jint getOffset(jint p1, jint p2, jint p3, jint p4, jint p5, jint p6) { return call_method<"getOffset", jint>(p1, p2, p3, p4, p5, p6); }
	jint getRawOffset() { return call_method<"getRawOffset", jint>(); }
	void setRawOffset(jint p1) { return call_method<"setRawOffset", void>(p1); }
	void setDSTSavings(jint p1) { return call_method<"setDSTSavings", void>(p1); }
	jint getDSTSavings() { return call_method<"getDSTSavings", jint>(); }
	jboolean useDaylightTime() { return call_method<"useDaylightTime", jboolean>(); }
	jboolean observesDaylightTime() { return call_method<"observesDaylightTime", jboolean>(); }
	jboolean inDaylightTime(jni::ref<java::util::Date> p1) { return call_method<"inDaylightTime", jboolean>(p1); }
	jni::ref<java::lang::Object> clone() { return call_method<"clone", jni::ref<java::lang::Object>>(); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jboolean hasSameRules(jni::ref<java::util::TimeZone> p1) { return call_method<"hasSameRules", jboolean>(p1); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	SimpleTimeZone(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_SIMPLETIMEZONE
