// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_LIB_EXSLTDATETIME_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_LIB_EXSLTDATETIME_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xalan::internal::lib { class ExsltDatetime; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xalan::internal::lib::ExsltDatetime>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xalan/internal/lib/ExsltDatetime";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_LIB_EXSLTDATETIME_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_LIB_EXSLTDATETIME)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_LIB_EXSLTDATETIME

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xpath/internal/objects/XObject.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xalan::internal::lib::ExsltDatetime : public jni::object_base<"com/sun/org/apache/xalan/internal/lib/ExsltDatetime",
	java::lang::Object>
{
public:

	static jni::ref<com::sun::org::apache::xalan::internal::lib::ExsltDatetime> new_object() { return base_::new_object(); }
	static jni::ref<java::lang::String> dateTime() { return call_static_method<"dateTime", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> date(jni::ref<java::lang::String> p1) { return call_static_method<"date", jni::ref<java::lang::String>>(p1); }
	static jni::ref<java::lang::String> date() { return call_static_method<"date", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> time(jni::ref<java::lang::String> p1) { return call_static_method<"time", jni::ref<java::lang::String>>(p1); }
	static jni::ref<java::lang::String> time() { return call_static_method<"time", jni::ref<java::lang::String>>(); }
	static jdouble year(jni::ref<java::lang::String> p1) { return call_static_method<"year", jdouble>(p1); }
	static jdouble year() { return call_static_method<"year", jdouble>(); }
	static jdouble monthInYear(jni::ref<java::lang::String> p1) { return call_static_method<"monthInYear", jdouble>(p1); }
	static jdouble monthInYear() { return call_static_method<"monthInYear", jdouble>(); }
	static jdouble weekInYear(jni::ref<java::lang::String> p1) { return call_static_method<"weekInYear", jdouble>(p1); }
	static jdouble weekInYear() { return call_static_method<"weekInYear", jdouble>(); }
	static jdouble dayInYear(jni::ref<java::lang::String> p1) { return call_static_method<"dayInYear", jdouble>(p1); }
	static jdouble dayInYear() { return call_static_method<"dayInYear", jdouble>(); }
	static jdouble dayInMonth(jni::ref<java::lang::String> p1) { return call_static_method<"dayInMonth", jdouble>(p1); }
	static jdouble dayInMonth() { return call_static_method<"dayInMonth", jdouble>(); }
	static jdouble dayOfWeekInMonth(jni::ref<java::lang::String> p1) { return call_static_method<"dayOfWeekInMonth", jdouble>(p1); }
	static jdouble dayOfWeekInMonth() { return call_static_method<"dayOfWeekInMonth", jdouble>(); }
	static jdouble dayInWeek(jni::ref<java::lang::String> p1) { return call_static_method<"dayInWeek", jdouble>(p1); }
	static jdouble dayInWeek() { return call_static_method<"dayInWeek", jdouble>(); }
	static jdouble hourInDay(jni::ref<java::lang::String> p1) { return call_static_method<"hourInDay", jdouble>(p1); }
	static jdouble hourInDay() { return call_static_method<"hourInDay", jdouble>(); }
	static jdouble minuteInHour(jni::ref<java::lang::String> p1) { return call_static_method<"minuteInHour", jdouble>(p1); }
	static jdouble minuteInHour() { return call_static_method<"minuteInHour", jdouble>(); }
	static jdouble secondInMinute(jni::ref<java::lang::String> p1) { return call_static_method<"secondInMinute", jdouble>(p1); }
	static jdouble secondInMinute() { return call_static_method<"secondInMinute", jdouble>(); }
	static jni::ref<com::sun::org::apache::xpath::internal::objects::XObject> leapYear(jni::ref<java::lang::String> p1) { return call_static_method<"leapYear", jni::ref<com::sun::org::apache::xpath::internal::objects::XObject>>(p1); }
	static jboolean leapYear() { return call_static_method<"leapYear", jboolean>(); }
	static jni::ref<java::lang::String> monthName(jni::ref<java::lang::String> p1) { return call_static_method<"monthName", jni::ref<java::lang::String>>(p1); }
	static jni::ref<java::lang::String> monthName() { return call_static_method<"monthName", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> monthAbbreviation(jni::ref<java::lang::String> p1) { return call_static_method<"monthAbbreviation", jni::ref<java::lang::String>>(p1); }
	static jni::ref<java::lang::String> monthAbbreviation() { return call_static_method<"monthAbbreviation", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> dayName(jni::ref<java::lang::String> p1) { return call_static_method<"dayName", jni::ref<java::lang::String>>(p1); }
	static jni::ref<java::lang::String> dayName() { return call_static_method<"dayName", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> dayAbbreviation(jni::ref<java::lang::String> p1) { return call_static_method<"dayAbbreviation", jni::ref<java::lang::String>>(p1); }
	static jni::ref<java::lang::String> dayAbbreviation() { return call_static_method<"dayAbbreviation", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> formatDate(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_static_method<"formatDate", jni::ref<java::lang::String>>(p1, p2); }

protected:

	ExsltDatetime(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_LIB_EXSLTDATETIME