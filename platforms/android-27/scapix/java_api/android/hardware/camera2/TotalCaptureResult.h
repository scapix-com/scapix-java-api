// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/hardware/camera2/CaptureResult.h>

#ifndef SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA2_TOTALCAPTURERESULT_FWD
#define SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA2_TOTALCAPTURERESULT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::hardware::camera2 { class TotalCaptureResult; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::hardware::camera2::TotalCaptureResult>
{
	static constexpr fixed_string class_name = "android/hardware/camera2/TotalCaptureResult";
	using base_classes = std::tuple<scapix::java_api::android::hardware::camera2::CaptureResult>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA2_TOTALCAPTURERESULT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA2_TOTALCAPTURERESULT)
#define SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA2_TOTALCAPTURERESULT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::hardware::camera2::TotalCaptureResult : public jni::object_base<"android/hardware/camera2/TotalCaptureResult",
	android::hardware::camera2::CaptureResult>
{
public:

	jni::ref<java::util::List> getPartialResults() { return call_method<"getPartialResults", jni::ref<java::util::List>>(); }

protected:

	TotalCaptureResult(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HARDWARE_CAMERA2_TOTALCAPTURERESULT
