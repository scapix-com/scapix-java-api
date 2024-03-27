// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_SERVICE_QUICKACCESSWALLET_GETWALLETCARDSERROR_FWD
#define SCAPIX_JAVA_API_ANDROID_SERVICE_QUICKACCESSWALLET_GETWALLETCARDSERROR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::service::quickaccesswallet { class GetWalletCardsError; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::service::quickaccesswallet::GetWalletCardsError>
{
	static constexpr fixed_string class_name = "android/service/quickaccesswallet/GetWalletCardsError";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SERVICE_QUICKACCESSWALLET_GETWALLETCARDSERROR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_SERVICE_QUICKACCESSWALLET_GETWALLETCARDSERROR)
#define SCAPIX_JAVA_API_ANDROID_SERVICE_QUICKACCESSWALLET_GETWALLETCARDSERROR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/graphics/drawable/Icon.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::service::quickaccesswallet::GetWalletCardsError : public jni::object_base<"android/service/quickaccesswallet/GetWalletCardsError",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }

	static jni::ref<android::service::quickaccesswallet::GetWalletCardsError> new_object(jni::ref<android::graphics::drawable::Icon> icon, jni::ref<java::lang::CharSequence> message) { return base_::new_object(icon, message); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }
	jni::ref<android::graphics::drawable::Icon> getIcon() { return call_method<"getIcon", jni::ref<android::graphics::drawable::Icon>>(); }
	jni::ref<java::lang::CharSequence> getMessage() { return call_method<"getMessage", jni::ref<java::lang::CharSequence>>(); }

protected:

	GetWalletCardsError(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SERVICE_QUICKACCESSWALLET_GETWALLETCARDSERROR
