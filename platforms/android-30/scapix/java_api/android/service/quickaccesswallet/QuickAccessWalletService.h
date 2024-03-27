// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/app/Service.h>

#ifndef SCAPIX_JAVA_API_ANDROID_SERVICE_QUICKACCESSWALLET_QUICKACCESSWALLETSERVICE_FWD
#define SCAPIX_JAVA_API_ANDROID_SERVICE_QUICKACCESSWALLET_QUICKACCESSWALLETSERVICE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::service::quickaccesswallet { class QuickAccessWalletService; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::service::quickaccesswallet::QuickAccessWalletService>
{
	static constexpr fixed_string class_name = "android/service/quickaccesswallet/QuickAccessWalletService";
	using base_classes = std::tuple<scapix::java_api::android::app::Service>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SERVICE_QUICKACCESSWALLET_QUICKACCESSWALLETSERVICE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_SERVICE_QUICKACCESSWALLET_QUICKACCESSWALLETSERVICE)
#define SCAPIX_JAVA_API_ANDROID_SERVICE_QUICKACCESSWALLET_QUICKACCESSWALLETSERVICE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/Intent.h>
#include <scapix/java_api/android/os/IBinder.h>
#include <scapix/java_api/android/service/quickaccesswallet/GetWalletCardsCallback.h>
#include <scapix/java_api/android/service/quickaccesswallet/GetWalletCardsRequest.h>
#include <scapix/java_api/android/service/quickaccesswallet/SelectWalletCardRequest.h>
#include <scapix/java_api/android/service/quickaccesswallet/WalletServiceEvent.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::service::quickaccesswallet::QuickAccessWalletService : public jni::object_base<"android/service/quickaccesswallet/QuickAccessWalletService",
	android::app::Service>
{
public:

	static jni::ref<java::lang::String> ACTION_VIEW_WALLET() { return get_static_field<"ACTION_VIEW_WALLET", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ACTION_VIEW_WALLET_SETTINGS() { return get_static_field<"ACTION_VIEW_WALLET_SETTINGS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SERVICE_INTERFACE() { return get_static_field<"SERVICE_INTERFACE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SERVICE_META_DATA() { return get_static_field<"SERVICE_META_DATA", jni::ref<java::lang::String>>(); }

	static jni::ref<android::service::quickaccesswallet::QuickAccessWalletService> new_object() { return base_::new_object(); }
	jni::ref<android::os::IBinder> onBind(jni::ref<android::content::Intent> intent) { return call_method<"onBind", jni::ref<android::os::IBinder>>(intent); }
	void onWalletCardsRequested(jni::ref<android::service::quickaccesswallet::GetWalletCardsRequest> p1, jni::ref<android::service::quickaccesswallet::GetWalletCardsCallback> p2) { return call_method<"onWalletCardsRequested", void>(p1, p2); }
	void onWalletCardSelected(jni::ref<android::service::quickaccesswallet::SelectWalletCardRequest> p1) { return call_method<"onWalletCardSelected", void>(p1); }
	void onWalletDismissed() { return call_method<"onWalletDismissed", void>(); }
	void sendWalletServiceEvent(jni::ref<android::service::quickaccesswallet::WalletServiceEvent> serviceEvent) { return call_method<"sendWalletServiceEvent", void>(serviceEvent); }

protected:

	QuickAccessWalletService(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SERVICE_QUICKACCESSWALLET_QUICKACCESSWALLETSERVICE
