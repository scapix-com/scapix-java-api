// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_ROUTELISTINGPREFERENCE_ITEM_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_ROUTELISTINGPREFERENCE_ITEM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media { class RouteListingPreference_Item; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::RouteListingPreference_Item>
{
	static constexpr fixed_string class_name = "android/media/RouteListingPreference$Item";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_ROUTELISTINGPREFERENCE_ITEM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_ROUTELISTINGPREFERENCE_ITEM)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_ROUTELISTINGPREFERENCE_ITEM

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/android/media/RouteListingPreference_Item_Builder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::RouteListingPreference_Item : public jni::object_base<"android/media/RouteListingPreference$Item",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	using Builder = RouteListingPreference_Item_Builder;

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }
	static jint FLAG_ONGOING_SESSION() { return get_static_field<"FLAG_ONGOING_SESSION", jint>(); }
	static jint FLAG_ONGOING_SESSION_MANAGED() { return get_static_field<"FLAG_ONGOING_SESSION_MANAGED", jint>(); }
	static jint FLAG_SUGGESTED() { return get_static_field<"FLAG_SUGGESTED", jint>(); }
	static jint SELECTION_BEHAVIOR_GO_TO_APP() { return get_static_field<"SELECTION_BEHAVIOR_GO_TO_APP", jint>(); }
	static jint SELECTION_BEHAVIOR_NONE() { return get_static_field<"SELECTION_BEHAVIOR_NONE", jint>(); }
	static jint SELECTION_BEHAVIOR_TRANSFER() { return get_static_field<"SELECTION_BEHAVIOR_TRANSFER", jint>(); }
	static jint SUBTEXT_AD_ROUTING_DISALLOWED() { return get_static_field<"SUBTEXT_AD_ROUTING_DISALLOWED", jint>(); }
	static jint SUBTEXT_CUSTOM() { return get_static_field<"SUBTEXT_CUSTOM", jint>(); }
	static jint SUBTEXT_DEVICE_LOW_POWER() { return get_static_field<"SUBTEXT_DEVICE_LOW_POWER", jint>(); }
	static jint SUBTEXT_DOWNLOADED_CONTENT_ROUTING_DISALLOWED() { return get_static_field<"SUBTEXT_DOWNLOADED_CONTENT_ROUTING_DISALLOWED", jint>(); }
	static jint SUBTEXT_ERROR_UNKNOWN() { return get_static_field<"SUBTEXT_ERROR_UNKNOWN", jint>(); }
	static jint SUBTEXT_NONE() { return get_static_field<"SUBTEXT_NONE", jint>(); }
	static jint SUBTEXT_SUBSCRIPTION_REQUIRED() { return get_static_field<"SUBTEXT_SUBSCRIPTION_REQUIRED", jint>(); }
	static jint SUBTEXT_TRACK_UNSUPPORTED() { return get_static_field<"SUBTEXT_TRACK_UNSUPPORTED", jint>(); }
	static jint SUBTEXT_UNAUTHORIZED() { return get_static_field<"SUBTEXT_UNAUTHORIZED", jint>(); }

	jni::ref<java::lang::String> getRouteId() { return call_method<"getRouteId", jni::ref<java::lang::String>>(); }
	jint getSelectionBehavior() { return call_method<"getSelectionBehavior", jint>(); }
	jint getFlags() { return call_method<"getFlags", jint>(); }
	jint getSubText() { return call_method<"getSubText", jint>(); }
	jni::ref<java::lang::CharSequence> getCustomSubtextMessage() { return call_method<"getCustomSubtextMessage", jni::ref<java::lang::CharSequence>>(); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }
	jboolean equals(jni::ref<java::lang::Object> other) { return call_method<"equals", jboolean>(other); }
	jint hashCode() { return call_method<"hashCode", jint>(); }

protected:

	RouteListingPreference_Item(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_ROUTELISTINGPREFERENCE_ITEM