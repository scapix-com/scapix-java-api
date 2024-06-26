// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_HARDWARE_GEOMAGNETICFIELD_FWD
#define SCAPIX_JAVA_API_ANDROID_HARDWARE_GEOMAGNETICFIELD_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::hardware { class GeomagneticField; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::hardware::GeomagneticField>
{
	static constexpr fixed_string class_name = "android/hardware/GeomagneticField";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HARDWARE_GEOMAGNETICFIELD_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_HARDWARE_GEOMAGNETICFIELD)
#define SCAPIX_JAVA_API_ANDROID_HARDWARE_GEOMAGNETICFIELD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::hardware::GeomagneticField : public jni::object_base<"android/hardware/GeomagneticField",
	java::lang::Object>
{
public:

	static jni::ref<android::hardware::GeomagneticField> new_object(jfloat gdLatitudeDeg, jfloat gdLongitudeDeg, jfloat altitudeMeters, jlong timeMillis) { return base_::new_object(gdLatitudeDeg, gdLongitudeDeg, altitudeMeters, timeMillis); }
	jfloat getX() { return call_method<"getX", jfloat>(); }
	jfloat getY() { return call_method<"getY", jfloat>(); }
	jfloat getZ() { return call_method<"getZ", jfloat>(); }
	jfloat getDeclination() { return call_method<"getDeclination", jfloat>(); }
	jfloat getInclination() { return call_method<"getInclination", jfloat>(); }
	jfloat getHorizontalStrength() { return call_method<"getHorizontalStrength", jfloat>(); }
	jfloat getFieldStrength() { return call_method<"getFieldStrength", jfloat>(); }

protected:

	GeomagneticField(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HARDWARE_GEOMAGNETICFIELD
