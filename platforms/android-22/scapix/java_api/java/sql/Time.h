// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/Date.h>

#ifndef SCAPIX_JAVA_API_JAVA_SQL_TIME_FWD
#define SCAPIX_JAVA_API_JAVA_SQL_TIME_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::sql { class Time; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::sql::Time>
{
	static constexpr fixed_string class_name = "java/sql/Time";
	using base_classes = std::tuple<scapix::java_api::java::util::Date>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SQL_TIME_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_SQL_TIME)
#define SCAPIX_JAVA_API_JAVA_SQL_TIME

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::sql::Time : public jni::object_base<"java/sql/Time",
	java::util::Date>
{
public:

	static jni::ref<java::sql::Time> new_object(jint theHour, jint theMinute, jint theSecond) { return base_::new_object(theHour, theMinute, theSecond); }
	static jni::ref<java::sql::Time> new_object(jlong theTime) { return base_::new_object(theTime); }
	jint getDate() { return call_method<"getDate", jint>(); }
	jint getDay() { return call_method<"getDay", jint>(); }
	jint getMonth() { return call_method<"getMonth", jint>(); }
	jint getYear() { return call_method<"getYear", jint>(); }
	void setDate(jint i) { return call_method<"setDate", void>(i); }
	void setMonth(jint i) { return call_method<"setMonth", void>(i); }
	void setYear(jint i) { return call_method<"setYear", void>(i); }
	void setTime(jlong time) { return call_method<"setTime", void>(time); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	static jni::ref<java::sql::Time> valueOf(jni::ref<java::lang::String> timeString) { return call_static_method<"valueOf", jni::ref<java::sql::Time>>(timeString); }

protected:

	Time(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SQL_TIME