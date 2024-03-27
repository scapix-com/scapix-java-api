// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_LOCATION_GNSSCLOCK_FWD
#define SCAPIX_JAVA_API_ANDROID_LOCATION_GNSSCLOCK_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::location { class GnssClock; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::location::GnssClock>
{
	static constexpr fixed_string class_name = "android/location/GnssClock";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_LOCATION_GNSSCLOCK_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_LOCATION_GNSSCLOCK)
#define SCAPIX_JAVA_API_ANDROID_LOCATION_GNSSCLOCK

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::location::GnssClock : public jni::object_base<"android/location/GnssClock",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }

	jboolean hasLeapSecond() { return call_method<"hasLeapSecond", jboolean>(); }
	jint getLeapSecond() { return call_method<"getLeapSecond", jint>(); }
	jlong getTimeNanos() { return call_method<"getTimeNanos", jlong>(); }
	jboolean hasTimeUncertaintyNanos() { return call_method<"hasTimeUncertaintyNanos", jboolean>(); }
	jdouble getTimeUncertaintyNanos() { return call_method<"getTimeUncertaintyNanos", jdouble>(); }
	jboolean hasFullBiasNanos() { return call_method<"hasFullBiasNanos", jboolean>(); }
	jlong getFullBiasNanos() { return call_method<"getFullBiasNanos", jlong>(); }
	jboolean hasBiasNanos() { return call_method<"hasBiasNanos", jboolean>(); }
	jdouble getBiasNanos() { return call_method<"getBiasNanos", jdouble>(); }
	jboolean hasBiasUncertaintyNanos() { return call_method<"hasBiasUncertaintyNanos", jboolean>(); }
	jdouble getBiasUncertaintyNanos() { return call_method<"getBiasUncertaintyNanos", jdouble>(); }
	jboolean hasDriftNanosPerSecond() { return call_method<"hasDriftNanosPerSecond", jboolean>(); }
	jdouble getDriftNanosPerSecond() { return call_method<"getDriftNanosPerSecond", jdouble>(); }
	jboolean hasDriftUncertaintyNanosPerSecond() { return call_method<"hasDriftUncertaintyNanosPerSecond", jboolean>(); }
	jdouble getDriftUncertaintyNanosPerSecond() { return call_method<"getDriftUncertaintyNanosPerSecond", jdouble>(); }
	jboolean hasElapsedRealtimeNanos() { return call_method<"hasElapsedRealtimeNanos", jboolean>(); }
	jlong getElapsedRealtimeNanos() { return call_method<"getElapsedRealtimeNanos", jlong>(); }
	jboolean hasElapsedRealtimeUncertaintyNanos() { return call_method<"hasElapsedRealtimeUncertaintyNanos", jboolean>(); }
	jdouble getElapsedRealtimeUncertaintyNanos() { return call_method<"getElapsedRealtimeUncertaintyNanos", jdouble>(); }
	jboolean hasReferenceConstellationTypeForIsb() { return call_method<"hasReferenceConstellationTypeForIsb", jboolean>(); }
	jint getReferenceConstellationTypeForIsb() { return call_method<"getReferenceConstellationTypeForIsb", jint>(); }
	jboolean hasReferenceCarrierFrequencyHzForIsb() { return call_method<"hasReferenceCarrierFrequencyHzForIsb", jboolean>(); }
	jdouble getReferenceCarrierFrequencyHzForIsb() { return call_method<"getReferenceCarrierFrequencyHzForIsb", jdouble>(); }
	jboolean hasReferenceCodeTypeForIsb() { return call_method<"hasReferenceCodeTypeForIsb", jboolean>(); }
	jni::ref<java::lang::String> getReferenceCodeTypeForIsb() { return call_method<"getReferenceCodeTypeForIsb", jni::ref<java::lang::String>>(); }
	jint getHardwareClockDiscontinuityCount() { return call_method<"getHardwareClockDiscontinuityCount", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> parcel, jint flags) { return call_method<"writeToParcel", void>(parcel, flags); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	GnssClock(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_LOCATION_GNSSCLOCK
