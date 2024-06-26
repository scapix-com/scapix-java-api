// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_LOCATION_GPSSATELLITE_FWD
#define SCAPIX_JAVA_API_ANDROID_LOCATION_GPSSATELLITE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::location { class GpsSatellite; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::location::GpsSatellite>
{
	static constexpr fixed_string class_name = "android/location/GpsSatellite";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_LOCATION_GPSSATELLITE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_LOCATION_GPSSATELLITE)
#define SCAPIX_JAVA_API_ANDROID_LOCATION_GPSSATELLITE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::location::GpsSatellite : public jni::object_base<"android/location/GpsSatellite",
	java::lang::Object>
{
public:

	jint getPrn() { return call_method<"getPrn", jint>(); }
	jfloat getSnr() { return call_method<"getSnr", jfloat>(); }
	jfloat getElevation() { return call_method<"getElevation", jfloat>(); }
	jfloat getAzimuth() { return call_method<"getAzimuth", jfloat>(); }
	jboolean hasEphemeris() { return call_method<"hasEphemeris", jboolean>(); }
	jboolean hasAlmanac() { return call_method<"hasAlmanac", jboolean>(); }
	jboolean usedInFix() { return call_method<"usedInFix", jboolean>(); }

protected:

	GpsSatellite(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_LOCATION_GPSSATELLITE
