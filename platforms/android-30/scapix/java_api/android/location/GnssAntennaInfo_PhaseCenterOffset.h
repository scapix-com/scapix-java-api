// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_LOCATION_GNSSANTENNAINFO_PHASECENTEROFFSET_FWD
#define SCAPIX_JAVA_API_ANDROID_LOCATION_GNSSANTENNAINFO_PHASECENTEROFFSET_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::location { class GnssAntennaInfo_PhaseCenterOffset; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::location::GnssAntennaInfo_PhaseCenterOffset>
{
	static constexpr fixed_string class_name = "android/location/GnssAntennaInfo$PhaseCenterOffset";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_LOCATION_GNSSANTENNAINFO_PHASECENTEROFFSET_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_LOCATION_GNSSANTENNAINFO_PHASECENTEROFFSET)
#define SCAPIX_JAVA_API_ANDROID_LOCATION_GNSSANTENNAINFO_PHASECENTEROFFSET

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::location::GnssAntennaInfo_PhaseCenterOffset : public jni::object_base<"android/location/GnssAntennaInfo$PhaseCenterOffset",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }

	static jni::ref<android::location::GnssAntennaInfo_PhaseCenterOffset> new_object(jdouble offsetXMm, jdouble p2, jdouble offsetXUncertaintyMm, jdouble p4, jdouble offsetYMm, jdouble p6) { return base_::new_object(offsetXMm, p2, offsetXUncertaintyMm, p4, offsetYMm, p6); }
	jdouble getXOffsetMm() { return call_method<"getXOffsetMm", jdouble>(); }
	jdouble getXOffsetUncertaintyMm() { return call_method<"getXOffsetUncertaintyMm", jdouble>(); }
	jdouble getYOffsetMm() { return call_method<"getYOffsetMm", jdouble>(); }
	jdouble getYOffsetUncertaintyMm() { return call_method<"getYOffsetUncertaintyMm", jdouble>(); }
	jdouble getZOffsetMm() { return call_method<"getZOffsetMm", jdouble>(); }
	jdouble getZOffsetUncertaintyMm() { return call_method<"getZOffsetUncertaintyMm", jdouble>(); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	GnssAntennaInfo_PhaseCenterOffset(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_LOCATION_GNSSANTENNAINFO_PHASECENTEROFFSET
