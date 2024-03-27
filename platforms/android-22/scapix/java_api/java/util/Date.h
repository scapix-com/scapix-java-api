// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Serializable.h>
#include <scapix/java_api/java/lang/Cloneable.h>
#include <scapix/java_api/java/lang/Comparable.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_DATE_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_DATE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class Date; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::Date>
{
	static constexpr fixed_string class_name = "java/util/Date";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::io::Serializable, scapix::java_api::java::lang::Cloneable, scapix::java_api::java::lang::Comparable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_DATE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_DATE)
#define SCAPIX_JAVA_API_JAVA_UTIL_DATE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::Date : public jni::object_base<"java/util/Date",
	java::lang::Object,
	java::io::Serializable,
	java::lang::Cloneable,
	java::lang::Comparable>
{
public:

	static jni::ref<java::util::Date> new_object() { return base_::new_object(); }
	static jni::ref<java::util::Date> new_object(jint year, jint month, jint day) { return base_::new_object(year, month, day); }
	static jni::ref<java::util::Date> new_object(jint year, jint month, jint day, jint hour, jint minute) { return base_::new_object(year, month, day, hour, minute); }
	static jni::ref<java::util::Date> new_object(jint year, jint month, jint day, jint hour, jint minute, jint second) { return base_::new_object(year, month, day, hour, minute, second); }
	static jni::ref<java::util::Date> new_object(jlong milliseconds) { return base_::new_object(milliseconds); }
	static jni::ref<java::util::Date> new_object(jni::ref<java::lang::String> string) { return base_::new_object(string); }
	jboolean after(jni::ref<java::util::Date> date) { return call_method<"after", jboolean>(date); }
	jboolean before(jni::ref<java::util::Date> date) { return call_method<"before", jboolean>(date); }
	jni::ref<java::lang::Object> clone() { return call_method<"clone", jni::ref<java::lang::Object>>(); }
	jint compareTo(jni::ref<java::util::Date> date) { return call_method<"compareTo", jint>(date); }
	jboolean equals(jni::ref<java::lang::Object> object) { return call_method<"equals", jboolean>(object); }
	jint getDate() { return call_method<"getDate", jint>(); }
	jint getDay() { return call_method<"getDay", jint>(); }
	jint getHours() { return call_method<"getHours", jint>(); }
	jint getMinutes() { return call_method<"getMinutes", jint>(); }
	jint getMonth() { return call_method<"getMonth", jint>(); }
	jint getSeconds() { return call_method<"getSeconds", jint>(); }
	jlong getTime() { return call_method<"getTime", jlong>(); }
	jint getTimezoneOffset() { return call_method<"getTimezoneOffset", jint>(); }
	jint getYear() { return call_method<"getYear", jint>(); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	static jlong parse(jni::ref<java::lang::String> string) { return call_static_method<"parse", jlong>(string); }
	void setDate(jint day) { return call_method<"setDate", void>(day); }
	void setHours(jint hour) { return call_method<"setHours", void>(hour); }
	void setMinutes(jint minute) { return call_method<"setMinutes", void>(minute); }
	void setMonth(jint month) { return call_method<"setMonth", void>(month); }
	void setSeconds(jint second) { return call_method<"setSeconds", void>(second); }
	void setTime(jlong milliseconds) { return call_method<"setTime", void>(milliseconds); }
	void setYear(jint year) { return call_method<"setYear", void>(year); }
	jni::ref<java::lang::String> toGMTString() { return call_method<"toGMTString", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> toLocaleString() { return call_method<"toLocaleString", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	static jlong UTC(jint year, jint month, jint day, jint hour, jint minute, jint second) { return call_static_method<"UTC", jlong>(year, month, day, hour, minute, second); }

protected:

	Date(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_DATE
