// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_LOCATION_LOCATION_FWD
#define SCAPIX_JAVA_API_ANDROID_LOCATION_LOCATION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::location { class Location; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::location::Location>
{
	static constexpr fixed_string class_name = "android/location/Location";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_LOCATION_LOCATION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_LOCATION_LOCATION)
#define SCAPIX_JAVA_API_ANDROID_LOCATION_LOCATION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/android/util/Printer.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::location::Location : public jni::object_base<"android/location/Location",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }
	static jint FORMAT_DEGREES() { return get_static_field<"FORMAT_DEGREES", jint>(); }
	static jint FORMAT_MINUTES() { return get_static_field<"FORMAT_MINUTES", jint>(); }
	static jint FORMAT_SECONDS() { return get_static_field<"FORMAT_SECONDS", jint>(); }

	static jni::ref<android::location::Location> new_object(jni::ref<java::lang::String> provider) { return base_::new_object(provider); }
	static jni::ref<android::location::Location> new_object(jni::ref<android::location::Location> l) { return base_::new_object(l); }
	void set(jni::ref<android::location::Location> l) { return call_method<"set", void>(l); }
	void reset() { return call_method<"reset", void>(); }
	static jni::ref<java::lang::String> convert(jdouble coordinate, jint p2) { return call_static_method<"convert", jni::ref<java::lang::String>>(coordinate, p2); }
	static jdouble convert(jni::ref<java::lang::String> coordinate) { return call_static_method<"convert", jdouble>(coordinate); }
	static void distanceBetween(jdouble startLatitude, jdouble p2, jdouble startLongitude, jdouble p4, jni::ref<jni::array<jfloat>> endLatitude) { return call_static_method<"distanceBetween", void>(startLatitude, p2, startLongitude, p4, endLatitude); }
	jfloat distanceTo(jni::ref<android::location::Location> dest) { return call_method<"distanceTo", jfloat>(dest); }
	jfloat bearingTo(jni::ref<android::location::Location> dest) { return call_method<"bearingTo", jfloat>(dest); }
	jni::ref<java::lang::String> getProvider() { return call_method<"getProvider", jni::ref<java::lang::String>>(); }
	void setProvider(jni::ref<java::lang::String> provider) { return call_method<"setProvider", void>(provider); }
	jlong getTime() { return call_method<"getTime", jlong>(); }
	void setTime(jlong time) { return call_method<"setTime", void>(time); }
	jlong getElapsedRealtimeNanos() { return call_method<"getElapsedRealtimeNanos", jlong>(); }
	void setElapsedRealtimeNanos(jlong time) { return call_method<"setElapsedRealtimeNanos", void>(time); }
	jdouble getElapsedRealtimeUncertaintyNanos() { return call_method<"getElapsedRealtimeUncertaintyNanos", jdouble>(); }
	void setElapsedRealtimeUncertaintyNanos(jdouble time) { return call_method<"setElapsedRealtimeUncertaintyNanos", void>(time); }
	jboolean hasElapsedRealtimeUncertaintyNanos() { return call_method<"hasElapsedRealtimeUncertaintyNanos", jboolean>(); }
	jdouble getLatitude() { return call_method<"getLatitude", jdouble>(); }
	void setLatitude(jdouble latitude) { return call_method<"setLatitude", void>(latitude); }
	jdouble getLongitude() { return call_method<"getLongitude", jdouble>(); }
	void setLongitude(jdouble longitude) { return call_method<"setLongitude", void>(longitude); }
	jboolean hasAltitude() { return call_method<"hasAltitude", jboolean>(); }
	jdouble getAltitude() { return call_method<"getAltitude", jdouble>(); }
	void setAltitude(jdouble altitude) { return call_method<"setAltitude", void>(altitude); }
	void removeAltitude() { return call_method<"removeAltitude", void>(); }
	jboolean hasSpeed() { return call_method<"hasSpeed", jboolean>(); }
	jfloat getSpeed() { return call_method<"getSpeed", jfloat>(); }
	void setSpeed(jfloat speed) { return call_method<"setSpeed", void>(speed); }
	void removeSpeed() { return call_method<"removeSpeed", void>(); }
	jboolean hasBearing() { return call_method<"hasBearing", jboolean>(); }
	jfloat getBearing() { return call_method<"getBearing", jfloat>(); }
	void setBearing(jfloat bearing) { return call_method<"setBearing", void>(bearing); }
	void removeBearing() { return call_method<"removeBearing", void>(); }
	jboolean hasAccuracy() { return call_method<"hasAccuracy", jboolean>(); }
	jfloat getAccuracy() { return call_method<"getAccuracy", jfloat>(); }
	void setAccuracy(jfloat horizontalAccuracy) { return call_method<"setAccuracy", void>(horizontalAccuracy); }
	void removeAccuracy() { return call_method<"removeAccuracy", void>(); }
	jboolean hasVerticalAccuracy() { return call_method<"hasVerticalAccuracy", jboolean>(); }
	jfloat getVerticalAccuracyMeters() { return call_method<"getVerticalAccuracyMeters", jfloat>(); }
	void setVerticalAccuracyMeters(jfloat verticalAccuracyMeters) { return call_method<"setVerticalAccuracyMeters", void>(verticalAccuracyMeters); }
	jboolean hasSpeedAccuracy() { return call_method<"hasSpeedAccuracy", jboolean>(); }
	jfloat getSpeedAccuracyMetersPerSecond() { return call_method<"getSpeedAccuracyMetersPerSecond", jfloat>(); }
	void setSpeedAccuracyMetersPerSecond(jfloat speedAccuracyMeterPerSecond) { return call_method<"setSpeedAccuracyMetersPerSecond", void>(speedAccuracyMeterPerSecond); }
	jboolean hasBearingAccuracy() { return call_method<"hasBearingAccuracy", jboolean>(); }
	jfloat getBearingAccuracyDegrees() { return call_method<"getBearingAccuracyDegrees", jfloat>(); }
	void setBearingAccuracyDegrees(jfloat bearingAccuracyDegrees) { return call_method<"setBearingAccuracyDegrees", void>(bearingAccuracyDegrees); }
	jni::ref<android::os::Bundle> getExtras() { return call_method<"getExtras", jni::ref<android::os::Bundle>>(); }
	void setExtras(jni::ref<android::os::Bundle> extras) { return call_method<"setExtras", void>(extras); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	void dump(jni::ref<android::util::Printer> pw, jni::ref<java::lang::String> prefix) { return call_method<"dump", void>(pw, prefix); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> parcel, jint flags) { return call_method<"writeToParcel", void>(parcel, flags); }
	jboolean isFromMockProvider() { return call_method<"isFromMockProvider", jboolean>(); }
	jboolean isMock() { return call_method<"isMock", jboolean>(); }
	void setMock(jboolean mock) { return call_method<"setMock", void>(mock); }

protected:

	Location(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_LOCATION_LOCATION
