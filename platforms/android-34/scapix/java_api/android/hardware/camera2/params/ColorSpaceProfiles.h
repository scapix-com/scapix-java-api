// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA2_PARAMS_COLORSPACEPROFILES_FWD
#define SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA2_PARAMS_COLORSPACEPROFILES_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::hardware::camera2::params { class ColorSpaceProfiles; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::hardware::camera2::params::ColorSpaceProfiles>
{
	static constexpr fixed_string class_name = "android/hardware/camera2/params/ColorSpaceProfiles";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA2_PARAMS_COLORSPACEPROFILES_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA2_PARAMS_COLORSPACEPROFILES)
#define SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA2_PARAMS_COLORSPACEPROFILES

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/graphics/ColorSpace_Named.h>
#include <scapix/java_api/java/util/Set.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::hardware::camera2::params::ColorSpaceProfiles : public jni::object_base<"android/hardware/camera2/params/ColorSpaceProfiles",
	java::lang::Object>
{
public:

	static jint UNSPECIFIED() { return get_static_field<"UNSPECIFIED", jint>(); }

	static jni::ref<android::hardware::camera2::params::ColorSpaceProfiles> new_object(jni::ref<jni::array<jlong>> elements) { return base_::new_object(elements); }
	jni::ref<java::util::Set> getSupportedColorSpaces(jint imageFormat) { return call_method<"getSupportedColorSpaces", jni::ref<java::util::Set>>(imageFormat); }
	jni::ref<java::util::Set> getSupportedImageFormatsForColorSpace(jni::ref<android::graphics::ColorSpace_Named> colorSpace) { return call_method<"getSupportedImageFormatsForColorSpace", jni::ref<java::util::Set>>(colorSpace); }
	jni::ref<java::util::Set> getSupportedDynamicRangeProfiles(jni::ref<android::graphics::ColorSpace_Named> colorSpace, jint imageFormat) { return call_method<"getSupportedDynamicRangeProfiles", jni::ref<java::util::Set>>(colorSpace, imageFormat); }
	jni::ref<java::util::Set> getSupportedColorSpacesForDynamicRange(jint imageFormat, jlong dynamicRangeProfile) { return call_method<"getSupportedColorSpacesForDynamicRange", jni::ref<java::util::Set>>(imageFormat, dynamicRangeProfile); }

protected:

	ColorSpaceProfiles(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA2_PARAMS_COLORSPACEPROFILES
