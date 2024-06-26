// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA2_PARAMS_MANDATORYSTREAMCOMBINATION_FWD
#define SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA2_PARAMS_MANDATORYSTREAMCOMBINATION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::hardware::camera2::params { class MandatoryStreamCombination; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::hardware::camera2::params::MandatoryStreamCombination>
{
	static constexpr fixed_string class_name = "android/hardware/camera2/params/MandatoryStreamCombination";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA2_PARAMS_MANDATORYSTREAMCOMBINATION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA2_PARAMS_MANDATORYSTREAMCOMBINATION)
#define SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA2_PARAMS_MANDATORYSTREAMCOMBINATION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/android/hardware/camera2/params/MandatoryStreamCombination_MandatoryStreamInformation.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::hardware::camera2::params::MandatoryStreamCombination : public jni::object_base<"android/hardware/camera2/params/MandatoryStreamCombination",
	java::lang::Object>
{
public:

	using MandatoryStreamInformation = MandatoryStreamCombination_MandatoryStreamInformation;

	jni::ref<java::lang::CharSequence> getDescription() { return call_method<"getDescription", jni::ref<java::lang::CharSequence>>(); }
	jboolean isReprocessable() { return call_method<"isReprocessable", jboolean>(); }
	jni::ref<java::util::List> getStreamsInformation() { return call_method<"getStreamsInformation", jni::ref<java::util::List>>(); }
	jboolean equals(jni::ref<java::lang::Object> obj) { return call_method<"equals", jboolean>(obj); }
	jint hashCode() { return call_method<"hashCode", jint>(); }

protected:

	MandatoryStreamCombination(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA2_PARAMS_MANDATORYSTREAMCOMBINATION
