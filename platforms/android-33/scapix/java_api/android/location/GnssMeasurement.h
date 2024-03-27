// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_LOCATION_GNSSMEASUREMENT_FWD
#define SCAPIX_JAVA_API_ANDROID_LOCATION_GNSSMEASUREMENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::location { class GnssMeasurement; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::location::GnssMeasurement>
{
	static constexpr fixed_string class_name = "android/location/GnssMeasurement";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_LOCATION_GNSSMEASUREMENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_LOCATION_GNSSMEASUREMENT)
#define SCAPIX_JAVA_API_ANDROID_LOCATION_GNSSMEASUREMENT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::location::GnssMeasurement : public jni::object_base<"android/location/GnssMeasurement",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static jint ADR_STATE_CYCLE_SLIP() { return get_static_field<"ADR_STATE_CYCLE_SLIP", jint>(); }
	static jint ADR_STATE_HALF_CYCLE_REPORTED() { return get_static_field<"ADR_STATE_HALF_CYCLE_REPORTED", jint>(); }
	static jint ADR_STATE_HALF_CYCLE_RESOLVED() { return get_static_field<"ADR_STATE_HALF_CYCLE_RESOLVED", jint>(); }
	static jint ADR_STATE_RESET() { return get_static_field<"ADR_STATE_RESET", jint>(); }
	static jint ADR_STATE_UNKNOWN() { return get_static_field<"ADR_STATE_UNKNOWN", jint>(); }
	static jint ADR_STATE_VALID() { return get_static_field<"ADR_STATE_VALID", jint>(); }
	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }
	static jint MULTIPATH_INDICATOR_DETECTED() { return get_static_field<"MULTIPATH_INDICATOR_DETECTED", jint>(); }
	static jint MULTIPATH_INDICATOR_NOT_DETECTED() { return get_static_field<"MULTIPATH_INDICATOR_NOT_DETECTED", jint>(); }
	static jint MULTIPATH_INDICATOR_UNKNOWN() { return get_static_field<"MULTIPATH_INDICATOR_UNKNOWN", jint>(); }
	static jint STATE_2ND_CODE_LOCK() { return get_static_field<"STATE_2ND_CODE_LOCK", jint>(); }
	static jint STATE_BDS_D2_BIT_SYNC() { return get_static_field<"STATE_BDS_D2_BIT_SYNC", jint>(); }
	static jint STATE_BDS_D2_SUBFRAME_SYNC() { return get_static_field<"STATE_BDS_D2_SUBFRAME_SYNC", jint>(); }
	static jint STATE_BIT_SYNC() { return get_static_field<"STATE_BIT_SYNC", jint>(); }
	static jint STATE_CODE_LOCK() { return get_static_field<"STATE_CODE_LOCK", jint>(); }
	static jint STATE_GAL_E1BC_CODE_LOCK() { return get_static_field<"STATE_GAL_E1BC_CODE_LOCK", jint>(); }
	static jint STATE_GAL_E1B_PAGE_SYNC() { return get_static_field<"STATE_GAL_E1B_PAGE_SYNC", jint>(); }
	static jint STATE_GAL_E1C_2ND_CODE_LOCK() { return get_static_field<"STATE_GAL_E1C_2ND_CODE_LOCK", jint>(); }
	static jint STATE_GLO_STRING_SYNC() { return get_static_field<"STATE_GLO_STRING_SYNC", jint>(); }
	static jint STATE_GLO_TOD_DECODED() { return get_static_field<"STATE_GLO_TOD_DECODED", jint>(); }
	static jint STATE_GLO_TOD_KNOWN() { return get_static_field<"STATE_GLO_TOD_KNOWN", jint>(); }
	static jint STATE_MSEC_AMBIGUOUS() { return get_static_field<"STATE_MSEC_AMBIGUOUS", jint>(); }
	static jint STATE_SBAS_SYNC() { return get_static_field<"STATE_SBAS_SYNC", jint>(); }
	static jint STATE_SUBFRAME_SYNC() { return get_static_field<"STATE_SUBFRAME_SYNC", jint>(); }
	static jint STATE_SYMBOL_SYNC() { return get_static_field<"STATE_SYMBOL_SYNC", jint>(); }
	static jint STATE_TOW_DECODED() { return get_static_field<"STATE_TOW_DECODED", jint>(); }
	static jint STATE_TOW_KNOWN() { return get_static_field<"STATE_TOW_KNOWN", jint>(); }
	static jint STATE_UNKNOWN() { return get_static_field<"STATE_UNKNOWN", jint>(); }

	jint getSvid() { return call_method<"getSvid", jint>(); }
	jint getConstellationType() { return call_method<"getConstellationType", jint>(); }
	jdouble getTimeOffsetNanos() { return call_method<"getTimeOffsetNanos", jdouble>(); }
	jint getState() { return call_method<"getState", jint>(); }
	jlong getReceivedSvTimeNanos() { return call_method<"getReceivedSvTimeNanos", jlong>(); }
	jlong getReceivedSvTimeUncertaintyNanos() { return call_method<"getReceivedSvTimeUncertaintyNanos", jlong>(); }
	jdouble getCn0DbHz() { return call_method<"getCn0DbHz", jdouble>(); }
	jboolean hasBasebandCn0DbHz() { return call_method<"hasBasebandCn0DbHz", jboolean>(); }
	jdouble getBasebandCn0DbHz() { return call_method<"getBasebandCn0DbHz", jdouble>(); }
	jdouble getPseudorangeRateMetersPerSecond() { return call_method<"getPseudorangeRateMetersPerSecond", jdouble>(); }
	jdouble getPseudorangeRateUncertaintyMetersPerSecond() { return call_method<"getPseudorangeRateUncertaintyMetersPerSecond", jdouble>(); }
	jint getAccumulatedDeltaRangeState() { return call_method<"getAccumulatedDeltaRangeState", jint>(); }
	jdouble getAccumulatedDeltaRangeMeters() { return call_method<"getAccumulatedDeltaRangeMeters", jdouble>(); }
	jdouble getAccumulatedDeltaRangeUncertaintyMeters() { return call_method<"getAccumulatedDeltaRangeUncertaintyMeters", jdouble>(); }
	jboolean hasCarrierFrequencyHz() { return call_method<"hasCarrierFrequencyHz", jboolean>(); }
	jfloat getCarrierFrequencyHz() { return call_method<"getCarrierFrequencyHz", jfloat>(); }
	jboolean hasCarrierCycles() { return call_method<"hasCarrierCycles", jboolean>(); }
	jlong getCarrierCycles() { return call_method<"getCarrierCycles", jlong>(); }
	jboolean hasCarrierPhase() { return call_method<"hasCarrierPhase", jboolean>(); }
	jdouble getCarrierPhase() { return call_method<"getCarrierPhase", jdouble>(); }
	jboolean hasCarrierPhaseUncertainty() { return call_method<"hasCarrierPhaseUncertainty", jboolean>(); }
	jdouble getCarrierPhaseUncertainty() { return call_method<"getCarrierPhaseUncertainty", jdouble>(); }
	jint getMultipathIndicator() { return call_method<"getMultipathIndicator", jint>(); }
	jboolean hasSnrInDb() { return call_method<"hasSnrInDb", jboolean>(); }
	jdouble getSnrInDb() { return call_method<"getSnrInDb", jdouble>(); }
	jboolean hasAutomaticGainControlLevelDb() { return call_method<"hasAutomaticGainControlLevelDb", jboolean>(); }
	jdouble getAutomaticGainControlLevelDb() { return call_method<"getAutomaticGainControlLevelDb", jdouble>(); }
	jboolean hasCodeType() { return call_method<"hasCodeType", jboolean>(); }
	jni::ref<java::lang::String> getCodeType() { return call_method<"getCodeType", jni::ref<java::lang::String>>(); }
	jboolean hasFullInterSignalBiasNanos() { return call_method<"hasFullInterSignalBiasNanos", jboolean>(); }
	jdouble getFullInterSignalBiasNanos() { return call_method<"getFullInterSignalBiasNanos", jdouble>(); }
	jboolean hasFullInterSignalBiasUncertaintyNanos() { return call_method<"hasFullInterSignalBiasUncertaintyNanos", jboolean>(); }
	jdouble getFullInterSignalBiasUncertaintyNanos() { return call_method<"getFullInterSignalBiasUncertaintyNanos", jdouble>(); }
	jboolean hasSatelliteInterSignalBiasNanos() { return call_method<"hasSatelliteInterSignalBiasNanos", jboolean>(); }
	jdouble getSatelliteInterSignalBiasNanos() { return call_method<"getSatelliteInterSignalBiasNanos", jdouble>(); }
	jboolean hasSatelliteInterSignalBiasUncertaintyNanos() { return call_method<"hasSatelliteInterSignalBiasUncertaintyNanos", jboolean>(); }
	jdouble getSatelliteInterSignalBiasUncertaintyNanos() { return call_method<"getSatelliteInterSignalBiasUncertaintyNanos", jdouble>(); }
	void writeToParcel(jni::ref<android::os::Parcel> parcel, jint flags) { return call_method<"writeToParcel", void>(parcel, flags); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	GnssMeasurement(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_LOCATION_GNSSMEASUREMENT
