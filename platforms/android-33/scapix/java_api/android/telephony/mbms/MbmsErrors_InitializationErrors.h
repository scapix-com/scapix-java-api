// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_TELEPHONY_MBMS_MBMSERRORS_INITIALIZATIONERRORS_FWD
#define SCAPIX_JAVA_API_ANDROID_TELEPHONY_MBMS_MBMSERRORS_INITIALIZATIONERRORS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::telephony::mbms { class MbmsErrors_InitializationErrors; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::telephony::mbms::MbmsErrors_InitializationErrors>
{
	static constexpr fixed_string class_name = "android/telephony/mbms/MbmsErrors$InitializationErrors";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELEPHONY_MBMS_MBMSERRORS_INITIALIZATIONERRORS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_TELEPHONY_MBMS_MBMSERRORS_INITIALIZATIONERRORS)
#define SCAPIX_JAVA_API_ANDROID_TELEPHONY_MBMS_MBMSERRORS_INITIALIZATIONERRORS

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::telephony::mbms::MbmsErrors_InitializationErrors : public jni::object_base<"android/telephony/mbms/MbmsErrors$InitializationErrors",
	java::lang::Object>
{
public:

	static jint ERROR_APP_PERMISSIONS_NOT_GRANTED() { return get_static_field<"ERROR_APP_PERMISSIONS_NOT_GRANTED", jint>(); }
	static jint ERROR_DUPLICATE_INITIALIZE() { return get_static_field<"ERROR_DUPLICATE_INITIALIZE", jint>(); }
	static jint ERROR_UNABLE_TO_INITIALIZE() { return get_static_field<"ERROR_UNABLE_TO_INITIALIZE", jint>(); }


protected:

	MbmsErrors_InitializationErrors(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELEPHONY_MBMS_MBMSERRORS_INITIALIZATIONERRORS
