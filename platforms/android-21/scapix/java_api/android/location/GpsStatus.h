// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_LOCATION_GPSSTATUS_FWD
#define SCAPIX_JAVA_API_ANDROID_LOCATION_GPSSTATUS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::location { class GpsStatus; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::location::GpsStatus>
{
	static constexpr fixed_string class_name = "android/location/GpsStatus";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_LOCATION_GPSSTATUS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_LOCATION_GPSSTATUS)
#define SCAPIX_JAVA_API_ANDROID_LOCATION_GPSSTATUS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Iterable.h>
#include <scapix/java_api/android/location/GpsStatus_NmeaListener.h>
#include <scapix/java_api/android/location/GpsStatus_Listener.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::location::GpsStatus : public jni::object_base<"android/location/GpsStatus",
	java::lang::Object>
{
public:

	using NmeaListener = GpsStatus_NmeaListener;
	using Listener = GpsStatus_Listener;

	static jint GPS_EVENT_FIRST_FIX() { return get_static_field<"GPS_EVENT_FIRST_FIX", jint>(); }
	static jint GPS_EVENT_SATELLITE_STATUS() { return get_static_field<"GPS_EVENT_SATELLITE_STATUS", jint>(); }
	static jint GPS_EVENT_STARTED() { return get_static_field<"GPS_EVENT_STARTED", jint>(); }
	static jint GPS_EVENT_STOPPED() { return get_static_field<"GPS_EVENT_STOPPED", jint>(); }

	jint getTimeToFirstFix() { return call_method<"getTimeToFirstFix", jint>(); }
	jni::ref<java::lang::Iterable> getSatellites() { return call_method<"getSatellites", jni::ref<java::lang::Iterable>>(); }
	jint getMaxSatellites() { return call_method<"getMaxSatellites", jint>(); }

protected:

	GpsStatus(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_LOCATION_GPSSTATUS
