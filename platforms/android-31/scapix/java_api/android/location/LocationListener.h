// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_LOCATION_LOCATIONLISTENER_FWD
#define SCAPIX_JAVA_API_ANDROID_LOCATION_LOCATIONLISTENER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::location { class LocationListener; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::location::LocationListener>
{
	static constexpr fixed_string class_name = "android/location/LocationListener";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_LOCATION_LOCATIONLISTENER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_LOCATION_LOCATIONLISTENER)
#define SCAPIX_JAVA_API_ANDROID_LOCATION_LOCATIONLISTENER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/location/Location.h>
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::location::LocationListener : public jni::object_base<"android/location/LocationListener",
	java::lang::Object>
{
public:

	void onLocationChanged(jni::ref<android::location::Location> p1) { return call_method<"onLocationChanged", void>(p1); }
	void onLocationChanged(jni::ref<java::util::List> locations) { return call_method<"onLocationChanged", void>(locations); }
	void onFlushComplete(jint requestCode) { return call_method<"onFlushComplete", void>(requestCode); }
	void onStatusChanged(jni::ref<java::lang::String> provider, jint status, jni::ref<android::os::Bundle> extras) { return call_method<"onStatusChanged", void>(provider, status, extras); }
	void onProviderEnabled(jni::ref<java::lang::String> provider) { return call_method<"onProviderEnabled", void>(provider); }
	void onProviderDisabled(jni::ref<java::lang::String> provider) { return call_method<"onProviderDisabled", void>(provider); }

protected:

	LocationListener(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_LOCATION_LOCATIONLISTENER
