// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_TELEPHONY_MBMS_MBMSERRORS_GENERALERRORS_FWD
#define SCAPIX_JAVA_API_ANDROID_TELEPHONY_MBMS_MBMSERRORS_GENERALERRORS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::telephony::mbms { class MbmsErrors_GeneralErrors; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::telephony::mbms::MbmsErrors_GeneralErrors>
{
	static constexpr fixed_string class_name = "android/telephony/mbms/MbmsErrors$GeneralErrors";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELEPHONY_MBMS_MBMSERRORS_GENERALERRORS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_TELEPHONY_MBMS_MBMSERRORS_GENERALERRORS)
#define SCAPIX_JAVA_API_ANDROID_TELEPHONY_MBMS_MBMSERRORS_GENERALERRORS

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::telephony::mbms::MbmsErrors_GeneralErrors : public jni::object_base<"android/telephony/mbms/MbmsErrors$GeneralErrors",
	java::lang::Object>
{
public:

	static jint ERROR_CARRIER_CHANGE_NOT_ALLOWED() { return get_static_field<"ERROR_CARRIER_CHANGE_NOT_ALLOWED", jint>(); }
	static jint ERROR_IN_E911() { return get_static_field<"ERROR_IN_E911", jint>(); }
	static jint ERROR_MIDDLEWARE_NOT_YET_READY() { return get_static_field<"ERROR_MIDDLEWARE_NOT_YET_READY", jint>(); }
	static jint ERROR_MIDDLEWARE_TEMPORARILY_UNAVAILABLE() { return get_static_field<"ERROR_MIDDLEWARE_TEMPORARILY_UNAVAILABLE", jint>(); }
	static jint ERROR_NOT_CONNECTED_TO_HOME_CARRIER_LTE() { return get_static_field<"ERROR_NOT_CONNECTED_TO_HOME_CARRIER_LTE", jint>(); }
	static jint ERROR_OUT_OF_MEMORY() { return get_static_field<"ERROR_OUT_OF_MEMORY", jint>(); }
	static jint ERROR_UNABLE_TO_READ_SIM() { return get_static_field<"ERROR_UNABLE_TO_READ_SIM", jint>(); }


protected:

	MbmsErrors_GeneralErrors(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELEPHONY_MBMS_MBMSERRORS_GENERALERRORS
