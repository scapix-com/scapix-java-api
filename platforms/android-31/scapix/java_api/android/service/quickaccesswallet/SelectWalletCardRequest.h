// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_SERVICE_QUICKACCESSWALLET_SELECTWALLETCARDREQUEST_FWD
#define SCAPIX_JAVA_API_ANDROID_SERVICE_QUICKACCESSWALLET_SELECTWALLETCARDREQUEST_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::service::quickaccesswallet { class SelectWalletCardRequest; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::service::quickaccesswallet::SelectWalletCardRequest>
{
	static constexpr fixed_string class_name = "android/service/quickaccesswallet/SelectWalletCardRequest";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SERVICE_QUICKACCESSWALLET_SELECTWALLETCARDREQUEST_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_SERVICE_QUICKACCESSWALLET_SELECTWALLETCARDREQUEST)
#define SCAPIX_JAVA_API_ANDROID_SERVICE_QUICKACCESSWALLET_SELECTWALLETCARDREQUEST

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::service::quickaccesswallet::SelectWalletCardRequest : public jni::object_base<"android/service/quickaccesswallet/SelectWalletCardRequest",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }

	static jni::ref<android::service::quickaccesswallet::SelectWalletCardRequest> new_object(jni::ref<java::lang::String> cardId) { return base_::new_object(cardId); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }
	jni::ref<java::lang::String> getCardId() { return call_method<"getCardId", jni::ref<java::lang::String>>(); }

protected:

	SelectWalletCardRequest(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SERVICE_QUICKACCESSWALLET_SELECTWALLETCARDREQUEST
