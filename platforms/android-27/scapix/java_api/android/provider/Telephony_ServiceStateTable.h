// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_PROVIDER_TELEPHONY_SERVICESTATETABLE_FWD
#define SCAPIX_JAVA_API_ANDROID_PROVIDER_TELEPHONY_SERVICESTATETABLE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::provider { class Telephony_ServiceStateTable; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::provider::Telephony_ServiceStateTable>
{
	static constexpr fixed_string class_name = "android/provider/Telephony$ServiceStateTable";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PROVIDER_TELEPHONY_SERVICESTATETABLE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_PROVIDER_TELEPHONY_SERVICESTATETABLE)
#define SCAPIX_JAVA_API_ANDROID_PROVIDER_TELEPHONY_SERVICESTATETABLE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::provider::Telephony_ServiceStateTable : public jni::object_base<"android/provider/Telephony$ServiceStateTable",
	java::lang::Object>
{
public:

	static jni::ref<java::lang::String> AUTHORITY() { return get_static_field<"AUTHORITY", jni::ref<java::lang::String>>(); }
	static jni::ref<android::net::Uri> CONTENT_URI() { return get_static_field<"CONTENT_URI", jni::ref<android::net::Uri>>(); }
	static jni::ref<java::lang::String> IS_MANUAL_NETWORK_SELECTION() { return get_static_field<"IS_MANUAL_NETWORK_SELECTION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> VOICE_OPERATOR_NUMERIC() { return get_static_field<"VOICE_OPERATOR_NUMERIC", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> VOICE_REG_STATE() { return get_static_field<"VOICE_REG_STATE", jni::ref<java::lang::String>>(); }

	static jni::ref<android::net::Uri> getUriForSubscriptionIdAndField(jint subscriptionId, jni::ref<java::lang::String> field) { return call_static_method<"getUriForSubscriptionIdAndField", jni::ref<android::net::Uri>>(subscriptionId, field); }
	static jni::ref<android::net::Uri> getUriForSubscriptionId(jint subscriptionId) { return call_static_method<"getUriForSubscriptionId", jni::ref<android::net::Uri>>(subscriptionId); }

protected:

	Telephony_ServiceStateTable(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PROVIDER_TELEPHONY_SERVICESTATETABLE
