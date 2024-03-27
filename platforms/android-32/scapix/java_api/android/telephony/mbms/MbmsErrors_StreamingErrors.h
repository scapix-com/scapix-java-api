// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_TELEPHONY_MBMS_MBMSERRORS_STREAMINGERRORS_FWD
#define SCAPIX_JAVA_API_ANDROID_TELEPHONY_MBMS_MBMSERRORS_STREAMINGERRORS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::telephony::mbms { class MbmsErrors_StreamingErrors; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::telephony::mbms::MbmsErrors_StreamingErrors>
{
	static constexpr fixed_string class_name = "android/telephony/mbms/MbmsErrors$StreamingErrors";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELEPHONY_MBMS_MBMSERRORS_STREAMINGERRORS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_TELEPHONY_MBMS_MBMSERRORS_STREAMINGERRORS)
#define SCAPIX_JAVA_API_ANDROID_TELEPHONY_MBMS_MBMSERRORS_STREAMINGERRORS

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::telephony::mbms::MbmsErrors_StreamingErrors : public jni::object_base<"android/telephony/mbms/MbmsErrors$StreamingErrors",
	java::lang::Object>
{
public:

	static jint ERROR_CONCURRENT_SERVICE_LIMIT_REACHED() { return get_static_field<"ERROR_CONCURRENT_SERVICE_LIMIT_REACHED", jint>(); }
	static jint ERROR_DUPLICATE_START_STREAM() { return get_static_field<"ERROR_DUPLICATE_START_STREAM", jint>(); }
	static jint ERROR_UNABLE_TO_START_SERVICE() { return get_static_field<"ERROR_UNABLE_TO_START_SERVICE", jint>(); }


protected:

	MbmsErrors_StreamingErrors(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELEPHONY_MBMS_MBMSERRORS_STREAMINGERRORS