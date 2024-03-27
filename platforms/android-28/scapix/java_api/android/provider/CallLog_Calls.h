// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/provider/BaseColumns.h>

#ifndef SCAPIX_JAVA_API_ANDROID_PROVIDER_CALLLOG_CALLS_FWD
#define SCAPIX_JAVA_API_ANDROID_PROVIDER_CALLLOG_CALLS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::provider { class CallLog_Calls; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::provider::CallLog_Calls>
{
	static constexpr fixed_string class_name = "android/provider/CallLog$Calls";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::provider::BaseColumns>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PROVIDER_CALLLOG_CALLS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_PROVIDER_CALLLOG_CALLS)
#define SCAPIX_JAVA_API_ANDROID_PROVIDER_CALLLOG_CALLS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::provider::CallLog_Calls : public jni::object_base<"android/provider/CallLog$Calls",
	java::lang::Object,
	android::provider::BaseColumns>
{
public:

	static jint ANSWERED_EXTERNALLY_TYPE() { return get_static_field<"ANSWERED_EXTERNALLY_TYPE", jint>(); }
	static jint BLOCKED_TYPE() { return get_static_field<"BLOCKED_TYPE", jint>(); }
	static jni::ref<java::lang::String> CACHED_FORMATTED_NUMBER() { return get_static_field<"CACHED_FORMATTED_NUMBER", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> CACHED_LOOKUP_URI() { return get_static_field<"CACHED_LOOKUP_URI", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> CACHED_MATCHED_NUMBER() { return get_static_field<"CACHED_MATCHED_NUMBER", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> CACHED_NAME() { return get_static_field<"CACHED_NAME", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> CACHED_NORMALIZED_NUMBER() { return get_static_field<"CACHED_NORMALIZED_NUMBER", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> CACHED_NUMBER_LABEL() { return get_static_field<"CACHED_NUMBER_LABEL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> CACHED_NUMBER_TYPE() { return get_static_field<"CACHED_NUMBER_TYPE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> CACHED_PHOTO_ID() { return get_static_field<"CACHED_PHOTO_ID", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> CACHED_PHOTO_URI() { return get_static_field<"CACHED_PHOTO_URI", jni::ref<java::lang::String>>(); }
	static jni::ref<android::net::Uri> CONTENT_FILTER_URI() { return get_static_field<"CONTENT_FILTER_URI", jni::ref<android::net::Uri>>(); }
	static jni::ref<java::lang::String> CONTENT_ITEM_TYPE() { return get_static_field<"CONTENT_ITEM_TYPE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> CONTENT_TYPE() { return get_static_field<"CONTENT_TYPE", jni::ref<java::lang::String>>(); }
	static jni::ref<android::net::Uri> CONTENT_URI() { return get_static_field<"CONTENT_URI", jni::ref<android::net::Uri>>(); }
	static jni::ref<android::net::Uri> CONTENT_URI_WITH_VOICEMAIL() { return get_static_field<"CONTENT_URI_WITH_VOICEMAIL", jni::ref<android::net::Uri>>(); }
	static jni::ref<java::lang::String> COUNTRY_ISO() { return get_static_field<"COUNTRY_ISO", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DATA_USAGE() { return get_static_field<"DATA_USAGE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DATE() { return get_static_field<"DATE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DEFAULT_SORT_ORDER() { return get_static_field<"DEFAULT_SORT_ORDER", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DURATION() { return get_static_field<"DURATION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_CALL_TYPE_FILTER() { return get_static_field<"EXTRA_CALL_TYPE_FILTER", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> FEATURES() { return get_static_field<"FEATURES", jni::ref<java::lang::String>>(); }
	static jint FEATURES_HD_CALL() { return get_static_field<"FEATURES_HD_CALL", jint>(); }
	static jint FEATURES_PULLED_EXTERNALLY() { return get_static_field<"FEATURES_PULLED_EXTERNALLY", jint>(); }
	static jint FEATURES_RTT() { return get_static_field<"FEATURES_RTT", jint>(); }
	static jint FEATURES_VIDEO() { return get_static_field<"FEATURES_VIDEO", jint>(); }
	static jint FEATURES_WIFI() { return get_static_field<"FEATURES_WIFI", jint>(); }
	static jni::ref<java::lang::String> GEOCODED_LOCATION() { return get_static_field<"GEOCODED_LOCATION", jni::ref<java::lang::String>>(); }
	static jint INCOMING_TYPE() { return get_static_field<"INCOMING_TYPE", jint>(); }
	static jni::ref<java::lang::String> IS_READ() { return get_static_field<"IS_READ", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> LAST_MODIFIED() { return get_static_field<"LAST_MODIFIED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> LIMIT_PARAM_KEY() { return get_static_field<"LIMIT_PARAM_KEY", jni::ref<java::lang::String>>(); }
	static jint MISSED_TYPE() { return get_static_field<"MISSED_TYPE", jint>(); }
	static jni::ref<java::lang::String> NEW() { return get_static_field<"NEW", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> NUMBER() { return get_static_field<"NUMBER", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> NUMBER_PRESENTATION() { return get_static_field<"NUMBER_PRESENTATION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> OFFSET_PARAM_KEY() { return get_static_field<"OFFSET_PARAM_KEY", jni::ref<java::lang::String>>(); }
	static jint OUTGOING_TYPE() { return get_static_field<"OUTGOING_TYPE", jint>(); }
	static jni::ref<java::lang::String> PHONE_ACCOUNT_COMPONENT_NAME() { return get_static_field<"PHONE_ACCOUNT_COMPONENT_NAME", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> PHONE_ACCOUNT_ID() { return get_static_field<"PHONE_ACCOUNT_ID", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> POST_DIAL_DIGITS() { return get_static_field<"POST_DIAL_DIGITS", jni::ref<java::lang::String>>(); }
	static jint PRESENTATION_ALLOWED() { return get_static_field<"PRESENTATION_ALLOWED", jint>(); }
	static jint PRESENTATION_PAYPHONE() { return get_static_field<"PRESENTATION_PAYPHONE", jint>(); }
	static jint PRESENTATION_RESTRICTED() { return get_static_field<"PRESENTATION_RESTRICTED", jint>(); }
	static jint PRESENTATION_UNKNOWN() { return get_static_field<"PRESENTATION_UNKNOWN", jint>(); }
	static jint REJECTED_TYPE() { return get_static_field<"REJECTED_TYPE", jint>(); }
	static jni::ref<java::lang::String> TRANSCRIPTION() { return get_static_field<"TRANSCRIPTION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> TYPE() { return get_static_field<"TYPE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> VIA_NUMBER() { return get_static_field<"VIA_NUMBER", jni::ref<java::lang::String>>(); }
	static jint VOICEMAIL_TYPE() { return get_static_field<"VOICEMAIL_TYPE", jint>(); }
	static jni::ref<java::lang::String> VOICEMAIL_URI() { return get_static_field<"VOICEMAIL_URI", jni::ref<java::lang::String>>(); }

	static jni::ref<android::provider::CallLog_Calls> new_object() { return base_::new_object(); }
	static jni::ref<java::lang::String> getLastOutgoingCall(jni::ref<android::content::Context> context) { return call_static_method<"getLastOutgoingCall", jni::ref<java::lang::String>>(context); }

protected:

	CallLog_Calls(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PROVIDER_CALLLOG_CALLS
