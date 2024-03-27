// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_PROVIDER_CALENDARCONTRACT_FWD
#define SCAPIX_JAVA_API_ANDROID_PROVIDER_CALENDARCONTRACT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::provider { class CalendarContract; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::provider::CalendarContract>
{
	static constexpr fixed_string class_name = "android/provider/CalendarContract";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PROVIDER_CALENDARCONTRACT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_PROVIDER_CALENDARCONTRACT)
#define SCAPIX_JAVA_API_ANDROID_PROVIDER_CALENDARCONTRACT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/android/provider/CalendarContract_SyncState.h>
#include <scapix/java_api/android/provider/CalendarContract_ExtendedProperties.h>
#include <scapix/java_api/android/provider/CalendarContract_Colors.h>
#include <scapix/java_api/android/provider/CalendarContract_CalendarAlerts.h>
#include <scapix/java_api/android/provider/CalendarContract_Reminders.h>
#include <scapix/java_api/android/provider/CalendarContract_EventDays.h>
#include <scapix/java_api/android/provider/CalendarContract_CalendarCache.h>
#include <scapix/java_api/android/provider/CalendarContract_Instances.h>
#include <scapix/java_api/android/provider/CalendarContract_Events.h>
#include <scapix/java_api/android/provider/CalendarContract_EventsEntity.h>
#include <scapix/java_api/android/provider/CalendarContract_Attendees.h>
#include <scapix/java_api/android/provider/CalendarContract_Calendars.h>
#include <scapix/java_api/android/provider/CalendarContract_CalendarEntity.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::provider::CalendarContract : public jni::object_base<"android/provider/CalendarContract",
	java::lang::Object>
{
public:

	using SyncState = CalendarContract_SyncState;
	using ExtendedProperties = CalendarContract_ExtendedProperties;
	using Colors = CalendarContract_Colors;
	using CalendarAlerts = CalendarContract_CalendarAlerts;
	using Reminders = CalendarContract_Reminders;
	using EventDays = CalendarContract_EventDays;
	using CalendarCache = CalendarContract_CalendarCache;
	using Instances = CalendarContract_Instances;
	using Events = CalendarContract_Events;
	using EventsEntity = CalendarContract_EventsEntity;
	using Attendees = CalendarContract_Attendees;
	using Calendars = CalendarContract_Calendars;
	using CalendarEntity = CalendarContract_CalendarEntity;

	static jni::ref<java::lang::String> ACCOUNT_TYPE_LOCAL() { return get_static_field<"ACCOUNT_TYPE_LOCAL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ACTION_EVENT_REMINDER() { return get_static_field<"ACTION_EVENT_REMINDER", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ACTION_HANDLE_CUSTOM_EVENT() { return get_static_field<"ACTION_HANDLE_CUSTOM_EVENT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> AUTHORITY() { return get_static_field<"AUTHORITY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> CALLER_IS_SYNCADAPTER() { return get_static_field<"CALLER_IS_SYNCADAPTER", jni::ref<java::lang::String>>(); }
	static jni::ref<android::net::Uri> CONTENT_URI() { return get_static_field<"CONTENT_URI", jni::ref<android::net::Uri>>(); }
	static jni::ref<java::lang::String> EXTRA_CUSTOM_APP_URI() { return get_static_field<"EXTRA_CUSTOM_APP_URI", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_EVENT_ALL_DAY() { return get_static_field<"EXTRA_EVENT_ALL_DAY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_EVENT_BEGIN_TIME() { return get_static_field<"EXTRA_EVENT_BEGIN_TIME", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_EVENT_END_TIME() { return get_static_field<"EXTRA_EVENT_END_TIME", jni::ref<java::lang::String>>(); }


protected:

	CalendarContract(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PROVIDER_CALENDARCONTRACT
