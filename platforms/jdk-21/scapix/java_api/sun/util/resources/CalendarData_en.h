// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/util/resources/LocaleNamesBundle.h>

#ifndef SCAPIX_JAVA_API_SUN_UTIL_RESOURCES_CALENDARDATA_EN_FWD
#define SCAPIX_JAVA_API_SUN_UTIL_RESOURCES_CALENDARDATA_EN_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::util::resources { class CalendarData_en; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::util::resources::CalendarData_en>
{
	static constexpr fixed_string class_name = "sun/util/resources/CalendarData_en";
	using base_classes = std::tuple<scapix::java_api::sun::util::resources::LocaleNamesBundle>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_UTIL_RESOURCES_CALENDARDATA_EN_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_UTIL_RESOURCES_CALENDARDATA_EN)
#define SCAPIX_JAVA_API_SUN_UTIL_RESOURCES_CALENDARDATA_EN

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::util::resources::CalendarData_en : public jni::object_base<"sun/util/resources/CalendarData_en",
	sun::util::resources::LocaleNamesBundle>
{
public:

	static jni::ref<sun::util::resources::CalendarData_en> new_object() { return base_::new_object(); }

protected:

	CalendarData_en(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_UTIL_RESOURCES_CALENDARDATA_EN
