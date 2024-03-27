// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_LOCATION_GNSSANTENNAINFO_SPHERICALCORRECTIONS_FWD
#define SCAPIX_JAVA_API_ANDROID_LOCATION_GNSSANTENNAINFO_SPHERICALCORRECTIONS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::location { class GnssAntennaInfo_SphericalCorrections; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::location::GnssAntennaInfo_SphericalCorrections>
{
	static constexpr fixed_string class_name = "android/location/GnssAntennaInfo$SphericalCorrections";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_LOCATION_GNSSANTENNAINFO_SPHERICALCORRECTIONS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_LOCATION_GNSSANTENNAINFO_SPHERICALCORRECTIONS)
#define SCAPIX_JAVA_API_ANDROID_LOCATION_GNSSANTENNAINFO_SPHERICALCORRECTIONS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::location::GnssAntennaInfo_SphericalCorrections : public jni::object_base<"android/location/GnssAntennaInfo$SphericalCorrections",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }

	static jni::ref<android::location::GnssAntennaInfo_SphericalCorrections> new_object(jni::ref<jni::array<jni::array<jdouble>>> corrections, jni::ref<jni::array<jni::array<jdouble>>> correctionUncertainties) { return base_::new_object(corrections, correctionUncertainties); }
	jni::ref<jni::array<jni::array<jdouble>>> getCorrectionsArray() { return call_method<"getCorrectionsArray", jni::ref<jni::array<jni::array<jdouble>>>>(); }
	jni::ref<jni::array<jni::array<jdouble>>> getCorrectionUncertaintiesArray() { return call_method<"getCorrectionUncertaintiesArray", jni::ref<jni::array<jni::array<jdouble>>>>(); }
	jdouble getDeltaTheta() { return call_method<"getDeltaTheta", jdouble>(); }
	jdouble getDeltaPhi() { return call_method<"getDeltaPhi", jdouble>(); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	GnssAntennaInfo_SphericalCorrections(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_LOCATION_GNSSANTENNAINFO_SPHERICALCORRECTIONS
