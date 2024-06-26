// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/ListResourceBundle.h>

#ifndef SCAPIX_JAVA_API_SUN_UTIL_RESOURCES_CLDR_CALENDARDATA_FWD
#define SCAPIX_JAVA_API_SUN_UTIL_RESOURCES_CLDR_CALENDARDATA_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::util::resources::cldr { class CalendarData; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::util::resources::cldr::CalendarData>
{
	static constexpr fixed_string class_name = "sun/util/resources/cldr/CalendarData";
	using base_classes = std::tuple<scapix::java_api::java::util::ListResourceBundle>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_UTIL_RESOURCES_CLDR_CALENDARDATA_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_UTIL_RESOURCES_CLDR_CALENDARDATA)
#define SCAPIX_JAVA_API_SUN_UTIL_RESOURCES_CLDR_CALENDARDATA

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::util::resources::cldr::CalendarData : public jni::object_base<"sun/util/resources/cldr/CalendarData",
	java::util::ListResourceBundle>
{
public:

	static jni::ref<sun::util::resources::cldr::CalendarData> new_object() { return base_::new_object(); }

protected:

	CalendarData(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_UTIL_RESOURCES_CLDR_CALENDARDATA
