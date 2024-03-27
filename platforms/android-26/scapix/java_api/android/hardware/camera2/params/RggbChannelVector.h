// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA2_PARAMS_RGGBCHANNELVECTOR_FWD
#define SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA2_PARAMS_RGGBCHANNELVECTOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::hardware::camera2::params { class RggbChannelVector; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::hardware::camera2::params::RggbChannelVector>
{
	static constexpr fixed_string class_name = "android/hardware/camera2/params/RggbChannelVector";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA2_PARAMS_RGGBCHANNELVECTOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA2_PARAMS_RGGBCHANNELVECTOR)
#define SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA2_PARAMS_RGGBCHANNELVECTOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::hardware::camera2::params::RggbChannelVector : public jni::object_base<"android/hardware/camera2/params/RggbChannelVector",
	java::lang::Object>
{
public:

	static jint BLUE() { return get_static_field<"BLUE", jint>(); }
	static jint COUNT() { return get_static_field<"COUNT", jint>(); }
	static jint GREEN_EVEN() { return get_static_field<"GREEN_EVEN", jint>(); }
	static jint GREEN_ODD() { return get_static_field<"GREEN_ODD", jint>(); }
	static jint RED() { return get_static_field<"RED", jint>(); }

	static jni::ref<android::hardware::camera2::params::RggbChannelVector> new_object(jfloat red, jfloat greenEven, jfloat greenOdd, jfloat blue) { return base_::new_object(red, greenEven, greenOdd, blue); }
	jfloat getRed() { return call_method<"getRed", jfloat>(); }
	jfloat getGreenEven() { return call_method<"getGreenEven", jfloat>(); }
	jfloat getGreenOdd() { return call_method<"getGreenOdd", jfloat>(); }
	jfloat getBlue() { return call_method<"getBlue", jfloat>(); }
	jfloat getComponent(jint colorChannel) { return call_method<"getComponent", jfloat>(colorChannel); }
	void copyTo(jni::ref<jni::array<jfloat>> destination, jint offset) { return call_method<"copyTo", void>(destination, offset); }
	jboolean equals(jni::ref<java::lang::Object> obj) { return call_method<"equals", jboolean>(obj); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	RggbChannelVector(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA2_PARAMS_RGGBCHANNELVECTOR