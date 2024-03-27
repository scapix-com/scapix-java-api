// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_LOCATION_LOCATIONMANAGER_FWD
#define SCAPIX_JAVA_API_ANDROID_LOCATION_LOCATIONMANAGER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::location { class LocationManager; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::location::LocationManager>
{
	static constexpr fixed_string class_name = "android/location/LocationManager";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_LOCATION_LOCATIONMANAGER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_LOCATION_LOCATIONMANAGER)
#define SCAPIX_JAVA_API_ANDROID_LOCATION_LOCATIONMANAGER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/app/PendingIntent.h>
#include <scapix/java_api/android/location/Criteria.h>
#include <scapix/java_api/android/location/GpsStatus.h>
#include <scapix/java_api/android/location/GpsStatus_Listener.h>
#include <scapix/java_api/android/location/GpsStatus_NmeaListener.h>
#include <scapix/java_api/android/location/Location.h>
#include <scapix/java_api/android/location/LocationListener.h>
#include <scapix/java_api/android/location/LocationProvider.h>
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/android/os/Looper.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::location::LocationManager : public jni::object_base<"android/location/LocationManager",
	java::lang::Object>
{
public:

	static jni::ref<java::lang::String> GPS_PROVIDER() { return get_static_field<"GPS_PROVIDER", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_LOCATION_CHANGED() { return get_static_field<"KEY_LOCATION_CHANGED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_PROVIDER_ENABLED() { return get_static_field<"KEY_PROVIDER_ENABLED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_PROXIMITY_ENTERING() { return get_static_field<"KEY_PROXIMITY_ENTERING", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_STATUS_CHANGED() { return get_static_field<"KEY_STATUS_CHANGED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> MODE_CHANGED_ACTION() { return get_static_field<"MODE_CHANGED_ACTION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> NETWORK_PROVIDER() { return get_static_field<"NETWORK_PROVIDER", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> PASSIVE_PROVIDER() { return get_static_field<"PASSIVE_PROVIDER", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> PROVIDERS_CHANGED_ACTION() { return get_static_field<"PROVIDERS_CHANGED_ACTION", jni::ref<java::lang::String>>(); }

	jni::ref<java::util::List> getAllProviders() { return call_method<"getAllProviders", jni::ref<java::util::List>>(); }
	jni::ref<java::util::List> getProviders(jboolean enabledOnly) { return call_method<"getProviders", jni::ref<java::util::List>>(enabledOnly); }
	jni::ref<android::location::LocationProvider> getProvider(jni::ref<java::lang::String> name) { return call_method<"getProvider", jni::ref<android::location::LocationProvider>>(name); }
	jni::ref<java::util::List> getProviders(jni::ref<android::location::Criteria> criteria, jboolean enabledOnly) { return call_method<"getProviders", jni::ref<java::util::List>>(criteria, enabledOnly); }
	jni::ref<java::lang::String> getBestProvider(jni::ref<android::location::Criteria> criteria, jboolean enabledOnly) { return call_method<"getBestProvider", jni::ref<java::lang::String>>(criteria, enabledOnly); }
	void requestLocationUpdates(jni::ref<java::lang::String> provider, jlong minTime, jfloat p3, jni::ref<android::location::LocationListener> minDistance) { return call_method<"requestLocationUpdates", void>(provider, minTime, p3, minDistance); }
	void requestLocationUpdates(jni::ref<java::lang::String> provider, jlong minTime, jfloat p3, jni::ref<android::location::LocationListener> minDistance, jni::ref<android::os::Looper> listener) { return call_method<"requestLocationUpdates", void>(provider, minTime, p3, minDistance, listener); }
	void requestLocationUpdates(jlong minTime, jfloat p2, jni::ref<android::location::Criteria> minDistance, jni::ref<android::location::LocationListener> criteria, jni::ref<android::os::Looper> listener) { return call_method<"requestLocationUpdates", void>(minTime, p2, minDistance, criteria, listener); }
	void requestLocationUpdates(jni::ref<java::lang::String> provider, jlong minTime, jfloat p3, jni::ref<android::app::PendingIntent> minDistance) { return call_method<"requestLocationUpdates", void>(provider, minTime, p3, minDistance); }
	void requestLocationUpdates(jlong minTime, jfloat p2, jni::ref<android::location::Criteria> minDistance, jni::ref<android::app::PendingIntent> criteria) { return call_method<"requestLocationUpdates", void>(minTime, p2, minDistance, criteria); }
	void requestSingleUpdate(jni::ref<java::lang::String> provider, jni::ref<android::location::LocationListener> listener, jni::ref<android::os::Looper> looper) { return call_method<"requestSingleUpdate", void>(provider, listener, looper); }
	void requestSingleUpdate(jni::ref<android::location::Criteria> criteria, jni::ref<android::location::LocationListener> listener, jni::ref<android::os::Looper> looper) { return call_method<"requestSingleUpdate", void>(criteria, listener, looper); }
	void requestSingleUpdate(jni::ref<java::lang::String> provider, jni::ref<android::app::PendingIntent> intent) { return call_method<"requestSingleUpdate", void>(provider, intent); }
	void requestSingleUpdate(jni::ref<android::location::Criteria> criteria, jni::ref<android::app::PendingIntent> intent) { return call_method<"requestSingleUpdate", void>(criteria, intent); }
	void removeUpdates(jni::ref<android::location::LocationListener> listener) { return call_method<"removeUpdates", void>(listener); }
	void removeUpdates(jni::ref<android::app::PendingIntent> intent) { return call_method<"removeUpdates", void>(intent); }
	void addProximityAlert(jdouble latitude, jdouble p2, jfloat longitude, jlong p4, jni::ref<android::app::PendingIntent> radius) { return call_method<"addProximityAlert", void>(latitude, p2, longitude, p4, radius); }
	void removeProximityAlert(jni::ref<android::app::PendingIntent> intent) { return call_method<"removeProximityAlert", void>(intent); }
	jboolean isProviderEnabled(jni::ref<java::lang::String> provider) { return call_method<"isProviderEnabled", jboolean>(provider); }
	jni::ref<android::location::Location> getLastKnownLocation(jni::ref<java::lang::String> provider) { return call_method<"getLastKnownLocation", jni::ref<android::location::Location>>(provider); }
	void addTestProvider(jni::ref<java::lang::String> name, jboolean requiresNetwork, jboolean requiresSatellite, jboolean requiresCell, jboolean hasMonetaryCost, jboolean supportsAltitude, jboolean supportsSpeed, jboolean supportsBearing, jint powerRequirement, jint accuracy) { return call_method<"addTestProvider", void>(name, requiresNetwork, requiresSatellite, requiresCell, hasMonetaryCost, supportsAltitude, supportsSpeed, supportsBearing, powerRequirement, accuracy); }
	void removeTestProvider(jni::ref<java::lang::String> provider) { return call_method<"removeTestProvider", void>(provider); }
	void setTestProviderLocation(jni::ref<java::lang::String> provider, jni::ref<android::location::Location> loc) { return call_method<"setTestProviderLocation", void>(provider, loc); }
	void clearTestProviderLocation(jni::ref<java::lang::String> provider) { return call_method<"clearTestProviderLocation", void>(provider); }
	void setTestProviderEnabled(jni::ref<java::lang::String> provider, jboolean enabled) { return call_method<"setTestProviderEnabled", void>(provider, enabled); }
	void clearTestProviderEnabled(jni::ref<java::lang::String> provider) { return call_method<"clearTestProviderEnabled", void>(provider); }
	void setTestProviderStatus(jni::ref<java::lang::String> provider, jint status, jni::ref<android::os::Bundle> extras, jlong updateTime) { return call_method<"setTestProviderStatus", void>(provider, status, extras, updateTime); }
	void clearTestProviderStatus(jni::ref<java::lang::String> provider) { return call_method<"clearTestProviderStatus", void>(provider); }
	jboolean addGpsStatusListener(jni::ref<android::location::GpsStatus_Listener> listener) { return call_method<"addGpsStatusListener", jboolean>(listener); }
	void removeGpsStatusListener(jni::ref<android::location::GpsStatus_Listener> listener) { return call_method<"removeGpsStatusListener", void>(listener); }
	jboolean addNmeaListener(jni::ref<android::location::GpsStatus_NmeaListener> listener) { return call_method<"addNmeaListener", jboolean>(listener); }
	void removeNmeaListener(jni::ref<android::location::GpsStatus_NmeaListener> listener) { return call_method<"removeNmeaListener", void>(listener); }
	jni::ref<android::location::GpsStatus> getGpsStatus(jni::ref<android::location::GpsStatus> status) { return call_method<"getGpsStatus", jni::ref<android::location::GpsStatus>>(status); }
	jboolean sendExtraCommand(jni::ref<java::lang::String> provider, jni::ref<java::lang::String> command, jni::ref<android::os::Bundle> extras) { return call_method<"sendExtraCommand", jboolean>(provider, command, extras); }

protected:

	LocationManager(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_LOCATION_LOCATIONMANAGER
