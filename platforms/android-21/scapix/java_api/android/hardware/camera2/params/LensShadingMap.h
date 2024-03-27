// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA2_PARAMS_LENSSHADINGMAP_FWD
#define SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA2_PARAMS_LENSSHADINGMAP_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::hardware::camera2::params { class LensShadingMap; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::hardware::camera2::params::LensShadingMap>
{
	static constexpr fixed_string class_name = "android/hardware/camera2/params/LensShadingMap";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA2_PARAMS_LENSSHADINGMAP_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA2_PARAMS_LENSSHADINGMAP)
#define SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA2_PARAMS_LENSSHADINGMAP

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/hardware/camera2/params/RggbChannelVector.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::hardware::camera2::params::LensShadingMap : public jni::object_base<"android/hardware/camera2/params/LensShadingMap",
	java::lang::Object>
{
public:

	static jfloat MINIMUM_GAIN_FACTOR() { return get_static_field<"MINIMUM_GAIN_FACTOR", jfloat>(); }

	jint getRowCount() { return call_method<"getRowCount", jint>(); }
	jint getColumnCount() { return call_method<"getColumnCount", jint>(); }
	jint getGainFactorCount() { return call_method<"getGainFactorCount", jint>(); }
	jfloat getGainFactor(jint colorChannel, jint column, jint row) { return call_method<"getGainFactor", jfloat>(colorChannel, column, row); }
	jni::ref<android::hardware::camera2::params::RggbChannelVector> getGainFactorVector(jint column, jint row) { return call_method<"getGainFactorVector", jni::ref<android::hardware::camera2::params::RggbChannelVector>>(column, row); }
	void copyGainFactors(jni::ref<jni::array<jfloat>> destination, jint offset) { return call_method<"copyGainFactors", void>(destination, offset); }
	jboolean equals(jni::ref<java::lang::Object> obj) { return call_method<"equals", jboolean>(obj); }
	jint hashCode() { return call_method<"hashCode", jint>(); }

protected:

	LensShadingMap(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA2_PARAMS_LENSSHADINGMAP
