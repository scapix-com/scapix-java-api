// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/provider/SyncStateContract_Columns.h>

#ifndef SCAPIX_JAVA_API_ANDROID_PROVIDER_CALENDARCONTRACT_SYNCSTATE_FWD
#define SCAPIX_JAVA_API_ANDROID_PROVIDER_CALENDARCONTRACT_SYNCSTATE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::provider { class CalendarContract_SyncState; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::provider::CalendarContract_SyncState>
{
	static constexpr fixed_string class_name = "android/provider/CalendarContract$SyncState";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::provider::SyncStateContract_Columns>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PROVIDER_CALENDARCONTRACT_SYNCSTATE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_PROVIDER_CALENDARCONTRACT_SYNCSTATE)
#define SCAPIX_JAVA_API_ANDROID_PROVIDER_CALENDARCONTRACT_SYNCSTATE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/net/Uri.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::provider::CalendarContract_SyncState : public jni::object_base<"android/provider/CalendarContract$SyncState",
	java::lang::Object,
	android::provider::SyncStateContract_Columns>
{
public:

	static jni::ref<android::net::Uri> CONTENT_URI() { return get_static_field<"CONTENT_URI", jni::ref<android::net::Uri>>(); }


protected:

	CalendarContract_SyncState(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PROVIDER_CALENDARCONTRACT_SYNCSTATE