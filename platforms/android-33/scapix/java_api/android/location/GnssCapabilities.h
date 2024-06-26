// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_LOCATION_GNSSCAPABILITIES_FWD
#define SCAPIX_JAVA_API_ANDROID_LOCATION_GNSSCAPABILITIES_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::location { class GnssCapabilities; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::location::GnssCapabilities>
{
	static constexpr fixed_string class_name = "android/location/GnssCapabilities";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_LOCATION_GNSSCAPABILITIES_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_LOCATION_GNSSCAPABILITIES)
#define SCAPIX_JAVA_API_ANDROID_LOCATION_GNSSCAPABILITIES

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/android/location/GnssCapabilities_Builder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::location::GnssCapabilities : public jni::object_base<"android/location/GnssCapabilities",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	using Builder = GnssCapabilities_Builder;

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }

	jboolean hasMeasurements() { return call_method<"hasMeasurements", jboolean>(); }
	jboolean hasNavigationMessages() { return call_method<"hasNavigationMessages", jboolean>(); }
	jboolean hasGnssAntennaInfo() { return call_method<"hasGnssAntennaInfo", jboolean>(); }
	jboolean hasAntennaInfo() { return call_method<"hasAntennaInfo", jboolean>(); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> parcel, jint flags) { return call_method<"writeToParcel", void>(parcel, flags); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	GnssCapabilities(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_LOCATION_GNSSCAPABILITIES
