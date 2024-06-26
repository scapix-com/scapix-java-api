// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_LOCATION_CRITERIA_FWD
#define SCAPIX_JAVA_API_ANDROID_LOCATION_CRITERIA_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::location { class Criteria; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::location::Criteria>
{
	static constexpr fixed_string class_name = "android/location/Criteria";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_LOCATION_CRITERIA_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_LOCATION_CRITERIA)
#define SCAPIX_JAVA_API_ANDROID_LOCATION_CRITERIA

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::location::Criteria : public jni::object_base<"android/location/Criteria",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static jint ACCURACY_COARSE() { return get_static_field<"ACCURACY_COARSE", jint>(); }
	static jint ACCURACY_FINE() { return get_static_field<"ACCURACY_FINE", jint>(); }
	static jint ACCURACY_HIGH() { return get_static_field<"ACCURACY_HIGH", jint>(); }
	static jint ACCURACY_LOW() { return get_static_field<"ACCURACY_LOW", jint>(); }
	static jint ACCURACY_MEDIUM() { return get_static_field<"ACCURACY_MEDIUM", jint>(); }
	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }
	static jint NO_REQUIREMENT() { return get_static_field<"NO_REQUIREMENT", jint>(); }
	static jint POWER_HIGH() { return get_static_field<"POWER_HIGH", jint>(); }
	static jint POWER_LOW() { return get_static_field<"POWER_LOW", jint>(); }
	static jint POWER_MEDIUM() { return get_static_field<"POWER_MEDIUM", jint>(); }

	static jni::ref<android::location::Criteria> new_object() { return base_::new_object(); }
	static jni::ref<android::location::Criteria> new_object(jni::ref<android::location::Criteria> criteria) { return base_::new_object(criteria); }
	void setHorizontalAccuracy(jint accuracy) { return call_method<"setHorizontalAccuracy", void>(accuracy); }
	jint getHorizontalAccuracy() { return call_method<"getHorizontalAccuracy", jint>(); }
	void setVerticalAccuracy(jint accuracy) { return call_method<"setVerticalAccuracy", void>(accuracy); }
	jint getVerticalAccuracy() { return call_method<"getVerticalAccuracy", jint>(); }
	void setSpeedAccuracy(jint accuracy) { return call_method<"setSpeedAccuracy", void>(accuracy); }
	jint getSpeedAccuracy() { return call_method<"getSpeedAccuracy", jint>(); }
	void setBearingAccuracy(jint accuracy) { return call_method<"setBearingAccuracy", void>(accuracy); }
	jint getBearingAccuracy() { return call_method<"getBearingAccuracy", jint>(); }
	void setAccuracy(jint accuracy) { return call_method<"setAccuracy", void>(accuracy); }
	jint getAccuracy() { return call_method<"getAccuracy", jint>(); }
	void setPowerRequirement(jint level) { return call_method<"setPowerRequirement", void>(level); }
	jint getPowerRequirement() { return call_method<"getPowerRequirement", jint>(); }
	void setCostAllowed(jboolean costAllowed) { return call_method<"setCostAllowed", void>(costAllowed); }
	jboolean isCostAllowed() { return call_method<"isCostAllowed", jboolean>(); }
	void setAltitudeRequired(jboolean altitudeRequired) { return call_method<"setAltitudeRequired", void>(altitudeRequired); }
	jboolean isAltitudeRequired() { return call_method<"isAltitudeRequired", jboolean>(); }
	void setSpeedRequired(jboolean speedRequired) { return call_method<"setSpeedRequired", void>(speedRequired); }
	jboolean isSpeedRequired() { return call_method<"isSpeedRequired", jboolean>(); }
	void setBearingRequired(jboolean bearingRequired) { return call_method<"setBearingRequired", void>(bearingRequired); }
	jboolean isBearingRequired() { return call_method<"isBearingRequired", jboolean>(); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> parcel, jint flags) { return call_method<"writeToParcel", void>(parcel, flags); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	Criteria(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_LOCATION_CRITERIA
