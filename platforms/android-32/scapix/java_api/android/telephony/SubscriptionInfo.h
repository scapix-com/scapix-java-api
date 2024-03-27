// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_TELEPHONY_SUBSCRIPTIONINFO_FWD
#define SCAPIX_JAVA_API_ANDROID_TELEPHONY_SUBSCRIPTIONINFO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::telephony { class SubscriptionInfo; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::telephony::SubscriptionInfo>
{
	static constexpr fixed_string class_name = "android/telephony/SubscriptionInfo";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELEPHONY_SUBSCRIPTIONINFO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_TELEPHONY_SUBSCRIPTIONINFO)
#define SCAPIX_JAVA_API_ANDROID_TELEPHONY_SUBSCRIPTIONINFO

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/graphics/Bitmap.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/ParcelUuid.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::telephony::SubscriptionInfo : public jni::object_base<"android/telephony/SubscriptionInfo",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }

	jint getSubscriptionId() { return call_method<"getSubscriptionId", jint>(); }
	jni::ref<java::lang::String> getIccId() { return call_method<"getIccId", jni::ref<java::lang::String>>(); }
	jint getSimSlotIndex() { return call_method<"getSimSlotIndex", jint>(); }
	jint getCarrierId() { return call_method<"getCarrierId", jint>(); }
	jni::ref<java::lang::CharSequence> getDisplayName() { return call_method<"getDisplayName", jni::ref<java::lang::CharSequence>>(); }
	jni::ref<java::lang::CharSequence> getCarrierName() { return call_method<"getCarrierName", jni::ref<java::lang::CharSequence>>(); }
	jni::ref<android::graphics::Bitmap> createIconBitmap(jni::ref<android::content::Context> context) { return call_method<"createIconBitmap", jni::ref<android::graphics::Bitmap>>(context); }
	jint getIconTint() { return call_method<"getIconTint", jint>(); }
	jni::ref<java::lang::String> getNumber() { return call_method<"getNumber", jni::ref<java::lang::String>>(); }
	jint getDataRoaming() { return call_method<"getDataRoaming", jint>(); }
	jint getMcc() { return call_method<"getMcc", jint>(); }
	jint getMnc() { return call_method<"getMnc", jint>(); }
	jni::ref<java::lang::String> getMccString() { return call_method<"getMccString", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getMncString() { return call_method<"getMncString", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getCountryIso() { return call_method<"getCountryIso", jni::ref<java::lang::String>>(); }
	jboolean isEmbedded() { return call_method<"isEmbedded", jboolean>(); }
	jboolean isOpportunistic() { return call_method<"isOpportunistic", jboolean>(); }
	jni::ref<android::os::ParcelUuid> getGroupUuid() { return call_method<"getGroupUuid", jni::ref<android::os::ParcelUuid>>(); }
	jint getSubscriptionType() { return call_method<"getSubscriptionType", jint>(); }
	jint getCardId() { return call_method<"getCardId", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> obj) { return call_method<"equals", jboolean>(obj); }

protected:

	SubscriptionInfo(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELEPHONY_SUBSCRIPTIONINFO
