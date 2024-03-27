// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_LOCATION_GEOCODER_GEOCODELISTENER_FWD
#define SCAPIX_JAVA_API_ANDROID_LOCATION_GEOCODER_GEOCODELISTENER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::location { class Geocoder_GeocodeListener; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::location::Geocoder_GeocodeListener>
{
	static constexpr fixed_string class_name = "android/location/Geocoder$GeocodeListener";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_LOCATION_GEOCODER_GEOCODELISTENER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_LOCATION_GEOCODER_GEOCODELISTENER)
#define SCAPIX_JAVA_API_ANDROID_LOCATION_GEOCODER_GEOCODELISTENER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::location::Geocoder_GeocodeListener : public jni::object_base<"android/location/Geocoder$GeocodeListener",
	java::lang::Object>
{
public:

	void onGeocode(jni::ref<java::util::List> p1) { return call_method<"onGeocode", void>(p1); }
	void onError(jni::ref<java::lang::String> errorMessage) { return call_method<"onError", void>(errorMessage); }

protected:

	Geocoder_GeocodeListener(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_LOCATION_GEOCODER_GEOCODELISTENER
