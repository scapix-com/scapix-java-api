// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/provider/BaseColumns.h>
#include <scapix/java_api/android/provider/CalendarContract_SyncColumns.h>
#include <scapix/java_api/android/provider/CalendarContract_EventsColumns.h>
#include <scapix/java_api/android/provider/CalendarContract_CalendarColumns.h>

#ifndef SCAPIX_JAVA_API_ANDROID_PROVIDER_CALENDARCONTRACT_EVENTS_FWD
#define SCAPIX_JAVA_API_ANDROID_PROVIDER_CALENDARCONTRACT_EVENTS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::provider { class CalendarContract_Events; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::provider::CalendarContract_Events>
{
	static constexpr fixed_string class_name = "android/provider/CalendarContract$Events";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::provider::BaseColumns, scapix::java_api::android::provider::CalendarContract_SyncColumns, scapix::java_api::android::provider::CalendarContract_EventsColumns, scapix::java_api::android::provider::CalendarContract_CalendarColumns>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PROVIDER_CALENDARCONTRACT_EVENTS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_PROVIDER_CALENDARCONTRACT_EVENTS)
#define SCAPIX_JAVA_API_ANDROID_PROVIDER_CALENDARCONTRACT_EVENTS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/net/Uri.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::provider::CalendarContract_Events : public jni::object_base<"android/provider/CalendarContract$Events",
	java::lang::Object,
	android::provider::BaseColumns,
	android::provider::CalendarContract_SyncColumns,
	android::provider::CalendarContract_EventsColumns,
	android::provider::CalendarContract_CalendarColumns>
{
public:

	static jni::ref<android::net::Uri> CONTENT_EXCEPTION_URI() { return get_static_field<"CONTENT_EXCEPTION_URI", jni::ref<android::net::Uri>>(); }
	static jni::ref<android::net::Uri> CONTENT_URI() { return get_static_field<"CONTENT_URI", jni::ref<android::net::Uri>>(); }


protected:

	CalendarContract_Events(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PROVIDER_CALENDARCONTRACT_EVENTS
