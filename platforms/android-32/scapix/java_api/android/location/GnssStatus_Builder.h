// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_LOCATION_GNSSSTATUS_BUILDER_FWD
#define SCAPIX_JAVA_API_ANDROID_LOCATION_GNSSSTATUS_BUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::location { class GnssStatus_Builder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::location::GnssStatus_Builder>
{
	static constexpr fixed_string class_name = "android/location/GnssStatus$Builder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_LOCATION_GNSSSTATUS_BUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_LOCATION_GNSSSTATUS_BUILDER)
#define SCAPIX_JAVA_API_ANDROID_LOCATION_GNSSSTATUS_BUILDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/location/GnssStatus.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::location::GnssStatus_Builder : public jni::object_base<"android/location/GnssStatus$Builder",
	java::lang::Object>
{
public:

	static jni::ref<android::location::GnssStatus_Builder> new_object() { return base_::new_object(); }
	jni::ref<android::location::GnssStatus_Builder> addSatellite(jint constellationType, jint svid, jfloat cn0DbHz, jfloat elevation, jfloat azimuth, jboolean hasEphemeris, jboolean hasAlmanac, jboolean usedInFix, jboolean hasCarrierFrequency, jfloat carrierFrequency, jboolean hasBasebandCn0DbHz, jfloat basebandCn0DbHz) { return call_method<"addSatellite", jni::ref<android::location::GnssStatus_Builder>>(constellationType, svid, cn0DbHz, elevation, azimuth, hasEphemeris, hasAlmanac, usedInFix, hasCarrierFrequency, carrierFrequency, hasBasebandCn0DbHz, basebandCn0DbHz); }
	jni::ref<android::location::GnssStatus_Builder> clearSatellites() { return call_method<"clearSatellites", jni::ref<android::location::GnssStatus_Builder>>(); }
	jni::ref<android::location::GnssStatus> build() { return call_method<"build", jni::ref<android::location::GnssStatus>>(); }

protected:

	GnssStatus_Builder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_LOCATION_GNSSSTATUS_BUILDER
