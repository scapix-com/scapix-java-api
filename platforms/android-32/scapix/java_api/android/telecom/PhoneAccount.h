// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_TELECOM_PHONEACCOUNT_FWD
#define SCAPIX_JAVA_API_ANDROID_TELECOM_PHONEACCOUNT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::telecom { class PhoneAccount; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::telecom::PhoneAccount>
{
	static constexpr fixed_string class_name = "android/telecom/PhoneAccount";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELECOM_PHONEACCOUNT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_TELECOM_PHONEACCOUNT)
#define SCAPIX_JAVA_API_ANDROID_TELECOM_PHONEACCOUNT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/graphics/drawable/Icon.h>
#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/android/telecom/PhoneAccount_Builder.h>
#include <scapix/java_api/android/telecom/PhoneAccountHandle.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::telecom::PhoneAccount : public jni::object_base<"android/telecom/PhoneAccount",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	using Builder = PhoneAccount_Builder;

	static jint CAPABILITY_ADHOC_CONFERENCE_CALLING() { return get_static_field<"CAPABILITY_ADHOC_CONFERENCE_CALLING", jint>(); }
	static jint CAPABILITY_CALL_COMPOSER() { return get_static_field<"CAPABILITY_CALL_COMPOSER", jint>(); }
	static jint CAPABILITY_CALL_PROVIDER() { return get_static_field<"CAPABILITY_CALL_PROVIDER", jint>(); }
	static jint CAPABILITY_CALL_SUBJECT() { return get_static_field<"CAPABILITY_CALL_SUBJECT", jint>(); }
	static jint CAPABILITY_CONNECTION_MANAGER() { return get_static_field<"CAPABILITY_CONNECTION_MANAGER", jint>(); }
	static jint CAPABILITY_PLACE_EMERGENCY_CALLS() { return get_static_field<"CAPABILITY_PLACE_EMERGENCY_CALLS", jint>(); }
	static jint CAPABILITY_RTT() { return get_static_field<"CAPABILITY_RTT", jint>(); }
	static jint CAPABILITY_SELF_MANAGED() { return get_static_field<"CAPABILITY_SELF_MANAGED", jint>(); }
	static jint CAPABILITY_SIM_SUBSCRIPTION() { return get_static_field<"CAPABILITY_SIM_SUBSCRIPTION", jint>(); }
	static jint CAPABILITY_SUPPORTS_VIDEO_CALLING() { return get_static_field<"CAPABILITY_SUPPORTS_VIDEO_CALLING", jint>(); }
	static jint CAPABILITY_VIDEO_CALLING() { return get_static_field<"CAPABILITY_VIDEO_CALLING", jint>(); }
	static jint CAPABILITY_VIDEO_CALLING_RELIES_ON_PRESENCE() { return get_static_field<"CAPABILITY_VIDEO_CALLING_RELIES_ON_PRESENCE", jint>(); }
	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }
	static jni::ref<java::lang::String> EXTRA_ADD_SELF_MANAGED_CALLS_TO_INCALLSERVICE() { return get_static_field<"EXTRA_ADD_SELF_MANAGED_CALLS_TO_INCALLSERVICE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_ALWAYS_USE_VOIP_AUDIO_MODE() { return get_static_field<"EXTRA_ALWAYS_USE_VOIP_AUDIO_MODE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_CALL_SUBJECT_CHARACTER_ENCODING() { return get_static_field<"EXTRA_CALL_SUBJECT_CHARACTER_ENCODING", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_CALL_SUBJECT_MAX_LENGTH() { return get_static_field<"EXTRA_CALL_SUBJECT_MAX_LENGTH", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_LOG_SELF_MANAGED_CALLS() { return get_static_field<"EXTRA_LOG_SELF_MANAGED_CALLS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_SUPPORTS_HANDOVER_FROM() { return get_static_field<"EXTRA_SUPPORTS_HANDOVER_FROM", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_SUPPORTS_HANDOVER_TO() { return get_static_field<"EXTRA_SUPPORTS_HANDOVER_TO", jni::ref<java::lang::String>>(); }
	static jint NO_HIGHLIGHT_COLOR() { return get_static_field<"NO_HIGHLIGHT_COLOR", jint>(); }
	static jint NO_RESOURCE_ID() { return get_static_field<"NO_RESOURCE_ID", jint>(); }
	static jni::ref<java::lang::String> SCHEME_SIP() { return get_static_field<"SCHEME_SIP", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SCHEME_TEL() { return get_static_field<"SCHEME_TEL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SCHEME_VOICEMAIL() { return get_static_field<"SCHEME_VOICEMAIL", jni::ref<java::lang::String>>(); }

	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	static jni::ref<android::telecom::PhoneAccount_Builder> builder(jni::ref<android::telecom::PhoneAccountHandle> accountHandle, jni::ref<java::lang::CharSequence> label) { return call_static_method<"builder", jni::ref<android::telecom::PhoneAccount_Builder>>(accountHandle, label); }
	jni::ref<android::telecom::PhoneAccount_Builder> toBuilder() { return call_method<"toBuilder", jni::ref<android::telecom::PhoneAccount_Builder>>(); }
	jni::ref<android::telecom::PhoneAccountHandle> getAccountHandle() { return call_method<"getAccountHandle", jni::ref<android::telecom::PhoneAccountHandle>>(); }
	jni::ref<android::net::Uri> getAddress() { return call_method<"getAddress", jni::ref<android::net::Uri>>(); }
	jni::ref<android::net::Uri> getSubscriptionAddress() { return call_method<"getSubscriptionAddress", jni::ref<android::net::Uri>>(); }
	jint getCapabilities() { return call_method<"getCapabilities", jint>(); }
	jboolean hasCapabilities(jint capability) { return call_method<"hasCapabilities", jboolean>(capability); }
	jni::ref<java::lang::CharSequence> getLabel() { return call_method<"getLabel", jni::ref<java::lang::CharSequence>>(); }
	jni::ref<java::lang::CharSequence> getShortDescription() { return call_method<"getShortDescription", jni::ref<java::lang::CharSequence>>(); }
	jni::ref<java::util::List> getSupportedUriSchemes() { return call_method<"getSupportedUriSchemes", jni::ref<java::util::List>>(); }
	jni::ref<android::os::Bundle> getExtras() { return call_method<"getExtras", jni::ref<android::os::Bundle>>(); }
	jni::ref<android::graphics::drawable::Icon> getIcon() { return call_method<"getIcon", jni::ref<android::graphics::drawable::Icon>>(); }
	jboolean isEnabled() { return call_method<"isEnabled", jboolean>(); }
	jboolean supportsUriScheme(jni::ref<java::lang::String> uriScheme) { return call_method<"supportsUriScheme", jboolean>(uriScheme); }
	jint getHighlightColor() { return call_method<"getHighlightColor", jint>(); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> out, jint flags) { return call_method<"writeToParcel", void>(out, flags); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	PhoneAccount(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELECOM_PHONEACCOUNT
