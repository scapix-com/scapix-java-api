// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_NET_WIFI_RTT_RESPONDERLOCATION_FWD
#define SCAPIX_JAVA_API_ANDROID_NET_WIFI_RTT_RESPONDERLOCATION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::net::wifi::rtt { class ResponderLocation; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::net::wifi::rtt::ResponderLocation>
{
	static constexpr fixed_string class_name = "android/net/wifi/rtt/ResponderLocation";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_WIFI_RTT_RESPONDERLOCATION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_NET_WIFI_RTT_RESPONDERLOCATION)
#define SCAPIX_JAVA_API_ANDROID_NET_WIFI_RTT_RESPONDERLOCATION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/location/Address.h>
#include <scapix/java_api/android/location/Location.h>
#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/android/util/SparseArray.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::net::wifi::rtt::ResponderLocation : public jni::object_base<"android/net/wifi/rtt/ResponderLocation",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static jint ALTITUDE_FLOORS() { return get_static_field<"ALTITUDE_FLOORS", jint>(); }
	static jint ALTITUDE_METERS() { return get_static_field<"ALTITUDE_METERS", jint>(); }
	static jint ALTITUDE_UNDEFINED() { return get_static_field<"ALTITUDE_UNDEFINED", jint>(); }
	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }
	static jint DATUM_NAD83_MLLW() { return get_static_field<"DATUM_NAD83_MLLW", jint>(); }
	static jint DATUM_NAD83_NAV88() { return get_static_field<"DATUM_NAD83_NAV88", jint>(); }
	static jint DATUM_UNDEFINED() { return get_static_field<"DATUM_UNDEFINED", jint>(); }
	static jint DATUM_WGS84() { return get_static_field<"DATUM_WGS84", jint>(); }
	static jint LCI_VERSION_1() { return get_static_field<"LCI_VERSION_1", jint>(); }
	static jint LOCATION_FIXED() { return get_static_field<"LOCATION_FIXED", jint>(); }
	static jint LOCATION_MOVEMENT_UNKNOWN() { return get_static_field<"LOCATION_MOVEMENT_UNKNOWN", jint>(); }
	static jint LOCATION_RESERVED() { return get_static_field<"LOCATION_RESERVED", jint>(); }
	static jint LOCATION_VARIABLE() { return get_static_field<"LOCATION_VARIABLE", jint>(); }

	jint describeContents() { return call_method<"describeContents", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> parcel, jint flags) { return call_method<"writeToParcel", void>(parcel, flags); }
	jboolean equals(jni::ref<java::lang::Object> obj) { return call_method<"equals", jboolean>(obj); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean isLciSubelementValid() { return call_method<"isLciSubelementValid", jboolean>(); }
	jdouble getLatitudeUncertainty() { return call_method<"getLatitudeUncertainty", jdouble>(); }
	jdouble getLatitude() { return call_method<"getLatitude", jdouble>(); }
	jdouble getLongitudeUncertainty() { return call_method<"getLongitudeUncertainty", jdouble>(); }
	jdouble getLongitude() { return call_method<"getLongitude", jdouble>(); }
	jint getAltitudeType() { return call_method<"getAltitudeType", jint>(); }
	jdouble getAltitudeUncertainty() { return call_method<"getAltitudeUncertainty", jdouble>(); }
	jdouble getAltitude() { return call_method<"getAltitude", jdouble>(); }
	jint getDatum() { return call_method<"getDatum", jint>(); }
	jboolean getRegisteredLocationAgreementIndication() { return call_method<"getRegisteredLocationAgreementIndication", jboolean>(); }
	jint getLciVersion() { return call_method<"getLciVersion", jint>(); }
	jni::ref<android::location::Location> toLocation() { return call_method<"toLocation", jni::ref<android::location::Location>>(); }
	jboolean isZaxisSubelementValid() { return call_method<"isZaxisSubelementValid", jboolean>(); }
	jint getExpectedToMove() { return call_method<"getExpectedToMove", jint>(); }
	jdouble getFloorNumber() { return call_method<"getFloorNumber", jdouble>(); }
	jdouble getHeightAboveFloorMeters() { return call_method<"getHeightAboveFloorMeters", jdouble>(); }
	jdouble getHeightAboveFloorUncertaintyMeters() { return call_method<"getHeightAboveFloorUncertaintyMeters", jdouble>(); }
	jni::ref<java::util::List> getColocatedBssids() { return call_method<"getColocatedBssids", jni::ref<java::util::List>>(); }
	jni::ref<android::location::Address> toCivicLocationAddress() { return call_method<"toCivicLocationAddress", jni::ref<android::location::Address>>(); }
	jni::ref<android::util::SparseArray> toCivicLocationSparseArray() { return call_method<"toCivicLocationSparseArray", jni::ref<android::util::SparseArray>>(); }
	jni::ref<java::lang::String> getMapImageMimeType() { return call_method<"getMapImageMimeType", jni::ref<java::lang::String>>(); }
	jni::ref<android::net::Uri> getMapImageUri() { return call_method<"getMapImageUri", jni::ref<android::net::Uri>>(); }

protected:

	ResponderLocation(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_WIFI_RTT_RESPONDERLOCATION