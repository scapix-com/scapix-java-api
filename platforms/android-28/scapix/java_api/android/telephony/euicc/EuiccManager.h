// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_TELEPHONY_EUICC_EUICCMANAGER_FWD
#define SCAPIX_JAVA_API_ANDROID_TELEPHONY_EUICC_EUICCMANAGER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::telephony::euicc { class EuiccManager; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::telephony::euicc::EuiccManager>
{
	static constexpr fixed_string class_name = "android/telephony/euicc/EuiccManager";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELEPHONY_EUICC_EUICCMANAGER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_TELEPHONY_EUICC_EUICCMANAGER)
#define SCAPIX_JAVA_API_ANDROID_TELEPHONY_EUICC_EUICCMANAGER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/app/Activity.h>
#include <scapix/java_api/android/app/PendingIntent.h>
#include <scapix/java_api/android/content/Intent.h>
#include <scapix/java_api/android/telephony/euicc/DownloadableSubscription.h>
#include <scapix/java_api/android/telephony/euicc/EuiccInfo.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::telephony::euicc::EuiccManager : public jni::object_base<"android/telephony/euicc/EuiccManager",
	java::lang::Object>
{
public:

	static jni::ref<java::lang::String> ACTION_MANAGE_EMBEDDED_SUBSCRIPTIONS() { return get_static_field<"ACTION_MANAGE_EMBEDDED_SUBSCRIPTIONS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ACTION_NOTIFY_CARRIER_SETUP_INCOMPLETE() { return get_static_field<"ACTION_NOTIFY_CARRIER_SETUP_INCOMPLETE", jni::ref<java::lang::String>>(); }
	static jint EMBEDDED_SUBSCRIPTION_RESULT_ERROR() { return get_static_field<"EMBEDDED_SUBSCRIPTION_RESULT_ERROR", jint>(); }
	static jint EMBEDDED_SUBSCRIPTION_RESULT_OK() { return get_static_field<"EMBEDDED_SUBSCRIPTION_RESULT_OK", jint>(); }
	static jint EMBEDDED_SUBSCRIPTION_RESULT_RESOLVABLE_ERROR() { return get_static_field<"EMBEDDED_SUBSCRIPTION_RESULT_RESOLVABLE_ERROR", jint>(); }
	static jni::ref<java::lang::String> EXTRA_EMBEDDED_SUBSCRIPTION_DETAILED_CODE() { return get_static_field<"EXTRA_EMBEDDED_SUBSCRIPTION_DETAILED_CODE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_EMBEDDED_SUBSCRIPTION_DOWNLOADABLE_SUBSCRIPTION() { return get_static_field<"EXTRA_EMBEDDED_SUBSCRIPTION_DOWNLOADABLE_SUBSCRIPTION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> META_DATA_CARRIER_ICON() { return get_static_field<"META_DATA_CARRIER_ICON", jni::ref<java::lang::String>>(); }

	jboolean isEnabled() { return call_method<"isEnabled", jboolean>(); }
	jni::ref<java::lang::String> getEid() { return call_method<"getEid", jni::ref<java::lang::String>>(); }
	void downloadSubscription(jni::ref<android::telephony::euicc::DownloadableSubscription> subscription, jboolean switchAfterDownload, jni::ref<android::app::PendingIntent> callbackIntent) { return call_method<"downloadSubscription", void>(subscription, switchAfterDownload, callbackIntent); }
	void startResolutionActivity(jni::ref<android::app::Activity> activity, jint requestCode, jni::ref<android::content::Intent> resultIntent, jni::ref<android::app::PendingIntent> callbackIntent) { return call_method<"startResolutionActivity", void>(activity, requestCode, resultIntent, callbackIntent); }
	jni::ref<android::telephony::euicc::EuiccInfo> getEuiccInfo() { return call_method<"getEuiccInfo", jni::ref<android::telephony::euicc::EuiccInfo>>(); }
	void deleteSubscription(jint subscriptionId, jni::ref<android::app::PendingIntent> callbackIntent) { return call_method<"deleteSubscription", void>(subscriptionId, callbackIntent); }
	void switchToSubscription(jint subscriptionId, jni::ref<android::app::PendingIntent> callbackIntent) { return call_method<"switchToSubscription", void>(subscriptionId, callbackIntent); }

protected:

	EuiccManager(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELEPHONY_EUICC_EUICCMANAGER
