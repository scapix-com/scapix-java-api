// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA2_PARAMS_COLORSPACETRANSFORM_FWD
#define SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA2_PARAMS_COLORSPACETRANSFORM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::hardware::camera2::params { class ColorSpaceTransform; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::hardware::camera2::params::ColorSpaceTransform>
{
	static constexpr fixed_string class_name = "android/hardware/camera2/params/ColorSpaceTransform";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA2_PARAMS_COLORSPACETRANSFORM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA2_PARAMS_COLORSPACETRANSFORM)
#define SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA2_PARAMS_COLORSPACETRANSFORM

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/util/Rational.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::hardware::camera2::params::ColorSpaceTransform : public jni::object_base<"android/hardware/camera2/params/ColorSpaceTransform",
	java::lang::Object>
{
public:

	static jni::ref<android::hardware::camera2::params::ColorSpaceTransform> new_object(jni::ref<jni::array<android::util::Rational>> elements) { return base_::new_object(elements); }
	static jni::ref<android::hardware::camera2::params::ColorSpaceTransform> new_object(jni::ref<jni::array<jint>> elements) { return base_::new_object(elements); }
	jni::ref<android::util::Rational> getElement(jint column, jint row) { return call_method<"getElement", jni::ref<android::util::Rational>>(column, row); }
	void copyElements(jni::ref<jni::array<android::util::Rational>> destination, jint offset) { return call_method<"copyElements", void>(destination, offset); }
	void copyElements(jni::ref<jni::array<jint>> destination, jint offset) { return call_method<"copyElements", void>(destination, offset); }
	jboolean equals(jni::ref<java::lang::Object> obj) { return call_method<"equals", jboolean>(obj); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	ColorSpaceTransform(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA2_PARAMS_COLORSPACETRANSFORM
