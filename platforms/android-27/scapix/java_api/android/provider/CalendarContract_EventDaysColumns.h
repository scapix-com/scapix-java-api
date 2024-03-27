// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_PROVIDER_CALENDARCONTRACT_EVENTDAYSCOLUMNS_FWD
#define SCAPIX_JAVA_API_ANDROID_PROVIDER_CALENDARCONTRACT_EVENTDAYSCOLUMNS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::provider { class CalendarContract_EventDaysColumns; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::provider::CalendarContract_EventDaysColumns>
{
	static constexpr fixed_string class_name = "android/provider/CalendarContract$EventDaysColumns";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PROVIDER_CALENDARCONTRACT_EVENTDAYSCOLUMNS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_PROVIDER_CALENDARCONTRACT_EVENTDAYSCOLUMNS)
#define SCAPIX_JAVA_API_ANDROID_PROVIDER_CALENDARCONTRACT_EVENTDAYSCOLUMNS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::provider::CalendarContract_EventDaysColumns : public jni::object_base<"android/provider/CalendarContract$EventDaysColumns",
	java::lang::Object>
{
public:

	static jni::ref<java::lang::String> ENDDAY() { return get_static_field<"ENDDAY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> STARTDAY() { return get_static_field<"STARTDAY", jni::ref<java::lang::String>>(); }


protected:

	CalendarContract_EventDaysColumns(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PROVIDER_CALENDARCONTRACT_EVENTDAYSCOLUMNS