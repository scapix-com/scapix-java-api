// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_LOCATION_GNSSNAVIGATIONMESSAGE_FWD
#define SCAPIX_JAVA_API_ANDROID_LOCATION_GNSSNAVIGATIONMESSAGE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::location { class GnssNavigationMessage; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::location::GnssNavigationMessage>
{
	static constexpr fixed_string class_name = "android/location/GnssNavigationMessage";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_LOCATION_GNSSNAVIGATIONMESSAGE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_LOCATION_GNSSNAVIGATIONMESSAGE)
#define SCAPIX_JAVA_API_ANDROID_LOCATION_GNSSNAVIGATIONMESSAGE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/android/location/GnssNavigationMessage_Callback.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::location::GnssNavigationMessage : public jni::object_base<"android/location/GnssNavigationMessage",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	using Callback = GnssNavigationMessage_Callback;

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }
	static jint STATUS_PARITY_PASSED() { return get_static_field<"STATUS_PARITY_PASSED", jint>(); }
	static jint STATUS_PARITY_REBUILT() { return get_static_field<"STATUS_PARITY_REBUILT", jint>(); }
	static jint STATUS_UNKNOWN() { return get_static_field<"STATUS_UNKNOWN", jint>(); }
	static jint TYPE_BDS_CNAV1() { return get_static_field<"TYPE_BDS_CNAV1", jint>(); }
	static jint TYPE_BDS_CNAV2() { return get_static_field<"TYPE_BDS_CNAV2", jint>(); }
	static jint TYPE_BDS_D1() { return get_static_field<"TYPE_BDS_D1", jint>(); }
	static jint TYPE_BDS_D2() { return get_static_field<"TYPE_BDS_D2", jint>(); }
	static jint TYPE_GAL_F() { return get_static_field<"TYPE_GAL_F", jint>(); }
	static jint TYPE_GAL_I() { return get_static_field<"TYPE_GAL_I", jint>(); }
	static jint TYPE_GLO_L1CA() { return get_static_field<"TYPE_GLO_L1CA", jint>(); }
	static jint TYPE_GPS_CNAV2() { return get_static_field<"TYPE_GPS_CNAV2", jint>(); }
	static jint TYPE_GPS_L1CA() { return get_static_field<"TYPE_GPS_L1CA", jint>(); }
	static jint TYPE_GPS_L2CNAV() { return get_static_field<"TYPE_GPS_L2CNAV", jint>(); }
	static jint TYPE_GPS_L5CNAV() { return get_static_field<"TYPE_GPS_L5CNAV", jint>(); }
	static jint TYPE_IRN_L5CA() { return get_static_field<"TYPE_IRN_L5CA", jint>(); }
	static jint TYPE_QZS_L1CA() { return get_static_field<"TYPE_QZS_L1CA", jint>(); }
	static jint TYPE_SBS() { return get_static_field<"TYPE_SBS", jint>(); }
	static jint TYPE_UNKNOWN() { return get_static_field<"TYPE_UNKNOWN", jint>(); }

	jint getType() { return call_method<"getType", jint>(); }
	jint getSvid() { return call_method<"getSvid", jint>(); }
	jint getMessageId() { return call_method<"getMessageId", jint>(); }
	jint getSubmessageId() { return call_method<"getSubmessageId", jint>(); }
	jni::ref<jni::array<jbyte>> getData() { return call_method<"getData", jni::ref<jni::array<jbyte>>>(); }
	jint getStatus() { return call_method<"getStatus", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> parcel, jint flags) { return call_method<"writeToParcel", void>(parcel, flags); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	GnssNavigationMessage(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_LOCATION_GNSSNAVIGATIONMESSAGE
