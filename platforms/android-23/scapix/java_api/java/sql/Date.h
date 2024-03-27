// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/Date.h>

#ifndef SCAPIX_JAVA_API_JAVA_SQL_DATE_FWD
#define SCAPIX_JAVA_API_JAVA_SQL_DATE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::sql { class Date; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::sql::Date>
{
	static constexpr fixed_string class_name = "java/sql/Date";
	using base_classes = std::tuple<scapix::java_api::java::util::Date>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SQL_DATE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_SQL_DATE)
#define SCAPIX_JAVA_API_JAVA_SQL_DATE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::sql::Date : public jni::object_base<"java/sql/Date",
	java::util::Date>
{
public:

	static jni::ref<java::sql::Date> new_object(jint theYear, jint theMonth, jint theDay) { return base_::new_object(theYear, theMonth, theDay); }
	static jni::ref<java::sql::Date> new_object(jlong theDate) { return base_::new_object(theDate); }
	jint getHours() { return call_method<"getHours", jint>(); }
	jint getMinutes() { return call_method<"getMinutes", jint>(); }
	jint getSeconds() { return call_method<"getSeconds", jint>(); }
	void setHours(jint theHours) { return call_method<"setHours", void>(theHours); }
	void setMinutes(jint theMinutes) { return call_method<"setMinutes", void>(theMinutes); }
	void setSeconds(jint theSeconds) { return call_method<"setSeconds", void>(theSeconds); }
	void setTime(jlong theTime) { return call_method<"setTime", void>(theTime); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	static jni::ref<java::sql::Date> valueOf(jni::ref<java::lang::String> dateString) { return call_static_method<"valueOf", jni::ref<java::sql::Date>>(dateString); }

protected:

	Date(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SQL_DATE
