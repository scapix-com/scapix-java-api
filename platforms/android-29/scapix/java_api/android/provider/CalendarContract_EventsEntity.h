// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/provider/BaseColumns.h>
#include <scapix/java_api/android/provider/CalendarContract_SyncColumns.h>
#include <scapix/java_api/android/provider/CalendarContract_EventsColumns.h>

#ifndef SCAPIX_JAVA_API_ANDROID_PROVIDER_CALENDARCONTRACT_EVENTSENTITY_FWD
#define SCAPIX_JAVA_API_ANDROID_PROVIDER_CALENDARCONTRACT_EVENTSENTITY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::provider { class CalendarContract_EventsEntity; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::provider::CalendarContract_EventsEntity>
{
	static constexpr fixed_string class_name = "android/provider/CalendarContract$EventsEntity";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::provider::BaseColumns, scapix::java_api::android::provider::CalendarContract_SyncColumns, scapix::java_api::android::provider::CalendarContract_EventsColumns>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PROVIDER_CALENDARCONTRACT_EVENTSENTITY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_PROVIDER_CALENDARCONTRACT_EVENTSENTITY)
#define SCAPIX_JAVA_API_ANDROID_PROVIDER_CALENDARCONTRACT_EVENTSENTITY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/ContentProviderClient.h>
#include <scapix/java_api/android/content/ContentResolver.h>
#include <scapix/java_api/android/content/EntityIterator.h>
#include <scapix/java_api/android/database/Cursor.h>
#include <scapix/java_api/android/net/Uri.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::provider::CalendarContract_EventsEntity : public jni::object_base<"android/provider/CalendarContract$EventsEntity",
	java::lang::Object,
	android::provider::BaseColumns,
	android::provider::CalendarContract_SyncColumns,
	android::provider::CalendarContract_EventsColumns>
{
public:

	static jni::ref<android::net::Uri> CONTENT_URI() { return get_static_field<"CONTENT_URI", jni::ref<android::net::Uri>>(); }

	static jni::ref<android::content::EntityIterator> newEntityIterator(jni::ref<android::database::Cursor> cursor, jni::ref<android::content::ContentResolver> resolver) { return call_static_method<"newEntityIterator", jni::ref<android::content::EntityIterator>>(cursor, resolver); }
	static jni::ref<android::content::EntityIterator> newEntityIterator(jni::ref<android::database::Cursor> cursor, jni::ref<android::content::ContentProviderClient> provider) { return call_static_method<"newEntityIterator", jni::ref<android::content::EntityIterator>>(cursor, provider); }

protected:

	CalendarContract_EventsEntity(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PROVIDER_CALENDARCONTRACT_EVENTSENTITY
