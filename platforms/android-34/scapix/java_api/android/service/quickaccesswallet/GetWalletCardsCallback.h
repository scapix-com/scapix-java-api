// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_SERVICE_QUICKACCESSWALLET_GETWALLETCARDSCALLBACK_FWD
#define SCAPIX_JAVA_API_ANDROID_SERVICE_QUICKACCESSWALLET_GETWALLETCARDSCALLBACK_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::service::quickaccesswallet { class GetWalletCardsCallback; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::service::quickaccesswallet::GetWalletCardsCallback>
{
	static constexpr fixed_string class_name = "android/service/quickaccesswallet/GetWalletCardsCallback";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SERVICE_QUICKACCESSWALLET_GETWALLETCARDSCALLBACK_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_SERVICE_QUICKACCESSWALLET_GETWALLETCARDSCALLBACK)
#define SCAPIX_JAVA_API_ANDROID_SERVICE_QUICKACCESSWALLET_GETWALLETCARDSCALLBACK

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/service/quickaccesswallet/GetWalletCardsError.h>
#include <scapix/java_api/android/service/quickaccesswallet/GetWalletCardsResponse.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::service::quickaccesswallet::GetWalletCardsCallback : public jni::object_base<"android/service/quickaccesswallet/GetWalletCardsCallback",
	java::lang::Object>
{
public:

	void onSuccess(jni::ref<android::service::quickaccesswallet::GetWalletCardsResponse> p1) { return call_method<"onSuccess", void>(p1); }
	void onFailure(jni::ref<android::service::quickaccesswallet::GetWalletCardsError> p1) { return call_method<"onFailure", void>(p1); }

protected:

	GetWalletCardsCallback(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SERVICE_QUICKACCESSWALLET_GETWALLETCARDSCALLBACK